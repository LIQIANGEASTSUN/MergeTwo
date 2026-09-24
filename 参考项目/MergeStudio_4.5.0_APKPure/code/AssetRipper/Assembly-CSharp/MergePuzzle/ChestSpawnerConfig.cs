using System;
using System.Collections.Generic;

namespace MergePuzzle
{
	[Serializable]
	public class ChestSpawnerConfig
	{
		public bool UsesEnergy;

		public int Capacity;

		public int ChargeTime;

		public int GemSkipAmount;

		public int GemDecreaseCount;

		public bool NonProbabilistic;

		public List<SpawnedItem> SpawnedItems;
	}
}
