namespace Code.GameLogic.GameEvents;

[ForceExplicitEnumValues]
[MetaSerializable]
public enum BoardActionType : int
{
	None = 0,
	Autospawn = 1,
	Shop = 2,
	EnergyMode = 3,
	Sell = 4,
}

