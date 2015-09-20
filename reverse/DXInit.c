BOOL DXInit (PGAMEDATA GameData)
{
    LogOutput ( "INITIALIZE DD/D3D START \n" );

    Result = 0;

    if ( GameData == NULL )
        return Result;

    var_874 = dword.[GameData + 0xA60];

    switch ( var_874 )
    {
        case 0:
            dword.[GameData + 0x934] = sub_496450 (GameData);

            dword.[GameData + 0xA74] = 3;
            break;

        case 1:
            dword.[GameData + 0x934] = sub_4961C0 (GameData);

            dword.[GameData + 0xA74] = 1;
            dword.[GameData + 0x97C] = 0;
            break;

        case 2:
            var_D4 = dword.[GameData + 0xA88];
            if ( var_D4 )
            {
                dword.[GameData + 0x934] = var_D4 (GameData);
                Result = 1;
            }
            break;

        default:
            return 0;
    }

    if ( dword.[GameData + 0x934] == NULL )
        return 0;

    if ( dword.[GameData + 0x968] == 0 )
        dword.[GameData + 0x964] = 1;

    //
    // Step 1: Enumerate
    //

    if ( dword.[GameData + 0xA74] & 1 )
    {

        //
        // Tier 1
        //

        eax = DirectDrawEnumerate ( DxEnumerateCallback, (LPVOID) DxGetThis(GameData) );

        if ( CheckDXError (eax) != 0 )
        {
            if ( dword.[GameData + 0x968] == 0)
            {
                edx = dword.[GameData + 0x68];
                if ( edx || dword.[edx + 8] <= 0 )
                    dword.[GameData + 0x968] = 1;
                else
                {
                    edx = dword.[edx + 0xC];
                    lpGUID = dword.[edx + 4];
                }
            }
        }

        //
        // Tier 2
        //

        if ( dword.[GameData + 0x968] == 0 && dword.[GameData + 0x964] )
        {
            eax = DirectDrawCreate ( 0, GameData + 0x248, 0 );

            if ( CheckDXError (eax) != 0 )
            {
                DDraw = dword.[GameData + 0x248];

                sub_46FD8C ( GameData + 0x250 );

                eax = DDraw->GetDisplayMode ( GameData + 0x250 );

                if ( CheckDXError (eax) != 0 )
                    dword.[GameData + 0x24C] = 1;

                eax = DDraw->SetCooperativeLevel ( GameData->MainWnd, DDSCL_NORMAL );
                if ( CheckDXError (eax) != 0 )
                {
                    eax = DDraw->SetDisplayMode ( GameData->CreateWidth, GameData->CreateHeight, GameData->RequestedBpp );
                    CheckDXError (eax);
                }
            }
        }

        //
        // Tier 3
        //


    }

    //
    // Step 2: 
    //

}
