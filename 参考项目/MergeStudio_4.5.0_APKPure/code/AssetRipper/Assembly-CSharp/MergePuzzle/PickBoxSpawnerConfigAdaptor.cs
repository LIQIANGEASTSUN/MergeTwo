using System;
using System.Collections.Generic;

namespace MergePuzzle
{
	public class PickBoxSpawnerConfigAdaptor : AdaptorBase
	{
		[NonSerialized]
		public PickBoxConfig _activeConfig;

		public int UserLevel => 0;

		public PickBoxSpawnerConfigAdaptor(string setIDLevel, PickBoxConfig activeConfigBase)
			: base(null)
		{
		}

		public PickBoxSpawnerConfigAdaptor(BoardItemPickBox boardItemPickBox)
			: base(null)
		{
		}

		public PickBoxLevelBucket GetPickBoxLevelBucket()
		{
			return null;
		}

		public List<SpawnedItem> GetSpawnedItems1()
		{
			return null;
		}

		public List<SpawnedItem> GetSpawnedItems2()
		{
			return null;
		}

		public List<SpawnedItem> GetSpawnedItems3()
		{
			return null;
		}
	}
}
