namespace GameLogic.Player.Items.Fishing;

[MetaSerializable]
public class WeightFeatures : IWeightFeatures
{
	public static readonly WeightFeatures NoWeightFeatures; //Field offset: 0x0
	[CompilerGenerated]
	private bool <HasWeight>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private F32 <MinWeight>k__BackingField; //Field offset: 0x14
	[CompilerGenerated]
	private F32 <MaxWeight>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private int <FramesItem>k__BackingField; //Field offset: 0x1C
	[CompilerGenerated]
	private F32 <WorldRecordWeightThreshold>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private StoryDefinitionId <WorldRecordWeightDialogue>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private List<PlayerReward> <WorldRecordRewards>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private MetaDictionary<WeightCategory, SplashType> <SplashTypesByWeightCategory>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private FishRarity <FishRarity>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private List<WeightStarRewardData> <StarRewards>k__BackingField; //Field offset: 0x48
	[CompilerGenerated]
	private LuckyType <LuckyType>k__BackingField; //Field offset: 0x50
	[CompilerGenerated]
	private SubjectType <SubjectType>k__BackingField; //Field offset: 0x54

	[MetaMember(9, MetaMemberFlags::None (0))]
	public private override FishRarity FishRarity
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private override int FramesItem
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	private override IReadOnlyDictionary<WeightCategory, SplashType> GameLogic.Player.Items.Fishing.IWeightFeatures.SplashTypesByWeightCategory
	{
		private get { } //Length: 8
	}

	[IgnoreDataMember]
	private override IReadOnlyList<IWeightStarRewardData> GameLogic.Player.Items.Fishing.IWeightFeatures.StarRewards
	{
		private get { } //Length: 8
	}

	[IgnoreDataMember]
	private override IReadOnlyList<PlayerReward> GameLogic.Player.Items.Fishing.IWeightFeatures.WorldRecordRewards
	{
		private get { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override bool HasWeight
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(11, MetaMemberFlags::None (0))]
	public private override LuckyType LuckyType
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private override F32 MaxWeight
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private override F32 MinWeight
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(8, MetaMemberFlags::None (0))]
	public private MetaDictionary<WeightCategory, SplashType> SplashTypesByWeightCategory
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(10, MetaMemberFlags::None (0))]
	public private List<WeightStarRewardData> StarRewards
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(12, MetaMemberFlags::None (0))]
	public private override SubjectType SubjectType
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(7, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixPlayerRewards")]
	public private List<PlayerReward> WorldRecordRewards
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(6, MetaMemberFlags::None (0))]
	public private override StoryDefinitionId WorldRecordWeightDialogue
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	public private override F32 WorldRecordWeightThreshold
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private static WeightFeatures() { }

	public WeightFeatures(bool hasWeight, F32 minWeight, F32 maxWeight, int framesItem, F32 worldRecordWeightThreshold, StoryDefinitionId worldRecordWeightDialogue, IEnumerable<PlayerReward> worldRecordRewards, MetaDictionary<WeightCategory, SplashType> splashTypesByWeightCategory, FishRarity fishRarity, List<WeightStarRewardData> starRewards, LuckyType luckyType, SubjectType subjectType) { }

	private WeightFeatures() { }

	private static List<PlayerReward> FixPlayerRewards(MetaMemberDeserializationFailureParams failureParams) { }

	private override IReadOnlyDictionary<WeightCategory, SplashType> GameLogic.Player.Items.Fishing.IWeightFeatures.get_SplashTypesByWeightCategory() { }

	private override IReadOnlyList<IWeightStarRewardData> GameLogic.Player.Items.Fishing.IWeightFeatures.get_StarRewards() { }

	private override IReadOnlyList<PlayerReward> GameLogic.Player.Items.Fishing.IWeightFeatures.get_WorldRecordRewards() { }

	[CompilerGenerated]
	public override FishRarity get_FishRarity() { }

	[CompilerGenerated]
	public override int get_FramesItem() { }

	[CompilerGenerated]
	public override bool get_HasWeight() { }

	[CompilerGenerated]
	public override LuckyType get_LuckyType() { }

	[CompilerGenerated]
	public override F32 get_MaxWeight() { }

	[CompilerGenerated]
	public override F32 get_MinWeight() { }

	[CompilerGenerated]
	public MetaDictionary<WeightCategory, SplashType> get_SplashTypesByWeightCategory() { }

	[CompilerGenerated]
	public List<WeightStarRewardData> get_StarRewards() { }

	[CompilerGenerated]
	public override SubjectType get_SubjectType() { }

	[CompilerGenerated]
	public List<PlayerReward> get_WorldRecordRewards() { }

	[CompilerGenerated]
	public override StoryDefinitionId get_WorldRecordWeightDialogue() { }

	[CompilerGenerated]
	public override F32 get_WorldRecordWeightThreshold() { }

	[CompilerGenerated]
	private void set_FishRarity(FishRarity value) { }

	[CompilerGenerated]
	private void set_FramesItem(int value) { }

	[CompilerGenerated]
	private void set_HasWeight(bool value) { }

	[CompilerGenerated]
	private void set_LuckyType(LuckyType value) { }

	[CompilerGenerated]
	private void set_MaxWeight(F32 value) { }

	[CompilerGenerated]
	private void set_MinWeight(F32 value) { }

	[CompilerGenerated]
	private void set_SplashTypesByWeightCategory(MetaDictionary<WeightCategory, SplashType> value) { }

	[CompilerGenerated]
	private void set_StarRewards(List<WeightStarRewardData> value) { }

	[CompilerGenerated]
	private void set_SubjectType(SubjectType value) { }

	[CompilerGenerated]
	private void set_WorldRecordRewards(List<PlayerReward> value) { }

	[CompilerGenerated]
	private void set_WorldRecordWeightDialogue(StoryDefinitionId value) { }

	[CompilerGenerated]
	private void set_WorldRecordWeightThreshold(F32 value) { }

}

