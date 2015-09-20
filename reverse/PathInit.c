PathInit ()
{
    CHAR SoundOpt[0x100];
    CHAR MidiOpt[0x100];

    strcpy ( SoundOpt, "Sound" );
    strcpy ( MidiOpt, "Midi" );

    //
    // Allocate path buffer
    //

    AppPath = MEM_ALLOC (0x100, 1);

    MoviePath = MEM_ALLOC (0x100, 1);

    DataDrivePath = MEM_ALLOC (0x100, 1);

    DataPath = MEM_ALLOC (0x100, 1);

    SoundPath = MEM_ALLOC (0x100, 1);

    MusicPath = MEM_ALLOC (0x100, 1);

    MidiPath = MEM_ALLOC (0x100, 1);

    SomeUnknownPath = MEM_ALLOC (0x100, 1);

    GamePath = MEM_ALLOC (0x100, 1);

    //
    // Get registry Settings
    //

    Key = RegOpenKeyExA ( 0x80000002, "Software\\Square Soft, Inc.\\Final Fantasy VII", 0, 0x20019, &Result );

    FormatMessage ( 0x1000, 0, GetLastError(), 0, Buffer, 0x100, 0 );

    if ( Key == NULL )
        return;

    //
    // DataDrive
    //

    cbData = 0x100;
    Key = RegQueryValueEx ( &Result, "DataDrive", 0, &Type, Data, &cbData );

    strcpy ( DataDrivePath, Data );

    //
    // Sound
    //

    cbData = 0x100;
    Key = RegQueryValueEx ( &Result, SoundOpt, 0, &Type, Data, &cbData );

    if ( !Key )
    {
        if ( !strcmp(Data, "ON") )
            SoundEnabled = 1;
        else
            SoundEnabled = 0;
    }
    else
        SoundEnabled = 1;

    //
    // Midi
    //

    cbData = 0x100;
    Key = RegQueryValueEx ( &Result, MidiOpt, 0, &Type, Data, &cbData );

    if ( !Key )
    {
        if ( !strcmp(Data, "ON") )
            MidiEnabled = 1;
        else
            MidiEnabled = 0;
    }
    else
        MidiEnabled = 1;

    //
    // AppPath
    //

    cbData = 0x100;
    Key = RegQueryValueEx (&Result, "AppPath", 0, &Type, Data, &cbData );

    FormatMessage ( 0x1000, 0, GetLastError(), 0, Buffer, 0x100, 0 );

    if ( !Key )
        strcpy ( AppPath, Data );
    else
        strcpy ( AppPath, "/ff7/" );

    //
    // DataPath
    //

    cbData = 0x100;
    Key = RegQueryValueEx (&Result, "DataPath", 0, &Type, Data, &cbData );

    FormatMessage ( 0x1000, 0, GetLastError(), 0, Buffer, 0x100, 0 );

    if ( !Key )
        strcpy ( DataPath, Data );
    else
        strcpy ( DataPath, "/ff7/data/" );

    //
    // MoviePath
    //

    cbData = 0x100;
    Key = RegQueryValueEx (&Result, "MoviePath", 0, &Type, Data, &cbData );

    FormatMessage ( 0x1000, 0, GetLastError(), 0, Buffer, 0x100, 0 );

    if ( !Key )
        strcpy ( MoviePath, Data );
    else
        strcpy ( MoviePath, "/ff7/data/movies/" );

    //
    // FullInstall?
    //

    cbData = 4;
    Key = RegQueryValueEx (&Result, "FullInstall", 0, &Type, Data, &cbData );

    if ( !Key )
    {
        if ( *Data == 0 )
            strcpy ( GamePath, DataDrivePath );
        else
            strcpy ( GamePath, DataPath );
    }
    else
        strcpy ( GamePath, DataDrivePath );

    strcpy ( SoundPath, DataPath );
    strcpy ( strlen(SoundPath) - 1, "sound" );

    strcpy ( SoundPath, DataPath );
    strcat ( SoundPath, "sound" );

    strcpy ( MusicPath, DataPath );
    strcat ( MusicPath, "music" );

    strcpy ( MidiPath, DataPath );
    strcat ( MidiPath, "midi" );

    Key = RegCloseKey ( &Result );
}
