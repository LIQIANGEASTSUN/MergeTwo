namespace Code.GameLogic.ExtraSpawns;

[ForceExplicitEnumValues]
[MetaSerializable]
public enum ExtraSpawnTriggerType : int
{
	Merge = 1,
	PurchaseBubble = 2,
	ProduceItem = 3,
	CompleteTask = 4,
	CompleteDailyTaskV2 = 5,
}

