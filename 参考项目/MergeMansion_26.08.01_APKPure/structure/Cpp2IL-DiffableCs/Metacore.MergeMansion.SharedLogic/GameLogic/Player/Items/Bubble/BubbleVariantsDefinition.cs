namespace GameLogic.Player.Items.Bubble;

[MetaSerializable]
public class BubbleVariantsDefinition : IGameConfigData<BubbleVariationId>, IGameConfigData, IHasGameConfigKey<BubbleVariationId>
{
	[CompilerGenerated]
	private BubbleVariationId <ConfigKey>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private MetaDuration <BubbleDuration>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private Currencies <OpenCurrency>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private int <OpenCost>k__BackingField; //Field offset: 0x24
	[CompilerGenerated]
	private ItemDef <ReplacementItem>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private int <SpawnOdds>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private List<PlayerSegmentId> <Segments>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private int <Priority>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private List<PlayerRequirement> <PlayerRequirements>k__BackingField; //Field offset: 0x48
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x50

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private MetaDuration BubbleDuration
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override BubbleVariationId ConfigKey
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(999, MetaMemberFlags::None (0))]
	[MetaSerializerOmitNull]
	public private override int ExperimentPriority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private int OpenCost
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private Currencies OpenCurrency
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(9, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixPlayerRequirements")]
	public private List<PlayerRequirement> PlayerRequirements
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(8, MetaMemberFlags::None (0))]
	public private int Priority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixItemRef")]
	public private ItemDef ReplacementItem
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(7, MetaMemberFlags::None (0))]
	public private List<PlayerSegmentId> Segments
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(6, MetaMemberFlags::None (0))]
	public private int SpawnOdds
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public BubbleVariantsDefinition(BubbleVariationId configKey, MetaDuration bubbleDuration, Currencies openCurrency, int openCost, int replacementItem, int spawnOdds, int priority, List<PlayerSegmentId> segments, List<PlayerRequirement> playerRequirements, int experimentPriority) { }

	public BubbleVariantsDefinition() { }

	public static ItemDef FixItemRef(MetaMemberDeserializationFailureParams failureParams) { }

	private static List<PlayerRequirement> FixPlayerRequirements(MetaMemberDeserializationFailureParams failureParams) { }

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
	public List<PlayerRequirement> get_PlayerRequirements() { }

	[CompilerGenerated]
	public int get_Priority() { }

	[CompilerGenerated]
	public ItemDef get_ReplacementItem() { }

	[CompilerGenerated]
	public List<PlayerSegmentId> get_Segments() { }

	[CompilerGenerated]
	public int get_SpawnOdds() { }

	[CompilerGenerated]
	private void set_BubbleDuration(MetaDuration value) { }

	[CompilerGenerated]
	private void set_ConfigKey(BubbleVariationId value) { }

	[CompilerGenerated]
	private void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_OpenCost(int value) { }

	[CompilerGenerated]
	private void set_OpenCurrency(Currencies value) { }

	[CompilerGenerated]
	private void set_PlayerRequirements(List<PlayerRequirement> value) { }

	[CompilerGenerated]
	private void set_Priority(int value) { }

	[CompilerGenerated]
	private void set_ReplacementItem(ItemDef value) { }

	[CompilerGenerated]
	private void set_Segments(List<PlayerSegmentId> value) { }

	[CompilerGenerated]
	private void set_SpawnOdds(int value) { }

}

