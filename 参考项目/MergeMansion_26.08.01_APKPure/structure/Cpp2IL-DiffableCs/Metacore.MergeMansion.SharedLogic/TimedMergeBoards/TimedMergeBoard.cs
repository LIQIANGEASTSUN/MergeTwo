namespace TimedMergeBoards;

[MetaSerializable]
public class TimedMergeBoard : IGameConfigData<MergeBoardId>, IGameConfigData, IHasGameConfigKey<MergeBoardId>, IValidatable, IHasRequirements, IMergeBoardGenerator
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<EventLevelInfo, Int32> <>9__44_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal int <GetMaxProgress>b__44_0(EventLevelInfo level) { }

	}

	[CompilerGenerated]
	private MergeBoardId <Id>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private MetaDuration <Duration>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private MergeBoardGeneratorId <GeneratorId>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private List<PlayerRequirement> <PlayerRequirements>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private ItemDef <FinalItemDef>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private List<PlayerRequirement> <CompletesRequirements>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private List<MetaRef`1<EventLevelInfo>> <LevelInfos>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x48

	public IEnumerable<IPlayerRequirement> CompleteRequirements
	{
		 get { } //Length: 8
	}

	[MetaMember(6, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixPlayerRequirements")]
	public List<PlayerRequirement> CompletesRequirements
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override MergeBoardId ConfigKey
	{
		 get { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public MetaDuration Duration
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
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

	[MetaMember(5, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixItemRef")]
	public private ItemDef FinalItemDef
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	private MergeBoardGeneratorId GeneratorId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	private MergeBoardId Id
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(7, MetaMemberFlags::None (0))]
	public List<MetaRef`1<EventLevelInfo>> LevelInfos
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixPlayerRequirements")]
	private List<PlayerRequirement> PlayerRequirements
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override IEnumerable<PlayerRequirement> Requirements
	{
		 get { } //Length: 8
	}

	public TimedMergeBoard(MergeBoardId id, MergeBoardGeneratorId generatorId, MetaDuration duration, ItemDef finalItemDef, List<PlayerRequirement> playerRequirements, List<PlayerRequirement> completesRequirements, List<MetaRef`1<EventLevelInfo>> levelInfos, int experimentPriority) { }

	public TimedMergeBoard() { }

	public static ItemDef FixItemRef(MetaMemberDeserializationFailureParams failureParams) { }

	private static List<PlayerRequirement> FixPlayerRequirements(MetaMemberDeserializationFailureParams failureParams) { }

	public override MergeBoard GenerateBoard(IPlayer player, IGenerationContext generationContext, IMergeMansionGameConfig gameConfig, MetaTime creationTime) { }

	public IEnumerable<IPlayerRequirement> get_CompleteRequirements() { }

	[CompilerGenerated]
	public List<PlayerRequirement> get_CompletesRequirements() { }

	public override MergeBoardId get_ConfigKey() { }

	[CompilerGenerated]
	public MetaDuration get_Duration() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	public ItemDef get_FinalItemDef() { }

	[CompilerGenerated]
	private MergeBoardGeneratorId get_GeneratorId() { }

	[CompilerGenerated]
	private MergeBoardId get_Id() { }

	[CompilerGenerated]
	public List<MetaRef`1<EventLevelInfo>> get_LevelInfos() { }

	[CompilerGenerated]
	private List<PlayerRequirement> get_PlayerRequirements() { }

	public override IEnumerable<PlayerRequirement> get_Requirements() { }

	public int GetLevelCount() { }

	public EventLevelInfo GetLevelInfo(int index) { }

	public int GetMaxProgress() { }

	public int GetReachedLevelNdx(int progress) { }

	public IEnumerable<EventLevelInfo> GetRewardsUpToLevel(int index) { }

	[CompilerGenerated]
	public void set_CompletesRequirements(List<PlayerRequirement> value) { }

	[CompilerGenerated]
	public void set_Duration(MetaDuration value) { }

	[CompilerGenerated]
	private void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_FinalItemDef(ItemDef value) { }

	[CompilerGenerated]
	private void set_GeneratorId(MergeBoardGeneratorId value) { }

	[CompilerGenerated]
	private void set_Id(MergeBoardId value) { }

	[CompilerGenerated]
	public void set_LevelInfos(List<MetaRef`1<EventLevelInfo>> value) { }

	[CompilerGenerated]
	private void set_PlayerRequirements(List<PlayerRequirement> value) { }

	public override void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

