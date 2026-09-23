using System;
using System.Collections.Generic;
using Framework.Localisation;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Data;
using Newtonsoft.Json;

namespace MergeEngine.Configuration.Capabilities
{
	[Serializable]
	public class ItemsSpawningCapability : TimeCycleCapability
	{
		public bool DoNotShuffleSpawningList;

		public bool SpawnBasedOnConsumedItems;

		[LocalisationIdentifier]
		public string SpawnedItemsLabel;

		[NonSerialized]
		[NonSerialized]
		public List<KeyValuePair<IMergeItem, int>> _itemPoolWithSpawnCounts;

		[NonSerialized]
		[NonSerialized]
		public List<IMergeItem> _spawnedMergeItems;

		public List<WeightedItemSpawnable> Items;

		public List<FixedItemSpawnable> FixedItems;

		public List<ConsumedItemToProducedItemMapping> LinkedItems;

		public List<Combination> Combinations;

		[JsonProperty("skipCooldownSettings")]
		public SkipCooldownSettings SkipCooldownSettings;

		[NonSerialized]
		[NonSerialized]
		public List<IMergeItem> _spawningList;

		[JsonIgnore]
		public List<IMergeItem> SpawnedMergeItems => null;

		public List<IMergeItem> GetSpawningList()
		{
			return null;
		}

		public List<ItemSpawnable> GetDistinctSpawnableItems()
		{
			return null;
		}

		public List<KeyValuePair<IMergeItem, int>> GetItemPoolWithSpawnCounts()
		{
			return null;
		}
	}
}
