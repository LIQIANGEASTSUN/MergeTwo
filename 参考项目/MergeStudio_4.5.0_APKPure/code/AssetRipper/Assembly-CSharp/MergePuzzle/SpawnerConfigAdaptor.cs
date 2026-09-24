using System;
using System.Collections.Generic;

namespace MergePuzzle
{
	public class SpawnerConfigAdaptor : AdaptorBase
	{
		[NonSerialized]
		public readonly SpawnerConfig _activeConfigBase;

		public SpawnerConfigAdaptor(string setIDLevel, SpawnerConfig activeConfigBase, BoardData boardData)
			: base(null)
		{
		}

		public SpawnerConfigAdaptor(BoardItemSpawnerData boardItemSpawnerData)
			: base(null)
		{
		}

		public bool GetUsesEnergy()
		{
			return false;
		}

		public int GetSmallCapacity()
		{
			return 0;
		}

		public int GetBigCapacity()
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

		public int GetRewardedCapacity()
		{
			return 0;
		}

		public List<SpawnedItem> GetSpawnedItems()
		{
			return null;
		}

		public List<SpawnedItem> GetTutorialItems()
		{
			return null;
		}

		public SpawnerState GetSpawnerStartState()
		{
			return default(SpawnerState);
		}

		public SpawnerState GetSpawnerSkippedState()
		{
			return default(SpawnerState);
		}
	}
}
