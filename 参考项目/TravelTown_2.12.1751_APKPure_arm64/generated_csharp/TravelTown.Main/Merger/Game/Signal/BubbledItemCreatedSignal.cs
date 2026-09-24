using MergeEngine.Configuration;
using MergeEngine.Model;
using MergeEngine.Signal.Items;

namespace Merger.Game.Signal
{
	public class BubbledItemCreatedSignal : MergeItemBubbleSignalBase
	{
		public bool HasBurstPrice { get; }

		public int BurstPrice { get; }

		public PlayerResourceEnum BurstResourceType { get; }

		public float BubbleSpawnProbability { get; }

		public int MinGameLevelToDropBubbles { get; }

		public double BubbleExpirationTimeInSeconds { get; }

		public int BubblesOnBoard { get; }

		public bool HasOptionToBurstBubbleWithAd { get; }

		public int BlasterableTier { get; }

		public BubbledItemCreatedSignal(IMergeItem mergeItem, int mergeItemLevel, int burstPrice, PlayerResourceEnum burstResourceType, float bubbleSpawnProbability, int minGameLevelToDropBubbles, double bubbleExpirationTimeInSeconds, int bubblesOnBoard, bool hasOptionToBurstBubbleWithAd, int blasterableTier)
			: base(null)
		{
		}

		public BubbledItemCreatedSignal(IMergeItem mergeItem, int mergeItemLevel, float bubbleSpawnProbability, int minGameLevelToDropBubbles, double bubbleExpirationTimeInSeconds, int bubblesOnBoard, bool hasOptionToBurstBubbleWithAd, int blasterableTier)
			: base(null)
		{
		}
	}
}
