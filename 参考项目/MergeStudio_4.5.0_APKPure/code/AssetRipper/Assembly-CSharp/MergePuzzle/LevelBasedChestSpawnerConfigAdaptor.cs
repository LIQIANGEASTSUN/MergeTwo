using System;
using System.Collections.Generic;

namespace MergePuzzle
{
	public class LevelBasedChestSpawnerConfigAdaptor : ChestSpawnerConfigAdaptor
	{
		[NonSerialized]
		public ChestSpawnerConfig _activeConfig;

		[NonSerialized]
		public List<LevelBasedChestSpawnerConfig.LevelBasedChestSpawn> _levelBasedChestSpawnList;

		public LevelBasedChestSpawnerConfigAdaptor(string setIDLevel, ChestSpawnerConfig activeConfigBase, List<LevelBasedChestSpawnerConfig.LevelBasedChestSpawn> levelBasedChestSpawnList)
			: base(null, null)
		{
		}

		public LevelBasedChestSpawnerConfigAdaptor(LevelBasedChestSpawner levelBasedChestSpawner)
			: base(null, null)
		{
		}

		public List<LevelBasedChestSpawnerConfig.LevelBasedChestSpawn> GetLevelBasedChestSpawns()
		{
			return null;
		}
	}
}
