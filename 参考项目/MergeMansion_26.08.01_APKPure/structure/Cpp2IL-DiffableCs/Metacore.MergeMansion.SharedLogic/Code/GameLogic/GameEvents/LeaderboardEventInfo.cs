namespace Code.GameLogic.GameEvents;

[MetaActivableConfigData("LeaderboardEvent", False, True)]
[MetaBlockedMembers(new IL2CPP_TYPE_I4[] {7, 10, 16})]
[MetaSerializable]
public class LeaderboardEventInfo : IMetaActivableConfigData<LeaderboardEventId>, IMetaActivableConfigData, IGameConfigData, IMetaActivableInfo, IGameConfigData<LeaderboardEventId>, IHasGameConfigKey<LeaderboardEventId>, IMetaActivableInfo<LeaderboardEventId>, IBoardEventInfo, IHasRequirement, IBubbleBonusEvent, IEventSharedInfo, IPrioritizedEvent, IVisibilityStrategy<LeaderboardEventId, LeaderboardEventInfo, LeaderboardEventModel>
{
	[CompilerGenerated]
	private LeaderboardEventId <LeaderboardEventId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private string <NameLocId>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private string <DisplayName>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private string <Description>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private MetaActivableParams <ActivableParams>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private MetaRef<BoardInfo> <BoardRef>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private PlayerRequirement <UnlockRequirement>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private OfferPlacementId <BoardShopPlacementId>k__BackingField; //Field offset: 0x48
	[CompilerGenerated]
	private List<MetaRef`1<EventLevelInfo>> <RankingRewardLevelRefs>k__BackingField; //Field offset: 0x50
	[CompilerGenerated]
	private List<MetaRef`1<EventLevelInfo>> <LevelRefs>k__BackingField; //Field offset: 0x58
	[CompilerGenerated]
	private StoryDefinitionId <EnterBoardDialogue>k__BackingField; //Field offset: 0x60
	[CompilerGenerated]
	private StoryDefinitionId <EndDialogue>k__BackingField; //Field offset: 0x68
	[CompilerGenerated]
	private Nullable<F32> <BubbleBonusDivisor>k__BackingField; //Field offset: 0x70
	[CompilerGenerated]
	private Nullable<MetaDuration> <AuxEnergyUnitRestoreDuration>k__BackingField; //Field offset: 0x78
	[CompilerGenerated]
	private int <AuxEnergyAttachmentChance>k__BackingField; //Field offset: 0x88
	[CompilerGenerated]
	private bool <DisableBubbleBonus>k__BackingField; //Field offset: 0x8C
	[CompilerGenerated]
	private EventGroupId <GroupId>k__BackingField; //Field offset: 0x90
	[CompilerGenerated]
	private List<BubbleBonusInfo> <SecondaryBoardBubbleBonus>k__BackingField; //Field offset: 0x98
	[CompilerGenerated]
	private int <Priority>k__BackingField; //Field offset: 0xA0
	[CompilerGenerated]
	private LeaderboardEventMatchmakingBucketsId <MatchmakingBuckets>k__BackingField; //Field offset: 0xA8
	[CompilerGenerated]
	private EventCategoryInfo <CategoryInfo>k__BackingField; //Field offset: 0xB0
	[CompilerGenerated]
	private bool <ForceLocationTravel>k__BackingField; //Field offset: 0xC0
	[CompilerGenerated]
	private int <StaticPriority>k__BackingField; //Field offset: 0xC4
	[CompilerGenerated]
	private int <DynamicPriorityTriggerThreshold>k__BackingField; //Field offset: 0xC8
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0xCC

	public override LeaderboardEventId ActivableId
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

	[MetaMember(18, MetaMemberFlags::None (0))]
	public private int AuxEnergyAttachmentChance
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(17, MetaMemberFlags::None (0))]
	public private Nullable<MetaDuration> AuxEnergyUnitRestoreDuration
	{
		[CompilerGenerated]
		 get { } //Length: 12
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public BoardInfo Board
	{
		 get { } //Length: 80
	}

	[MetaMember(6, MetaMemberFlags::None (0))]
	public private MetaRef<BoardInfo> BoardRef
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public OfferPlacementId BoardShopFlashPlacementId
	{
		 get { } //Length: 160
	}

	[MetaMember(9, MetaMemberFlags::None (0))]
	public private OfferPlacementId BoardShopPlacementId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(15, MetaMemberFlags::None (0))]
	public private override Nullable<F32> BubbleBonusDivisor
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(24, MetaMemberFlags::None (0))]
	public private override EventCategoryInfo CategoryInfo
	{
		[CompilerGenerated]
		 get { } //Length: 12
		[CompilerGenerated]
		private set { } //Length: 12
	}

	[IgnoreDataMember]
	private override DecorationInfo Code.GameLogic.GameEvents.IBoardEventInfo.ActiveDecoration
	{
		private get { } //Length: 8
	}

	[IgnoreDataMember]
	private override IStringId Code.GameLogic.GameEvents.IBoardEventInfo.BoardEventId
	{
		private get { } //Length: 8
	}

	[IgnoreDataMember]
	private override ExtendableEventParams Code.GameLogic.GameEvents.IBoardEventInfo.ExtendableEventParams
	{
		private get { } //Length: 8
	}

	[IgnoreDataMember]
	private override MetaRef<InAppProductInfo> Code.GameLogic.GameEvents.IBoardEventInfo.ExtensionInAppProduct
	{
		private get { } //Length: 8
	}

	[IgnoreDataMember]
	private override MetaDuration Code.GameLogic.GameEvents.IBoardEventInfo.ExtensionPurchaseSafetyMargin
	{
		private get { } //Length: 80
	}

	[IgnoreDataMember]
	private override MergeBoardId Code.GameLogic.GameEvents.IBoardEventInfo.MergeBoardId
	{
		private get { } //Length: 140
	}

	public override LeaderboardEventId ConfigKey
	{
		 get { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private override string Description
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(19, MetaMemberFlags::None (0))]
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

	[MetaMember(27, MetaMemberFlags::None (0))]
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

	[MetaMember(13, MetaMemberFlags::None (0))]
	public private StoryDefinitionId EnterBoardDialogue
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

	[MetaMember(25, MetaMemberFlags::None (0))]
	public private bool ForceLocationTravel
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private override PlayerRequirement GameLogic.Player.Requirements.IHasRequirement.Requirement
	{
		private get { } //Length: 8
	}

	[MetaMember(20, MetaMemberFlags::None (0))]
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

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private LeaderboardEventId LeaderboardEventId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(12, MetaMemberFlags::None (0))]
	public private List<MetaRef`1<EventLevelInfo>> LevelRefs
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public IEnumerable<EventLevelInfo> Levels
	{
		 get { } //Length: 72
	}

	[MetaMember(23, MetaMemberFlags::None (0))]
	[ServerOnly]
	public LeaderboardEventMatchmakingBucketsId MatchmakingBuckets
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

	[MetaMember(22, MetaMemberFlags::None (0))]
	public override int Priority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(11, MetaMemberFlags::None (0))]
	public private List<MetaRef`1<EventLevelInfo>> RankingRewardLevelRefs
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(21, MetaMemberFlags::None (0))]
	public private override List<BubbleBonusInfo> SecondaryBoardBubbleBonus
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override string SharedEventId
	{
		 get { } //Length: 24
	}

	[MetaMember(26, MetaMemberFlags::None (0))]
	public private override int StaticPriority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(8, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixPlayerRequirement")]
	public private override PlayerRequirement UnlockRequirement
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public LeaderboardEventInfo(LeaderboardEventId leaderboardEventId, string nameLocId, string displayName, string description, MetaActivableParams activableParams, MetaRef<BoardInfo> boardRef, PlayerRequirement unlockRequirement, OfferPlacementId boardShopPlacementId, List<MetaRef`1<EventLevelInfo>> rankingRewardLevelRefs, List<MetaRef`1<EventLevelInfo>> levelRefs, StoryDefinitionId enterBoardDialogue, StoryDefinitionId endDialogue, Nullable<MetaDuration> auxEnergyUnitRestoreDuration, int auxEnergyAttachmentChance, EventGroupId eventGroupId, bool disableBubbleBonus, Nullable<F32> bubbleBonusDivisor, List<BubbleBonusInfo> secondaryBoardBubbleBonus, int priority, LeaderboardEventMatchmakingBucketsId matchmakingBuckets, EventCategoryInfo categoryInfo, bool forceLocationTravel, int staticPriority, int dynamicPriorityTriggerThreshold, int experimentPriority) { }

	public LeaderboardEventInfo() { }

	public override bool CanExtendLatestActivation(PlayerModel player) { }

	private override DecorationInfo Code.GameLogic.GameEvents.IBoardEventInfo.get_ActiveDecoration() { }

	private override IStringId Code.GameLogic.GameEvents.IBoardEventInfo.get_BoardEventId() { }

	private override ExtendableEventParams Code.GameLogic.GameEvents.IBoardEventInfo.get_ExtendableEventParams() { }

	private override MetaRef<InAppProductInfo> Code.GameLogic.GameEvents.IBoardEventInfo.get_ExtensionInAppProduct() { }

	private override MetaDuration Code.GameLogic.GameEvents.IBoardEventInfo.get_ExtensionPurchaseSafetyMargin() { }

	private override MergeBoardId Code.GameLogic.GameEvents.IBoardEventInfo.get_MergeBoardId() { }

	private static PlayerRequirement FixPlayerRequirement(MetaMemberDeserializationFailureParams failureParams) { }

	public static ItemDef FixRef(MetaMemberDeserializationFailureParams failureParams) { }

	private override PlayerRequirement GameLogic.Player.Requirements.IHasRequirement.get_Requirement() { }

	public override LeaderboardEventId get_ActivableId() { }

	[CompilerGenerated]
	public override MetaActivableParams get_ActivableParams() { }

	[CompilerGenerated]
	public int get_AuxEnergyAttachmentChance() { }

	[CompilerGenerated]
	public Nullable<MetaDuration> get_AuxEnergyUnitRestoreDuration() { }

	public BoardInfo get_Board() { }

	[CompilerGenerated]
	public MetaRef<BoardInfo> get_BoardRef() { }

	public OfferPlacementId get_BoardShopFlashPlacementId() { }

	[CompilerGenerated]
	public OfferPlacementId get_BoardShopPlacementId() { }

	[CompilerGenerated]
	public override Nullable<F32> get_BubbleBonusDivisor() { }

	[CompilerGenerated]
	public override EventCategoryInfo get_CategoryInfo() { }

	public override LeaderboardEventId get_ConfigKey() { }

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

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	public bool get_ForceLocationTravel() { }

	[CompilerGenerated]
	private EventGroupId get_GroupId() { }

	public override Option<EventGroupId> get_GroupIdOption() { }

	[CompilerGenerated]
	public LeaderboardEventId get_LeaderboardEventId() { }

	[CompilerGenerated]
	public List<MetaRef`1<EventLevelInfo>> get_LevelRefs() { }

	public IEnumerable<EventLevelInfo> get_Levels() { }

	[CompilerGenerated]
	public LeaderboardEventMatchmakingBucketsId get_MatchmakingBuckets() { }

	[CompilerGenerated]
	public string get_NameLocId() { }

	[CompilerGenerated]
	public override int get_Priority() { }

	[CompilerGenerated]
	public List<MetaRef`1<EventLevelInfo>> get_RankingRewardLevelRefs() { }

	[CompilerGenerated]
	public override List<BubbleBonusInfo> get_SecondaryBoardBubbleBonus() { }

	public override string get_SharedEventId() { }

	[CompilerGenerated]
	public override int get_StaticPriority() { }

	[CompilerGenerated]
	public override PlayerRequirement get_UnlockRequirement() { }

	public EventLevelInfo GetEventLevelInfo(int level) { }

	public string GetEventPrefabsId() { }

	public override List<IPlayerReward> GetExtensionRewards(IPlayer player) { }

	public List<IPlayerReward> GetRankingRewardsForPosition(int position, IPlayer player) { }

	public override bool IsEndingSoon(PlayerModel player) { }

	[CompilerGenerated]
	private void set_ActivableParams(MetaActivableParams value) { }

	[CompilerGenerated]
	private void set_AuxEnergyAttachmentChance(int value) { }

	[CompilerGenerated]
	private void set_AuxEnergyUnitRestoreDuration(Nullable<MetaDuration> value) { }

	[CompilerGenerated]
	private void set_BoardRef(MetaRef<BoardInfo> value) { }

	[CompilerGenerated]
	private void set_BoardShopPlacementId(OfferPlacementId value) { }

	[CompilerGenerated]
	private void set_BubbleBonusDivisor(Nullable<F32> value) { }

	[CompilerGenerated]
	private void set_CategoryInfo(EventCategoryInfo value) { }

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
	private void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_ForceLocationTravel(bool value) { }

	[CompilerGenerated]
	private void set_GroupId(EventGroupId value) { }

	[CompilerGenerated]
	private void set_LeaderboardEventId(LeaderboardEventId value) { }

	[CompilerGenerated]
	private void set_LevelRefs(List<MetaRef`1<EventLevelInfo>> value) { }

	[CompilerGenerated]
	public void set_MatchmakingBuckets(LeaderboardEventMatchmakingBucketsId value) { }

	[CompilerGenerated]
	private void set_NameLocId(string value) { }

	[CompilerGenerated]
	public void set_Priority(int value) { }

	[CompilerGenerated]
	private void set_RankingRewardLevelRefs(List<MetaRef`1<EventLevelInfo>> value) { }

	[CompilerGenerated]
	private void set_SecondaryBoardBubbleBonus(List<BubbleBonusInfo> value) { }

	[CompilerGenerated]
	private void set_StaticPriority(int value) { }

	[CompilerGenerated]
	private void set_UnlockRequirement(PlayerRequirement value) { }

	public override bool ShouldBeVisible(PlayerModel playerModel, MetaActivableVisibleStatus visibleStatus, Option<LeaderboardEventModel> eventModelOption) { }

	public override bool TryGetVisibleStatus(PlayerModel player, out MetaActivableVisibleStatus visibleStatus) { }

}

