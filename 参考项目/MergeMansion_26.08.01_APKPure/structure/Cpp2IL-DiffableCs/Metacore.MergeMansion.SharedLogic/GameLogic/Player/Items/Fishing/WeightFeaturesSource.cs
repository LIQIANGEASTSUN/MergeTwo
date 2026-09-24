namespace GameLogic.Player.Items.Fishing;

public class WeightFeaturesSource : IItemConfigPart<WeightFeatures>, IItemConfigPart, IHasGameConfigKey<String>
{
	public string ItemKey; //Field offset: 0x10
	public F32 MaxWeight; //Field offset: 0x18
	public string FramesItem; //Field offset: 0x20
	public F32 WorldRecordWeightThreshold; //Field offset: 0x28
	public StoryDefinitionId WorldRecordWeightDialogue; //Field offset: 0x30
	public FishRarity FishRarity; //Field offset: 0x38
	[CompilerGenerated]
	private List<String> <WorldRecordRewardType>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private List<String> <WorldRecordRewardId>k__BackingField; //Field offset: 0x48
	[CompilerGenerated]
	private List<Int32> <WorldRecordRewardAmount>k__BackingField; //Field offset: 0x50
	[CompilerGenerated]
	private List<String> <WorldRecordRewardAux0>k__BackingField; //Field offset: 0x58
	[CompilerGenerated]
	private List<String> <WorldRecordRewardAux1>k__BackingField; //Field offset: 0x60
	public SplashType SmallSizeSplash; //Field offset: 0x68
	public SplashType MediumSizeSplash; //Field offset: 0x6C
	public SplashType LargeSizeSplash; //Field offset: 0x70
	[CompilerGenerated]
	private List<F32> <StarRewardWeights>k__BackingField; //Field offset: 0x78
	[CompilerGenerated]
	private List<String> <StarRewardType>k__BackingField; //Field offset: 0x80
	[CompilerGenerated]
	private List<String> <StarRewardId>k__BackingField; //Field offset: 0x88
	[CompilerGenerated]
	private List<Int32> <StarRewardAmount>k__BackingField; //Field offset: 0x90
	[CompilerGenerated]
	private List<String> <StarRewardAux0>k__BackingField; //Field offset: 0x98
	[CompilerGenerated]
	private List<String> <StarRewardAux1>k__BackingField; //Field offset: 0xA0
	[CompilerGenerated]
	private LuckyType <LuckyType>k__BackingField; //Field offset: 0xA8
	[CompilerGenerated]
	private SubjectType <SubjectType>k__BackingField; //Field offset: 0xAC
	[CompilerGenerated]
	private string <FishWeightCategoryOddsOverrides>k__BackingField; //Field offset: 0xB0
	[CompilerGenerated]
	private string <FishWeightCategorySizePercentagesOverrides>k__BackingField; //Field offset: 0xB8

	public override string ConfigKey
	{
		 get { } //Length: 8
	}

	public private string FishWeightCategoryOddsOverrides
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public private string FishWeightCategorySizePercentagesOverrides
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public string ItemType
	{
		 get { } //Length: 8
	}

	public private LuckyType LuckyType
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public List<Int32> StarRewardAmount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public List<String> StarRewardAux0
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public List<String> StarRewardAux1
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public List<String> StarRewardId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public List<String> StarRewardType
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public List<F32> StarRewardWeights
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public private SubjectType SubjectType
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public List<Int32> WorldRecordRewardAmount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public List<String> WorldRecordRewardAux0
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public List<String> WorldRecordRewardAux1
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public List<String> WorldRecordRewardId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public List<String> WorldRecordRewardType
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public WeightFeaturesSource() { }

	private MetaDictionary<WeightCategory, SplashType> CreateSplashTypesByWeightCategory() { }

	private List<WeightStarRewardData> CreateStarRewards(F32 minWeight) { }

	public override string get_ConfigKey() { }

	[CompilerGenerated]
	public string get_FishWeightCategoryOddsOverrides() { }

	[CompilerGenerated]
	public string get_FishWeightCategorySizePercentagesOverrides() { }

	public string get_ItemType() { }

	[CompilerGenerated]
	public LuckyType get_LuckyType() { }

	[CompilerGenerated]
	public List<Int32> get_StarRewardAmount() { }

	[CompilerGenerated]
	public List<String> get_StarRewardAux0() { }

	[CompilerGenerated]
	public List<String> get_StarRewardAux1() { }

	[CompilerGenerated]
	public List<String> get_StarRewardId() { }

	[CompilerGenerated]
	public List<String> get_StarRewardType() { }

	[CompilerGenerated]
	public List<F32> get_StarRewardWeights() { }

	[CompilerGenerated]
	public SubjectType get_SubjectType() { }

	[CompilerGenerated]
	public List<Int32> get_WorldRecordRewardAmount() { }

	[CompilerGenerated]
	public List<String> get_WorldRecordRewardAux0() { }

	[CompilerGenerated]
	public List<String> get_WorldRecordRewardAux1() { }

	[CompilerGenerated]
	public List<String> get_WorldRecordRewardId() { }

	[CompilerGenerated]
	public List<String> get_WorldRecordRewardType() { }

	[CompilerGenerated]
	private void set_FishWeightCategoryOddsOverrides(string value) { }

	[CompilerGenerated]
	private void set_FishWeightCategorySizePercentagesOverrides(string value) { }

	[CompilerGenerated]
	private void set_LuckyType(LuckyType value) { }

	[CompilerGenerated]
	public void set_StarRewardAmount(List<Int32> value) { }

	[CompilerGenerated]
	public void set_StarRewardAux0(List<String> value) { }

	[CompilerGenerated]
	public void set_StarRewardAux1(List<String> value) { }

	[CompilerGenerated]
	public void set_StarRewardId(List<String> value) { }

	[CompilerGenerated]
	public void set_StarRewardType(List<String> value) { }

	[CompilerGenerated]
	public void set_StarRewardWeights(List<F32> value) { }

	[CompilerGenerated]
	private void set_SubjectType(SubjectType value) { }

	[CompilerGenerated]
	public void set_WorldRecordRewardAmount(List<Int32> value) { }

	[CompilerGenerated]
	public void set_WorldRecordRewardAux0(List<String> value) { }

	[CompilerGenerated]
	public void set_WorldRecordRewardAux1(List<String> value) { }

	[CompilerGenerated]
	public void set_WorldRecordRewardId(List<String> value) { }

	[CompilerGenerated]
	public void set_WorldRecordRewardType(List<String> value) { }

	public override WeightFeatures ToConfigData(IProducerFactory producerFactory) { }

}

