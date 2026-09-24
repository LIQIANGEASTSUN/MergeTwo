namespace GameLogic.Player.Items.Spawning;

[MetaSerializableDerived(3)]
public class SpawnThreeInEveryFiveSeconds : ISpawnCycle
{
	private static readonly MetaDuration spawnDelay; //Field offset: 0x0
	private static readonly MetaDuration firstCycleStartDelay; //Field offset: 0x8
	private static readonly MetaDuration delayBetweenCycles; //Field offset: 0x10
	private static readonly int howManyAreGeneratedPerSpawn; //Field offset: 0x18
	private static readonly int spawnAmountInCycle; //Field offset: 0x1C
	private static readonly int howManyCycles; //Field offset: 0x20

	private static SpawnThreeInEveryFiveSeconds() { }

	public SpawnThreeInEveryFiveSeconds() { }

	public override Nullable<MetaTime> CalculateNextEstimatedStorageFillTime(IPlayer player, IItemDefinition itemDefinition, MetaTime calculationStartTimestamp, MetaDuration timeAlreadySpend, SpawnState spawnState, F32 boostFactor, MetaTime currentTime) { }

	public virtual bool Equals(object obj) { }

	public override MetaDuration GetCycleDelay() { }

	public override MetaDuration GetFirstCycleDelay() { }

	public virtual int GetHashCode() { }

	public override int GetItemAmountInSpawn() { }

	public override int GetSpawnAmountInCycle() { }

	public override MetaDuration GetSpawnDelay() { }

	public override int HowManyAreGeneratedToStorage() { }

	public override int InitialCycles() { }

	public override void UpdateSpawnCycleData(SpawnState spawnState) { }

}

