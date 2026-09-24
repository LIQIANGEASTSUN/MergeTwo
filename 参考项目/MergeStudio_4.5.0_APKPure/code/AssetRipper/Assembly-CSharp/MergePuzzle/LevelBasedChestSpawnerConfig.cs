using System;
using System.Collections.Generic;

namespace MergePuzzle
{
	[Serializable]
	public class LevelBasedChestSpawnerConfig
	{
		[Serializable]
		public class LevelBasedChestSpawn
		{
			public int LevelThreshold;

			public List<SpawnedItem> SpawnedItems;
		}

		public List<LevelBasedChestSpawn> LevelBasedChestSpawnList;
	}
}
