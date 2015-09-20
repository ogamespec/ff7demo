GameData_Init1 (PGameInitData GameInitData)
{
	ClearMem ( GameInitData, 8 );

    GameInitData->GameRunning = 1;
    GameInitData->LogFileName = "APP.LOG"; 
}
