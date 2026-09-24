namespace GameLogic.Player.Items.Spawning;

[MetaSerializableDerived(1)]
public class SpawnCycle : ISpawnCycle
{
	[CompilerGenerated]
	private MetaDuration <SpawnDelay>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private MetaDuration <FirstCycleStartDelay>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private MetaDuration <DelayBetweenCycles>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private int <HowManyAreGeneratedPerSpawn>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private int <SpawnAmountInCycle>k__BackingField; //Field offset: 0x2C
	[CompilerGenerated]
	private int <HowManyCycles>k__BackingField; //Field offset: 0x30

	[MetaMember(3, MetaMemberFlags::None (0))]
	public MetaDuration DelayBetweenCycles
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public MetaDuration FirstCycleStartDelay
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public int HowManyAreGeneratedPerSpawn
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(6, MetaMemberFlags::None (0))]
	public int HowManyCycles
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	public int SpawnAmountInCycle
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public MetaDuration SpawnDelay
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public SpawnCycle(long firstCycleStartDelay, int spawnAmountInCycle, int howManyAreGeneratedInCycle, long spawnDelay, long delayBetweenCycles, int howManyCycles) { }

	public SpawnCycle(MetaDuration firstCycleStartDelay, int spawnAmountInCycle, int howManyAreGeneratedInCycle, MetaDuration spawnDelay, MetaDuration delayBetweenCycles, int howManyCycles) { }

	private SpawnCycle() { }

	public override Nullable<MetaTime> CalculateNextEstimatedStorageFillTime(IPlayer player, IItemDefinition itemDefinition, MetaTime calculationStartTimestamp, MetaDuration timeAlreadySpend, SpawnState spawnState, F32 boostFactor, MetaTime currentTime) { }

	protected bool Equals(SpawnCycle other) { }

	public virtual bool Equals(object obj) { }

	[CompilerGenerated]
	public MetaDuration get_DelayBetweenCycles() { }

	[CompilerGenerated]
	public MetaDuration get_FirstCycleStartDelay() { }

	[CompilerGenerated]
	public int get_HowManyAreGeneratedPerSpawn() { }

	[CompilerGenerated]
	public int get_HowManyCycles() { }

	[CompilerGenerated]
	public int get_SpawnAmountInCycle() { }

	[CompilerGenerated]
	public MetaDuration get_SpawnDelay() { }

	public override MetaDuration GetCycleDelay() { }

	public override MetaDuration GetFirstCycleDelay() { }

	public virtual int GetHashCode() { }

	public override int GetItemAmountInSpawn() { }

	public override int GetSpawnAmountInCycle() { }

	public override MetaDuration GetSpawnDelay() { }

	public override int HowManyAreGeneratedToStorage() { }

	public override int InitialCycles() { }

	[CompilerGenerated]
	public void set_DelayBetweenCycles(MetaDuration value) { }

	[CompilerGenerated]
	public void set_FirstCycleStartDelay(MetaDuration value) { }

	[CompilerGenerated]
	public void set_HowManyAreGeneratedPerSpawn(int value) { }

	[CompilerGenerated]
	public void set_HowManyCycles(int value) { }

	[CompilerGenerated]
	public void set_SpawnAmountInCycle(int value) { }

	[CompilerGenerated]
	public void set_SpawnDelay(MetaDuration value) { }

	public override void UpdateSpawnCycleData(SpawnState spawnState) { }

}

