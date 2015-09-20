PGameData GameData_Init2 (PGameInitData GameInitData)
{
    GameData = AllocGameData (GameInitData);

    if ( GameData )
    {
        GameData->CreateWidth = 640;
        GameData->CreateHeight = 480;
        dword.[GameData + 0x848] = 0;
        dword.[GameData + 0x84C] = 0;
        dword.[GameData + 0x850] = 640;
        dword.[GameData + 0x854] = 480;

        dword.[GameData + 0x858] = dword.[GameData + 0x850] + dword.[GameData + 0x848] - 1;
        dword.[GameData + 0x85C] = dword.[GameData + 0x854] + dword.[GameData + 0x84C] - 1;

        GameData->RequestedBpp = 0x10;
        GameData->SkipBppCheck = 1;
        dword.[GameData + 0x968] = 1;
        dword.[GameData + 0x96C] = 0;
        dword.[GameData + 0x960] = 2;
        dword.[GameData + 0xA60] = 0;
        dword.[GameData + 0x97C] = 1;
        dword.[GameData + 0x988] = 1;
        dword.[GameData + 0x98C] = 1;
        dword.[GameData + 0x994] = 1;
        dword.[GameData + 0x998] = 0x20;
        GameData->WndName = "DEFAULT";
        GameData->WndClassName = "DEFAULT CLASS";
        GameData->AppShutdownHandler = GameClose;
        dword.[GameData + 0xA48] = 1;
    }

    return GameData; 
}
