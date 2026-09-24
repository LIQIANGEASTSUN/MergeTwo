using System;
using System.Collections.Generic;

namespace MergePuzzle
{
	[Serializable]
	public class PerishableSpawnerConfig
	{
		public int SetID;

		public bool UsesEnergy;

		public int Capacity;

		public bool NonProbabilistic;

		public bool HasProgressText;

		public bool UseIndexedSpawn;

		public List<SpawnedItem> SpawnedItems;

		public List<SpawnIndexedItemGroup> IndexedSpawnedItemGroups;

		public List<SpawnedItem> GetSpawnedItems(bool useOriginalSetID = false)
		{
			return null;
		}

		public SpawnedItem GetNonProbabilisticItem(int currentCapacity)
		{
			return null;
		}

		public SpawnedItem GetIndexedSpawnedItem(int currentCapacity)
		{
			return null;
		}

		public SpawnedItem GetRandomItem()
		{
			return null;
		}
	}
}
