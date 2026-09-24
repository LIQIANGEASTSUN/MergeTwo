using System;
using System.Collections.Generic;
using MergeEngine.Configuration.Definitions;

namespace MergeEngine.Configuration.Capabilities
{
	[Serializable]
	public class SpawningLane
	{
		public List<WeightedItemSpawnable> Items;

		public List<FixedItemSpawnable> FixedItems;

		[NonSerialized]
		[NonSerialized]
		public List<IMergeItem> _spawningList;

		[NonSerialized]
		[NonSerialized]
		public List<KeyValuePair<IMergeItem, int>> _itemPoolWithSpawnCounts;

		public List<IMergeItem> GetSpawningList()
		{
			return null;
		}

		public List<KeyValuePair<IMergeItem, int>> GetItemPoolWithSpawnCounts()
		{
			return null;
		}
	}
}
