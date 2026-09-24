using Metaplay.Core.Model;

namespace Code.GameLogic.ExtraSpawns
{
	[MetaSerializable]
	[ForceExplicitEnumValues]
	public enum ExtraSpawnTriggerType
	{
		Merge = 1,
		PurchaseBubble = 2,
		ProduceItem = 3,
		CompleteTask = 4,
		CompleteDailyTaskV2 = 5
	}
}
