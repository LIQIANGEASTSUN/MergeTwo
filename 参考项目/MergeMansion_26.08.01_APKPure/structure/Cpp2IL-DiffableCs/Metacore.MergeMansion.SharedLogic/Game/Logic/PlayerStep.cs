namespace Game.Logic;

[ForceExplicitEnumValues]
[MetaSerializable]
public enum PlayerStep : int
{
	None = 0,
	ShowHardTaskTooltip = 1,
	TaskGroupV2FTUECompleted = 2,
	WildItemFTUE = 3,
}

