namespace GameLogic.Player.Items.Merging;

public class MergeFeaturesXpAndSameSource : IItemConfigPart<MergeFeatures>, IItemConfigPart, IHasGameConfigKey<String>, IPrioritizedConfigEntry
{
	public string ItemKey; //Field offset: 0x10
	[CompilerGenerated]
	private MechanicConfigType <Type>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private string <TypeAux0>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private int <Priority>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private int <ExperienceRequired>k__BackingField; //Field offset: 0x2C
	public ItemVisibility ResultVisibility; //Field offset: 0x30
	public StorageActionType StorageAction; //Field offset: 0x34
	public bool ResetTimers; //Field offset: 0x38
	public string ProducerType; //Field offset: 0x40
	public string RandomMarker; //Field offset: 0x48
	public InitialSequenceType InitialSequenceType; //Field offset: 0x50
	public string InitialSequence; //Field offset: 0x58
	public List<String> Item; //Field offset: 0x60
	public List<Int32> Weight; //Field offset: 0x68
	public string AdditionalSpawnProducerType; //Field offset: 0x70
	public string AdditionalSpawnRandomMarker; //Field offset: 0x78
	public InitialSequenceType AdditionalSpawnInitialSequenceType; //Field offset: 0x80
	public string AdditionalSpawnInitialSequence; //Field offset: 0x88
	public List<String> AdditionalSpawnItem; //Field offset: 0x90
	public List<Int32> AdditionalSpawnWeight; //Field offset: 0x98
	public List<MergeRewardId> MergeRewardIds; //Field offset: 0xA0

	public override string ConfigKey
	{
		 get { } //Length: 8
	}

	public int ExperienceRequired
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public string ItemType
	{
		 get { } //Length: 8
	}

	public override int Priority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public MechanicConfigType Type
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public string TypeAux0
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public MergeFeaturesXpAndSameSource() { }

	private static Exception CreateMultipleAllowedItemsTypeAux0Exception() { }

	public override string get_ConfigKey() { }

	[CompilerGenerated]
	public int get_ExperienceRequired() { }

	public string get_ItemType() { }

	[CompilerGenerated]
	public override int get_Priority() { }

	[CompilerGenerated]
	public MechanicConfigType get_Type() { }

	[CompilerGenerated]
	public string get_TypeAux0() { }

	private List<Int32> ParseMultipleAllowedItems() { }

	[CompilerGenerated]
	public void set_ExperienceRequired(int value) { }

	[CompilerGenerated]
	public void set_Priority(int value) { }

	[CompilerGenerated]
	public void set_Type(MechanicConfigType value) { }

	[CompilerGenerated]
	public void set_TypeAux0(string value) { }

	public override MergeFeatures ToConfigData(IProducerFactory producerFactory) { }

}

