namespace Code.GameLogic.GameEvents;

public class GarageCleanupEventSourceConfigItem : IConfigItemSource<GarageCleanupEventInfo, GarageCleanupEventId>, IGameConfigSourceItem<GarageCleanupEventId, GarageCleanupEventInfo>, IHasGameConfigKey<GarageCleanupEventId>
{
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private GarageCleanupEventId <ConfigKey>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private string <DisplayName>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private string <Description>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private bool <IsEnabled>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private List<String> <SpawnerItem>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private List<GarageCleanupBoardId> <Board>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private List<MetaRef`1<GarageCleanupPatternSetInfo>> <PatternSet>k__BackingField; //Field offset: 0x48
	[CompilerGenerated]
	private List<Int32> <BoardCost>k__BackingField; //Field offset: 0x50
	[CompilerGenerated]
	private List<MetaRef`1<GarageCleanupRewardInfo>> <SlotFillReward>k__BackingField; //Field offset: 0x58
	[CompilerGenerated]
	private List<MetaRef`1<PlayerSegmentInfo>> <Segments>k__BackingField; //Field offset: 0x60
	[CompilerGenerated]
	private MetaScheduleBase <Schedule>k__BackingField; //Field offset: 0x68
	[CompilerGenerated]
	private MergeBoardId <MergeBoardId>k__BackingField; //Field offset: 0x70
	[CompilerGenerated]
	private string <UnlockRequirementType>k__BackingField; //Field offset: 0x78
	[CompilerGenerated]
	private string <UnlockRequirementId>k__BackingField; //Field offset: 0x80
	[CompilerGenerated]
	private string <UnlockRequirementAmount>k__BackingField; //Field offset: 0x88
	[CompilerGenerated]
	private string <UnlockRequirementAux0>k__BackingField; //Field offset: 0x90
	[CompilerGenerated]
	private string <PrefabsOverride>k__BackingField; //Field offset: 0x98
	[CompilerGenerated]
	private bool <AlwaysShowPatternsAndRewards>k__BackingField; //Field offset: 0xA0
	[CompilerGenerated]
	private EventGroupId <GroupId>k__BackingField; //Field offset: 0xA8
	[CompilerGenerated]
	private int <Priority>k__BackingField; //Field offset: 0xB0
	[CompilerGenerated]
	private string <ContextCategory>k__BackingField; //Field offset: 0xB8
	[CompilerGenerated]
	private string <ContextSubCategory>k__BackingField; //Field offset: 0xC0
	[CompilerGenerated]
	private bool <ForceLocationTravel>k__BackingField; //Field offset: 0xC8
	[CompilerGenerated]
	private int <StaticPriority>k__BackingField; //Field offset: 0xCC
	[CompilerGenerated]
	private int <DynamicPriorityTriggerThreshold>k__BackingField; //Field offset: 0xD0
	[CompilerGenerated]
	private MetaActivableTimelineSettings <Timeline>k__BackingField; //Field offset: 0xD8

	private bool AlwaysShowPatternsAndRewards
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<GarageCleanupBoardId> Board
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<Int32> BoardCost
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override GarageCleanupEventId ConfigKey
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	private string ContextCategory
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string ContextSubCategory
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string Description
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string DisplayName
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private int DynamicPriorityTriggerThreshold
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override int ExperimentPriority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	private bool ForceLocationTravel
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private EventGroupId GroupId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private bool IsEnabled
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private MergeBoardId MergeBoardId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<MetaRef`1<GarageCleanupPatternSetInfo>> PatternSet
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string PrefabsOverride
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private int Priority
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private MetaScheduleBase Schedule
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<MetaRef`1<PlayerSegmentInfo>> Segments
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<MetaRef`1<GarageCleanupRewardInfo>> SlotFillReward
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<String> SpawnerItem
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private int StaticPriority
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public MetaActivableTimelineSettings Timeline
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	private string UnlockRequirementAmount
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string UnlockRequirementAux0
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string UnlockRequirementId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string UnlockRequirementType
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public GarageCleanupEventSourceConfigItem() { }

	[CompilerGenerated]
	private bool get_AlwaysShowPatternsAndRewards() { }

	[CompilerGenerated]
	private List<GarageCleanupBoardId> get_Board() { }

	[CompilerGenerated]
	private List<Int32> get_BoardCost() { }

	[CompilerGenerated]
	public override GarageCleanupEventId get_ConfigKey() { }

	[CompilerGenerated]
	private string get_ContextCategory() { }

	[CompilerGenerated]
	private string get_ContextSubCategory() { }

	[CompilerGenerated]
	private string get_Description() { }

	[CompilerGenerated]
	private string get_DisplayName() { }

	[CompilerGenerated]
	private int get_DynamicPriorityTriggerThreshold() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	private bool get_ForceLocationTravel() { }

	[CompilerGenerated]
	private EventGroupId get_GroupId() { }

	[CompilerGenerated]
	private bool get_IsEnabled() { }

	[CompilerGenerated]
	private MergeBoardId get_MergeBoardId() { }

	[CompilerGenerated]
	private List<MetaRef`1<GarageCleanupPatternSetInfo>> get_PatternSet() { }

	[CompilerGenerated]
	private string get_PrefabsOverride() { }

	[CompilerGenerated]
	private int get_Priority() { }

	[CompilerGenerated]
	private MetaScheduleBase get_Schedule() { }

	[CompilerGenerated]
	private List<MetaRef`1<PlayerSegmentInfo>> get_Segments() { }

	[CompilerGenerated]
	private List<MetaRef`1<GarageCleanupRewardInfo>> get_SlotFillReward() { }

	[CompilerGenerated]
	private List<String> get_SpawnerItem() { }

	[CompilerGenerated]
	private int get_StaticPriority() { }

	[CompilerGenerated]
	public MetaActivableTimelineSettings get_Timeline() { }

	[CompilerGenerated]
	private string get_UnlockRequirementAmount() { }

	[CompilerGenerated]
	private string get_UnlockRequirementAux0() { }

	[CompilerGenerated]
	private string get_UnlockRequirementId() { }

	[CompilerGenerated]
	private string get_UnlockRequirementType() { }

	[CompilerGenerated]
	private void set_AlwaysShowPatternsAndRewards(bool value) { }

	[CompilerGenerated]
	private void set_Board(List<GarageCleanupBoardId> value) { }

	[CompilerGenerated]
	private void set_BoardCost(List<Int32> value) { }

	[CompilerGenerated]
	public void set_ConfigKey(GarageCleanupEventId value) { }

	[CompilerGenerated]
	private void set_ContextCategory(string value) { }

	[CompilerGenerated]
	private void set_ContextSubCategory(string value) { }

	[CompilerGenerated]
	private void set_Description(string value) { }

	[CompilerGenerated]
	private void set_DisplayName(string value) { }

	[CompilerGenerated]
	private void set_DynamicPriorityTriggerThreshold(int value) { }

	[CompilerGenerated]
	public void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_ForceLocationTravel(bool value) { }

	[CompilerGenerated]
	private void set_GroupId(EventGroupId value) { }

	[CompilerGenerated]
	private void set_IsEnabled(bool value) { }

	[CompilerGenerated]
	private void set_MergeBoardId(MergeBoardId value) { }

	[CompilerGenerated]
	private void set_PatternSet(List<MetaRef`1<GarageCleanupPatternSetInfo>> value) { }

	[CompilerGenerated]
	private void set_PrefabsOverride(string value) { }

	[CompilerGenerated]
	private void set_Priority(int value) { }

	[CompilerGenerated]
	private void set_Schedule(MetaScheduleBase value) { }

	[CompilerGenerated]
	private void set_Segments(List<MetaRef`1<PlayerSegmentInfo>> value) { }

	[CompilerGenerated]
	private void set_SlotFillReward(List<MetaRef`1<GarageCleanupRewardInfo>> value) { }

	[CompilerGenerated]
	private void set_SpawnerItem(List<String> value) { }

	[CompilerGenerated]
	private void set_StaticPriority(int value) { }

	[CompilerGenerated]
	public void set_Timeline(MetaActivableTimelineSettings value) { }

	[CompilerGenerated]
	private void set_UnlockRequirementAmount(string value) { }

	[CompilerGenerated]
	private void set_UnlockRequirementAux0(string value) { }

	[CompilerGenerated]
	private void set_UnlockRequirementId(string value) { }

	[CompilerGenerated]
	private void set_UnlockRequirementType(string value) { }

	public override GarageCleanupEventInfo ToConfigData(GameConfigBuildLog buildLog) { }

}

