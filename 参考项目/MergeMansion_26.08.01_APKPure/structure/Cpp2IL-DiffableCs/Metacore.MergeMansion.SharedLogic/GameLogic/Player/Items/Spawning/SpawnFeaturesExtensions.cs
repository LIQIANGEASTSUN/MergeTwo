namespace GameLogic.Player.Items.Spawning;

[Extension]
public static class SpawnFeaturesExtensions
{

	[Extension]
	public static ValueTuple<SpawnState, StorageState> Combine(ISpawnFeatures spawnFeatures, SpawnState sourceState, StorageState sourceStorage, SpawnState targetState, StorageState targetStorage, MetaTime timestamp) { }

	[Extension]
	public static ValueTuple<SpawnState, StorageState> FromExisting(ISpawnFeatures spawnFeatures, MetaTime timestamp) { }

	[Extension]
	public static int GetSpeedUpItemsPerCycle(ISpawnFeatures spawnFeatures, SpeedUpBehavior speedUpBehavior) { }

}

