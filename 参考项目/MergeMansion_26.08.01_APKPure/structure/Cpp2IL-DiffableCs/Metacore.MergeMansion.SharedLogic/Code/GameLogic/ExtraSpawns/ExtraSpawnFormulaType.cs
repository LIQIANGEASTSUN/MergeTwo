namespace Code.GameLogic.ExtraSpawns;

[ForceExplicitEnumValues]
[MetaSerializable]
public enum ExtraSpawnFormulaType : int
{
	None = 0,
	ExponentialLevelMultiplier = 1,
	BubbleCostMultiplier = 2,
	HotspotValue = 3,
	ItemValue = 4,
	ItemLevel = 5,
}

