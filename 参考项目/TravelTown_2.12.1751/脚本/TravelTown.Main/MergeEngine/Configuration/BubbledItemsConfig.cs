using System;
using System.Collections.Generic;
using MergeEngine.Configuration.Definitions;

namespace MergeEngine.Configuration
{
	[Serializable]
	public class BubbledItemsConfig
	{
		public float BubbleExpirationTime;

		public int MinLevelToDropBubbles;

		public int NumFreeBursts;

		public List<WeightedItemSpawnable> ExpiredBubbleSpawnedItems;

		public List<WeightedItemSpawnable> RemovedBubbleSpawnedItems;
	}
}
