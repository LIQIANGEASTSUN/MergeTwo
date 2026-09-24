using System;
using System.Collections.Generic;

namespace Paxie.MergeStudio.GameCore.Gameplay.Board.Items
{
	[Serializable]
	public class PerishableSpawnerEntity
	{
		public int SetID;

		public bool UsesEnergy;

		public int Capacity;

		public bool NonProbabilistic;

		public bool UseIndexedSpawn;

		public List<SpawnerSpawnedItem> SpawnedItems;

		public List<SpawnerSpawnIndexedItemGroup> IndexedSpawnedItemGroups;

		public SpawnerSpawnedItem GetNonProbabilisticItem(int currentCapacity)
		{
			return null;
		}

		public SpawnerSpawnedItem GetIndexedSpawnedItem(int currentCapacity)
		{
			return null;
		}

		public SpawnerSpawnedItem GetRandomItem()
		{
			return null;
		}
	}
}
