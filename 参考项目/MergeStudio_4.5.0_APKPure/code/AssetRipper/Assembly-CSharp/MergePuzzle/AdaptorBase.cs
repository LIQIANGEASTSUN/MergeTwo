using System;
using System.Collections.Generic;

namespace MergePuzzle
{
	public abstract class AdaptorBase
	{
		[NonSerialized]
		public readonly Tuple<int, int> SetIDLevel;

		public AdaptorBase(string setIDLevel)
		{
		}

		public AdaptorBase(int setID, int level)
		{
		}

		public AdaptorBase(int setId)
		{
		}

		public (bool, List<SpawnedItem>) RecurringEventSpawnedFeatureItems()
		{
			return default((bool, List<SpawnedItem>));
		}
	}
}
