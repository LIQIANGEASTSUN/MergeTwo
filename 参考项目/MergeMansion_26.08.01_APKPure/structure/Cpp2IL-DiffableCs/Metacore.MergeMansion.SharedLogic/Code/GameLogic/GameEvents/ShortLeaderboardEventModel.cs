namespace Code.GameLogic.GameEvents;

[MetaSerializableDerived(19)]
public class ShortLeaderboardEventModel : MetaActivableState<ShortLeaderboardEventId, ShortLeaderboardEventInfo>, IBoardEventModel, IGroupIdGetter, IPointsEvent, ILeaderboardEventModel
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<StageData, Boolean> <>9__127_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal bool <HasCompletedAtLeastOneStage>b__127_0(StageData stageData) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass118_0
	{
		public ShortLeaderboardEventStageId stageId; //Field offset: 0x10

		public <>c__DisplayClass118_0() { }

		internal bool <GetStageData>b__0(StageData i) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass123_0
	{
		public StageData lastCompletedStage; //Field offset: 0x10

		public <>c__DisplayClass123_0() { }

		internal bool <GetLastCompletedStageIndex>b__0(MetaRef<ShortLeaderboardEventStageInfo> stageRef) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass132_0
	{
		public IMergeMansionGameConfig gameConfig; //Field offset: 0x10

		public <>c__DisplayClass132_0() { }

		internal ValueTuple<ItemDefinition, ItemVisibility> <ForceStartIntro>b__0(BoardCell cell) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass135_0
	{
		public ShortLeaderboardEventStageId currentStageId; //Field offset: 0x10

		public <>c__DisplayClass135_0() { }

		internal bool <GetBoardShopPlacementId>b__0(MetaRef<ShortLeaderboardEventStageInfo> stageRef) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass137_0
	{
		public Nullable<EntityId> divisionId; //Field offset: 0x10

		public <>c__DisplayClass137_0() { }

		internal bool <CanClaimStageStars>b__0(ShortLeaderboardEventDivisionHistoryEntry historicalDivision) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass138_0
	{
		public ShortLeaderboardEventStageId stageId; //Field offset: 0x10

		public <>c__DisplayClass138_0() { }

		internal bool <ForceClaimStageStars>b__0(MetaRef<ShortLeaderboardEventStageInfo> stageRef) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass86_0
	{
		public ShortLeaderboardEventStageId stageId; //Field offset: 0x10

		public <>c__DisplayClass86_0() { }

		internal bool <CanRequestJoinStage>b__0(MetaRef<ShortLeaderboardEventStageInfo> stageRef) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass87_0
	{
		public ShortLeaderboardEventStageId stageId; //Field offset: 0x10

		public <>c__DisplayClass87_0() { }

		internal bool <OnStageJoinRequested>b__0(StageData i) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass90_0
	{
		public ShortLeaderboardEventStageId stageId; //Field offset: 0x10

		public <>c__DisplayClass90_0() { }

		internal bool <GetReplayStageResult>b__0(MetaRef<ShortLeaderboardEventStageInfo> stageRef) { }

	}

	[MetaSerializable]
	internal struct StageData
	{
		[MetaMember(1, MetaMemberFlags::None (0))]
		public ShortLeaderboardEventStageId StageId; //Field offset: 0x0
		[MetaMember(2, MetaMemberFlags::None (0))]
		public PlayerShortLeaderboardEventStageState State; //Field offset: 0x8

		public StageData(ShortLeaderboardEventStageId stageId, PlayerShortLeaderboardEventStageState state) { }

		public bool IsValid() { }

	}

	[CompilerGenerated]
	private ShortLeaderboardEventId <ActivableId>k__BackingField; //Field offset: 0x78
	[CompilerGenerated]
	private byte <BoolFields>k__BackingField; //Field offset: 0x80
	[CompilerGenerated]
	private MetaTime <StartTime>k__BackingField; //Field offset: 0x88
	[CompilerGenerated]
	private StageData <CurrentStage>k__BackingField; //Field offset: 0x90
	[CompilerGenerated]
	private List<StageData> <OtherStages>k__BackingField; //Field offset: 0xA0
	[CompilerGenerated]
	private MergeBoard <IntroMergeBoard>k__BackingField; //Field offset: 0xA8

	[MetaMember(1, MetaMemberFlags::None (0))]
	public virtual ShortLeaderboardEventId ActivableId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override IBoardEventInfo BoardEventInfo
	{
		 get { } //Length: 60
	}

	public override OfferPlacementId BoardShopFlashPlacementId
	{
		 get { } //Length: 172
	}

	public override OfferPlacementId BoardShopPlacementId
	{
		 get { } //Length: 4
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	private byte BoolFields
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private StageData CurrentStage
	{
		[CompilerGenerated]
		 get { } //Length: 12
		[CompilerGenerated]
		private set { } //Length: 12
	}

	public bool EndDialogueTriggered
	{
		 get { } //Length: 16
		 set { } //Length: 40
	}

	public bool EndNoted
	{
		 get { } //Length: 16
		 set { } //Length: 40
	}

	public override bool EnterBoardDialogueTriggered
	{
		 get { } //Length: 32
		 set { } //Length: 44
	}

	public override int EnterMergeBoardCount
	{
		 get { } //Length: 24
		 set { } //Length: 28
	}

	public bool FinalRewardClaimed
	{
		 get { } //Length: 16
		 set { } //Length: 40
	}

	public override IStringId Id
	{
		 get { } //Length: 16
	}

	public bool InfoPopupTriggered
	{
		 get { } //Length: 16
		 set { } //Length: 40
	}

	public bool IntroFinished
	{
		 get { } //Length: 16
		 set { } //Length: 40
	}

	[MetaMember(6, MetaMemberFlags::None (0))]
	public private MergeBoard IntroMergeBoard
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override MergeBoard MergeBoard
	{
		 get { } //Length: 40
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	private List<StageData> OtherStages
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override List<IBoardItem> PocketItems
	{
		 get { } //Length: 140
	}

	public bool PortalItemGiven
	{
		 get { } //Length: 8
	}

	public override bool RequestExtension
	{
		 get { } //Length: 8
		 set { } //Length: 4
	}

	public override Option<ShortLeaderboardEventStageId> StageId
	{
		 get { } //Length: 96
	}

	public bool StartNoted
	{
		 get { } //Length: 16
		 set { } //Length: 40
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private MetaTime StartTime
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public ShortLeaderboardEventModel() { }

	public ShortLeaderboardEventModel(ShortLeaderboardEventInfo info) { }

	[CompilerGenerated]
	private bool <GetStageNumber>b__25_0(MetaRef<ShortLeaderboardEventStageInfo> stageRef) { }

	public override void AddPoints(IPlayer player, int amount) { }

	public void AddPoints(IPlayer player, int amount, LeaderboardEventScoreChangeSourceAction sourceAction) { }

	public virtual bool CanBeFinalized(IPlayerModelBase player) { }

	public bool CanClaimFinalReward() { }

	public bool CanClaimLevel(int level) { }

	public bool CanClaimStageCompletionRewards(ShortLeaderboardEventStageId stageId) { }

	public bool CanClaimStageCompletionRewards(IPlayer player, out ShortLeaderboardEventStageInfo stage) { }

	public bool CanClaimStageStars(PlayerModel playerModel, ShortLeaderboardEventStageId stageId, out int rankingPosition) { }

	public override bool CanExtend(IPlayerModelBase playerModel) { }

	public bool CanFinishIntro() { }

	public bool CanRequestJoinStage(IPlayer player, ShortLeaderboardEventStageId stageId) { }

	public bool CanRequestJoinStage(IPlayer player, out ShortLeaderboardEventStageInfo stage) { }

	public bool CanStartCurrentStage() { }

	public bool CanStartIntro() { }

	public override void CheckCanBeResolved(PlayerModel player) { }

	public bool ClaimStageStarsNoted(ShortLeaderboardEventStageId stageId) { }

	private override Nullable<Activation> Code.GameLogic.GameEvents.IBoardEventModel.get_LatestActivation() { }

	private override bool Code.GameLogic.GameEvents.IBoardEventModel.IsActive(IPlayerModelBase playerModel) { }

	public bool EligibleForBubbleBonus() { }

	protected virtual void Finalize(IPlayerModelBase player) { }

	public void ForceClaimFinalReward(IPlayer player) { }

	public void ForceClaimLevel(IPlayer player, int level) { }

	public void ForceClaimStageCompletionRewards(IPlayer player, ShortLeaderboardEventStageId stageId) { }

	public void ForceClaimStageStars(PlayerModel playerModel, ShortLeaderboardEventStageId stageId, int rankingPosition) { }

	private void ForceEndCurrentStage(PlayerModel playerModel) { }

	public void ForceFinishIntro() { }

	public void ForceReplayStage(IPlayer player, ShortLeaderboardEventStageId stageId) { }

	public void ForceStartCurrentStage(PlayerModel playerModel, MetacoreTime startTime) { }

	public void ForceStartIntro(IPlayer player) { }

	[CompilerGenerated]
	public virtual ShortLeaderboardEventId get_ActivableId() { }

	public override IBoardEventInfo get_BoardEventInfo() { }

	public override OfferPlacementId get_BoardShopFlashPlacementId() { }

	public override OfferPlacementId get_BoardShopPlacementId() { }

	[CompilerGenerated]
	private byte get_BoolFields() { }

	[CompilerGenerated]
	public StageData get_CurrentStage() { }

	public bool get_EndDialogueTriggered() { }

	public bool get_EndNoted() { }

	public override bool get_EnterBoardDialogueTriggered() { }

	public override int get_EnterMergeBoardCount() { }

	public bool get_FinalRewardClaimed() { }

	public override IStringId get_Id() { }

	public bool get_InfoPopupTriggered() { }

	public bool get_IntroFinished() { }

	[CompilerGenerated]
	public MergeBoard get_IntroMergeBoard() { }

	public override MergeBoard get_MergeBoard() { }

	[CompilerGenerated]
	private List<StageData> get_OtherStages() { }

	public override List<IBoardItem> get_PocketItems() { }

	public bool get_PortalItemGiven() { }

	public override bool get_RequestExtension() { }

	public override Option<ShortLeaderboardEventStageId> get_StageId() { }

	public bool get_StartNoted() { }

	[CompilerGenerated]
	public MetaTime get_StartTime() { }

	public override int GetAuxEnergyAttachmentChance(IPlayer player) { }

	public override MergeBoardId GetBoardIdentifier() { }

	private OfferPlacementId GetBoardShopPlacementId() { }

	private MetaActionResult GetCanAffordStageReplayResult(IPlayer player, StageData stageData) { }

	public int GetCompletedStageCount() { }

	public override StoryDefinitionId GetEnterBoardDialogue(IPlayer player) { }

	public override EventLevelInfo GetEventLevelInfo(IPlayer player, ShortLeaderboardEventStageId stageId, int level) { }

	public PlayerReward GetFinalReward() { }

	public override int GetFirstAvailableUnclaimedLevel(ShortLeaderboardEventStageId stageId) { }

	public override Option<EventGroupId> GetGroupIdOption() { }

	private StageData GetLastCompletedStage() { }

	private int GetLastCompletedStageIndex() { }

	public override int GetLevel(ShortLeaderboardEventStageId stageId) { }

	public override int GetLevelProgress(ShortLeaderboardEventStageId stageId) { }

	private int GetNextStageIndex() { }

	public int GetPoints(ShortLeaderboardEventStageId stageId) { }

	public override int GetPoints(IPlayer player) { }

	public GameCurrencyCost GetReplayCost(IPlayer player, StageData stageData) { }

	public ShortLeaderboardEventStageInfo GetReplayStage() { }

	private int GetReplayStageIndex() { }

	public MetaActionResult GetReplayStageResult(IPlayer player, ShortLeaderboardEventStageId stageId) { }

	public StageData GetStageData(ShortLeaderboardEventStageId stageId) { }

	public int GetStageNumber() { }

	public int GetStageStars(ShortLeaderboardEventStageId stageId) { }

	private static int GetStageStarsForRankingPosition(PlayerModel playerModel, ShortLeaderboardEventStageId stageId, int rankingPosition) { }

	private MetaTime GetStageUnlockTime(ShortLeaderboardEventStageInfo stage) { }

	public int GetTotalStars() { }

	public bool HasClaimedStageCompletionRewards(ShortLeaderboardEventStageId stageId) { }

	public bool HasCompletedAtLeastOneStage() { }

	public bool HasCompletedStage(ShortLeaderboardEventStageId stageId) { }

	public bool HasCurrentNonJoinFailedStage() { }

	public bool HasCurrentStage() { }

	private bool IsLastCompletedStage(ShortLeaderboardEventStageId stageId) { }

	public void NoteClaimStageStars(ShortLeaderboardEventStageId stageId) { }

	public void NotePhase(ShortLeaderboardEventNotePhase phase) { }

	public void OnGameTick(PlayerModel playerModel) { }

	public void OnStageJoined(EntityId divisionId) { }

	public void OnStageJoinFailed() { }

	public void OnStageJoinRequested(IPlayer player, ShortLeaderboardEventStageId stageId, GameCurrencyCost cost) { }

	protected virtual void OnStartedActivation(IPlayerModelBase player) { }

	public bool PendingClaimStageStars(out ShortLeaderboardEventStageId stageId) { }

	private void RefreshReplayCost(PlayerModel playerModel, StageData stageData) { }

	private void RefreshReplayCosts(PlayerModel playerModel) { }

	[CompilerGenerated]
	protected virtual void set_ActivableId(ShortLeaderboardEventId value) { }

	[CompilerGenerated]
	private void set_BoolFields(byte value) { }

	[CompilerGenerated]
	private void set_CurrentStage(StageData value) { }

	public void set_EndDialogueTriggered(bool value) { }

	public void set_EndNoted(bool value) { }

	public override void set_EnterBoardDialogueTriggered(bool value) { }

	public override void set_EnterMergeBoardCount(int value) { }

	public void set_FinalRewardClaimed(bool value) { }

	public void set_InfoPopupTriggered(bool value) { }

	public void set_IntroFinished(bool value) { }

	[CompilerGenerated]
	private void set_IntroMergeBoard(MergeBoard value) { }

	[CompilerGenerated]
	private void set_OtherStages(List<StageData> value) { }

	public override void set_RequestExtension(bool value) { }

	public void set_StartNoted(bool value) { }

	[CompilerGenerated]
	private void set_StartTime(MetaTime value) { }

	private bool ShouldEndCurrentStage(PlayerModel playerModel) { }

	private bool StageUnlockTimePassed(IPlayer player, ShortLeaderboardEventStageInfo stage) { }

}

