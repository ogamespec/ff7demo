PGameData GameDataConstructor ()
{
	GameInitData GameInitData;

	GameData_Init1 (&GameInitData);

	return GameData_Init2 (&GameInitData);
}
