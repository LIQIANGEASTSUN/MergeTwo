using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Signal.Items;

namespace Merger.Game.Signal
{
	public class BubbleBurstSignal : MergeItemBubbleSignalBase
	{
		public bool IsBubbleOnMainBoard { get; }

		public bool WasBurstFree { get; }

		public double SecondsUntilExpiry { get; }

		public float BubbleSpawnProbability { get; }

		public string AdCampaignId { get; }

		public ResourceMultiple BurstPrice { get; }

		public bool BurstWithAd { get; }

		public bool WasBubbleBlaster { get; }

		public int BubbleTier { get; }

		public int BlasterTier { get; }

		public BubbleBurstSignal(IMergeItem item, int level, bool isBubbleOnMainBoard, bool wasBurstFree, double secondsUntilExpiry, float bubbleSpawnProbability, string adCampaignId, ResourceMultiple burstPrice, bool burstWithAd, bool wasBubbleBlaster, int bubbleTier, int blasterTier)
			: base(null)
		{
		}
	}
}
