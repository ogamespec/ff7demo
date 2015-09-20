StackInit (PVOID Stack, PGameData GameData)
{
	PUCHAR StackBase;

	ClearMem ( 0xAC30, Stack );

	StackBase = (Stack + 0x1000) & ~0xFFF;

	GameData->StackBase = StackBase;
}
