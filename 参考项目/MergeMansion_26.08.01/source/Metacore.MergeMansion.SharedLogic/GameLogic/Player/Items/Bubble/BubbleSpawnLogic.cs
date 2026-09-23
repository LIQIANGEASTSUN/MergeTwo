using GameLogic.Random;
using Metaplay.Core;
using Metaplay.Core.Math;

namespace GameLogic.Player.Items.Bubble
{
	public static class BubbleSpawnLogic
	{
		public const int MaxBubbleItemsOnBoard = 5;

		public const int BubbleRollMax = 100;

		public const int BubbleCountAdjustmentQuot = 8;

		public static readonly F32 firstEncounterBubbleChanceQuotient;

		public const int BoosterBubbleRollMax = 4000;

		public const int BoosterBubbleSuccessThreshold = 3995;

		public const int BoosterPickRollMax = 100;

		public const int BoosterRollThreshold = 25;

		public static bool ShouldSpawn(IPlayer player, ItemDefinition mergeItemDefinition, bool hasPlayerSeenItem, int bubbleItemsCount, int playerBehaviourBasedChance, MetaTime currentTime, int maxLevelItemsCount)
		{
			return false;
		}

		public static ItemDefinition ShouldSpawnBooster(MetaTime currentTime, IGenerationContext context)
		{
			return null;
		}
	}
}
