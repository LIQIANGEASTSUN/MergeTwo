using System;
using System.Collections.Generic;

namespace MergePuzzle
{
	public class ChestSpawnerConfigAdaptor : AdaptorBase
	{
		[NonSerialized]
		public readonly ChestSpawnerConfig activeConfigBase;

		public ChestSpawnerConfigAdaptor(string setIDLevel, ChestSpawnerConfig activeConfigBase)
			: base(null)
		{
		}

		public ChestSpawnerConfigAdaptor(BoardItemChestSpawner boardItemChestSpawner)
			: base(null)
		{
		}

		public bool GetUsesEnergy()
		{
			return false;
		}

		public int GetCapacity()
		{
			return 0;
		}

		public int GetChargeTime()
		{
			return 0;
		}

		public int GetGemSkipAmount()
		{
			return 0;
		}

		public int GetGemDecreaseCount()
		{
			return 0;
		}

		public bool GetNonProbabilistic()
		{
			return false;
		}

		public List<SpawnedItem> GetSpawnedItems()
		{
			return null;
		}
	}
}
