using Metaplay.Core.Model;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	[ForceExplicitEnumValues]
	public enum BoardActionType
	{
		None = 0,
		Autospawn = 1,
		Shop = 2,
		EnergyMode = 3,
		Sell = 4
	}
}
