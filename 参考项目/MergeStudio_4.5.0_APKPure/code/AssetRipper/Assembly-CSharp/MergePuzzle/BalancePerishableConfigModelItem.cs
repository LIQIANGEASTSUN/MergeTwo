using System;
using System.Collections.Generic;

namespace MergePuzzle
{
	[Serializable]
	public class BalancePerishableConfigModelItem
	{
		public string SetIDLevel;

		public bool UsesEnergy;

		public int Capacity;

		public string PerishedSpawn;

		public int ChargeSetID;

		public int ChargedCapacity;

		public bool ShowItemPercentages;

		public bool NonProbabilistic;

		public bool HasProgressText;

		public bool UseIndexedSpawn;

		public List<BalanceSpawnItemModelItem> SpawnedItems;

		public List<BalanceSpawnIndexedItemGroup> IndexedSpawnedItems;
	}
}
