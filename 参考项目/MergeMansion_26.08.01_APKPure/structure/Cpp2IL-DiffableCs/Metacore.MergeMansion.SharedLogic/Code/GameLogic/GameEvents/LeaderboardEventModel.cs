namespace Code.GameLogic.GameEvents;

[MetaSerializableDerived(9)]
public class LeaderboardEventModel : MetaActivableState<LeaderboardEventId, LeaderboardEventInfo>, IBoardEventModel, IPointsEvent, IGroupIdGetter, ILeaderboardEventModel
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass87_0
	{
		public IMergeMansionGameConfig gameConfig; //Field offset: 0x10

		public <>c__DisplayClass87_0() { }

		internal ValueTuple<ItemDefinition, ItemVisibility> <SetupMergeBoard>b__0(BoardCell cell) { }

	}

	private const byte InitialBoolFields = 0; //Field offset: 0x0
	private const int InitialScore = 0; //Field offset: 0x0
	public const int InitialLevel = 0; //Field offset: 0x0
	private const int InitialLevelProgress = 0; //Field offset: 0x0
	[CompilerGenerated]
	private LeaderboardEventId <ActivableId>k__BackingField; //Field offset: 0x78
	[CompilerGenerated]
	private MergeBoard <MergeBoard>k__BackingField; //Field offset: 0x80
	[CompilerGenerated]
	private List<IBoardItem> <PocketItems>k__BackingField; //Field offset: 0x88
	[CompilerGenerated]
	private byte <BoolFields>k__BackingField; //Field offset: 0x90
	[CompilerGenerated]
	private int <Score>k__BackingField; //Field offset: 0x94
	[CompilerGenerated]
	private int <Level>k__BackingField; //Field offset: 0x98
	[CompilerGenerated]
	private int <LevelProgress>k__BackingField; //Field offset: 0x9C
	[CompilerGenerated]
	private EntityId <DivisionId>k__BackingField; //Field offset: 0xA0
	[CompilerGenerated]
	private List<Int32> <ClaimedLevels>k__BackingField; //Field offset: 0xB0
	[CompilerGenerated]
	private int <EnterMergeBoardCount>k__BackingField; //Field offset: 0xB8

	[MetaMember(1, MetaMemberFlags::None (0))]
	public virtual LeaderboardEventId ActivableId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	protected byte BoolFields
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(9, MetaMemberFlags::None (0))]
	public private List<Int32> ClaimedLevels
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	private override IBoardEventInfo Code.GameLogic.GameEvents.IBoardEventModel.BoardEventInfo
	{
		private get { } //Length: 60
	}

	[IgnoreDataMember]
	private override OfferPlacementId Code.GameLogic.GameEvents.IBoardEventModel.BoardShopFlashPlacementId
	{
		private get { } //Length: 68
	}

	[IgnoreDataMember]
	private override OfferPlacementId Code.GameLogic.GameEvents.IBoardEventModel.BoardShopPlacementId
	{
		private get { } //Length: 72
	}

	[IgnoreDataMember]
	private override int Code.GameLogic.GameEvents.IBoardEventModel.EnterMergeBoardCount
	{
		private get { } //Length: 8
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	private override Nullable<Activation> Code.GameLogic.GameEvents.IBoardEventModel.LatestActivation
	{
		private get { } //Length: 16
	}

	[IgnoreDataMember]
	private override bool Code.GameLogic.GameEvents.IBoardEventModel.RequestExtension
	{
		private get { } //Length: 8
		private set { } //Length: 56
	}

	[MetaMember(8, MetaMemberFlags::None (0))]
	public private EntityId DivisionId
	{
		[CompilerGenerated]
		 get { } //Length: 12
		[CompilerGenerated]
		private set { } //Length: 8
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
		 get { } //Length: 16
		 set { } //Length: 40
	}

	[MetaMember(10, MetaMemberFlags::None (0))]
	public int EnterMergeBoardCount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public bool EventEndPopupClosed
	{
		 get { } //Length: 16
		 set { } //Length: 40
	}

	public override IStringId Id
	{
		 get { } //Length: 16
	}

	[IgnoreDataMember]
	public LeaderboardEventInfo Info
	{
		 get { } //Length: 60
	}

	[IgnoreDataMember]
	public bool Joined
	{
		 get { } //Length: 52
	}

	[MetaMember(6, MetaMemberFlags::None (0))]
	public int Level
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(7, MetaMemberFlags::None (0))]
	public int LevelProgress
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public override MergeBoard MergeBoard
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public override List<IBoardItem> PocketItems
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public bool RankingRewardsClaimed
	{
		 get { } //Length: 16
		 set { } //Length: 40
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	public int Score
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override Option<ShortLeaderboardEventStageId> StageId
	{
		 get { } //Length: 88
	}

	public bool StartNoted
	{
		 get { } //Length: 16
		 set { } //Length: 40
	}

	public LeaderboardEventModel() { }

	public LeaderboardEventModel(LeaderboardEventInfo info) { }

	public override void AddPoints(IPlayer player, int amount) { }

	public void AddScore(IPlayer player, int score, LeaderboardEventScoreChangeSourceAction sourceAction) { }

	public virtual bool CanBeFinalized(IPlayerModelBase player) { }

	public bool CanClaimLevel(int level) { }

	public bool CanClaimRankingRewards(PlayerModel player) { }

	public override bool CanExtend(IPlayerModelBase playerModel) { }

	public override void CheckCanBeResolved(PlayerModel player) { }

	public void ClaimLevel(IPlayer player, int level) { }

	public void ClaimRankingRewards(PlayerModel player) { }

	private void ClaimUnclaimedLevels(IPlayer player) { }

	private override IBoardEventInfo Code.GameLogic.GameEvents.IBoardEventModel.get_BoardEventInfo() { }

	private override OfferPlacementId Code.GameLogic.GameEvents.IBoardEventModel.get_BoardShopFlashPlacementId() { }

	private override OfferPlacementId Code.GameLogic.GameEvents.IBoardEventModel.get_BoardShopPlacementId() { }

	private override int Code.GameLogic.GameEvents.IBoardEventModel.get_EnterMergeBoardCount() { }

	private override Nullable<Activation> Code.GameLogic.GameEvents.IBoardEventModel.get_LatestActivation() { }

	private override bool Code.GameLogic.GameEvents.IBoardEventModel.get_RequestExtension() { }

	private override bool Code.GameLogic.GameEvents.IBoardEventModel.IsActive(IPlayerModelBase playerModel) { }

	private override void Code.GameLogic.GameEvents.IBoardEventModel.set_EnterMergeBoardCount(int value) { }

	private override void Code.GameLogic.GameEvents.IBoardEventModel.set_RequestExtension(bool value) { }

	protected virtual void Finalize(IPlayerModelBase player) { }

	private void FinishMergeBoard(PlayerModel playerModel) { }

	[CompilerGenerated]
	public virtual LeaderboardEventId get_ActivableId() { }

	[CompilerGenerated]
	protected byte get_BoolFields() { }

	[CompilerGenerated]
	public List<Int32> get_ClaimedLevels() { }

	[CompilerGenerated]
	public EntityId get_DivisionId() { }

	public bool get_EndDialogueTriggered() { }

	public bool get_EndNoted() { }

	public override bool get_EnterBoardDialogueTriggered() { }

	[CompilerGenerated]
	public int get_EnterMergeBoardCount() { }

	public bool get_EventEndPopupClosed() { }

	public override IStringId get_Id() { }

	public LeaderboardEventInfo get_Info() { }

	public bool get_Joined() { }

	[CompilerGenerated]
	public int get_Level() { }

	[CompilerGenerated]
	public int get_LevelProgress() { }

	[CompilerGenerated]
	public override MergeBoard get_MergeBoard() { }

	[CompilerGenerated]
	public override List<IBoardItem> get_PocketItems() { }

	public bool get_RankingRewardsClaimed() { }

	[CompilerGenerated]
	public int get_Score() { }

	public override Option<ShortLeaderboardEventStageId> get_StageId() { }

	public bool get_StartNoted() { }

	public override int GetAuxEnergyAttachmentChance(IPlayer player) { }

	public override MergeBoardId GetBoardIdentifier() { }

	public PlayerDivisionHistoryEntry GetDivisionHistoryEntry(PlayerModel player) { }

	public override StoryDefinitionId GetEnterBoardDialogue(IPlayer player) { }

	public override EventLevelInfo GetEventLevelInfo(IPlayer player, ShortLeaderboardEventStageId stageId, int level) { }

	public override int GetFirstAvailableUnclaimedLevel(ShortLeaderboardEventStageId stageId) { }

	public int GetFirstAvailableUnclaimedLevel() { }

	public override Option<EventGroupId> GetGroupIdOption() { }

	public override int GetLevel(ShortLeaderboardEventStageId stageId) { }

	public override int GetLevelProgress(ShortLeaderboardEventStageId stageId) { }

	public override int GetPoints(IPlayer player) { }

	private void HandleAuxEnergyRemoval(PlayerModel playerModel) { }

	public bool HasRankingRewardForPosition(PlayerModel player) { }

	public bool IsDeterminingRewards(PlayerModel player) { }

	public void NotePhase(LeaderboardEventNotePhase phase) { }

	public void OnBannedFromParticipating(PlayerModel playerModel) { }

	protected virtual void OnStartedActivation(IPlayerModelBase player) { }

	public void ResetSinglePlayerProgress(PlayerModel player) { }

	[CompilerGenerated]
	protected virtual void set_ActivableId(LeaderboardEventId value) { }

	[CompilerGenerated]
	protected void set_BoolFields(byte value) { }

	[CompilerGenerated]
	private void set_ClaimedLevels(List<Int32> value) { }

	[CompilerGenerated]
	private void set_DivisionId(EntityId value) { }

	public void set_EndDialogueTriggered(bool value) { }

	public void set_EndNoted(bool value) { }

	public override void set_EnterBoardDialogueTriggered(bool value) { }

	[CompilerGenerated]
	public void set_EnterMergeBoardCount(int value) { }

	public void set_EventEndPopupClosed(bool value) { }

	[CompilerGenerated]
	protected void set_Level(int value) { }

	[CompilerGenerated]
	protected void set_LevelProgress(int value) { }

	[CompilerGenerated]
	protected void set_MergeBoard(MergeBoard value) { }

	[CompilerGenerated]
	protected void set_PocketItems(List<IBoardItem> value) { }

	public void set_RankingRewardsClaimed(bool value) { }

	[CompilerGenerated]
	public void set_Score(int value) { }

	public void set_StartNoted(bool value) { }

	public void SetDivisionId(EntityId divisionId) { }

	public void SetupMergeBoard(PlayerModel player) { }

}

