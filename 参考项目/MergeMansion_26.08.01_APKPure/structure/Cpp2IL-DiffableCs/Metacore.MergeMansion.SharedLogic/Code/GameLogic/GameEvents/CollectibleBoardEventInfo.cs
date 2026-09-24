namespace Code.GameLogic.GameEvents;

[DefaultMember("Item")]
[MetaActivableConfigData("CollectibleBoardEvent", False, True)]
[MetaBlockedMembers(new IL2CPP_TYPE_I4[] {6, 7, 13, 24, 27, 40})]
[MetaSerializable]
public class CollectibleBoardEventInfo : IMetaActivableConfigData<CollectibleBoardEventId>, IMetaActivableConfigData, IGameConfigData, IMetaActivableInfo, IGameConfigData<CollectibleBoardEventId>, IHasGameConfigKey<CollectibleBoardEventId>, IMetaActivableInfo<CollectibleBoardEventId>, ILevelBoardEventInfo, ILevelEventInfo, IBoardEventInfo, IHasRequirement, IBubbleBonusEvent, IEventSharedInfo, IPrioritizedEvent, IVisibilityStrategy<CollectibleBoardEventId, CollectibleBoardEventInfo, CollectibleBoardEventModel>
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass197_0
	{
		public EventTaskId taskId; //Field offset: 0x10

		public <>c__DisplayClass197_0() { }

		internal bool <get_Item>b__0(MetaRef<EventTaskInfo> task) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass200_0
	{
		public EventTaskId taskId; //Field offset: 0x10

		public <>c__DisplayClass200_0() { }

		internal bool <TryGetTask>b__0(MetaRef<EventTaskInfo> task) { }

	}

	[CompilerGenerated]
	private CollectibleBoardEventId <CollectibleBoardEventId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private string <NameLocId>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private string <DisplayName>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private string <Description>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private MetaActivableParams <ActivableParams>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private List<MetaRef`1<BoardInfo>> <BoardRefs>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private List<MetaRef`1<EventLevelInfo>> <LevelRefs>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private List<MetaRef`1<EventLevelInfo>> <RecurringLevelRefs>k__BackingField; //Field offset: 0x48
	[CompilerGenerated]
	private MetaDictionary<EventLevelId, MetaRef`1<EventLevelInfo>> <FallbackLevelRefs>k__BackingField; //Field offset: 0x50
	[CompilerGenerated]
	private StoryDefinitionId <EnterBoardDialogue>k__BackingField; //Field offset: 0x58
	[CompilerGenerated]
	private PlayerRequirement <UnlockRequirement>k__BackingField; //Field offset: 0x60
	[CompilerGenerated]
	private List<OfferPlacementId> <BoardShopPlacementIds>k__BackingField; //Field offset: 0x68
	[CompilerGenerated]
	private StoryDefinitionId <EndDialogue>k__BackingField; //Field offset: 0x70
	[CompilerGenerated]
	private MetaRef<DecorationInfo> <ActiveDecorationRef>k__BackingField; //Field offset: 0x78
	[CompilerGenerated]
	private List<Int32> <ProgressionPopupHeaderImageLevels>k__BackingField; //Field offset: 0x80
	[CompilerGenerated]
	private MetaRef<EventTaskInfo> <EventInitTask>k__BackingField; //Field offset: 0x88
	[CompilerGenerated]
	private List<MetaRef`1<EventTaskInfo>> <EventTasks>k__BackingField; //Field offset: 0x90
	[CompilerGenerated]
	private MetaRef<StoryElementInfo> <StartDialogueRef>k__BackingField; //Field offset: 0x98
	[CompilerGenerated]
	private ExtendableEventParams <ExtendableEventParams>k__BackingField; //Field offset: 0xA0
	[CompilerGenerated]
	private MetaRef<InAppProductInfo> <ExtensionInAppProduct>k__BackingField; //Field offset: 0xA8
	[CompilerGenerated]
	private MetaDuration <ExtensionPurchaseSafetyMargin>k__BackingField; //Field offset: 0xB0
	[CompilerGenerated]
	private List<PlayerReward> <ExtensionRewards>k__BackingField; //Field offset: 0xB8
	[CompilerGenerated]
	private PlayerRequirement <PreviewRequirement>k__BackingField; //Field offset: 0xC0
	[CompilerGenerated]
	private Nullable<F32> <BubbleBonusDivisor>k__BackingField; //Field offset: 0xC8
	[CompilerGenerated]
	private Nullable<MetaDuration> <AuxEnergyUnitRestoreDuration>k__BackingField; //Field offset: 0xD0
	[CompilerGenerated]
	private int <AuxEnergyAttachmentChance>k__BackingField; //Field offset: 0xE0
	[CompilerGenerated]
	private bool <DisableBubbleBonus>k__BackingField; //Field offset: 0xE4
	[CompilerGenerated]
	private EventGroupId <GroupId>k__BackingField; //Field offset: 0xE8
	[CompilerGenerated]
	private MetaRef<CutsceneInfo> <StartCutsceneRef>k__BackingField; //Field offset: 0xF0
	[CompilerGenerated]
	private List<BubbleBonusInfo> <SecondaryBoardBubbleBonus>k__BackingField; //Field offset: 0xF8
	[CompilerGenerated]
	private bool <ShouldReset>k__BackingField; //Field offset: 0x100
	[CompilerGenerated]
	private MergeChainId <PersistingChainID>k__BackingField; //Field offset: 0x108
	[CompilerGenerated]
	private LuckyType <LuckyType>k__BackingField; //Field offset: 0x110
	[CompilerGenerated]
	private int <Priority>k__BackingField; //Field offset: 0x114
	[CompilerGenerated]
	private EventCategoryInfo <CategoryInfo>k__BackingField; //Field offset: 0x118
	[CompilerGenerated]
	private string <ConnectedMinigameId>k__BackingField; //Field offset: 0x128
	[CompilerGenerated]
	private string <PrefabsOverride>k__BackingField; //Field offset: 0x130
	[CompilerGenerated]
	private bool <ForceLocationTravel>k__BackingField; //Field offset: 0x138
	[CompilerGenerated]
	private List<ProgressionTrackId> <EventProgressionTracks>k__BackingField; //Field offset: 0x140
	[CompilerGenerated]
	private int <StaticPriority>k__BackingField; //Field offset: 0x148
	[CompilerGenerated]
	private int <DynamicPriorityTriggerThreshold>k__BackingField; //Field offset: 0x14C
	[CompilerGenerated]
	private MetaActivableTimelineSettings <Timeline>k__BackingField; //Field offset: 0x150
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x158

	public override CollectibleBoardEventId ActivableId
	{
		 get { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	public private override MetaActivableParams ActivableParams
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public override DecorationInfo ActiveDecoration
	{
		 get { } //Length: 156
	}

	[MetaMember(15, MetaMemberFlags::None (0))]
	private MetaRef<DecorationInfo> ActiveDecorationRef
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(29, MetaMemberFlags::None (0))]
	public private int AuxEnergyAttachmentChance
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(28, MetaMemberFlags::None (0))]
	public private Nullable<MetaDuration> AuxEnergyUnitRestoreDuration
	{
		[CompilerGenerated]
		 get { } //Length: 12
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(32, MetaMemberFlags::None (0))]
	public private List<MetaRef`1<BoardInfo>> BoardRefs
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(33, MetaMemberFlags::None (0))]
	public private List<OfferPlacementId> BoardShopPlacementIds
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(26, MetaMemberFlags::None (0))]
	public private override Nullable<F32> BubbleBonusDivisor
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(41, MetaMemberFlags::None (0))]
	public private override EventCategoryInfo CategoryInfo
	{
		[CompilerGenerated]
		 get { } //Length: 12
		[CompilerGenerated]
		private set { } //Length: 24
	}

	[IgnoreDataMember]
	private override IStringId Code.GameLogic.GameEvents.IBoardEventInfo.BoardEventId
	{
		private get { } //Length: 8
	}

	[IgnoreDataMember]
	private override MergeBoardId Code.GameLogic.GameEvents.IBoardEventInfo.MergeBoardId
	{
		private get { } //Length: 208
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private CollectibleBoardEventId CollectibleBoardEventId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override CollectibleBoardEventId ConfigKey
	{
		 get { } //Length: 8
	}

	public List<PlayerReward> ConfiguredExtensionRewardsForValidation
	{
		 get { } //Length: 8
	}

	[MetaMember(42, MetaMemberFlags::None (0))]
	public private string ConnectedMinigameId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private override string Description
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(30, MetaMemberFlags::None (0))]
	public private bool DisableBubbleBonus
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private override string DisplayName
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override string DisplayShortInfo
	{
		 get { } //Length: 8
	}

	[MetaMember(47, MetaMemberFlags::None (0))]
	public private override int DynamicPriorityTriggerThreshold
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(14, MetaMemberFlags::None (0))]
	public private StoryDefinitionId EndDialogue
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(11, MetaMemberFlags::None (0))]
	public private StoryDefinitionId EnterBoardDialogue
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public string EventId
	{
		 get { } //Length: 24
	}

	[MetaMember(17, MetaMemberFlags::None (0))]
	public private MetaRef<EventTaskInfo> EventInitTask
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(45, MetaMemberFlags::None (0))]
	public private List<ProgressionTrackId> EventProgressionTracks
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(18, MetaMemberFlags::None (0))]
	public private List<MetaRef`1<EventTaskInfo>> EventTasks
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

	[MetaMember(20, MetaMemberFlags::None (0))]
	public private override ExtendableEventParams ExtendableEventParams
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(21, MetaMemberFlags::None (0))]
	public private override MetaRef<InAppProductInfo> ExtensionInAppProduct
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(22, MetaMemberFlags::None (0))]
	public private override MetaDuration ExtensionPurchaseSafetyMargin
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(23, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixPlayerRewards")]
	private List<PlayerReward> ExtensionRewards
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(10, MetaMemberFlags::None (0))]
	public private override MetaDictionary<EventLevelId, MetaRef`1<EventLevelInfo>> FallbackLevelRefs
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(44, MetaMemberFlags::None (0))]
	public bool ForceLocationTravel
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	private override PlayerRequirement GameLogic.Player.Requirements.IHasRequirement.Requirement
	{
		private get { } //Length: 8
	}

	[MetaMember(31, MetaMemberFlags::None (0))]
	private EventGroupId GroupId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override Option<EventGroupId> GroupIdOption
	{
		 get { } //Length: 92
	}

	[IgnoreDataMember]
	public BoardInfo InitialBoard
	{
		 get { } //Length: 128
	}

	[IgnoreDataMember]
	public EventTaskInfo Item
	{
		 get { } //Length: 280
	}

	[IgnoreDataMember]
	public override IStringId LevelEventId
	{
		 get { } //Length: 8
	}

	[MetaMember(8, MetaMemberFlags::None (0))]
	public private override List<MetaRef`1<EventLevelInfo>> LevelRefs
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(38, MetaMemberFlags::None (0))]
	public LuckyType LuckyType
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private string NameLocId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(37, MetaMemberFlags::None (0))]
	public MergeChainId PersistingChainID
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[MetaMember(43, MetaMemberFlags::None (0))]
	public string PrefabsOverride
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[MetaMember(25, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixPlayerRequirement")]
	public private PlayerRequirement PreviewRequirement
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(39, MetaMemberFlags::None (0))]
	public override int Priority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(16, MetaMemberFlags::None (0))]
	public private override List<Int32> ProgressionPopupHeaderImageLevels
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(9, MetaMemberFlags::None (0))]
	public private override List<MetaRef`1<EventLevelInfo>> RecurringLevelRefs
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(35, MetaMemberFlags::None (0))]
	public override List<BubbleBonusInfo> SecondaryBoardBubbleBonus
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override string SharedEventId
	{
		 get { } //Length: 24
	}

	[MetaMember(36, MetaMemberFlags::None (0))]
	public bool ShouldReset
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[IgnoreDataMember]
	public CutsceneInfo StartCutscene
	{
		 get { } //Length: 156
	}

	[MetaMember(34, MetaMemberFlags::None (0))]
	private MetaRef<CutsceneInfo> StartCutsceneRef
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public StoryElementInfo StartDialogue
	{
		 get { } //Length: 156
	}

	[MetaMember(19, MetaMemberFlags::None (0))]
	private MetaRef<StoryElementInfo> StartDialogueRef
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(46, MetaMemberFlags::None (0))]
	public private override int StaticPriority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(998, MetaMemberFlags::None (0))]
	[ServerOnly]
	public private override MetaActivableTimelineSettings Timeline
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(12, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixPlayerRequirement")]
	public private override PlayerRequirement UnlockRequirement
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public CollectibleBoardEventInfo(CollectibleBoardEventId collectibleBoardEventId, string nameLocId, string displayName, string description, MetaActivableParams activableParams, List<MetaRef`1<BoardInfo>> boardRefs, List<MetaRef`1<EventLevelInfo>> levelRefs, List<MetaRef`1<EventLevelInfo>> recurringLevelRefs, MetaDictionary<EventLevelId, MetaRef`1<EventLevelInfo>> fallbackLevelRefs, StoryDefinitionId enterBoardDialogue, PlayerRequirement unlockRequirement, List<OfferPlacementId> boardShopPlacementIds, StoryDefinitionId endDialogue, DecorationId activeDecoration, List<Int32> progressionPopupHeaderImageLevels, string initTask, List<MetaRef`1<EventTaskInfo>> eventTasks, StoryDefinitionId startDialogue, CutsceneId startCutscene, ExtendableEventParams extendableEventParams, MetaRef<InAppProductInfo> extensionInAppProduct, MetaDuration extensionPurchaseSafetyMargin, IEnumerable<PlayerReward> extensionRewards, PlayerRequirement previewRequirement, Nullable<MetaDuration> auxEnergyUnitRestoreDuration, int auxEnergyAttachmentChance, EventGroupId groupId, bool disableBubbleBonus, Nullable<F32> bubbleBonusDivisor, List<BubbleBonusInfo> secondaryBoardBubbleBonuses, bool shouldReset, MergeChainId persistingChainID, LuckyType luckyType, int priority, EventCategoryInfo categoryInfo, string connectedMinigameId, string prefabsOverride, bool forceLocationTravel, List<ProgressionTrackId> eventProgressionTracks, int staticPriority, int dynamicPriorityTriggerThreshold, MetaActivableTimelineSettings timeline, int experimentPriority) { }

	public CollectibleBoardEventInfo() { }

	public override bool CanExtendLatestActivation(PlayerModel player) { }

	public bool CanStartActivationBasedOnGroup(PlayerModel player) { }

	private override IStringId Code.GameLogic.GameEvents.IBoardEventInfo.get_BoardEventId() { }

	private override MergeBoardId Code.GameLogic.GameEvents.IBoardEventInfo.get_MergeBoardId() { }

	private static PlayerRequirement FixPlayerRequirement(MetaMemberDeserializationFailureParams failureParams) { }

	private static List<PlayerReward> FixPlayerRewards(MetaMemberDeserializationFailureParams failureParams) { }

	public static List<ItemDef> FixRefList(MetaMemberDeserializationFailureParams failureParams) { }

	private override PlayerRequirement GameLogic.Player.Requirements.IHasRequirement.get_Requirement() { }

	public override CollectibleBoardEventId get_ActivableId() { }

	[CompilerGenerated]
	public override MetaActivableParams get_ActivableParams() { }

	public override DecorationInfo get_ActiveDecoration() { }

	[CompilerGenerated]
	private MetaRef<DecorationInfo> get_ActiveDecorationRef() { }

	[CompilerGenerated]
	public int get_AuxEnergyAttachmentChance() { }

	[CompilerGenerated]
	public Nullable<MetaDuration> get_AuxEnergyUnitRestoreDuration() { }

	[CompilerGenerated]
	public List<MetaRef`1<BoardInfo>> get_BoardRefs() { }

	[CompilerGenerated]
	public List<OfferPlacementId> get_BoardShopPlacementIds() { }

	[CompilerGenerated]
	public override Nullable<F32> get_BubbleBonusDivisor() { }

	[CompilerGenerated]
	public override EventCategoryInfo get_CategoryInfo() { }

	[CompilerGenerated]
	public CollectibleBoardEventId get_CollectibleBoardEventId() { }

	public override CollectibleBoardEventId get_ConfigKey() { }

	public List<PlayerReward> get_ConfiguredExtensionRewardsForValidation() { }

	[CompilerGenerated]
	public string get_ConnectedMinigameId() { }

	[CompilerGenerated]
	public override string get_Description() { }

	[CompilerGenerated]
	public bool get_DisableBubbleBonus() { }

	[CompilerGenerated]
	public override string get_DisplayName() { }

	public override string get_DisplayShortInfo() { }

	[CompilerGenerated]
	public override int get_DynamicPriorityTriggerThreshold() { }

	[CompilerGenerated]
	public StoryDefinitionId get_EndDialogue() { }

	[CompilerGenerated]
	public StoryDefinitionId get_EnterBoardDialogue() { }

	public string get_EventId() { }

	[CompilerGenerated]
	public MetaRef<EventTaskInfo> get_EventInitTask() { }

	[CompilerGenerated]
	public List<ProgressionTrackId> get_EventProgressionTracks() { }

	[CompilerGenerated]
	public List<MetaRef`1<EventTaskInfo>> get_EventTasks() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	public override ExtendableEventParams get_ExtendableEventParams() { }

	[CompilerGenerated]
	public override MetaRef<InAppProductInfo> get_ExtensionInAppProduct() { }

	[CompilerGenerated]
	public override MetaDuration get_ExtensionPurchaseSafetyMargin() { }

	[CompilerGenerated]
	private List<PlayerReward> get_ExtensionRewards() { }

	[CompilerGenerated]
	public override MetaDictionary<EventLevelId, MetaRef`1<EventLevelInfo>> get_FallbackLevelRefs() { }

	[CompilerGenerated]
	public bool get_ForceLocationTravel() { }

	[CompilerGenerated]
	private EventGroupId get_GroupId() { }

	public override Option<EventGroupId> get_GroupIdOption() { }

	public BoardInfo get_InitialBoard() { }

	public EventTaskInfo get_Item(EventTaskId taskId) { }

	public override IStringId get_LevelEventId() { }

	[CompilerGenerated]
	public override List<MetaRef`1<EventLevelInfo>> get_LevelRefs() { }

	[CompilerGenerated]
	public LuckyType get_LuckyType() { }

	[CompilerGenerated]
	public string get_NameLocId() { }

	[CompilerGenerated]
	public MergeChainId get_PersistingChainID() { }

	[CompilerGenerated]
	public string get_PrefabsOverride() { }

	[CompilerGenerated]
	public PlayerRequirement get_PreviewRequirement() { }

	[CompilerGenerated]
	public override int get_Priority() { }

	[CompilerGenerated]
	public override List<Int32> get_ProgressionPopupHeaderImageLevels() { }

	[CompilerGenerated]
	public override List<MetaRef`1<EventLevelInfo>> get_RecurringLevelRefs() { }

	[CompilerGenerated]
	public override List<BubbleBonusInfo> get_SecondaryBoardBubbleBonus() { }

	public override string get_SharedEventId() { }

	[CompilerGenerated]
	public bool get_ShouldReset() { }

	public CutsceneInfo get_StartCutscene() { }

	[CompilerGenerated]
	private MetaRef<CutsceneInfo> get_StartCutsceneRef() { }

	public StoryElementInfo get_StartDialogue() { }

	[CompilerGenerated]
	private MetaRef<StoryElementInfo> get_StartDialogueRef() { }

	[CompilerGenerated]
	public override int get_StaticPriority() { }

	[CompilerGenerated]
	public override MetaActivableTimelineSettings get_Timeline() { }

	[CompilerGenerated]
	public override PlayerRequirement get_UnlockRequirement() { }

	public string GetEventPrefabsId() { }

	public override List<IPlayerReward> GetExtensionRewards(IPlayer player) { }

	public override bool IsEndingSoon(PlayerModel player) { }

	[CompilerGenerated]
	private void set_ActivableParams(MetaActivableParams value) { }

	[CompilerGenerated]
	private void set_ActiveDecorationRef(MetaRef<DecorationInfo> value) { }

	[CompilerGenerated]
	private void set_AuxEnergyAttachmentChance(int value) { }

	[CompilerGenerated]
	private void set_AuxEnergyUnitRestoreDuration(Nullable<MetaDuration> value) { }

	[CompilerGenerated]
	private void set_BoardRefs(List<MetaRef`1<BoardInfo>> value) { }

	[CompilerGenerated]
	private void set_BoardShopPlacementIds(List<OfferPlacementId> value) { }

	[CompilerGenerated]
	private void set_BubbleBonusDivisor(Nullable<F32> value) { }

	[CompilerGenerated]
	private void set_CategoryInfo(EventCategoryInfo value) { }

	[CompilerGenerated]
	private void set_CollectibleBoardEventId(CollectibleBoardEventId value) { }

	[CompilerGenerated]
	private void set_ConnectedMinigameId(string value) { }

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
	private void set_EventInitTask(MetaRef<EventTaskInfo> value) { }

	[CompilerGenerated]
	private void set_EventProgressionTracks(List<ProgressionTrackId> value) { }

	[CompilerGenerated]
	private void set_EventTasks(List<MetaRef`1<EventTaskInfo>> value) { }

	[CompilerGenerated]
	private void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_ExtendableEventParams(ExtendableEventParams value) { }

	[CompilerGenerated]
	private void set_ExtensionInAppProduct(MetaRef<InAppProductInfo> value) { }

	[CompilerGenerated]
	private void set_ExtensionPurchaseSafetyMargin(MetaDuration value) { }

	[CompilerGenerated]
	private void set_ExtensionRewards(List<PlayerReward> value) { }

	[CompilerGenerated]
	private void set_FallbackLevelRefs(MetaDictionary<EventLevelId, MetaRef`1<EventLevelInfo>> value) { }

	[CompilerGenerated]
	public void set_ForceLocationTravel(bool value) { }

	[CompilerGenerated]
	private void set_GroupId(EventGroupId value) { }

	[CompilerGenerated]
	private void set_LevelRefs(List<MetaRef`1<EventLevelInfo>> value) { }

	[CompilerGenerated]
	public void set_LuckyType(LuckyType value) { }

	[CompilerGenerated]
	private void set_NameLocId(string value) { }

	[CompilerGenerated]
	public void set_PersistingChainID(MergeChainId value) { }

	[CompilerGenerated]
	public void set_PrefabsOverride(string value) { }

	[CompilerGenerated]
	private void set_PreviewRequirement(PlayerRequirement value) { }

	[CompilerGenerated]
	public void set_Priority(int value) { }

	[CompilerGenerated]
	private void set_ProgressionPopupHeaderImageLevels(List<Int32> value) { }

	[CompilerGenerated]
	private void set_RecurringLevelRefs(List<MetaRef`1<EventLevelInfo>> value) { }

	[CompilerGenerated]
	public void set_SecondaryBoardBubbleBonus(List<BubbleBonusInfo> value) { }

	[CompilerGenerated]
	public void set_ShouldReset(bool value) { }

	[CompilerGenerated]
	private void set_StartCutsceneRef(MetaRef<CutsceneInfo> value) { }

	[CompilerGenerated]
	private void set_StartDialogueRef(MetaRef<StoryElementInfo> value) { }

	[CompilerGenerated]
	private void set_StaticPriority(int value) { }

	[CompilerGenerated]
	private void set_Timeline(MetaActivableTimelineSettings value) { }

	[CompilerGenerated]
	private void set_UnlockRequirement(PlayerRequirement value) { }

	public override bool ShouldBeVisible(PlayerModel playerModel, MetaActivableVisibleStatus visibleStatus, Option<CollectibleBoardEventModel> eventModelOption) { }

	public bool TryGetTask(EventTaskId taskId, out EventTaskInfo info) { }

	public override bool TryGetVisibleStatus(PlayerModel player, out MetaActivableVisibleStatus visibleStatus) { }

}

