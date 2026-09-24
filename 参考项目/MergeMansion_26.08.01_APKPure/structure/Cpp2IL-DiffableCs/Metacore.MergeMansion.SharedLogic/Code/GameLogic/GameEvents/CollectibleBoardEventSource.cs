namespace Code.GameLogic.GameEvents;

public class CollectibleBoardEventSource : IConfigItemSource<CollectibleBoardEventInfo, CollectibleBoardEventId>, IGameConfigSourceItem<CollectibleBoardEventId, CollectibleBoardEventInfo>, IHasGameConfigKey<CollectibleBoardEventId>
{
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private CollectibleBoardEventId <EventId>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private string <NameLocId>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private string <DisplayName>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private string <Description>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private List<MetaRef`1<PlayerSegmentInfo>> <Segments>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private bool <IsEnabled>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private MetaScheduleBase <Schedule>k__BackingField; //Field offset: 0x48
	[CompilerGenerated]
	private List<MetaRef`1<BoardInfo>> <Board>k__BackingField; //Field offset: 0x50
	[CompilerGenerated]
	private List<MetaRef`1<EventLevelInfo>> <Levels>k__BackingField; //Field offset: 0x58
	[CompilerGenerated]
	private List<MetaRef`1<EventLevelInfo>> <RecurringLevels>k__BackingField; //Field offset: 0x60
	[CompilerGenerated]
	private string <FallbackLevels>k__BackingField; //Field offset: 0x68
	[CompilerGenerated]
	private StoryDefinitionId <EnterBoardDialogue>k__BackingField; //Field offset: 0x70
	[CompilerGenerated]
	private List<OfferPlacementId> <BoardShopPlacementId>k__BackingField; //Field offset: 0x78
	[CompilerGenerated]
	private StoryDefinitionId <EndDialogue>k__BackingField; //Field offset: 0x80
	[CompilerGenerated]
	private DecorationId <ActiveDecoration>k__BackingField; //Field offset: 0x88
	[CompilerGenerated]
	private List<Int32> <ProgressionPopupHeaderImageLevels>k__BackingField; //Field offset: 0x90
	[CompilerGenerated]
	private string <EventInitTask>k__BackingField; //Field offset: 0x98
	[CompilerGenerated]
	private string <EventTasks>k__BackingField; //Field offset: 0xA0
	[CompilerGenerated]
	private StoryDefinitionId <StartDialogue>k__BackingField; //Field offset: 0xA8
	[CompilerGenerated]
	private CutsceneId <StartCutscene>k__BackingField; //Field offset: 0xB0
	[CompilerGenerated]
	private string <PreviewRequirementType>k__BackingField; //Field offset: 0xB8
	[CompilerGenerated]
	private string <PreviewRequirementId>k__BackingField; //Field offset: 0xC0
	[CompilerGenerated]
	private string <PreviewRequirementAmount>k__BackingField; //Field offset: 0xC8
	[CompilerGenerated]
	private string <PreviewRequirementAux0>k__BackingField; //Field offset: 0xD0
	[CompilerGenerated]
	private string <UnlockRequirementType>k__BackingField; //Field offset: 0xD8
	[CompilerGenerated]
	private string <UnlockRequirementId>k__BackingField; //Field offset: 0xE0
	[CompilerGenerated]
	private string <UnlockRequirementAmount>k__BackingField; //Field offset: 0xE8
	[CompilerGenerated]
	private string <UnlockRequirementAux0>k__BackingField; //Field offset: 0xF0
	[CompilerGenerated]
	private int <MaxExtensions>k__BackingField; //Field offset: 0xF8
	[CompilerGenerated]
	private MetaDuration <ExtensionDuration>k__BackingField; //Field offset: 0x100
	[CompilerGenerated]
	private MetaDuration <ExtensionReviewDuration>k__BackingField; //Field offset: 0x108
	[CompilerGenerated]
	private MetaRef<InAppProductInfo> <ExtensionInAppProduct>k__BackingField; //Field offset: 0x110
	[CompilerGenerated]
	private MetaDuration <ExtensionPurchaseSafetyMargin>k__BackingField; //Field offset: 0x118
	[CompilerGenerated]
	private List<String> <ExtensionRewardType>k__BackingField; //Field offset: 0x120
	[CompilerGenerated]
	private List<String> <ExtensionRewardId>k__BackingField; //Field offset: 0x128
	[CompilerGenerated]
	private List<Int32> <ExtensionRewardAmount>k__BackingField; //Field offset: 0x130
	[CompilerGenerated]
	private List<String> <ExtensionRewardAux0>k__BackingField; //Field offset: 0x138
	[CompilerGenerated]
	private List<String> <ExtensionRewardAux1>k__BackingField; //Field offset: 0x140
	[CompilerGenerated]
	private EventGroupId <GroupId>k__BackingField; //Field offset: 0x148
	[CompilerGenerated]
	private Nullable<MetaDuration> <AuxEnergyUnitRestoreDuration>k__BackingField; //Field offset: 0x150
	[CompilerGenerated]
	private int <AuxEnergyAttachmentChance>k__BackingField; //Field offset: 0x160
	[CompilerGenerated]
	private bool <DisableBubbleBonus>k__BackingField; //Field offset: 0x164
	[CompilerGenerated]
	private Nullable<F32> <BubbleBonusDivisor>k__BackingField; //Field offset: 0x168
	[CompilerGenerated]
	private List<Int32> <SecondaryBoardDivisorEnergyType>k__BackingField; //Field offset: 0x170
	[CompilerGenerated]
	private List<F32> <SecondaryBoardBubbleDivisorOverride>k__BackingField; //Field offset: 0x178
	[CompilerGenerated]
	private List<Boolean> <SecondaryBoardBubbleDivisorEnabled>k__BackingField; //Field offset: 0x180
	[CompilerGenerated]
	private bool <ShouldReset>k__BackingField; //Field offset: 0x188
	[CompilerGenerated]
	private MergeChainId <PersistingChainID>k__BackingField; //Field offset: 0x190
	[CompilerGenerated]
	private LuckyType <LuckyType>k__BackingField; //Field offset: 0x198
	[CompilerGenerated]
	private int <Priority>k__BackingField; //Field offset: 0x19C
	[CompilerGenerated]
	private string <ContextCategory>k__BackingField; //Field offset: 0x1A0
	[CompilerGenerated]
	private string <ContextSubCategory>k__BackingField; //Field offset: 0x1A8
	[CompilerGenerated]
	private string <ConnectedMinigameId>k__BackingField; //Field offset: 0x1B0
	[CompilerGenerated]
	private string <PrefabsOverride>k__BackingField; //Field offset: 0x1B8
	[CompilerGenerated]
	private bool <ForceLocationTravel>k__BackingField; //Field offset: 0x1C0
	[CompilerGenerated]
	private List<ProgressionTrackId> <EventProgressionTracks>k__BackingField; //Field offset: 0x1C8
	[CompilerGenerated]
	private int <StaticPriority>k__BackingField; //Field offset: 0x1D0
	[CompilerGenerated]
	private int <DynamicPriorityTriggerThreshold>k__BackingField; //Field offset: 0x1D4
	[CompilerGenerated]
	private MetaActivableTimelineSettings <Timeline>k__BackingField; //Field offset: 0x1D8

	private DecorationId ActiveDecoration
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private int AuxEnergyAttachmentChance
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private Nullable<MetaDuration> AuxEnergyUnitRestoreDuration
	{
		[CompilerGenerated]
		private get { } //Length: 12
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<MetaRef`1<BoardInfo>> Board
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<OfferPlacementId> BoardShopPlacementId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private Nullable<F32> BubbleBonusDivisor
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override CollectibleBoardEventId ConfigKey
	{
		 get { } //Length: 8
	}

	private string ConnectedMinigameId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	private string ContextCategory
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	private string ContextSubCategory
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	private string Description
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private bool DisableBubbleBonus
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

	private StoryDefinitionId EndDialogue
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private StoryDefinitionId EnterBoardDialogue
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private CollectibleBoardEventId EventId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string EventInitTask
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<ProgressionTrackId> EventProgressionTracks
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	private string EventTasks
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

	private MetaDuration ExtensionDuration
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private MetaRef<InAppProductInfo> ExtensionInAppProduct
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	private MetaDuration ExtensionPurchaseSafetyMargin
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private MetaDuration ExtensionReviewDuration
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<Int32> ExtensionRewardAmount
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	private List<String> ExtensionRewardAux0
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	private List<String> ExtensionRewardAux1
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	private List<String> ExtensionRewardId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	private List<String> ExtensionRewardType
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	private string FallbackLevels
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
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
		private set { } //Length: 16
	}

	private bool IsEnabled
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<MetaRef`1<EventLevelInfo>> Levels
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private LuckyType LuckyType
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private int MaxExtensions
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string NameLocId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private MergeChainId PersistingChainID
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	private string PrefabsOverride
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	private string PreviewRequirementAmount
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string PreviewRequirementAux0
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string PreviewRequirementId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string PreviewRequirementType
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

	private List<Int32> ProgressionPopupHeaderImageLevels
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<MetaRef`1<EventLevelInfo>> RecurringLevels
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

	private List<Boolean> SecondaryBoardBubbleDivisorEnabled
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	private List<F32> SecondaryBoardBubbleDivisorOverride
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	private List<Int32> SecondaryBoardDivisorEnergyType
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	private List<MetaRef`1<PlayerSegmentInfo>> Segments
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private bool ShouldReset
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private CutsceneId StartCutscene
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private StoryDefinitionId StartDialogue
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
		 set { } //Length: 16
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

	public CollectibleBoardEventSource() { }

	[CompilerGenerated]
	private DecorationId get_ActiveDecoration() { }

	[CompilerGenerated]
	private int get_AuxEnergyAttachmentChance() { }

	[CompilerGenerated]
	private Nullable<MetaDuration> get_AuxEnergyUnitRestoreDuration() { }

	[CompilerGenerated]
	private List<MetaRef`1<BoardInfo>> get_Board() { }

	[CompilerGenerated]
	private List<OfferPlacementId> get_BoardShopPlacementId() { }

	[CompilerGenerated]
	private Nullable<F32> get_BubbleBonusDivisor() { }

	public override CollectibleBoardEventId get_ConfigKey() { }

	[CompilerGenerated]
	private string get_ConnectedMinigameId() { }

	[CompilerGenerated]
	private string get_ContextCategory() { }

	[CompilerGenerated]
	private string get_ContextSubCategory() { }

	[CompilerGenerated]
	private string get_Description() { }

	[CompilerGenerated]
	private bool get_DisableBubbleBonus() { }

	[CompilerGenerated]
	private string get_DisplayName() { }

	[CompilerGenerated]
	private int get_DynamicPriorityTriggerThreshold() { }

	[CompilerGenerated]
	private StoryDefinitionId get_EndDialogue() { }

	[CompilerGenerated]
	private StoryDefinitionId get_EnterBoardDialogue() { }

	[CompilerGenerated]
	private CollectibleBoardEventId get_EventId() { }

	[CompilerGenerated]
	private string get_EventInitTask() { }

	[CompilerGenerated]
	private List<ProgressionTrackId> get_EventProgressionTracks() { }

	[CompilerGenerated]
	private string get_EventTasks() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	private MetaDuration get_ExtensionDuration() { }

	[CompilerGenerated]
	private MetaRef<InAppProductInfo> get_ExtensionInAppProduct() { }

	[CompilerGenerated]
	private MetaDuration get_ExtensionPurchaseSafetyMargin() { }

	[CompilerGenerated]
	private MetaDuration get_ExtensionReviewDuration() { }

	[CompilerGenerated]
	private List<Int32> get_ExtensionRewardAmount() { }

	[CompilerGenerated]
	private List<String> get_ExtensionRewardAux0() { }

	[CompilerGenerated]
	private List<String> get_ExtensionRewardAux1() { }

	[CompilerGenerated]
	private List<String> get_ExtensionRewardId() { }

	[CompilerGenerated]
	private List<String> get_ExtensionRewardType() { }

	[CompilerGenerated]
	private string get_FallbackLevels() { }

	[CompilerGenerated]
	private bool get_ForceLocationTravel() { }

	[CompilerGenerated]
	private EventGroupId get_GroupId() { }

	[CompilerGenerated]
	private bool get_IsEnabled() { }

	[CompilerGenerated]
	private List<MetaRef`1<EventLevelInfo>> get_Levels() { }

	[CompilerGenerated]
	private LuckyType get_LuckyType() { }

	[CompilerGenerated]
	private int get_MaxExtensions() { }

	[CompilerGenerated]
	private string get_NameLocId() { }

	[CompilerGenerated]
	private MergeChainId get_PersistingChainID() { }

	[CompilerGenerated]
	private string get_PrefabsOverride() { }

	[CompilerGenerated]
	private string get_PreviewRequirementAmount() { }

	[CompilerGenerated]
	private string get_PreviewRequirementAux0() { }

	[CompilerGenerated]
	private string get_PreviewRequirementId() { }

	[CompilerGenerated]
	private string get_PreviewRequirementType() { }

	[CompilerGenerated]
	private int get_Priority() { }

	[CompilerGenerated]
	private List<Int32> get_ProgressionPopupHeaderImageLevels() { }

	[CompilerGenerated]
	private List<MetaRef`1<EventLevelInfo>> get_RecurringLevels() { }

	[CompilerGenerated]
	private MetaScheduleBase get_Schedule() { }

	[CompilerGenerated]
	private List<Boolean> get_SecondaryBoardBubbleDivisorEnabled() { }

	[CompilerGenerated]
	private List<F32> get_SecondaryBoardBubbleDivisorOverride() { }

	[CompilerGenerated]
	private List<Int32> get_SecondaryBoardDivisorEnergyType() { }

	[CompilerGenerated]
	private List<MetaRef`1<PlayerSegmentInfo>> get_Segments() { }

	[CompilerGenerated]
	private bool get_ShouldReset() { }

	[CompilerGenerated]
	private CutsceneId get_StartCutscene() { }

	[CompilerGenerated]
	private StoryDefinitionId get_StartDialogue() { }

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

	private List<MetaRef`1<EventTaskInfo>> ParseEventTasks() { }

	[CompilerGenerated]
	private void set_ActiveDecoration(DecorationId value) { }

	[CompilerGenerated]
	private void set_AuxEnergyAttachmentChance(int value) { }

	[CompilerGenerated]
	private void set_AuxEnergyUnitRestoreDuration(Nullable<MetaDuration> value) { }

	[CompilerGenerated]
	private void set_Board(List<MetaRef`1<BoardInfo>> value) { }

	[CompilerGenerated]
	private void set_BoardShopPlacementId(List<OfferPlacementId> value) { }

	[CompilerGenerated]
	private void set_BubbleBonusDivisor(Nullable<F32> value) { }

	[CompilerGenerated]
	private void set_ConnectedMinigameId(string value) { }

	[CompilerGenerated]
	private void set_ContextCategory(string value) { }

	[CompilerGenerated]
	private void set_ContextSubCategory(string value) { }

	[CompilerGenerated]
	private void set_Description(string value) { }

	[CompilerGenerated]
	private void set_DisableBubbleBonus(bool value) { }

	[CompilerGenerated]
	private void set_DisplayName(string value) { }

	[CompilerGenerated]
	private void set_DynamicPriorityTriggerThreshold(int value) { }

	[CompilerGenerated]
	private void set_EndDialogue(StoryDefinitionId value) { }

	[CompilerGenerated]
	private void set_EnterBoardDialogue(StoryDefinitionId value) { }

	[CompilerGenerated]
	private void set_EventId(CollectibleBoardEventId value) { }

	[CompilerGenerated]
	private void set_EventInitTask(string value) { }

	[CompilerGenerated]
	private void set_EventProgressionTracks(List<ProgressionTrackId> value) { }

	[CompilerGenerated]
	private void set_EventTasks(string value) { }

	[CompilerGenerated]
	public void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_ExtensionDuration(MetaDuration value) { }

	[CompilerGenerated]
	private void set_ExtensionInAppProduct(MetaRef<InAppProductInfo> value) { }

	[CompilerGenerated]
	private void set_ExtensionPurchaseSafetyMargin(MetaDuration value) { }

	[CompilerGenerated]
	private void set_ExtensionReviewDuration(MetaDuration value) { }

	[CompilerGenerated]
	private void set_ExtensionRewardAmount(List<Int32> value) { }

	[CompilerGenerated]
	private void set_ExtensionRewardAux0(List<String> value) { }

	[CompilerGenerated]
	private void set_ExtensionRewardAux1(List<String> value) { }

	[CompilerGenerated]
	private void set_ExtensionRewardId(List<String> value) { }

	[CompilerGenerated]
	private void set_ExtensionRewardType(List<String> value) { }

	[CompilerGenerated]
	private void set_FallbackLevels(string value) { }

	[CompilerGenerated]
	private void set_ForceLocationTravel(bool value) { }

	[CompilerGenerated]
	private void set_GroupId(EventGroupId value) { }

	[CompilerGenerated]
	private void set_IsEnabled(bool value) { }

	[CompilerGenerated]
	private void set_Levels(List<MetaRef`1<EventLevelInfo>> value) { }

	[CompilerGenerated]
	private void set_LuckyType(LuckyType value) { }

	[CompilerGenerated]
	private void set_MaxExtensions(int value) { }

	[CompilerGenerated]
	private void set_NameLocId(string value) { }

	[CompilerGenerated]
	private void set_PersistingChainID(MergeChainId value) { }

	[CompilerGenerated]
	private void set_PrefabsOverride(string value) { }

	[CompilerGenerated]
	private void set_PreviewRequirementAmount(string value) { }

	[CompilerGenerated]
	private void set_PreviewRequirementAux0(string value) { }

	[CompilerGenerated]
	private void set_PreviewRequirementId(string value) { }

	[CompilerGenerated]
	private void set_PreviewRequirementType(string value) { }

	[CompilerGenerated]
	private void set_Priority(int value) { }

	[CompilerGenerated]
	private void set_ProgressionPopupHeaderImageLevels(List<Int32> value) { }

	[CompilerGenerated]
	private void set_RecurringLevels(List<MetaRef`1<EventLevelInfo>> value) { }

	[CompilerGenerated]
	private void set_Schedule(MetaScheduleBase value) { }

	[CompilerGenerated]
	private void set_SecondaryBoardBubbleDivisorEnabled(List<Boolean> value) { }

	[CompilerGenerated]
	private void set_SecondaryBoardBubbleDivisorOverride(List<F32> value) { }

	[CompilerGenerated]
	private void set_SecondaryBoardDivisorEnergyType(List<Int32> value) { }

	[CompilerGenerated]
	private void set_Segments(List<MetaRef`1<PlayerSegmentInfo>> value) { }

	[CompilerGenerated]
	private void set_ShouldReset(bool value) { }

	[CompilerGenerated]
	private void set_StartCutscene(CutsceneId value) { }

	[CompilerGenerated]
	private void set_StartDialogue(StoryDefinitionId value) { }

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

	public override CollectibleBoardEventInfo ToConfigData(GameConfigBuildLog buildLog) { }

}

