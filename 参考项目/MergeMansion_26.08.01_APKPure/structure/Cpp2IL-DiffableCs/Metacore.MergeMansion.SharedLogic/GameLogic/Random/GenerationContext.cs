namespace GameLogic.Random;

public class GenerationContext : IGenerationContext
{
	[CompilerGenerated]
	private readonly Statistics <Statistics>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private readonly WeightedDistributionStates <DistributionStates>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private readonly SpawnFactoryState <SpawnState>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private readonly RandomPCG <Random>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private readonly SharedGameConfig <GameConfig>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private readonly IMergeMansionGameConfig <MergeMansionGameConfig>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private GarageCleanupEventModel <GarageCleanupEventModel>k__BackingField; //Field offset: 0x40

	public override WeightedDistributionStates DistributionStates
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	[Obsolete("use MergeMansionGameConfig instead")]
	public override SharedGameConfig GameConfig
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public private override GarageCleanupEventModel GarageCleanupEventModel
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override IMergeMansionGameConfig MergeMansionGameConfig
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public override RandomPCG Random
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public override SpawnFactoryState SpawnState
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public override Statistics Statistics
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public GenerationContext(WeightedDistributionStates distributionStates, SpawnFactoryState spawnState, RandomPCG random, Statistics statistics, IMergeMansionGameConfig gameConfig, GarageCleanupEventModel garageCleanupEventModel = null) { }

	public GenerationContext(IPlayer player) { }

	public GenerationContext(PlayerModel playerModel) { }

	[CompilerGenerated]
	public override WeightedDistributionStates get_DistributionStates() { }

	[CompilerGenerated]
	public override SharedGameConfig get_GameConfig() { }

	[CompilerGenerated]
	public override GarageCleanupEventModel get_GarageCleanupEventModel() { }

	[CompilerGenerated]
	public override IMergeMansionGameConfig get_MergeMansionGameConfig() { }

	[CompilerGenerated]
	public override RandomPCG get_Random() { }

	[CompilerGenerated]
	public override SpawnFactoryState get_SpawnState() { }

	[CompilerGenerated]
	public override Statistics get_Statistics() { }

	private void InitGarageCleanupEventModel(PlayerModel playerModel) { }

	[CompilerGenerated]
	private void set_GarageCleanupEventModel(GarageCleanupEventModel value) { }

}

