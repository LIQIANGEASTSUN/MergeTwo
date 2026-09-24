using MergeEngine.Configuration;
using MergeEngine.ECS.Components.Items;
using MergeEngine.Model;
using MergeEngine.Signal.Items;

namespace Merger.Game.Signal
{
	public class BubbledItemExpiredSignal : MergeItemBubbleSignalBase
	{
		public class Collectable
		{
			public PlayerResourceEnum Resource;

			public int Amount;
		}

		public int BubblesOnBoard { get; }

		public int BurstPrice { get; }

		public Collectable SpawnedCollectable { get; }

		public int BubbleTier { get; }

		public BubbledItemExpiredSignal(IMergeItem mergeItem, int mergeItemLevel, int bubblesOnBoard, int burstPrice, CollectableComponent spawnedCollectableComponent, int bubbleTier)
			: base(null)
		{
		}
	}
}
