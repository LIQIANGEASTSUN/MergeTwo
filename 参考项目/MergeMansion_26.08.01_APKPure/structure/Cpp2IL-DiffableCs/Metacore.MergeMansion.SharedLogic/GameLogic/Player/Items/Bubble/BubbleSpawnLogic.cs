namespace GameLogic.Player.Items.Bubble;

public static class BubbleSpawnLogic
{
	private const int MaxBubbleItemsOnBoard = 5; //Field offset: 0x0
	private const int BubbleRollMax = 100; //Field offset: 0x0
	private const int BubbleCountAdjustmentQuot = 8; //Field offset: 0x0
	private static readonly F32 firstEncounterBubbleChanceQuotient; //Field offset: 0x0
	private const int BoosterBubbleRollMax = 4000; //Field offset: 0x0
	private const int BoosterBubbleSuccessThreshold = 3995; //Field offset: 0x0
	private const int BoosterPickRollMax = 100; //Field offset: 0x0
	private const int BoosterRollThreshold = 25; //Field offset: 0x0

	private static BubbleSpawnLogic() { }

	public static bool ShouldSpawn(IPlayer player, ItemDefinition mergeItemDefinition, bool hasPlayerSeenItem, int bubbleItemsCount, int playerBehaviourBasedChance, MetaTime currentTime, int maxLevelItemsCount) { }

	public static ItemDefinition ShouldSpawnBooster(MetaTime currentTime, IGenerationContext context) { }

}

