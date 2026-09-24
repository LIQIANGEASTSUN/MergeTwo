namespace Code.GameLogic.GameEvents;

[MetaBlockedMembers(new IL2CPP_TYPE_I4[] {16, 17, 18, 19, 20, 21, 22, 23})]
[MetaSerializableDerived(8)]
public class CollectibleBoardEventModel : ExtendableEventState<CollectibleBoardEventId, CollectibleBoardEventInfo>, ILevelBoardEventModel, ILevelEventModel, IBoardEventModel, IPointsEvent, IGroupIdGetter
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass158_0
	{
		public MergeBoardId activeMergeBoardId; //Field offset: 0x10
		public MergeBoardId targetMergeBoardId; //Field offset: 0x18

		public <>c__DisplayClass158_0() { }

		internal bool <CheckSetupMergeBoardResult>b__0(MetaRef<BoardInfo> boardRef) { }

		internal bool <CheckSetupMergeBoardResult>b__1(MetaRef<BoardInfo> boardRef) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass159_0
	{
		public MergeBoardId boardId; //Field offset: 0x10

		public <>c__DisplayClass159_0() { }

		internal bool <HasVisiblePortalToBoard>b__0(MetaRef<BoardInfo> boardRef) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass160_0
	{
		public MergeBoardId targetMergeBoardId; //Field offset: 0x10

		public <>c__DisplayClass160_0() { }

		internal bool <ForceSetupMergeBoard>b__0(MetaRef<BoardInfo> boardRef) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass161_0
	{
		public IMergeMansionGameConfig gameConfig; //Field offset: 0x10

		public <>c__DisplayClass161_0() { }

		internal ValueTuple<ItemDefinition, ItemVisibility> <ForceSetupMergeBoard>b__0(BoardCell cell) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass162_0
	{
		public PlayerModel player; //Field offset: 0x10
		public CollectibleBoardEventModel <>4__this; //Field offset: 0x18
		public EventTaskId taskId; //Field offset: 0x20

		public <>c__DisplayClass162_0() { }

		internal void <CompleteTask>b__0(PlayerReward reward) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass183_0
	{
		public MergeBoardId mergeBoardId; //Field offset: 0x10

		public <>c__DisplayClass183_0() { }

		internal bool <GetBoardShopPlacementId>b__0(MetaRef<BoardInfo> boardRef) { }

	}

	public const int InitialLevel = 0; //Field offset: 0x0
	private const int InitialLevelProgress = 0; //Field offset: 0x0
	private const byte InitialBoolFields = 0; //Field offset: 0x0
	private const int InitialEnterMergeBoardCount = 0; //Field offset: 0x0
	[CompilerGenerated]
	private CollectibleBoardEventId <ActivableId>k__BackingField; //Field offset: 0x90
	[CompilerGenerated]
	private int <Level>k__BackingField; //Field offset: 0x98
	[CompilerGenerated]
	private int <LevelProgress>k__BackingField; //Field offset: 0x9C
	[CompilerGenerated]
	private List<LevelEventClaimedLevelData> <ClaimedLevels>k__BackingField; //Field offset: 0xA0
	[CompilerGenerated]
	private MergeBoard <MergeBoard>k__BackingField; //Field offset: 0xA8
	[CompilerGenerated]
	private byte <BoolFields>k__BackingField; //Field offset: 0xB0
	[CompilerGenerated]
	private List<IBoardItem> <PocketItems>k__BackingField; //Field offset: 0xB8
	[CompilerGenerated]
	private int <EnterMergeBoardCount>k__BackingField; //Field offset: 0xC0
	[CompilerGenerated]
	private List<EventTaskId> <AvailableTaskIds>k__BackingField; //Field offset: 0xC8
	[CompilerGenerated]
	private int <CompletedTaskCount>k__BackingField; //Field offset: 0xD0
	[CompilerGenerated]
	private byte <BoolFields2>k__BackingField; //Field offset: 0xD4
	[CompilerGenerated]
	private OrderedSet<Int32> <PhotoTakenItems>k__BackingField; //Field offset: 0xD8
	[CompilerGenerated]
	private OrderedSet<Int32> <CaughtFishes>k__BackingField; //Field offset: 0xE0
	[CompilerGenerated]
	private OrderedSet<Int32> <FishCatchPopupSeenItems>k__BackingField; //Field offset: 0xE8
	[CompilerGenerated]
	private OrderedSet<Int32> <FoundGems>k__BackingField; //Field offset: 0xF0
	[CompilerGenerated]
	private byte <BoolFields3>k__BackingField; //Field offset: 0xF8
	[CompilerGenerated]
	private ProgressionTrackId <EventProgressionTrackId>k__BackingField; //Field offset: 0x100

	[MetaMember(1, MetaMemberFlags::None (0))]
	public virtual CollectibleBoardEventId ActivableId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public bool ActiveDecorationNoted
	{
		 get { } //Length: 16
		 set { } //Length: 40
	}

	[MetaMember(9, MetaMemberFlags::None (0))]
	public private List<EventTaskId> AvailableTaskIds
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public override IBoardEventInfo BoardEventInfo
	{
		 get { } //Length: 60
	}

	[MetaMember(6, MetaMemberFlags::None (0))]
	protected byte BoolFields
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(11, MetaMemberFlags::None (0))]
	protected byte BoolFields2
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(24, MetaMemberFlags::None (0))]
	private byte BoolFields3
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public bool CameraNoted
	{
		 get { } //Length: 16
		 set { } //Length: 40
	}

	public bool CanBeResolved
	{
		 get { } //Length: 16
		 set { } //Length: 40
	}

	[MetaMember(13, MetaMemberFlags::None (0))]
	protected OrderedSet<Int32> CaughtFishes
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public override List<LevelEventClaimedLevelData> ClaimedLevels
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[IgnoreDataMember]
	private override OfferPlacementId Code.GameLogic.GameEvents.IBoardEventModel.BoardShopFlashPlacementId
	{
		private get { } //Length: 172
	}

	[IgnoreDataMember]
	private override OfferPlacementId Code.GameLogic.GameEvents.IBoardEventModel.BoardShopPlacementId
	{
		private get { } //Length: 4
	}

	[IgnoreDataMember]
	private override Nullable<Activation> Code.GameLogic.GameEvents.IBoardEventModel.LatestActivation
	{
		private get { } //Length: 16
	}

	[IgnoreDataMember]
	private override bool Code.GameLogic.GameEvents.IBoardEventModel.RequestExtension
	{
		private get { } //Length: 16
		private set { } //Length: 40
	}

	[MetaMember(10, MetaMemberFlags::None (0))]
	public private int CompletedTaskCount
	{
		[CompilerGenerated]
		 get { } //Length: 8
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

	public bool EndOfEventLevelsClaimed
	{
		 get { } //Length: 16
		 set { } //Length: 40
	}

	public override bool EnterBoardDialogueTriggered
	{
		 get { } //Length: 16
		 set { } //Length: 40
	}

	[MetaMember(8, MetaMemberFlags::None (0))]
	public override int EnterMergeBoardCount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(25, MetaMemberFlags::None (0))]
	private ProgressionTrackId EventProgressionTrackId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	public Option<ProgressionTrackId> EventProgressionTrackIdOption
	{
		 get { } //Length: 92
	}

	[IgnoreDataMember]
	public virtual ExtendableEventParams ExtendableEventParams
	{
		 get { } //Length: 72
	}

	[MetaMember(14, MetaMemberFlags::None (0))]
	protected OrderedSet<Int32> FishCatchPopupSeenItems
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public bool FishCaught
	{
		 get { } //Length: 16
		 set { } //Length: 40
	}

	[MetaMember(15, MetaMemberFlags::None (0))]
	protected OrderedSet<Int32> FoundGems
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public bool FtueNoted
	{
		 get { } //Length: 16
		 set { } //Length: 40
	}

	public bool GemFound
	{
		 get { } //Length: 16
		 set { } //Length: 40
	}

	public override IStringId Id
	{
		 get { } //Length: 16
	}

	[IgnoreDataMember]
	public CollectibleBoardEventInfo Info
	{
		 get { } //Length: 60
	}

	public bool IsPlayable
	{
		 get { } //Length: 16
		 set { } //Length: 40
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public override int Level
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[IgnoreDataMember]
	public override ILevelEventInfo LevelEventInfo
	{
		 get { } //Length: 60
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public override int LevelProgress
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	public override MergeBoard MergeBoard
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(12, MetaMemberFlags::None (0))]
	protected OrderedSet<Int32> PhotoTakenItems
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(7, MetaMemberFlags::None (0))]
	public override List<IBoardItem> PocketItems
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public bool PortalItemGiven
	{
		 get { } //Length: 16
		 set { } //Length: 40
	}

	public bool PreviewNoted
	{
		 get { } //Length: 16
		 set { } //Length: 40
	}

	public bool RequestExtension
	{
		 get { } //Length: 16
		 set { } //Length: 40
	}

	public bool StartNoted
	{
		 get { } //Length: 16
		 set { } //Length: 40
	}

	public CollectibleBoardEventModel() { }

	public CollectibleBoardEventModel(CollectibleBoardEventInfo info) { }

	private void AddAvailableTasks(int removedFromIndex, IEnumerable<EventTaskInfo> unlockedTasks) { }

	private void AddEventDecoration(PlayerModel playerModel) { }

	private void AddInitTaskInfo() { }

	public override void AddPoints(IPlayer player, int amount) { }

	public override bool CanExtend(IPlayerModelBase playerBase) { }

	public override void CheckCanBeResolved(PlayerModel playerModel) { }

	public CollectibleBoardEventSetupMergeBoardResultType CheckSetupMergeBoardResult(MergeBoardId targetMergeBoardId, IPlayer player) { }

	public void ClaimEndOfEventLevels(PlayerModel player) { }

	public void CleanupBoardSpecificSpawnFactoryCache(IPlayerModelBase player) { }

	private void CleanupLayeredDecorationProgress(PlayerModel playerModel) { }

	private override OfferPlacementId Code.GameLogic.GameEvents.IBoardEventModel.get_BoardShopFlashPlacementId() { }

	private override OfferPlacementId Code.GameLogic.GameEvents.IBoardEventModel.get_BoardShopPlacementId() { }

	private override Nullable<Activation> Code.GameLogic.GameEvents.IBoardEventModel.get_LatestActivation() { }

	private override bool Code.GameLogic.GameEvents.IBoardEventModel.get_RequestExtension() { }

	private override bool Code.GameLogic.GameEvents.IBoardEventModel.IsActive(IPlayerModelBase playerModel) { }

	private override void Code.GameLogic.GameEvents.IBoardEventModel.set_RequestExtension(bool value) { }

	public IEnumerable<PlayerReward> CompleteTask(EventTaskId taskId, PlayerModel player) { }

	protected virtual void Finalize(IPlayerModelBase player) { }

	public void FinishMergeBoard(PlayerModel playerModel) { }

	public void ForceSetupMergeBoard(PlayerModel player, MergeBoardId targetMergeBoardId) { }

	private void ForceSetupMergeBoard(PlayerModel player, BoardInfo board) { }

	[CompilerGenerated]
	public virtual CollectibleBoardEventId get_ActivableId() { }

	public bool get_ActiveDecorationNoted() { }

	[CompilerGenerated]
	public List<EventTaskId> get_AvailableTaskIds() { }

	public override IBoardEventInfo get_BoardEventInfo() { }

	[CompilerGenerated]
	protected byte get_BoolFields() { }

	[CompilerGenerated]
	protected byte get_BoolFields2() { }

	[CompilerGenerated]
	private byte get_BoolFields3() { }

	public bool get_CameraNoted() { }

	public bool get_CanBeResolved() { }

	[CompilerGenerated]
	protected OrderedSet<Int32> get_CaughtFishes() { }

	[CompilerGenerated]
	public override List<LevelEventClaimedLevelData> get_ClaimedLevels() { }

	[CompilerGenerated]
	public int get_CompletedTaskCount() { }

	public bool get_EndDialogueTriggered() { }

	public bool get_EndNoted() { }

	public bool get_EndOfEventLevelsClaimed() { }

	public override bool get_EnterBoardDialogueTriggered() { }

	[CompilerGenerated]
	public override int get_EnterMergeBoardCount() { }

	[CompilerGenerated]
	private ProgressionTrackId get_EventProgressionTrackId() { }

	public Option<ProgressionTrackId> get_EventProgressionTrackIdOption() { }

	public virtual ExtendableEventParams get_ExtendableEventParams() { }

	[CompilerGenerated]
	protected OrderedSet<Int32> get_FishCatchPopupSeenItems() { }

	public bool get_FishCaught() { }

	[CompilerGenerated]
	protected OrderedSet<Int32> get_FoundGems() { }

	public bool get_FtueNoted() { }

	public bool get_GemFound() { }

	public override IStringId get_Id() { }

	public CollectibleBoardEventInfo get_Info() { }

	public bool get_IsPlayable() { }

	[CompilerGenerated]
	public override int get_Level() { }

	public override ILevelEventInfo get_LevelEventInfo() { }

	[CompilerGenerated]
	public override int get_LevelProgress() { }

	[CompilerGenerated]
	public override MergeBoard get_MergeBoard() { }

	[CompilerGenerated]
	protected OrderedSet<Int32> get_PhotoTakenItems() { }

	[CompilerGenerated]
	public override List<IBoardItem> get_PocketItems() { }

	public bool get_PortalItemGiven() { }

	public bool get_PreviewNoted() { }

	public bool get_RequestExtension() { }

	public bool get_StartNoted() { }

	public override int GetAuxEnergyAttachmentChance(IPlayer player) { }

	public override MergeBoardId GetBoardIdentifier() { }

	private OfferPlacementId GetBoardShopPlacementId() { }

	public override List<LevelEventClaimedLevelData> GetClaimedLevels(IPlayer player) { }

	public override StoryDefinitionId GetEnterBoardDialogue(IPlayer player) { }

	public override Option<EventGroupId> GetGroupIdOption() { }

	public override int GetLevel(IPlayer player) { }

	public override int GetLevelProgress(IPlayer player) { }

	public override int GetPoints(IPlayer player) { }

	private bool GetSuggestExtension(PlayerModel player) { }

	private void HandleAuxEnergyRemoval(PlayerModel playerModel) { }

	public bool HasEnteredEvent() { }

	public bool HasFishBeenCaught(int fishItemId) { }

	public bool HasGemBeenFound(int gemItemId) { }

	public bool HasPendingExtensionPurchase(PlayerModel playerModel) { }

	public bool HasPhotoOfItemBeenTaken(IItemDefinition itemDefinition) { }

	public bool HasSeenFishCatchPopupFor(int itemId) { }

	private bool HasVisiblePortalToBoard(IPlayer player) { }

	public void NotePhase(CollectibleBoardEventNotePhase phase) { }

	protected virtual void OnExtendedActivation(IPlayerModelBase player) { }

	public void OnFishCaught(int fishItemId) { }

	public void OnGemFound(int gemItemId) { }

	protected virtual void OnStartedActivation(IPlayerModelBase player) { }

	private void RemoveEventDecoration(PlayerModel playerModel) { }

	private void ResetDirectorGroups(PlayerModel playerModel) { }

	private void ResetItemDiscoverability(PlayerModel playerModel) { }

	private void ResetMergeChainLevels(PlayerModel playerModel) { }

	private void ResetProgress(PlayerModel playerModel) { }

	[CompilerGenerated]
	protected virtual void set_ActivableId(CollectibleBoardEventId value) { }

	public void set_ActiveDecorationNoted(bool value) { }

	[CompilerGenerated]
	private void set_AvailableTaskIds(List<EventTaskId> value) { }

	[CompilerGenerated]
	protected void set_BoolFields(byte value) { }

	[CompilerGenerated]
	protected void set_BoolFields2(byte value) { }

	[CompilerGenerated]
	private void set_BoolFields3(byte value) { }

	public void set_CameraNoted(bool value) { }

	public void set_CanBeResolved(bool value) { }

	[CompilerGenerated]
	protected void set_CaughtFishes(OrderedSet<Int32> value) { }

	[CompilerGenerated]
	protected void set_ClaimedLevels(List<LevelEventClaimedLevelData> value) { }

	[CompilerGenerated]
	private void set_CompletedTaskCount(int value) { }

	public void set_EndDialogueTriggered(bool value) { }

	public void set_EndNoted(bool value) { }

	public void set_EndOfEventLevelsClaimed(bool value) { }

	public override void set_EnterBoardDialogueTriggered(bool value) { }

	[CompilerGenerated]
	public override void set_EnterMergeBoardCount(int value) { }

	[CompilerGenerated]
	private void set_EventProgressionTrackId(ProgressionTrackId value) { }

	[CompilerGenerated]
	protected void set_FishCatchPopupSeenItems(OrderedSet<Int32> value) { }

	public void set_FishCaught(bool value) { }

	[CompilerGenerated]
	protected void set_FoundGems(OrderedSet<Int32> value) { }

	public void set_FtueNoted(bool value) { }

	public void set_GemFound(bool value) { }

	public void set_IsPlayable(bool value) { }

	[CompilerGenerated]
	public override void set_Level(int value) { }

	[CompilerGenerated]
	public override void set_LevelProgress(int value) { }

	[CompilerGenerated]
	protected void set_MergeBoard(MergeBoard value) { }

	[CompilerGenerated]
	protected void set_PhotoTakenItems(OrderedSet<Int32> value) { }

	[CompilerGenerated]
	protected void set_PocketItems(List<IBoardItem> value) { }

	public void set_PortalItemGiven(bool value) { }

	public void set_PreviewNoted(bool value) { }

	public void set_RequestExtension(bool value) { }

	public void set_StartNoted(bool value) { }

	private void SetEventProgressionTrack(PlayerModel player) { }

	public void SetFishCatchPopupSeenFor(int itemId, IMergeMansionGameConfig gameConfig) { }

	public void SetPhotoTakenOfItem(IItemDefinition itemDefinition) { }

	public void SetupEventMergeBoard(PlayerModel playerModel) { }

	protected virtual void SoftFinalize(IPlayerModelBase player) { }

	public bool TryGetProgressionTrack(IPlayer player, out ProgressionTrack track) { }

}

