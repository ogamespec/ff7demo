int WINAPI WinMain (HINSTANCE Instance, HINSTANCE PrevInstance, LPSTR CmdLine, int ShowCmd)
{
    PGameData GameData;
    time_t CurrentTime;
    UCHAR Stack[0xAC30];

    Argc = 0;
    Argv = NULL;

    GameInit ( Argc, Argv);

    RetValue = 0;

    //
    // GameData is already created in GameInit at this point.
    //

    GameData = GetGlobalGameData ();
    if ( GameData == NULL )
        GameData = GameDataConstructor ();      // Skipped
    SetGlobalGameData (GameData);
    
    //
    // Initialize game stack
    //

    StackInit (Stack, GameData);

    //
    // Random seed
    //

    if ( GameData->SeedValue == 0 )
    {
        time (&CurrentTime);
        srand (CurrentTime);
    }
    else
    {
        srand ( GameData->SeedValue );
    }

    //
    // Save instance
    //

    if ( GameData )
        GameData->Instance = Instance;

    if ( GameData == NULL )
        goto Exit;

    //
    // Create main window
    //

    Result = CreateMainWindow ( Instance, GameData );
    if ( !Result )
        goto Exit;

    //
    // Main loop
    //

    SystemParametersInfo ( SPI_SCREENSAVERRUNNING, 1, &Param, 0 );

    while ( 1 )
    {
        //
        // Exit Game?
        //

        if ( GameData->GameRunning == 0 )
        {
            if ( GameData->MainExit )
                GameData->MainExit (GameData);

            if ( GameData->AppShutdownHandler )
                GameData->AppShutdownHandler (GameData);

            SystemParametersInfo ( SPI_SCREENSAVERRUNNING, 0, &Param, 0 );

            DestroyWindow ( GameData->MainWnd );

            RetValue = GameData->ExitCode;

            break;
        }

        //
        // Game Frame
        //

        if ( !PeekMessage ( &Msg, 0, 0, 0, 1 ) )
        {
            if ( GameData->QuitSignal )
            {
                if ( !GameData->SizeMinimized )
                {
                    if ( DxFrame (GameData) )
                    {
                        if ( GameData->QuitHandler )
                            GameData->QuitHandler (GameData);

                        GameData->QuitSignal = 0;
                    }
                }

                if ( dword.[GameData + 0x950] || GameData->SizeMinimized )
                    WaitMessage ();
            }
            else
            {
                GetHighResTimer (&TickCount);

                float.[GameData + 0x28] += 1.0f;

                sub_45F048 (GameData);

                if ( !GameData->SizeMinimized )
                {
                    if ( DxFrame (GameData) )
                    {
                        if ( GameData->FrameHandler)
                        {
                            GameData->FrameHandler (GameData);

                            float.[GameData + 0x40] += 1.0f;
                        }
                    }
                }

                if ( !GameData->SizeMinimized )
                    sub_45897C (GameData);

                if ( dword.[GameData + 0x950] || GameData->SizeMinimized )
                    WaitMessage ();

                GetHighResTimer (&TickCount2);

                //
                // Save profiler time
                //

                if ( GameData->ProfilerData )
                {
                    SaveTickCount ( &TickCount2, &TickCount, GameData->ProfilerData + 0x98 );
                }
            }
        }
        else
        {
            TranslateMessage (&Msg);
            DispatchMessage (&Msg);
        }
    }

Exit:
    Deinit ();
    return RetValue;
}
