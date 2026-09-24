namespace GameLogic.Player.Items.Fishing;

public interface IWeightFeatures
{

	public FishRarity FishRarity
	{
		 get { } //Length: 0
	}

	public int FramesItem
	{
		 get { } //Length: 0
	}

	public bool HasWeight
	{
		 get { } //Length: 0
	}

	public LuckyType LuckyType
	{
		 get { } //Length: 0
	}

	public F32 MaxWeight
	{
		 get { } //Length: 0
	}

	public F32 MinWeight
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<WeightCategory, SplashType> SplashTypesByWeightCategory
	{
		 get { } //Length: 0
	}

	public IReadOnlyList<IWeightStarRewardData> StarRewards
	{
		 get { } //Length: 0
	}

	public SubjectType SubjectType
	{
		 get { } //Length: 0
	}

	public IReadOnlyList<PlayerReward> WorldRecordRewards
	{
		 get { } //Length: 0
	}

	public StoryDefinitionId WorldRecordWeightDialogue
	{
		 get { } //Length: 0
	}

	public F32 WorldRecordWeightThreshold
	{
		 get { } //Length: 0
	}

	public FishRarity get_FishRarity() { }

	public int get_FramesItem() { }

	public bool get_HasWeight() { }

	public LuckyType get_LuckyType() { }

	public F32 get_MaxWeight() { }

	public F32 get_MinWeight() { }

	public IReadOnlyDictionary<WeightCategory, SplashType> get_SplashTypesByWeightCategory() { }

	public IReadOnlyList<IWeightStarRewardData> get_StarRewards() { }

	public SubjectType get_SubjectType() { }

	public IReadOnlyList<PlayerReward> get_WorldRecordRewards() { }

	public StoryDefinitionId get_WorldRecordWeightDialogue() { }

	public F32 get_WorldRecordWeightThreshold() { }

}

