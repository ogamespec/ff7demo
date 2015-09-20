BOOL CreateMainWindow ( HINSTANCE Instance, PGameData GameData )
{
    BOOL Result = FALSE;

    //
    // Register window class
    //

    if ( GameData->UseWndClass )
    {
        memcpy ( &WndClass, GameData->WndClass, sizeof(WNDCLASS) );

        WndClass.lpfnWndProc = MainWindowProc;
    }
    else
    {
        WndClass.style = 0xB;
        WndClass.lpfnWndProc = MainWindowProc;
        WndClass.cbClsExtra = 0;
        WndClass.cbWndExtra = 0;
        WndClass.hInstance = Instance;
        WndClass.hIcon = NULL;
        WndClass.hCursor = LoadCursor ( NULL, IDC_ARROW );
        WndClass.hbrBackground = GetStockObject (BLACK_BRUSH);
        WndClass.lpszMenuName = NULL;
        WndClass.lpszClassName = GameData->WndClassName;
    }

    //
    // Set style
    //

    if ( !RegisterClass ( &WndClass ) )
        return Result;

    if ( dword.[GameData + 0x964] )
        Style = 0x80000000;
    else
        Style = 0x80CA0000;

    if ( dword.[GameData + 0x9E8] )
        Style = dword.[GameData + 0x9EC];

    Width = GameData->CreateWidth;
    Height = GameData->CreateHeight;

    if ( dword.[GameData + 0x964] == 0 )
    {
        SetRect ( &Rect, 0, 0, Width, Height);

        AdjustWindowRect ( &Rect, Style, (Style & 0x80000) ? TRUE : FALSE );

        AdjustedWidth = Rect.right - Rect.left + 1;
        AdjustedHeight = Rect.bottom - Rect.top + 1;
    }

    //
    // Create window
    //

    Hwnd = CreateWindowEx ( 0x40000, 
                            GameData->WndClassName,
                            GameData->WndName,
                            Style,
                            CW_USEDEFAULT, CW_USEDEFAULT,
                            Width, Height,
                            NULL,
                            NULL,
                            Instance,
                            NULL );

    if ( !GameData->ShowCursor )
        ShowCursor (FALSE);

    GameData->MainWnd = Hwnd;

    if ( Hwnd == NULL )
        return Result;

    Result = TRUE;

    ShowWindow (Hwnd, 1);
    UpdateWindow (Hwnd);

    //
    // Check requested Bpp settings
    //

    Hdc = GetDC ( GameData->MainWnd );

    if ( Hdc )
    {
        GameData->HdcWidth = GetDeviceCaps ( Hdc, HORZRES );
        GameData->HdcHeight = GetDeviceCaps ( Hdc, VERTRES );
        GameData->HdcBpp = GetDeviceCaps ( Hdc, BITSPIXEL );

        if ( !GameData->SkipBppCheck && GameData->RequestedBpp > 0 )
        {
            if ( GameData->RequestedBpp != GameData->HdcBpp )
            {
                sprintf ( Text, "Requested bits per pixel (%d) doesn't match desktop bits per pixel (%d)", 
                          GameData->RequestedBpp, GameData->HdcBpp );

                Report ( GameData, Text, "ERROR", 0 );

                Result = FALSE;
            }
        }

        if ( GameData->RequestedBpp )
            GameData->RequestedBpp = GameData->HdcBpp;

        ReleaseDC ( GameData->MainWnd, Hdc);
    }

    //
    // Execute game callbacks
    //

    if ( Result != FALSE )
    {
        if ( GameData->AppInitHandler )
            Result = GameData->AppInitHandler (GameData);       // Init App

        if ( Result )
        {
            if ( GameData->MainEnter )
                GameData->MainEnter (GameData);       // Main Enter
        }
    }

    return Result;
}
