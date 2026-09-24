using Metaplay.Core.Model;

namespace Code.GameLogic.ExtraSpawns
{
	[MetaSerializable]
	[ForceExplicitEnumValues]
	public enum ExtraSpawnValueType
	{
		Item = 0,
		Currency = 1,
		CardStack = 2,
		Illustration = 3
	}
}
