namespace GameLogic.Player;

public interface IPlayer : IGenerationContext
{
	public const int MaxMergeBoards = 100; //Field offset: 0x0
	public const int MaxInventories = 100; //Field offset: 0x0

	public event Action<PlayerEventBase> EventStreamInterceptor
	{
		[CompilerGenerated]
		 add { } //Length: 0
		[CompilerGenerated]
		 remove { } //Length: 0
	}

	public IEnumerable<CardCollectionSupportingEventModel> ActiveCardCollectionSupportingEvents
	{
		 get { } //Length: 0
	}

	public IEnumerable<CollectibleBoardEventModel> ActiveCollectibleBoardEvents
	{
		 get { } //Length: 0
	}

	public IEnumerable<CoreSupportEventModel> ActiveCoreSupportEvents
	{
		 get { } //Length: 0
	}

	public IEnumerable<DailyScoopEventModel> ActiveDailyScoopEvents
	{
		 get { } //Length: 0
	}

	public IEnumerable<EnergyModeEventModel> ActiveEnergyModeEvents
	{
		 get { } //Length: 0
	}

	public IEnumerable<GarageCleanupEventModel> ActiveGarageCleanups
	{
		 get { } //Length: 0
	}

	public IEnumerable<LeaderboardEventModel> ActiveLeaderboardEvents
	{
		 get { } //Length: 0
	}

	public MergeBoardId ActiveMergeBoardId
	{
		 get { } //Length: 0
	}

	public IEnumerable<MiniEventModel> ActiveMiniEvents
	{
		 get { } //Length: 0
	}

	public OrderedSet<PlayerModeId> ActiveModesGlobal
	{
		 get { } //Length: 0
	}

	public MetaDictionary<MergeBoardId, OrderedSet`1<PlayerModeId>> ActiveModesPerBoard
	{
		 get { } //Length: 0
	}

	public IEnumerable<IPlayerModifier> ActiveModifiers
	{
		 get { } //Length: 0
	}

	public List<IPlayerModifier> ActiveModifiersNonAlloc
	{
		 get { } //Length: 0
	}

	public IEnumerable<MysteryMachineEventModel> ActiveMysteryMachineEvents
	{
		 get { } //Length: 0
	}

	public IEnumerable<IActiveOfferGroup> ActiveOfferGroups
	{
		 get { } //Length: 0
	}

	public IEnumerable<ProgressionEventModel> ActiveProgressionEvents
	{
		 get { } //Length: 0
	}

	public IEnumerable<ShortLeaderboardEventModel> ActiveShortLeaderboardEvents
	{
		 get { } //Length: 0
	}

	public IEnumerable<SoloMilestoneEventModel> ActiveSoloMilestoneEvents
	{
		 get { } //Length: 0
	}

	public IEnumerable<TemporaryCardCollectionEventModel> ActiveTemporaryCardCollectionEvents
	{
		 get { } //Length: 0
	}

	public IEnumerable<GarageCleanupEventModel> AllGarageCleanups
	{
		 get { } //Length: 0
	}

	public IAutoMergeFeatureModel AutoMergeFeatureModel
	{
		 get { } //Length: 0
	}

	public IEnumerable<IBoard> Boards
	{
		 get { } //Length: 0
	}

	[TupleElementNames(new IL2CPP_TYPE_STRING[] {"board", "expirationTime"})]
	public IEnumerable<ValueTuple`2<IBoard, Nullable`1<MetaTime>>> BoardsWithExpirationTimes
	{
		 get { } //Length: 0
	}

	public BoultonLeagueStatus BoultonLeagueStatus
	{
		 get { } //Length: 0
	}

	public IBuilderEventMinigameData BuilderEventMinigameData
	{
		 get { } //Length: 0
	}

	public PlayerCardCollectionSupportingEventsModel CardCollectionSupportingEvents
	{
		 get { } //Length: 0
	}

	public ClassicRacesEventDivisionClientState ClassicRacesEventDivisionClientState
	{
		 get { } //Length: 0
	}

	public IPlayerModelClientListener ClientListener
	{
		 get { } //Length: 0
	}

	public PlayerCollectibleBoardEventsModel CollectibleBoardEvents
	{
		 get { } //Length: 0
	}

	public PlayerCoreSupportEventsModel CoreSupportEvents
	{
		 get { } //Length: 0
	}

	public CurrencyBankModel CurrencyBankModel
	{
		 get { } //Length: 0
	}

	public CurrencyBanksModel CurrencyBanksModel
	{
		 get { } //Length: 0
	}

	public DigEventBoardId CurrentDigEventBoard
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public PlayerLocalTime CurrentLocalTime
	{
		 get { } //Length: 0
	}

	public MetacoreTime CurrentTime
	{
		 get { } //Length: 0
	}

	public ICustomMergeBoardsState CustomMergeBoardsState
	{
		 get { } //Length: 0
	}

	public IDailyChallengesEventsHistoricalDataModel DailyChallengesEventsHistoricalData
	{
		 get { } //Length: 0
	}

	public DailyTaskStatus DailyTaskStatus
	{
		 get { } //Length: 0
	}

	public DailyTasksV2Status DailyTasksV2Status
	{
		 get { } //Length: 0
	}

	public bool DebugUseAreaGlobalRequirement
	{
		 get { } //Length: 0
	}

	public IDigEventMinigameData DigEventMinigameData
	{
		 get { } //Length: 0
	}

	public DigEventMuseumModel DigEventMuseum
	{
		 get { } //Length: 0
	}

	public RandomPCG DigEventRandom
	{
		 get { } //Length: 0
	}

	public PlayerEnergyModeEventsModel EnergyModeEvents
	{
		 get { } //Length: 0
	}

	public OrderedSet<EventLevelData> EventLevelsUpgradedByCardCollectionSupportingEvent
	{
		 get { } //Length: 0
	}

	public GameSettings GameSettings
	{
		 get { } //Length: 0
	}

	public IBoardInventory GarageBoardInventory
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public IBoardInventory GarageBoardProducerInventory
	{
		 get { } //Length: 0
	}

	public MergeBoard GarageMergeBoard
	{
		 get { } //Length: 0
	}

	public bool IsDeveloper
	{
		 get { } //Length: 0
	}

	public bool IsProductionEnvironment
	{
		 get { } //Length: 0
	}

	public Option<PlayerLocation> LastKnownLocationOption
	{
		 get { } //Length: 0
	}

	public ILastNSegmentsCache LastNSegmentsCache
	{
		 get { } //Length: 0
	}

	public PlayerLeaderboardEventsModel LeaderboardEvents
	{
		 get { } //Length: 0
	}

	public LogChannel Log
	{
		 get { } //Length: 0
	}

	public int LogicVersion
	{
		 get { } //Length: 0
	}

	public IEnumerable<IMailMessage> MailMessages
	{
		 get { } //Length: 0
	}

	public PlayerMiniEventOverrides MiniEventOverrides
	{
		 get { } //Length: 0
	}

	public PlayerModesChangedEvent ModesChanged
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public PlayerModifiersChangedEvent ModifiersChanged
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public SortedDictionary<Int32, F64> MoneySpentPerDay
	{
		 get { } //Length: 0
	}

	public PlayerMysteryMachineEventsModel MysteryMachineEvents
	{
		 get { } //Length: 0
	}

	public RandomPCG MysteryMachineRandom
	{
		 get { } //Length: 0
	}

	public OverrideSpawnItemsStatus OverrideSpawnItemsStatus
	{
		 get { } //Length: 0
	}

	public Option<TasksTabStyle> OverrideTasksTabStyleOption
	{
		 get { } //Length: 0
	}

	public PityRuns PityRuns
	{
		 get { } //Length: 0
	}

	public PlayerIdentity PlayerIdentity
	{
		 get { } //Length: 0
	}

	public int PlayerLevel
	{
		 get { } //Length: 0
	}

	public string PlayerName
	{
		 get { } //Length: 0
	}

	public IReadOnlyList<IWritableProducerInventorySlotState> ProducerInventoryEntries
	{
		 get { } //Length: 0
	}

	public int ProgressionEventIAPStreakLength
	{
		 get { } //Length: 0
	}

	public PlayerProgressionEventsModel ProgressionEvents
	{
		 get { } //Length: 0
	}

	public ProgressionPackEventsModel ProgressionPackEvents
	{
		 get { } //Length: 0
	}

	public ProgressState ProgressState
	{
		 get { } //Length: 0
	}

	public MetaDictionary<Int32, RandomPCG> RandomsByFishingRodType
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public IBoardInventory RentableBoardInventory
	{
		 get { } //Length: 0
	}

	[TupleElementNames(new IL2CPP_TYPE_STRING[] {"inventory", "expirationTime"})]
	public ValueTuple<IBoardInventory, Nullable`1<MetaTime>> RentableInventory
	{
		 get { } //Length: 0
	}

	public RandomPCG RewardContainerRandom
	{
		 get { } //Length: 0
	}

	public IRollTheDiceMinigameData RollTheDiceMinigameData
	{
		 get { } //Length: 0
	}

	public RandomPCG RollTheDiceRandom
	{
		 get { } //Length: 0
	}

	public SegmentorState Segmentor
	{
		 get { } //Length: 0
	}

	public IPlayerModelServerListener ServerListener
	{
		 get { } //Length: 0
	}

	public SessionToken SessionToken
	{
		 get { } //Length: 0
	}

	public ShortLeaderboardEventDivisionClientState ShortLeaderboardEventDivisionClientState
	{
		 get { } //Length: 0
	}

	public PlayerShortLeaderboardEventsModel ShortLeaderboardEvents
	{
		 get { } //Length: 0
	}

	public PlayerSoloMilestoneEventModel SoloMilestoneEvents
	{
		 get { } //Length: 0
	}

	public RandomPCG SoloMilestoneRandom
	{
		 get { } //Length: 0
	}

	public SpawnFactoryState SpawnFactoryState
	{
		 get { } //Length: 0
	}

	public RandomPCG StackMiniGameRandom
	{
		 get { } //Length: 0
	}

	public LocationId StartLocation
	{
		 get { } //Length: 0
	}

	public StoreStatus StoreStatus
	{
		 get { } //Length: 0
	}

	public PlayerTemporaryCardCollectionEventsModel TemporaryCardCollectionEvents
	{
		 get { } //Length: 0
	}

	public IMetacorePlayerTimeZoneInfo TimeZoneInfo
	{
		 get { } //Length: 0
	}

	public F64 TotalIapSpend
	{
		 get { } //Length: 0
	}

	public GameFeaturesStates UnlockedFeatures
	{
		 get { } //Length: 0
	}

	public Wallet Wallet
	{
		 get { } //Length: 0
	}

	[CompilerGenerated]
	public void add_EventStreamInterceptor(Action<PlayerEventBase> value) { }

	public IPlayerModifier AddModifier(IPlayerModifier playerModifier) { }

	public void AddProgressionEventIAPStreak(ProgressionEventId eventId) { }

	public void AddScriptedEvent(IScriptedEventCondition condition, ISerializedAction action) { }

	public BoultonLeagueEventModel BoultonLeagueEventState(BoultonLeagueEventInfo eventInfo) { }

	public ValueTuple<Int32, Int32> CalculateHotspotTokenAmount(SoloMilestoneEventModel soloMilestoneEventModel, HotspotDefinition hotspotDefinition) { }

	public CollectibleBoardEventModel CollectibleBoardEventState(CollectibleBoardEventInfo eventInfo) { }

	public DailyScoopEventModel DailyScoopEventState(DailyScoopEventInfo eventInfo) { }

	public GarageCleanupEventModel GarageCleanupEventState(GarageCleanupEventInfo eventInfo) { }

	public IEnumerable<CardCollectionSupportingEventModel> get_ActiveCardCollectionSupportingEvents() { }

	public IEnumerable<CollectibleBoardEventModel> get_ActiveCollectibleBoardEvents() { }

	public IEnumerable<CoreSupportEventModel> get_ActiveCoreSupportEvents() { }

	public IEnumerable<DailyScoopEventModel> get_ActiveDailyScoopEvents() { }

	public IEnumerable<EnergyModeEventModel> get_ActiveEnergyModeEvents() { }

	public IEnumerable<GarageCleanupEventModel> get_ActiveGarageCleanups() { }

	public IEnumerable<LeaderboardEventModel> get_ActiveLeaderboardEvents() { }

	public MergeBoardId get_ActiveMergeBoardId() { }

	public IEnumerable<MiniEventModel> get_ActiveMiniEvents() { }

	public OrderedSet<PlayerModeId> get_ActiveModesGlobal() { }

	public MetaDictionary<MergeBoardId, OrderedSet`1<PlayerModeId>> get_ActiveModesPerBoard() { }

	public IEnumerable<IPlayerModifier> get_ActiveModifiers() { }

	public List<IPlayerModifier> get_ActiveModifiersNonAlloc() { }

	public IEnumerable<MysteryMachineEventModel> get_ActiveMysteryMachineEvents() { }

	public IEnumerable<IActiveOfferGroup> get_ActiveOfferGroups() { }

	public IEnumerable<ProgressionEventModel> get_ActiveProgressionEvents() { }

	public IEnumerable<ShortLeaderboardEventModel> get_ActiveShortLeaderboardEvents() { }

	public IEnumerable<SoloMilestoneEventModel> get_ActiveSoloMilestoneEvents() { }

	public IEnumerable<TemporaryCardCollectionEventModel> get_ActiveTemporaryCardCollectionEvents() { }

	public IEnumerable<GarageCleanupEventModel> get_AllGarageCleanups() { }

	public IAutoMergeFeatureModel get_AutoMergeFeatureModel() { }

	public IEnumerable<IBoard> get_Boards() { }

	public IEnumerable<ValueTuple`2<IBoard, Nullable`1<MetaTime>>> get_BoardsWithExpirationTimes() { }

	public BoultonLeagueStatus get_BoultonLeagueStatus() { }

	public IBuilderEventMinigameData get_BuilderEventMinigameData() { }

	public PlayerCardCollectionSupportingEventsModel get_CardCollectionSupportingEvents() { }

	public ClassicRacesEventDivisionClientState get_ClassicRacesEventDivisionClientState() { }

	public IPlayerModelClientListener get_ClientListener() { }

	public PlayerCollectibleBoardEventsModel get_CollectibleBoardEvents() { }

	public PlayerCoreSupportEventsModel get_CoreSupportEvents() { }

	public CurrencyBankModel get_CurrencyBankModel() { }

	public CurrencyBanksModel get_CurrencyBanksModel() { }

	public DigEventBoardId get_CurrentDigEventBoard() { }

	public PlayerLocalTime get_CurrentLocalTime() { }

	public MetacoreTime get_CurrentTime() { }

	public ICustomMergeBoardsState get_CustomMergeBoardsState() { }

	public IDailyChallengesEventsHistoricalDataModel get_DailyChallengesEventsHistoricalData() { }

	public DailyTaskStatus get_DailyTaskStatus() { }

	public DailyTasksV2Status get_DailyTasksV2Status() { }

	public bool get_DebugUseAreaGlobalRequirement() { }

	public IDigEventMinigameData get_DigEventMinigameData() { }

	public DigEventMuseumModel get_DigEventMuseum() { }

	public RandomPCG get_DigEventRandom() { }

	public PlayerEnergyModeEventsModel get_EnergyModeEvents() { }

	public OrderedSet<EventLevelData> get_EventLevelsUpgradedByCardCollectionSupportingEvent() { }

	public GameSettings get_GameSettings() { }

	public IBoardInventory get_GarageBoardInventory() { }

	public IBoardInventory get_GarageBoardProducerInventory() { }

	public MergeBoard get_GarageMergeBoard() { }

	public bool get_IsDeveloper() { }

	public bool get_IsProductionEnvironment() { }

	public Option<PlayerLocation> get_LastKnownLocationOption() { }

	public ILastNSegmentsCache get_LastNSegmentsCache() { }

	public PlayerLeaderboardEventsModel get_LeaderboardEvents() { }

	public LogChannel get_Log() { }

	public int get_LogicVersion() { }

	public IEnumerable<IMailMessage> get_MailMessages() { }

	public PlayerMiniEventOverrides get_MiniEventOverrides() { }

	public PlayerModesChangedEvent get_ModesChanged() { }

	public PlayerModifiersChangedEvent get_ModifiersChanged() { }

	public SortedDictionary<Int32, F64> get_MoneySpentPerDay() { }

	public PlayerMysteryMachineEventsModel get_MysteryMachineEvents() { }

	public RandomPCG get_MysteryMachineRandom() { }

	public OverrideSpawnItemsStatus get_OverrideSpawnItemsStatus() { }

	public Option<TasksTabStyle> get_OverrideTasksTabStyleOption() { }

	public PityRuns get_PityRuns() { }

	public PlayerIdentity get_PlayerIdentity() { }

	public int get_PlayerLevel() { }

	public string get_PlayerName() { }

	public IReadOnlyList<IWritableProducerInventorySlotState> get_ProducerInventoryEntries() { }

	public int get_ProgressionEventIAPStreakLength() { }

	public PlayerProgressionEventsModel get_ProgressionEvents() { }

	public ProgressionPackEventsModel get_ProgressionPackEvents() { }

	public ProgressState get_ProgressState() { }

	public MetaDictionary<Int32, RandomPCG> get_RandomsByFishingRodType() { }

	public IBoardInventory get_RentableBoardInventory() { }

	public ValueTuple<IBoardInventory, Nullable`1<MetaTime>> get_RentableInventory() { }

	public RandomPCG get_RewardContainerRandom() { }

	public IRollTheDiceMinigameData get_RollTheDiceMinigameData() { }

	public RandomPCG get_RollTheDiceRandom() { }

	public SegmentorState get_Segmentor() { }

	public IPlayerModelServerListener get_ServerListener() { }

	public SessionToken get_SessionToken() { }

	public ShortLeaderboardEventDivisionClientState get_ShortLeaderboardEventDivisionClientState() { }

	public PlayerShortLeaderboardEventsModel get_ShortLeaderboardEvents() { }

	public PlayerSoloMilestoneEventModel get_SoloMilestoneEvents() { }

	public RandomPCG get_SoloMilestoneRandom() { }

	public SpawnFactoryState get_SpawnFactoryState() { }

	public RandomPCG get_StackMiniGameRandom() { }

	public LocationId get_StartLocation() { }

	public StoreStatus get_StoreStatus() { }

	public PlayerTemporaryCardCollectionEventsModel get_TemporaryCardCollectionEvents() { }

	public IMetacorePlayerTimeZoneInfo get_TimeZoneInfo() { }

	public F64 get_TotalIapSpend() { }

	public GameFeaturesStates get_UnlockedFeatures() { }

	public Wallet get_Wallet() { }

	public IActiveOfferGroup GetActiveOfferGroup(MetaOfferGroupId offerGroupId) { }

	public IActiveOfferGroup GetActiveOrSoldOutOfferGroup(MetaOfferGroupId offerGroupId) { }

	public IEnumerable<BoultonLeagueEventModel> GetAllActiveAndJoinedBoultonLeagueEvents() { }

	public Option<IBoard> GetBoard(MergeBoardId boardId) { }

	public IEnumerable<IBoardInventory> GetInventories(MergeBoardId boardId, int typeFlags, bool forceExpiredInventories = false) { }

	public int GetMergeBoards(Span<MergeBoard> results, bool includeEvents = false) { }

	public IReadOnlyCollection<MergeBoard> GetMergeBoards(bool includeEvents = false) { }

	public IEnumerable<IHotspotDefinition> GetMissingHotspots() { }

	public ValueTuple<Int32, Currencies, Int64> GetRentableInventoryBatchCost() { }

	public bool IsActivableActive(MetaActivableState activable) { }

	public LeaderboardEventModel LeaderboardEventState(LeaderboardEventInfo eventInfo) { }

	public MysteryMachineEventModel MysteryMachineEventState(MysteryMachineEventInfo eventInfo) { }

	public void OnInitialLogin() { }

	public void PlayerInventoryContentChanged(int itemId, MergeBoardId boardId, int count, PlayerInventoryChangeEventType changeType) { }

	public ProgressionEventModel ProgressionEventState(ProgressionEventInfo eventInfo) { }

	public void RecordStaleExtensionPurchase(CollectibleBoardEventInfo eventInfo) { }

	public void RecordStaleProgressionEventPremiumIAPPurchase(IStringId eventId) { }

	public void RecordStaleProgressionEventPremiumIAPPurchase(ProgressionEventId eventId) { }

	public void RefreshEventModelStates(PlayerEventsModelRefreshAction action) { }

	[CompilerGenerated]
	public void remove_EventStreamInterceptor(Action<PlayerEventBase> value) { }

	public void ReportEvent(AnalyticsServersideEventBase analyticsEvent, bool skipOnlineCheck = false) { }

	public void ReportEvent(PlayerEventBase analyticsEvent) { }

	public void ReportLevelReachedDuringCardCollectionSupportingEvent(string eventId, int eventLevel) { }

	public void set_CurrentDigEventBoard(DigEventBoardId value) { }

	public void set_GarageBoardInventory(IBoardInventory value) { }

	public void set_ModesChanged(PlayerModesChangedEvent value) { }

	public void set_ModifiersChanged(PlayerModifiersChangedEvent value) { }

	public void set_RandomsByFishingRodType(MetaDictionary<Int32, RandomPCG> value) { }

	public bool ShouldCardPacksBeUpgraded(RewardSourceContext rewardSourceContext) { }

	public SoloMilestoneEventModel SoloMilestoneEventState(SoloMilestoneEventInfo eventInfo) { }

	public bool TryConsumeCurrencyBank(CurrencyBankId currencyBankId, int storedAmount, AnalyticsContext context) { }

	public bool TryExtendingCollectibleBoardEvent(CollectibleBoardEventInfo eventInfo) { }

	public bool TryGetFirstActiveAndJoinedBoultonLeagueEvent(out BoultonLeagueEventModel outEventModel) { }

}

