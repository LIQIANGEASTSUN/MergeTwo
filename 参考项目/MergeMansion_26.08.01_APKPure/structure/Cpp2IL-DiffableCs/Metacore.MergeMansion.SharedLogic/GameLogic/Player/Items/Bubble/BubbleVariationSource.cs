namespace GameLogic.Player.Items.Bubble;

public class BubbleVariationSource : IConfigItemSource<BubbleVariantsDefinition, BubbleVariationId>, IGameConfigSourceItem<BubbleVariationId, BubbleVariantsDefinition>, IHasGameConfigKey<BubbleVariationId>
{
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private BubbleVariationId <ConfigKey>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private MetaDuration <BubbleDuration>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private Currencies <OpenCurrency>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private int <OpenCost>k__BackingField; //Field offset: 0x2C
	[CompilerGenerated]
	private int <SpawnOdds>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private string <ReplacementItem>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private List<PlayerSegmentId> <Segments>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private int <Priority>k__BackingField; //Field offset: 0x48
	[CompilerGenerated]
	private List<String> <RequirementType>k__BackingField; //Field offset: 0x50
	[CompilerGenerated]
	private List<String> <RequirementId>k__BackingField; //Field offset: 0x58
	[CompilerGenerated]
	private List<String> <RequirementAmount>k__BackingField; //Field offset: 0x60
	[CompilerGenerated]
	private List<String> <RequirementAux0>k__BackingField; //Field offset: 0x68

	public MetaDuration BubbleDuration
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override BubbleVariationId ConfigKey
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override int ExperimentPriority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public int OpenCost
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public Currencies OpenCurrency
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public int Priority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public string ReplacementItem
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	private List<String> RequirementAmount
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<String> RequirementAux0
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<String> RequirementId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<String> RequirementType
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public List<PlayerSegmentId> Segments
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public int SpawnOdds
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public BubbleVariationSource() { }

	[CompilerGenerated]
	public MetaDuration get_BubbleDuration() { }

	[CompilerGenerated]
	public override BubbleVariationId get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	public int get_OpenCost() { }

	[CompilerGenerated]
	public Currencies get_OpenCurrency() { }

	[CompilerGenerated]
	public int get_Priority() { }

	[CompilerGenerated]
	public string get_ReplacementItem() { }

	[CompilerGenerated]
	private List<String> get_RequirementAmount() { }

	[CompilerGenerated]
	private List<String> get_RequirementAux0() { }

	[CompilerGenerated]
	private List<String> get_RequirementId() { }

	[CompilerGenerated]
	private List<String> get_RequirementType() { }

	[CompilerGenerated]
	public List<PlayerSegmentId> get_Segments() { }

	[CompilerGenerated]
	public int get_SpawnOdds() { }

	[CompilerGenerated]
	public void set_BubbleDuration(MetaDuration value) { }

	[CompilerGenerated]
	public void set_ConfigKey(BubbleVariationId value) { }

	[CompilerGenerated]
	public void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	public void set_OpenCost(int value) { }

	[CompilerGenerated]
	public void set_OpenCurrency(Currencies value) { }

	[CompilerGenerated]
	public void set_Priority(int value) { }

	[CompilerGenerated]
	public void set_ReplacementItem(string value) { }

	[CompilerGenerated]
	private void set_RequirementAmount(List<String> value) { }

	[CompilerGenerated]
	private void set_RequirementAux0(List<String> value) { }

	[CompilerGenerated]
	private void set_RequirementId(List<String> value) { }

	[CompilerGenerated]
	private void set_RequirementType(List<String> value) { }

	[CompilerGenerated]
	public void set_Segments(List<PlayerSegmentId> value) { }

	[CompilerGenerated]
	public void set_SpawnOdds(int value) { }

	public override BubbleVariantsDefinition ToConfigData(GameConfigBuildLog buildLog) { }

}

