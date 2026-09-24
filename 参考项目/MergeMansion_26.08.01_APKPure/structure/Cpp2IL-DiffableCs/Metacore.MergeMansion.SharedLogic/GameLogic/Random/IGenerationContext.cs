namespace GameLogic.Random;

public interface IGenerationContext
{

	public WeightedDistributionStates DistributionStates
	{
		 get { } //Length: 0
	}

	[Obsolete("use MergeMansionGameConfig instead")]
	public SharedGameConfig GameConfig
	{
		 get { } //Length: 0
	}

	public GarageCleanupEventModel GarageCleanupEventModel
	{
		 get { } //Length: 0
	}

	public IMergeMansionGameConfig MergeMansionGameConfig
	{
		 get { } //Length: 0
	}

	public RandomPCG Random
	{
		 get { } //Length: 0
	}

	public SpawnFactoryState SpawnState
	{
		 get { } //Length: 0
	}

	public Statistics Statistics
	{
		 get { } //Length: 0
	}

	public WeightedDistributionStates get_DistributionStates() { }

	public SharedGameConfig get_GameConfig() { }

	public GarageCleanupEventModel get_GarageCleanupEventModel() { }

	public IMergeMansionGameConfig get_MergeMansionGameConfig() { }

	public RandomPCG get_Random() { }

	public SpawnFactoryState get_SpawnState() { }

	public Statistics get_Statistics() { }

}

