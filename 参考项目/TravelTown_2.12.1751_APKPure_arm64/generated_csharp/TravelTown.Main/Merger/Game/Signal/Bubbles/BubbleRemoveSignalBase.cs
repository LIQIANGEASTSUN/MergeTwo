using MergeEngine.Configuration;
using MergeEngine.Model;
using MergeEngine.Signal.Items;

namespace Merger.Game.Signal.Bubbles
{
	public class BubbleRemoveSignalBase : MergeItemBubbleSignalBase
	{
		public bool HasBurstPrice { get; set; }

		public int BurstPrice { get; set; }

		public PlayerResourceEnum BurstResourceType { get; set; }

		public double BubbleExpirationTimeInSeconds { get; set; }

		public int BubblesOnBoard { get; set; }

		public bool HasOptionToBurstBubbleWithAd { get; set; }

		public BubbledItemExpiredSignal.Collectable SpawnedCollectable { get; set; }

		public BubbleRemoveSignalBase(IMergeItem item)
			: base(null)
		{
		}

		public BubbleRemoveSignalBase(IMergeItem item, int level)
			: base(null)
		{
		}
	}
}
