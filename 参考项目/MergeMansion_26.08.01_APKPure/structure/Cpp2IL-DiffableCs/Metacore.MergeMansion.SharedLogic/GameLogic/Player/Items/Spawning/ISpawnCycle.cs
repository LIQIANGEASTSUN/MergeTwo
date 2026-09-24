namespace GameLogic.Player.Items.Spawning;

[MetaSerializable]
public interface ISpawnCycle
{

	public Nullable<MetaTime> CalculateNextEstimatedStorageFillTime(IPlayer player, IItemDefinition itemDefinition, MetaTime calculationStartTimestamp, MetaDuration timeAlreadySpend, SpawnState spawnState, F32 boostFactor, MetaTime currentTime) { }

	public MetaDuration GetCycleDelay() { }

	public MetaDuration GetFirstCycleDelay() { }

	public int GetItemAmountInSpawn() { }

	public int GetSpawnAmountInCycle() { }

	public MetaDuration GetSpawnDelay() { }

	public int HowManyAreGeneratedToStorage() { }

	public int InitialCycles() { }

	public void UpdateSpawnCycleData(SpawnState spawnState) { }

}

