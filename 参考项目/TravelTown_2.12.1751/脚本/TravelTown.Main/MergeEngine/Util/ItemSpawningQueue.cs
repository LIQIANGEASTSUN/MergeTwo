using System;
using System.Collections.Generic;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Capabilities;
using MergeEngine.Configuration.Definitions;
using Merger.Services.Backend.Sync.Data.Payloads.Board;

namespace MergeEngine.Util
{
	public class ItemSpawningQueue
	{
		[NonSerialized]
		public List<ItemSpawnable> _itemsList;

		[NonSerialized]
		public Dictionary<string, List<ItemSpawnable>> _multiItemsList;

		[NonSerialized]
		public Random _random;

		[NonSerialized]
		public readonly ItemsSpawningCapability _capability;

		[NonSerialized]
		public int _seed;

		[NonSerialized]
		public ItemSpawnable[] _nextItems;

		public int CurrentItemIndex { get; set; }

		public bool HasMoreItems => false;

		public int NumItemsInCycle => 0;

		public ItemSpawningQueue(ItemsSpawningCapability capability, int seed, int startIndex = 0)
		{
		}

		public void Refill(int seed = 0, List<Combination> combinations = null)
		{
		}

		public void AddCombinationWeightedItems(List<Combination> combinations, int numItemsInCycles)
		{
		}

		public ItemSpawnable GetNextItems(ItemMultiple[] consumedItems, List<Combination> combinations, List<ItemPayloadBase> feedingConsumedItems = null)
		{
			return null;
		}

		public void AddFixedItems(List<ItemSpawnable> spawningList, List<FixedItemSpawnable> fixedItems)
		{
		}

		public void AddWeightedItems(List<WeightedItemSpawnable> items)
		{
		}

		public void AddWeightedItems(List<ItemSpawnable> spawningList, List<WeightedItemSpawnable> items, int numItemsInCycles)
		{
		}

		public ItemSpawnable PeekNextItem()
		{
			return null;
		}

		public bool IsItemInQueue(IMergeItem item)
		{
			return false;
		}
	}
}
