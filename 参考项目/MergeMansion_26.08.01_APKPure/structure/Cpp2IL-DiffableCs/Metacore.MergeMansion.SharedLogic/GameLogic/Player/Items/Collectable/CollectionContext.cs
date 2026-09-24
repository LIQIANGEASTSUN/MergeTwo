namespace GameLogic.Player.Items.Collectable;

public class CollectionContext : ICollectionContext, IGenerationContext
{
	[CompilerGenerated]
	private readonly IPlayer <Player>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private readonly MergeBoard <Board>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private readonly CurrencySource <AnalyticsContext>k__BackingField; //Field offset: 0x20

	public override CurrencySource AnalyticsContext
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public override MergeBoard Board
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public override WeightedDistributionStates DistributionStates
	{
		 get { } //Length: 164
	}

	[Obsolete("use MergeMansionGameConfig instead")]
	public override SharedGameConfig GameConfig
	{
		 get { } //Length: 164
	}

	public override GarageCleanupEventModel GarageCleanupEventModel
	{
		 get { } //Length: 204
	}

	public override IMergeMansionGameConfig MergeMansionGameConfig
	{
		 get { } //Length: 164
	}

	public override IPlayer Player
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public override RandomPCG Random
	{
		 get { } //Length: 164
	}

	public override SpawnFactoryState SpawnState
	{
		 get { } //Length: 164
	}

	public override Statistics Statistics
	{
		 get { } //Length: 160
	}

	public override Wallet Wallet
	{
		 get { } //Length: 164
	}

	public CollectionContext(IPlayer player, MergeBoard board, CurrencySource analyticsContext) { }

	[CompilerGenerated]
	public override CurrencySource get_AnalyticsContext() { }

	[CompilerGenerated]
	public override MergeBoard get_Board() { }

	public override WeightedDistributionStates get_DistributionStates() { }

	public override SharedGameConfig get_GameConfig() { }

	public override GarageCleanupEventModel get_GarageCleanupEventModel() { }

	public override IMergeMansionGameConfig get_MergeMansionGameConfig() { }

	[CompilerGenerated]
	public override IPlayer get_Player() { }

	public override RandomPCG get_Random() { }

	public override SpawnFactoryState get_SpawnState() { }

	public override Statistics get_Statistics() { }

	public override Wallet get_Wallet() { }

}

