VOID GameInit ( int argc, char **argv )
{
    PGameData GameData;

    DontRunSetup = TRUE;

    MemInit (MemBase);

    PathInit ();

    //
    // Override settings for Demo
    //

    strcpy ( DataPath, "data/" );
    strcpy ( AppPath_2, AppPath );

    SoundEnabled = 1;
    MidiEnabled = 1;

    strcpy ( SoundPath, DataPath );
    strcat ( SoundPath, "sound" );

    strcpy ( MusicPath, DataPath );
    strcat ( MusicPath, "music" );

    strcpy ( MidiPath, DataPath );
    strcat ( MidiPath, "midi" );

    //
    // Check available memory
    //

    GlobalMemoryStatus ( &Buffer );
    if ( Buffer.dwAvailPageFile < 50000000 )    // 50 Megs
    {
        MessageBox ( 0, "There is insufficient swap space to play FF7.", "No Swap Space", MB_ICONERROR );
        FreeAll ();

        GlobalState = 0x13;
    }

    //
    // Check if we need to run Setup.
    //

    Key = RegOpenKeyEx ( 0x80000002, "Software\\Square Soft, Inc.\\Final Fantasy VII\\1.00\\Graphics", 0, 1, &Result );

    if ( !Key )
    {
        cbData = 0x10;
        if ( !RegQueryValueEx ( Result, "DD_GUID", 0, &Type, Data, &cbData ) )
        {
            if ( cbData == 0 )
                DontRunSetup = FALSE;
        }
        RegCloseKey (Result);
    }
    else
        DontRunSetup = FALSE;

    Key = RegOpenKeyEx ( 0x80000002, "Software\\Square Soft, Inc.\\Final Fantasy VII\\1.00\\Midi", 0, 1, &Result );

    if ( !Key )
    {
        cbData = 4;
        if ( !RegQueryValueEx ( Result, "MIDI_DeviceID", 0, &Type, Data, &cbData ) )
        {
            if ( *Data == -1 )
                DontRunSetup = FALSE;
        }
        RegCloseKey (Result);
    }
    else
        DontRunSetup = FALSE;

    Key = RegOpenKeyEx ( 0x80000002, "Software\\Square Soft, Inc.\\Final Fantasy VII\\1.00\\Sound", 0, 1, &Result );

    if ( !Key )
    {
        cbData = 0x10;
        if ( !RegQueryValueEx ( Result, "Sound_GUID", 0, &Type, Data, &cbData ) )
        {
            if ( cbData == 0 )
                DontRunSetup = FALSE;
        }
        RegCloseKey (Result);
    }
    else
        DontRunSetup = FALSE;

    //
    // Demo always require to run Setup
    //

    DontRunSetup = 0;

    //
    // Run FF7Config
    //

    if ( !DontRunSetup )
    {
        memset ( &StartupInfo, 0, sizeof(StartupInfo) );

        memset ( &ProcessInformation, 0, sizeof(ProcessInformation) );

        StartupInfo.cb = sizeof(StartupInfo);

        strcpy ( CommandLine, AppPath );
        strcat ( CommandLine, "ff7config.exe" );

        CreateProcess ( 0, CommandLine, 0, 0, 1, 0x20, 0, 0, &StartupInfo, &ProcessInformation );

        WaitForSingleObject ( ProcessInformation.Handle );

        GetExitCodeProcess ( ProcessInformation.hProcess, &ExitCode );

        if ( ExitCode )
            GlobalState = 0x13;
    }

    GameData = GameDataConstructor ();

    if ( GameData )
    {
        dword.[GameData + 0x99C] = 0x42B40000;
        dword.[GameData + 0x9A0] = 0x42FA0000;
        dword.[GameData + 0x9A4] = 0x47435000;

        GetConfig ( GameData );

        GameData->AppInitHandler = AppInit;
        GameData->FrameHandler = GameFrame;
        GameData->AppShutdownHandler = AppShutdown;
        GameData->MainEnter = MainEnter;
        GameData->MainExit = MainExit;
        GameData->AppActivate = AppActivate;
        GameData->DeviceChangedHandler = DeviceChanged;
        GameData->QuitHandler = QuitHandler;
        GameData->AllowQuitHandler = AllowQuit;
        GameData->MouseHandler = MouseHandler;
        GameData->KbdHandler = KbdHandler;

        SetGlobalGameData (GameData);
    }
}
