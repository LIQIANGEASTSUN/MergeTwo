using GameLogic.Config;
using Metaplay.Core;

namespace GameLogic.Player.Items.Spawning
{
	public static class SpawnFeaturesExtensions
	{
		public static (SpawnState, StorageState) FromExisting(this ISpawnFeatures spawnFeatures, MetaTime timestamp)
		{
			return default((SpawnState, StorageState));
		}

		public static int GetSpeedUpItemsPerCycle(this ISpawnFeatures spawnFeatures, SpeedUpBehavior speedUpBehavior)
		{
			return 0;
		}

		public static (SpawnState, StorageState) Combine(this ISpawnFeatures spawnFeatures, SpawnState sourceState, StorageState sourceStorage, SpawnState targetState, StorageState targetStorage, MetaTime timestamp)
		{
			return default((SpawnState, StorageState));
		}
	}
}
