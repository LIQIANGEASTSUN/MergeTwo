namespace GameLogic.Player;

[MetaBlockedMembers(new IL2CPP_TYPE_I4[] {6, 108, 110, 112, 114, 116, 117, 200, 202, 203, 205, 208, 220, 224, 239, 241, 251, 233, 274, 285, 249, 250, 216, 231, 258, 280, 298, 299, 306, 309, 312})]
[MetaReservedMembers(99, 400)]
[MetaReservedMembers(11, 12)]
[MetaSerializableDerived(1)]
[SupportedSchemaVersions(57, 60)]
public class PlayerModel : PlayerModelBase<PlayerModel, PlayerStatisticsCore, PlayerMergeMansionOffersGroupModel, PlayerGuildStateCore>, IWritablePlayer, IPlayer, IGenerationContext
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<AuthenticationKey, AuthenticationPlatform> <>9__557_0; //Field offset: 0x8
		public static Func<CollectibleBoardEventModel, MergeBoard> <>9__583_0; //Field offset: 0x10
		public static Func<LeaderboardEventModel, MergeBoard> <>9__583_1; //Field offset: 0x18
		public static Func<ShortLeaderboardEventModel, MergeBoard> <>9__583_2; //Field offset: 0x20
		public static Func<KeyValuePair`2<MergeBoardId, MergeBoard>, MergeBoard> <>9__583_3; //Field offset: 0x28
		public static Func<MetaRef`1<PlayerSegmentInfoBase>, PlayerSegmentId> <>9__634_0; //Field offset: 0x30
		public static Func<PlayerLoginEvent, MetaTime> <>9__671_0; //Field offset: 0x38
		public static Func<MergeItem, Boolean> <>9__673_7; //Field offset: 0x40
		public static Func<IBoard, IEnumerable`1<MergeItem>> <>9__673_0; //Field offset: 0x48
		public static Func<MergeItem, Boolean> <>9__673_8; //Field offset: 0x50
		public static Func<IBoardInventory, IEnumerable`1<MergeItem>> <>9__673_1; //Field offset: 0x58
		public static Func<IGrouping`2<MergeChainId, MergeItem>, MergeChainId> <>9__673_3; //Field offset: 0x60
		public static Func<KeyValuePair`2<MergeChainId, Int32>, MergeChainId> <>9__673_5; //Field offset: 0x68
		public static Func<IItemDefinition, PlayerReward> <>9__673_11; //Field offset: 0x70
		public static Func<IItemDefinition, Int32> <>9__673_12; //Field offset: 0x78
		public static Func<ValueTuple`2<Coordinate, MergeItem>, Boolean> <>9__673_13; //Field offset: 0x80
		public static Func<MergeItem, Boolean> <>9__673_14; //Field offset: 0x88
		public static Predicate<MergeItem> <>9__673_15; //Field offset: 0x90
		public static Func<MergeItem, Int32> <>9__675_6; //Field offset: 0x98
		public static Func<MetaOfferStatus, Boolean> <>9__676_1; //Field offset: 0xA0

		private static <>c() { }

		public <>c() { }

		internal MetaTime <CollectItemsOnSessionStart>b__671_0(PlayerLoginEvent entry) { }

		internal IEnumerable<MergeItem> <ConvertArtifactsToBoxes>b__673_0(IBoard board) { }

		internal IEnumerable<MergeItem> <ConvertArtifactsToBoxes>b__673_1(IBoardInventory inventory) { }

		internal PlayerReward <ConvertArtifactsToBoxes>b__673_11(IItemDefinition item) { }

		internal int <ConvertArtifactsToBoxes>b__673_12(IItemDefinition item) { }

		internal bool <ConvertArtifactsToBoxes>b__673_13(ValueTuple<Coordinate, MergeItem> pair) { }

		internal bool <ConvertArtifactsToBoxes>b__673_14(MergeItem item) { }

		internal bool <ConvertArtifactsToBoxes>b__673_15(MergeItem item) { }

		internal MergeChainId <ConvertArtifactsToBoxes>b__673_3(IGrouping<MergeChainId, MergeItem> group) { }

		internal MergeChainId <ConvertArtifactsToBoxes>b__673_5(KeyValuePair<MergeChainId, Int32> pair) { }

		internal bool <ConvertArtifactsToBoxes>b__673_7(MergeItem item) { }

		internal bool <ConvertArtifactsToBoxes>b__673_8(MergeItem item) { }

		internal int <ForceReEngagementCleanup>b__675_6(MergeItem mergeItem) { }

		internal AuthenticationPlatform <GameOnSessionStarted>b__557_0(AuthenticationKey x) { }

		internal MergeBoard <get_Boards>b__583_0(CollectibleBoardEventModel ev) { }

		internal MergeBoard <get_Boards>b__583_1(LeaderboardEventModel ev) { }

		internal MergeBoard <get_Boards>b__583_2(ShortLeaderboardEventModel ev) { }

		internal MergeBoard <get_Boards>b__583_3(KeyValuePair<MergeBoardId, MergeBoard> b) { }

		internal bool <GetActiveOrSoldOutOfferGroup>b__676_1(MetaOfferStatus o) { }

		internal PlayerSegmentId <TryConsumeCurrencyBank>b__634_0(MetaRef<PlayerSegmentInfoBase> o) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass541_0
	{
		public Action<T> callback; //Field offset: 0x0

		public <>c__DisplayClass541_0`1() { }

		internal void <SubscribeToPlayerEvent>g__Wrapper|0(PlayerEventBase evt) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass552_0
	{
		public PlayerModel <>4__this; //Field offset: 0x10
		public Dictionary<DialogCharacterType, HashSet`1<HotspotId>> hotspotIdsByDialogCharacterTypeToDiscover; //Field offset: 0x18
		public HashSet<HotspotId> completedHotspotIds; //Field offset: 0x20

		public <>c__DisplayClass552_0() { }

		internal bool <UpdateDiscoveredDialogueCharacters>b__3(HotspotId hotspot) { }

		internal bool <UpdateDiscoveredDialogueCharacters>g__Check|0(DirectorGroupId groupId) { }

		internal bool <UpdateDiscoveredDialogueCharacters>g__HasCompletedAnyDirectorEventGroupToDiscover|1(DialogueCharacterInfo dialogueCharacterInfo) { }

		internal bool <UpdateDiscoveredDialogueCharacters>g__HasCompletedAnyHotspotToDiscover|2(DialogCharacterType dialogCharacterType) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass560_0
	{
		public MetacoreTime currentTime; //Field offset: 0x10

		public <>c__DisplayClass560_0() { }

		internal bool <UpdateTrackingSessionsInTheLast240Hours>b__0(MetaTime sessionStartAt) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass653_0
	{
		public MetaTime currentTime; //Field offset: 0x10
		public int hoursSince; //Field offset: 0x18

		public <>c__DisplayClass653_0() { }

		internal bool <SessionCount>b__0(MetaTime sessionStartAt) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass661_0
	{
		public IReadOnlyDictionary<HotspotId, HotspotDefinition> hotspotDefinitions; //Field offset: 0x10

		public <>c__DisplayClass661_0() { }

		internal bool <RemoveNonExistingHotspots>b__0(HotspotId completed) { }

		internal bool <RemoveNonExistingHotspots>b__1(HotspotId visible) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass663_0
	{
		public IReadOnlyDictionary<HotspotId, HotspotDefinition> hotspotDefinitions; //Field offset: 0x10
		public PlayerModel <>4__this; //Field offset: 0x18
		public HashSet<HotspotId> completedHotspots; //Field offset: 0x20
		public HashSet<HotspotId> visibleHotspots; //Field offset: 0x28

		public <>c__DisplayClass663_0() { }

		internal HotspotDefinition <GetMissingHotspots>b__0(HotspotId hotspotId) { }

		internal IEnumerable<IHotspotDefinition> <GetMissingHotspots>b__1(HotspotDefinition hotspot) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass667_0
	{
		public int eventId; //Field offset: 0x10

		public <>c__DisplayClass667_0() { }

		internal bool <TryGetScriptedEvent>b__0(ScriptedEvent ev) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass672_0
	{
		public PlayerModel <>4__this; //Field offset: 0x10
		public ICollection<Int32> typesToCollect; //Field offset: 0x18

		public <>c__DisplayClass672_0() { }

		internal bool <ForceSessionStartCleanup>b__0(ValueTuple<Coordinate, MergeItem> item) { }

		internal bool <ForceSessionStartCleanup>b__1(IMergeItem i) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass673_0
	{
		public int remainingXp; //Field offset: 0x10
		public Func<IItemDefinition, Boolean> <>9__10; //Field offset: 0x18

		public <>c__DisplayClass673_0() { }

		internal bool <ConvertArtifactsToBoxes>b__10(IItemDefinition item) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass675_0
	{
		public MergeBoard board; //Field offset: 0x10
		public PlayerModel <>4__this; //Field offset: 0x18
		public MetaTime timestamp; //Field offset: 0x20
		public List<Int32> itemsToSell; //Field offset: 0x28
		public MergeBoardId boardId; //Field offset: 0x30

		public <>c__DisplayClass675_0() { }

		internal void <ForceReEngagementCleanup>g__CollectAndSellItemsFromBoard|3(CurrencySource sellSource, CurrencySource collectSource) { }

		internal void <ForceReEngagementCleanup>g__DoBoardCleanup|0() { }

		internal void <ForceReEngagementCleanup>g__DoInventoryAndPocketCleanup|4() { }

		internal void <ForceReEngagementCleanup>g__MergeCollectibles|2() { }

		internal void <ForceReEngagementCleanup>g__SetAllAutoSpawnersOnCooldown|1() { }

		internal bool <ForceReEngagementCleanup>g__ShouldAutoCollectItem|5(int item) { }

	}

	[CompilerGenerated]
	private struct <>c__DisplayClass676_0
	{
		public PlayerModel <>4__this; //Field offset: 0x0
		public PlayerMergeMansionOffersGroupModel offersGroupModel; //Field offset: 0x8

	}

	[CompilerGenerated]
	private sealed class <get_ActiveShortLeaderboardEvents>d__613 : IEnumerable<ShortLeaderboardEventModel>, IEnumerable, IEnumerator<ShortLeaderboardEventModel>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private ShortLeaderboardEventModel <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		public PlayerModel <>4__this; //Field offset: 0x28
		private ValueEnumerator<ShortLeaderboardEventId, ShortLeaderboardEventModel> <>7__wrap1; //Field offset: 0x30

		private override ShortLeaderboardEventModel System.Collections.Generic.IEnumerator<Code.GameLogic.GameEvents.ShortLeaderboardEventModel>.Current
		{
			[DebuggerHidden]
			private get { } //Length: 8
		}

		private override object System.Collections.IEnumerator.Current
		{
			[DebuggerHidden]
			private get { } //Length: 8
		}

		[DebuggerHidden]
		public <get_ActiveShortLeaderboardEvents>d__613(int <>1__state) { }

		private void <>m__Finally1() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<ShortLeaderboardEventModel> System.Collections.Generic.IEnumerable<Code.GameLogic.GameEvents.ShortLeaderboardEventModel>.GetEnumerator() { }

		[DebuggerHidden]
		private override ShortLeaderboardEventModel System.Collections.Generic.IEnumerator<Code.GameLogic.GameEvents.ShortLeaderboardEventModel>.get_Current() { }

		[DebuggerHidden]
		private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

		[DebuggerHidden]
		private override object System.Collections.IEnumerator.get_Current() { }

		[DebuggerHidden]
		private override void System.Collections.IEnumerator.Reset() { }

		[DebuggerHidden]
		private override void System.IDisposable.Dispose() { }

	}

	[CompilerGenerated]
	private sealed class <GetAllActiveAndJoinedBoultonLeagueEvents>d__630 : IEnumerable<BoultonLeagueEventModel>, IEnumerable, IEnumerator<BoultonLeagueEventModel>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private BoultonLeagueEventModel <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		public PlayerModel <>4__this; //Field offset: 0x28
		private IEnumerator<BoultonLeagueEventModel> <>7__wrap1; //Field offset: 0x30

		private override BoultonLeagueEventModel System.Collections.Generic.IEnumerator<Code.GameLogic.GameEvents.BoultonLeagueEventModel>.Current
		{
			[DebuggerHidden]
			private get { } //Length: 8
		}

		private override object System.Collections.IEnumerator.Current
		{
			[DebuggerHidden]
			private get { } //Length: 8
		}

		[DebuggerHidden]
		public <GetAllActiveAndJoinedBoultonLeagueEvents>d__630(int <>1__state) { }

		private void <>m__Finally1() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<BoultonLeagueEventModel> System.Collections.Generic.IEnumerable<Code.GameLogic.GameEvents.BoultonLeagueEventModel>.GetEnumerator() { }

		[DebuggerHidden]
		private override BoultonLeagueEventModel System.Collections.Generic.IEnumerator<Code.GameLogic.GameEvents.BoultonLeagueEventModel>.get_Current() { }

		[DebuggerHidden]
		private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

		[DebuggerHidden]
		private override object System.Collections.IEnumerator.get_Current() { }

		[DebuggerHidden]
		private override void System.Collections.IEnumerator.Reset() { }

		[DebuggerHidden]
		private override void System.IDisposable.Dispose() { }

	}

	[CompilerGenerated]
	private sealed class <GetInventories>d__577 : IEnumerable<IBoardInventory>, IEnumerable, IEnumerator<IBoardInventory>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private IBoardInventory <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private MergeBoardId boardId; //Field offset: 0x28
		public MergeBoardId <>3__boardId; //Field offset: 0x30
		private int typeFlags; //Field offset: 0x38
		public int <>3__typeFlags; //Field offset: 0x3C
		public PlayerModel <>4__this; //Field offset: 0x40
		private bool forceExpiredInventories; //Field offset: 0x48
		public bool <>3__forceExpiredInventories; //Field offset: 0x49
		private IEnumerator<IBoardInventory> <>7__wrap1; //Field offset: 0x50

		private override IBoardInventory System.Collections.Generic.IEnumerator<GameLogic.Player.IBoardInventory>.Current
		{
			[DebuggerHidden]
			private get { } //Length: 8
		}

		private override object System.Collections.IEnumerator.Current
		{
			[DebuggerHidden]
			private get { } //Length: 8
		}

		[DebuggerHidden]
		public <GetInventories>d__577(int <>1__state) { }

		private void <>m__Finally1() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<IBoardInventory> System.Collections.Generic.IEnumerable<GameLogic.Player.IBoardInventory>.GetEnumerator() { }

		[DebuggerHidden]
		private override IBoardInventory System.Collections.Generic.IEnumerator<GameLogic.Player.IBoardInventory>.get_Current() { }

		[DebuggerHidden]
		private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

		[DebuggerHidden]
		private override object System.Collections.IEnumerator.get_Current() { }

		[DebuggerHidden]
		private override void System.Collections.IEnumerator.Reset() { }

		[DebuggerHidden]
		private override void System.IDisposable.Dispose() { }

	}

	public const int MaxLoginCounts = 30; //Field offset: 0x0
	public const int CleanSessionDataAfterDays = 90; //Field offset: 0x0
	public const int TicksPerSecond = 5; //Field offset: 0x0
	private static readonly string GET_MERGE_BOARDS_ASSERT_MESSAGE; //Field offset: 0x0
	public const int MaxCurrencySpentDays = 30; //Field offset: 0x0
	public const int MaxMoneySpentDays = 30; //Field offset: 0x0
	[CompilerGenerated]
	private IPlayerModelServerListener <ServerListener>k__BackingField; //Field offset: 0x1D8
	[CompilerGenerated]
	private IPlayerModelClientListener <ClientListener>k__BackingField; //Field offset: 0x1E0
	[CompilerGenerated]
	private RandomPCG <Random>k__BackingField; //Field offset: 0x1E8
	[CompilerGenerated]
	private EntityId <PlayerId>k__BackingField; //Field offset: 0x1F0
	[CompilerGenerated]
	private GameSettings <GameSettings>k__BackingField; //Field offset: 0x200
	[CompilerGenerated]
	private Statistics <Statistics>k__BackingField; //Field offset: 0x208
	[CompilerGenerated]
	private PlayerIdentity <PlayerIdentity>k__BackingField; //Field offset: 0x210
	[CompilerGenerated]
	private Wallet <Wallet>k__BackingField; //Field offset: 0x218
	[CompilerGenerated]
	private ProgressState <ProgressState>k__BackingField; //Field offset: 0x220
	[CompilerGenerated]
	private StoreStatus <StoreStatus>k__BackingField; //Field offset: 0x228
	[CompilerGenerated]
	private SpawnFactoryState <SpawnFactoryState>k__BackingField; //Field offset: 0x230
	[CompilerGenerated]
	private BoardInventory <GarageBoardInventory>k__BackingField; //Field offset: 0x238
	[CompilerGenerated]
	private MergeBoard <GarageMergeBoard>k__BackingField; //Field offset: 0x240
	[CompilerGenerated]
	private MergeBoard <EventMergeBoard>k__BackingField; //Field offset: 0x248
	[CompilerGenerated]
	private WeightedDistributionStates <DistributionStates>k__BackingField; //Field offset: 0x250
	[CompilerGenerated]
	private DailyTaskStatus <DailyTaskStatus>k__BackingField; //Field offset: 0x258
	[CompilerGenerated]
	private MergeBoardId <ActiveMergeBoardId>k__BackingField; //Field offset: 0x260
	[CompilerGenerated]
	private List<IPlayerModifier> <PlayerModifiers>k__BackingField; //Field offset: 0x268
	[CompilerGenerated]
	private int <ScriptedEventNextId>k__BackingField; //Field offset: 0x270
	[CompilerGenerated]
	private List<ScriptedEvent> <RegisteredScriptedEvents>k__BackingField; //Field offset: 0x278
	[CompilerGenerated]
	private MetaDictionary<Int32, ThirdPartySurveyStatus> <CompletedThirdPartySurveys>k__BackingField; //Field offset: 0x280
	[CompilerGenerated]
	private PlayerGarageCleanupEventsModel <GarageCleanupEvents>k__BackingField; //Field offset: 0x288
	[MetaMember(211, MetaMemberFlags::None (0))]
	[ServerOnly]
	[Transient]
	public MetaDictionary<MergeBoardId, MetaTime> BoardActivationsLeftAnalyticsEvents; //Field offset: 0x290
	[CompilerGenerated]
	private PlayerProgressionEventsModel <ProgressionEvents>k__BackingField; //Field offset: 0x298
	[CompilerGenerated]
	private bool <HadArtifactsEnabled>k__BackingField; //Field offset: 0x2A0
	[CompilerGenerated]
	private GameFeaturesStates <UnlockedFeatures>k__BackingField; //Field offset: 0x2A8
	[CompilerGenerated]
	private List<MetaTime> <SessionsInTheLast240HoursStartAt>k__BackingField; //Field offset: 0x2B0
	[CompilerGenerated]
	private string <AnalyticsApiKey>k__BackingField; //Field offset: 0x2B8
	[CompilerGenerated]
	private SortedDictionary<Int32, Int32> <LoginCountsPerDay>k__BackingField; //Field offset: 0x2C0
	[CompilerGenerated]
	private OrderedSet<PlayerSegmentId> <ForcedSegments>k__BackingField; //Field offset: 0x2C8
	[CompilerGenerated]
	private Queue<PlayerAnalyticsEventDPL2> <AnalyticsEvents>k__BackingField; //Field offset: 0x2D0
	[CompilerGenerated]
	private int <NumOfResets>k__BackingField; //Field offset: 0x2D8
	[CompilerGenerated]
	private PlayerScheduledActions <ScheduledActions>k__BackingField; //Field offset: 0x2E0
	[CompilerGenerated]
	private CurrencyBanksModel <CurrencyBanksModel>k__BackingField; //Field offset: 0x2E8
	[CompilerGenerated]
	private ClientPlatform <LastClientPlatform>k__BackingField; //Field offset: 0x2F0
	[CompilerGenerated]
	private PlayerCollectibleBoardEventsModel <CollectibleBoardEvents>k__BackingField; //Field offset: 0x2F8
	[CompilerGenerated]
	private string <PlayerName>k__BackingField; //Field offset: 0x300
	[CompilerGenerated]
	private PlayerLeaderboardEventsModel <LeaderboardEvents>k__BackingField; //Field offset: 0x308
	[CompilerGenerated]
	private ulong <Flags>k__BackingField; //Field offset: 0x310
	[CompilerGenerated]
	private SortedDictionary<Int32, F64> <MoneySpentPerDay>k__BackingField; //Field offset: 0x318
	[CompilerGenerated]
	private ReEngagementSettingsId <ReEngagementSettingsId>k__BackingField; //Field offset: 0x320
	[CompilerGenerated]
	private MetaDuration <DebugTimeOffsetValue>k__BackingField; //Field offset: 0x328
	[CompilerGenerated]
	private List<ProgressionEventId> <ProgressionEventIAPStreaks>k__BackingField; //Field offset: 0x330
	[CompilerGenerated]
	private BoardInventory <RentableBoardInventory>k__BackingField; //Field offset: 0x338
	[CompilerGenerated]
	private MetaTime <RentableInventoryExpirationTime>k__BackingField; //Field offset: 0x340
	[CompilerGenerated]
	private int <RentableInventoryBoughtBatchCount>k__BackingField; //Field offset: 0x348
	[CompilerGenerated]
	private BoardInventory <GarageBoardProducerInventory>k__BackingField; //Field offset: 0x350
	[CompilerGenerated]
	private RentableInventoryState <RentableInventoryState>k__BackingField; //Field offset: 0x358
	[CompilerGenerated]
	private List<String> <UnlockedSongs>k__BackingField; //Field offset: 0x360
	[MetaMember(244, MetaMemberFlags::None (0))]
	private Nullable<MetaTime> previousIntervalCheckTime; //Field offset: 0x368
	[CompilerGenerated]
	private PlayerDecorationShopsModel <DecorationShops>k__BackingField; //Field offset: 0x378
	[CompilerGenerated]
	private OrderedSet<PlayerModeId> <ActiveModesGlobal>k__BackingField; //Field offset: 0x380
	[CompilerGenerated]
	private bool <IsProductionEnvironment>k__BackingField; //Field offset: 0x388
	[CompilerGenerated]
	private PlayerBanInfo <LegacyBanInfo>k__BackingField; //Field offset: 0x390
	[CompilerGenerated]
	private MetaDictionary<Int32, RandomPCG> <RandomsByFishingRodType>k__BackingField; //Field offset: 0x398
	[CompilerGenerated]
	private OverrideSpawnItemsStatus <OverrideSpawnItemsStatus>k__BackingField; //Field offset: 0x3A0
	[CompilerGenerated]
	private WebshopState <WebshopState>k__BackingField; //Field offset: 0x3A8
	[CompilerGenerated]
	private PlayerMysteryMachineEventsModel <MysteryMachineEvents>k__BackingField; //Field offset: 0x3B0
	[CompilerGenerated]
	private RandomPCG <MysteryMachineRandom>k__BackingField; //Field offset: 0x3B8
	[CompilerGenerated]
	private int <MysteryMachineEventsStarted>k__BackingField; //Field offset: 0x3C0
	[CompilerGenerated]
	private List<ProducerInventorySlotState> <ProducerInventoryEntries>k__BackingField; //Field offset: 0x3C8
	[CompilerGenerated]
	private int <MysteryMachineAllTasksCompletedRewardClaimedEventInstance>k__BackingField; //Field offset: 0x3D0
	[CompilerGenerated]
	private MetaDictionary<MetaTime, MetaDuration> <SessionData>k__BackingField; //Field offset: 0x3D8
	[CompilerGenerated]
	private DailyTasksV2Status <DailyTasksV2Status>k__BackingField; //Field offset: 0x3E0
	[CompilerGenerated]
	private bool <HasAds>k__BackingField; //Field offset: 0x3E8
	[CompilerGenerated]
	private UnitySystemInfo <UnitySystemInfo>k__BackingField; //Field offset: 0x3F0
	[CompilerGenerated]
	private PlayerEnergyModeEventsModel <EnergyModeEvents>k__BackingField; //Field offset: 0x3F8
	[CompilerGenerated]
	private PlayerMiniEventsModel <MiniEvents>k__BackingField; //Field offset: 0x400
	[CompilerGenerated]
	private PlayerMiniEventOverrides <MiniEventOverrides>k__BackingField; //Field offset: 0x408
	[CompilerGenerated]
	private PlayerSoloMilestoneEventModel <SoloMilestoneEvents>k__BackingField; //Field offset: 0x410
	[CompilerGenerated]
	private int <SoloMilestoneEventsStarted>k__BackingField; //Field offset: 0x418
	[CompilerGenerated]
	private RandomPCG <SoloMilestoneRandom>k__BackingField; //Field offset: 0x420
	[CompilerGenerated]
	private PlayerDailyScoopEventModel <DailyScoopEvents>k__BackingField; //Field offset: 0x428
	[CompilerGenerated]
	private List<Int32> <MassMailsReceived>k__BackingField; //Field offset: 0x430
	[CompilerGenerated]
	private RandomPCG <RewardContainerRandom>k__BackingField; //Field offset: 0x438
	[CompilerGenerated]
	private PlayerMysteryMachineLeaderboardRewardsState <MysteryMachineLeaderboardRewardsState>k__BackingField; //Field offset: 0x440
	[CompilerGenerated]
	private PlayerBoultonLeagueEventsModel <BoultonLeagueEvents>k__BackingField; //Field offset: 0x448
	[CompilerGenerated]
	private BoultonLeagueStatus <BoultonLeagueStatus>k__BackingField; //Field offset: 0x450
	[CompilerGenerated]
	private PlayerTemporaryCardCollectionEventsModel <TemporaryCardCollectionEvents>k__BackingField; //Field offset: 0x458
	[CompilerGenerated]
	private RandomPCG <StackMiniGameRandom>k__BackingField; //Field offset: 0x460
	[CompilerGenerated]
	private MetaDictionary<CollectibleBoardEventId, Queue`1<Int32>> <PastPortalsGivenPerEvent>k__BackingField; //Field offset: 0x468
	[CompilerGenerated]
	private MetaTime <LastTimeZoneUpdateTimestamp>k__BackingField; //Field offset: 0x470
	[CompilerGenerated]
	private ProgressionPackEventsModel <ProgressionPackEvents>k__BackingField; //Field offset: 0x478
	[CompilerGenerated]
	private MetaDictionary<MergeBoardId, OrderedSet`1<PlayerModeId>> <ActiveModesPerBoard>k__BackingField; //Field offset: 0x480
	[CompilerGenerated]
	private PlayerShortLeaderboardEventsModel <ShortLeaderboardEvents>k__BackingField; //Field offset: 0x488
	[CompilerGenerated]
	private List<DigEventBoardId> <CompletedShinyBoards>k__BackingField; //Field offset: 0x490
	[CompilerGenerated]
	private DigEvent <DigEvents>k__BackingField; //Field offset: 0x498
	[CompilerGenerated]
	private RandomPCG <DigEventRandom>k__BackingField; //Field offset: 0x4A0
	[CompilerGenerated]
	private DigEventBoardId <CurrentDigEventBoard>k__BackingField; //Field offset: 0x4A8
	[CompilerGenerated]
	private DigEventMuseumModel <DigEventMuseum>k__BackingField; //Field offset: 0x4B0
	[CompilerGenerated]
	private int <DigEventShinyBoardTries>k__BackingField; //Field offset: 0x4B8
	[CompilerGenerated]
	private DigEventMinigameData <DigEventMinigameData>k__BackingField; //Field offset: 0x4C0
	[CompilerGenerated]
	private PlayerCardCollectionSupportingEventsModel <CardCollectionSupportingEvents>k__BackingField; //Field offset: 0x4C8
	[CompilerGenerated]
	private OrderedSet<EventLevelData> <EventLevelsUpgradedByCardCollectionSupportingEvent>k__BackingField; //Field offset: 0x4D0
	[CompilerGenerated]
	private MetaDictionary<LocationId, F64> <CameraZoomPerLocation>k__BackingField; //Field offset: 0x4D8
	[CompilerGenerated]
	private bool <DebugUseAreaGlobalRequirement>k__BackingField; //Field offset: 0x4E0
	[CompilerGenerated]
	private LocationId <StartLocation>k__BackingField; //Field offset: 0x4E4
	[CompilerGenerated]
	private PlayerCoreSupportEventsModel <CoreSupportEvents>k__BackingField; //Field offset: 0x4E8
	[CompilerGenerated]
	private PlayerMixABoosterEventsModel <MixABoosterEvents>k__BackingField; //Field offset: 0x4F0
	[CompilerGenerated]
	private int <CurrentDigEventShinyProgressIndex>k__BackingField; //Field offset: 0x4F8
	[CompilerGenerated]
	private RandomPCG <DigEventChanceRandom>k__BackingField; //Field offset: 0x500
	[CompilerGenerated]
	private MetaDictionary<LocationId, F64Vec3> <CameraPositionsPerLocation>k__BackingField; //Field offset: 0x508
	[CompilerGenerated]
	private LastNSegmentsCache <LastNSegmentsCache>k__BackingField; //Field offset: 0x510
	[CompilerGenerated]
	private Nullable<TasksTabStyle> <OverrideTasksTabStyle>k__BackingField; //Field offset: 0x518
	[CompilerGenerated]
	private RandomPCG <RollTheDiceRandom>k__BackingField; //Field offset: 0x520
	[CompilerGenerated]
	private RollTheDiceMinigameData <RollTheDiceMinigameData>k__BackingField; //Field offset: 0x528
	[CompilerGenerated]
	private SegmentorState <Segmentor>k__BackingField; //Field offset: 0x530
	[CompilerGenerated]
	private CustomMergeBoardsState <CustomMergeBoardsState>k__BackingField; //Field offset: 0x538
	[CompilerGenerated]
	private DailyChallengesEventsHistoricalDataModel <DailyChallengesEventsHistoricalData>k__BackingField; //Field offset: 0x540
	[CompilerGenerated]
	private BuilderEventMinigameData <BuilderEventMinigameData>k__BackingField; //Field offset: 0x548
	[CompilerGenerated]
	private PityRuns <PityRuns>k__BackingField; //Field offset: 0x550
	[CompilerGenerated]
	private IAutoMergeFeatureModel <AutoMergeFeatureModel>k__BackingField; //Field offset: 0x558
	[IgnoreDataMember]
	private readonly ICollection<MergeBoardAct> updateActs; //Field offset: 0x560
	[CompilerGenerated]
	private PlayerModifiersChangedEvent <ModifiersChanged>k__BackingField; //Field offset: 0x568
	[CompilerGenerated]
	private PlayerModesChangedEvent <ModesChanged>k__BackingField; //Field offset: 0x570
	[CompilerGenerated]
	private string <SessionConfigVersion>k__BackingField; //Field offset: 0x578
	[CompilerGenerated]
	private string <ServerBuildVersion>k__BackingField; //Field offset: 0x580
	[CompilerGenerated]
	private string <SessionHandshakeDeviceModel>k__BackingField; //Field offset: 0x588
	[CompilerGenerated]
	private Action<PlayerEventBase> EventStreamInterceptor; //Field offset: 0x590
	private bool _modelEventsRegistered; //Field offset: 0x598
	private readonly Dictionary<Type, Dictionary`2<Delegate, Action`1<PlayerEventBase>>> _eventStreamTypedHandlers; //Field offset: 0x5A0

	public override event Action<PlayerEventBase> EventStreamInterceptor
	{
		[CompilerGenerated]
		 add { } //Length: 176
		[CompilerGenerated]
		 remove { } //Length: 176
	}

	public override IEnumerable<CardCollectionSupportingEventModel> ActiveCardCollectionSupportingEvents
	{
		 get { } //Length: 84
	}

	public override IEnumerable<CollectibleBoardEventModel> ActiveCollectibleBoardEvents
	{
		 get { } //Length: 84
	}

	public override IEnumerable<CoreSupportEventModel> ActiveCoreSupportEvents
	{
		 get { } //Length: 84
	}

	public override IEnumerable<DailyScoopEventModel> ActiveDailyScoopEvents
	{
		 get { } //Length: 84
	}

	public override IEnumerable<EnergyModeEventModel> ActiveEnergyModeEvents
	{
		 get { } //Length: 84
	}

	public override IEnumerable<GarageCleanupEventModel> ActiveGarageCleanups
	{
		 get { } //Length: 84
	}

	public override IEnumerable<LeaderboardEventModel> ActiveLeaderboardEvents
	{
		 get { } //Length: 84
	}

	[MetaMember(201, MetaMemberFlags::None (0))]
	[Transient]
	public override MergeBoardId ActiveMergeBoardId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	public override IEnumerable<MiniEventModel> ActiveMiniEvents
	{
		 get { } //Length: 84
	}

	public IEnumerable<MixABoosterEventModel> ActiveMixABoosterEvents
	{
		 get { } //Length: 84
	}

	[MetaMember(246, MetaMemberFlags::None (0))]
	public private override OrderedSet<PlayerModeId> ActiveModesGlobal
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(287, MetaMemberFlags::None (0))]
	public private override MetaDictionary<MergeBoardId, OrderedSet`1<PlayerModeId>> ActiveModesPerBoard
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	public override IEnumerable<IPlayerModifier> ActiveModifiers
	{
		 get { } //Length: 8
	}

	public override List<IPlayerModifier> ActiveModifiersNonAlloc
	{
		 get { } //Length: 8
	}

	public override IEnumerable<MysteryMachineEventModel> ActiveMysteryMachineEvents
	{
		 get { } //Length: 84
	}

	[IgnoreDataMember]
	public override IEnumerable<IActiveOfferGroup> ActiveOfferGroups
	{
		 get { } //Length: 12
	}

	public override IEnumerable<ProgressionEventModel> ActiveProgressionEvents
	{
		 get { } //Length: 84
	}

	public IEnumerable<ProgressionPackEventModel> ActiveProgressionPackEvents
	{
		 get { } //Length: 84
	}

	public override IEnumerable<ShortLeaderboardEventModel> ActiveShortLeaderboardEvents
	{
		[IteratorStateMachine(typeof(<get_ActiveShortLeaderboardEvents>d__613))]
		 get { } //Length: 116
	}

	public override IEnumerable<SoloMilestoneEventModel> ActiveSoloMilestoneEvents
	{
		 get { } //Length: 84
	}

	public override IEnumerable<TemporaryCardCollectionEventModel> ActiveTemporaryCardCollectionEvents
	{
		 get { } //Length: 84
	}

	public override IEnumerable<GarageCleanupEventModel> AllGarageCleanups
	{
		 get { } //Length: 132
	}

	[MetaMember(217, MetaMemberFlags::None (0))]
	[Transient]
	public string AnalyticsApiKey
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[MetaMember(261, MetaMemberFlags::None (0))]
	[ServerOnly]
	public private Queue<PlayerAnalyticsEventDPL2> AnalyticsEvents
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(320, MetaMemberFlags::None (0))]
	public private override IAutoMergeFeatureModel AutoMergeFeatureModel
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[IgnoreDataMember]
	public override IEnumerable<IBoard> Boards
	{
		 get { } //Length: 1240
	}

	[IgnoreDataMember]
	public override IEnumerable<ValueTuple`2<IBoard, Nullable`1<MetaTime>>> BoardsWithExpirationTimes
	{
		 get { } //Length: 340
	}

	[IgnoreDataMember]
	public BoultonLeagueDivisionClientState BoultonLeagueDivisionClientState
	{
		 get { } //Length: 284
	}

	[MetaMember(277, MetaMemberFlags::None (0))]
	public private PlayerBoultonLeagueEventsModel BoultonLeagueEvents
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(278, MetaMemberFlags::None (0))]
	public private override BoultonLeagueStatus BoultonLeagueStatus
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(318, MetaMemberFlags::None (0))]
	public private BuilderEventMinigameData BuilderEventMinigameData
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(308, MetaMemberFlags::None (0))]
	[NoChecksum]
	public MetaDictionary<LocationId, F64Vec3> CameraPositionsPerLocation
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[MetaMember(300, MetaMemberFlags::None (0))]
	public MetaDictionary<LocationId, F64> CameraZoomPerLocation
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[MetaMember(296, MetaMemberFlags::None (0))]
	public private override PlayerCardCollectionSupportingEventsModel CardCollectionSupportingEvents
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[IgnoreDataMember]
	public override ClassicRacesEventDivisionClientState ClassicRacesEventDivisionClientState
	{
		 get { } //Length: 284
	}

	[IgnoreDataMember]
	public override IPlayerModelClientListener ClientListener
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[MetaMember(226, MetaMemberFlags::None (0))]
	public private override PlayerCollectibleBoardEventsModel CollectibleBoardEvents
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(289, MetaMemberFlags::None (0))]
	public List<DigEventBoardId> CompletedShinyBoards
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[MetaMember(209, MetaMemberFlags::None (0))]
	public private MetaDictionary<Int32, ThirdPartySurveyStatus> CompletedThirdPartySurveys
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(303, MetaMemberFlags::None (0))]
	public private override PlayerCoreSupportEventsModel CoreSupportEvents
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[IgnoreDataMember]
	public override CurrencyBankModel CurrencyBankModel
	{
		 get { } //Length: 120
	}

	[MetaMember(223, MetaMemberFlags::None (0))]
	public override CurrencyBanksModel CurrencyBanksModel
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[MetaMember(292, MetaMemberFlags::None (0))]
	public override DigEventBoardId CurrentDigEventBoard
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[MetaMember(305, MetaMemberFlags::None (0))]
	public int CurrentDigEventShinyProgressIndex
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[IgnoreDataMember]
	public override PlayerLocalTime CurrentLocalTime
	{
		 get { } //Length: 8
	}

	[MetaMember(316, MetaMemberFlags::None (0))]
	public private CustomMergeBoardsState CustomMergeBoardsState
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(317, MetaMemberFlags::None (0))]
	private DailyChallengesEventsHistoricalDataModel DailyChallengesEventsHistoricalData
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(272, MetaMemberFlags::None (0))]
	public private PlayerDailyScoopEventModel DailyScoopEvents
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(115, MetaMemberFlags::None (0))]
	public override DailyTaskStatus DailyTaskStatus
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[MetaMember(263, MetaMemberFlags::None (0))]
	public private override DailyTasksV2Status DailyTasksV2Status
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	public virtual MetaDuration DebugTimeOffset
	{
		 get { } //Length: 8
	}

	[MetaMember(234, MetaMemberFlags::None (0))]
	public MetaDuration DebugTimeOffsetValue
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(301, MetaMemberFlags::None (0))]
	public override bool DebugUseAreaGlobalRequirement
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(245, MetaMemberFlags::None (0))]
	public private PlayerDecorationShopsModel DecorationShops
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(307, MetaMemberFlags::None (0))]
	public RandomPCG DigEventChanceRandom
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[MetaMember(295, MetaMemberFlags::None (0))]
	public private DigEventMinigameData DigEventMinigameData
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(293, MetaMemberFlags::None (0))]
	public private override DigEventMuseumModel DigEventMuseum
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(291, MetaMemberFlags::None (0))]
	public override RandomPCG DigEventRandom
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[MetaMember(290, MetaMemberFlags::None (0))]
	public DigEvent DigEvents
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[MetaMember(294, MetaMemberFlags::None (0))]
	public int DigEventShinyBoardTries
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(113, MetaMemberFlags::None (0))]
	public override WeightedDistributionStates DistributionStates
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[MetaMember(266, MetaMemberFlags::None (0))]
	public private override PlayerEnergyModeEventsModel EnergyModeEvents
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(297, MetaMemberFlags::None (0))]
	public override OrderedSet<EventLevelData> EventLevelsUpgradedByCardCollectionSupportingEvent
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[ExcludeFromGdprExport]
	[MetaMember(111, MetaMemberFlags::None (0))]
	public MergeBoard EventMergeBoard
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[MetaMember(229, MetaMemberFlags::None (0))]
	public private ulong Flags
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(219, MetaMemberFlags::None (0))]
	public private OrderedSet<PlayerSegmentId> ForcedSegments
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[IgnoreDataMember]
	[Obsolete("use MergeMansionGameConfig instead")]
	public override SharedGameConfig GameConfig
	{
		 get { } //Length: 92
	}

	private override IBuilderEventMinigameData GameLogic.Player.IPlayer.BuilderEventMinigameData
	{
		private get { } //Length: 8
	}

	[IgnoreDataMember]
	private override MetacoreTime GameLogic.Player.IPlayer.CurrentTime
	{
		private get { } //Length: 340
	}

	private override ICustomMergeBoardsState GameLogic.Player.IPlayer.CustomMergeBoardsState
	{
		private get { } //Length: 8
	}

	private override IDailyChallengesEventsHistoricalDataModel GameLogic.Player.IPlayer.DailyChallengesEventsHistoricalData
	{
		private get { } //Length: 8
	}

	private override IDigEventMinigameData GameLogic.Player.IPlayer.DigEventMinigameData
	{
		private get { } //Length: 8
	}

	[IgnoreDataMember]
	private override IBoardInventory GameLogic.Player.IPlayer.GarageBoardInventory
	{
		private get { } //Length: 8
		private set { } //Length: 180
	}

	[IgnoreDataMember]
	private override IBoardInventory GameLogic.Player.IPlayer.GarageBoardProducerInventory
	{
		private get { } //Length: 8
	}

	[IgnoreDataMember]
	private override ILastNSegmentsCache GameLogic.Player.IPlayer.LastNSegmentsCache
	{
		private get { } //Length: 8
	}

	[IgnoreDataMember]
	private override IReadOnlyList<IWritableProducerInventorySlotState> GameLogic.Player.IPlayer.ProducerInventoryEntries
	{
		private get { } //Length: 8
	}

	[IgnoreDataMember]
	private override IBoardInventory GameLogic.Player.IPlayer.RentableBoardInventory
	{
		private get { } //Length: 8
	}

	private override IRollTheDiceMinigameData GameLogic.Player.IPlayer.RollTheDiceMinigameData
	{
		private get { } //Length: 8
	}

	[IgnoreDataMember]
	private override IMetacorePlayerTimeZoneInfo GameLogic.Player.IPlayer.TimeZoneInfo
	{
		private get { } //Length: 168
	}

	[MetaMember(100, MetaMemberFlags::None (0))]
	[NoChecksum]
	public private override GameSettings GameSettings
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[ExcludeFromGdprExport]
	[MetaMember(107, MetaMemberFlags::None (0))]
	public BoardInventory GarageBoardInventory
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[MetaMember(240, MetaMemberFlags::None (0))]
	public private BoardInventory GarageBoardProducerInventory
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[IgnoreDataMember]
	public override GarageCleanupEventModel GarageCleanupEventModel
	{
		 get { } //Length: 124
	}

	[MetaMember(210, MetaMemberFlags::None (0))]
	public private PlayerGarageCleanupEventsModel GarageCleanupEvents
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[ExcludeFromGdprExport]
	[MetaMember(109, MetaMemberFlags::None (0))]
	public override MergeBoard GarageMergeBoard
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[MetaMember(213, MetaMemberFlags::None (0))]
	private bool HadArtifactsEnabled
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(264, MetaMemberFlags::None (0))]
	public bool HasAds
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(247, MetaMemberFlags::None (0))]
	[Transient]
	public override bool IsProductionEnvironment
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[IgnoreDataMember]
	public bool IsRentableInventoryExpired
	{
		 get { } //Length: 216
	}

	[MetaMember(225, MetaMemberFlags::None (0))]
	public private ClientPlatform LastClientPlatform
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public override Option<PlayerLocation> LastKnownLocationOption
	{
		 get { } //Length: 252
	}

	[MetaMember(310, MetaMemberFlags::None (0))]
	private LastNSegmentsCache LastNSegmentsCache
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(283, MetaMemberFlags::None (0))]
	private MetaTime LastTimeZoneUpdateTimestamp
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public LeaderboardClientState LeaderboardClientState
	{
		 get { } //Length: 284
	}

	[MetaMember(228, MetaMemberFlags::None (0))]
	public private override PlayerLeaderboardEventsModel LeaderboardEvents
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(248, MetaMemberFlags::None (0))]
	[NoChecksum]
	[Obsolete]
	[ServerOnly]
	private PlayerBanInfo LegacyBanInfo
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(218, MetaMemberFlags::None (0))]
	[NoChecksum]
	public private SortedDictionary<Int32, Int32> LoginCountsPerDay
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	public override IEnumerable<IMailMessage> MailMessages
	{
		 get { } //Length: 132
	}

	[MetaMember(273, MetaMemberFlags::None (0))]
	[ServerOnly]
	public List<Int32> MassMailsReceived
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[IgnoreDataMember]
	public override IMergeMansionGameConfig MergeMansionGameConfig
	{
		 get { } //Length: 4
	}

	[MetaMember(268, MetaMemberFlags::None (0))]
	public private override PlayerMiniEventOverrides MiniEventOverrides
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(267, MetaMemberFlags::None (0))]
	public private PlayerMiniEventsModel MiniEvents
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[IgnoreDataMember]
	private MetaDuration MinTimeBetweenTimeZoneUpdate
	{
		private get { } //Length: 84
	}

	[MetaMember(304, MetaMemberFlags::None (0))]
	public private PlayerMixABoosterEventsModel MixABoosterEvents
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	public override PlayerModesChangedEvent ModesChanged
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	public override PlayerModifiersChangedEvent ModifiersChanged
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[MetaMember(230, MetaMemberFlags::None (0))]
	public private override SortedDictionary<Int32, F64> MoneySpentPerDay
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(260, MetaMemberFlags::None (0))]
	public int MysteryMachineAllTasksCompletedRewardClaimedEventInstance
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(255, MetaMemberFlags::None (0))]
	public private override PlayerMysteryMachineEventsModel MysteryMachineEvents
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(257, MetaMemberFlags::None (0))]
	public int MysteryMachineEventsStarted
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(276, MetaMemberFlags::None (0))]
	public PlayerMysteryMachineLeaderboardRewardsState MysteryMachineLeaderboardRewardsState
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[MetaMember(256, MetaMemberFlags::None (0))]
	public override RandomPCG MysteryMachineRandom
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[MetaMember(221, MetaMemberFlags::None (0))]
	[ServerOnly]
	public private int NumOfResets
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(253, MetaMemberFlags::None (0))]
	public override OverrideSpawnItemsStatus OverrideSpawnItemsStatus
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[MetaMember(311, MetaMemberFlags::None (0))]
	public Nullable<TasksTabStyle> OverrideTasksTabStyle
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[IgnoreDataMember]
	public override Option<TasksTabStyle> OverrideTasksTabStyleOption
	{
		 get { } //Length: 380
	}

	[MetaMember(282, MetaMemberFlags::None (0))]
	public MetaDictionary<CollectibleBoardEventId, Queue`1<Int32>> PastPortalsGivenPerEvent
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[MetaMember(319, MetaMemberFlags::None (0))]
	public private override PityRuns PityRuns
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(99, MetaMemberFlags::None (0))]
	public virtual EntityId PlayerId
	{
		[CompilerGenerated]
		 get { } //Length: 12
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(102, MetaMemberFlags::None (0))]
	[NoChecksum]
	public private override PlayerIdentity PlayerIdentity
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	public virtual int PlayerLevel
	{
		 get { } //Length: 24
		 set { } //Length: 56
	}

	[MetaMember(204, MetaMemberFlags::None (0))]
	private List<IPlayerModifier> PlayerModifiers
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(227, MetaMemberFlags::None (0))]
	[NoChecksum]
	public virtual string PlayerName
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[MetaMember(259, MetaMemberFlags::None (0))]
	public private List<ProducerInventorySlotState> ProducerInventoryEntries
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[IgnoreDataMember]
	public override int ProgressionEventIAPStreakLength
	{
		 get { } //Length: 72
	}

	[MetaMember(235, MetaMemberFlags::None (0))]
	private List<ProgressionEventId> ProgressionEventIAPStreaks
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(212, MetaMemberFlags::None (0))]
	public private override PlayerProgressionEventsModel ProgressionEvents
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(286, MetaMemberFlags::None (0))]
	public private override ProgressionPackEventsModel ProgressionPackEvents
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(104, MetaMemberFlags::None (0))]
	public private override ProgressState ProgressState
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[ExcludeFromGdprExport]
	[MetaMember(11, MetaMemberFlags::None (0))]
	public private override RandomPCG Random
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(252, MetaMemberFlags::None (0))]
	public override MetaDictionary<Int32, RandomPCG> RandomsByFishingRodType
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[MetaMember(232, MetaMemberFlags::None (0))]
	public ReEngagementSettingsId ReEngagementSettingsId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[MetaMember(207, MetaMemberFlags::None (0))]
	private List<ScriptedEvent> RegisteredScriptedEvents
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(236, MetaMemberFlags::None (0))]
	public private BoardInventory RentableBoardInventory
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[IgnoreDataMember]
	[TupleElementNames(new IL2CPP_TYPE_STRING[] {"inventory", "expirationTime"})]
	public override ValueTuple<IBoardInventory, Nullable`1<MetaTime>> RentableInventory
	{
		 get { } //Length: 172
	}

	[MetaMember(238, MetaMemberFlags::None (0))]
	public private int RentableInventoryBoughtBatchCount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(237, MetaMemberFlags::None (0))]
	public private MetaTime RentableInventoryExpirationTime
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(242, MetaMemberFlags::None (0))]
	public RentableInventoryState RentableInventoryState
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(275, MetaMemberFlags::None (0))]
	public override RandomPCG RewardContainerRandom
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[MetaMember(314, MetaMemberFlags::None (0))]
	public private RollTheDiceMinigameData RollTheDiceMinigameData
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(313, MetaMemberFlags::None (0))]
	public override RandomPCG RollTheDiceRandom
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[MetaMember(222, MetaMemberFlags::None (0))]
	public private PlayerScheduledActions ScheduledActions
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(206, MetaMemberFlags::None (0))]
	private int ScriptedEventNextId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public IReadOnlyList<ScriptedEvent> ScriptedEvents
	{
		 get { } //Length: 8
	}

	[MetaMember(315, MetaMemberFlags::None (0))]
	public private override SegmentorState Segmentor
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[IgnoreDataMember]
	public string ServerBuildVersion
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[IgnoreDataMember]
	public override IPlayerModelServerListener ServerListener
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[IgnoreDataMember]
	public string SessionConfigVersion
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[MetaMember(262, MetaMemberFlags::None (0))]
	[NoChecksum]
	public MetaDictionary<MetaTime, MetaDuration> SessionData
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[IgnoreDataMember]
	public string SessionHandshakeDeviceModel
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[MetaMember(215, MetaMemberFlags::None (0))]
	[NoChecksum]
	public List<MetaTime> SessionsInTheLast240HoursStartAt
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[IgnoreDataMember]
	public override ShortLeaderboardEventDivisionClientState ShortLeaderboardEventDivisionClientState
	{
		 get { } //Length: 284
	}

	[MetaMember(288, MetaMemberFlags::None (0))]
	public private override PlayerShortLeaderboardEventsModel ShortLeaderboardEvents
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(269, MetaMemberFlags::None (0))]
	public private override PlayerSoloMilestoneEventModel SoloMilestoneEvents
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(270, MetaMemberFlags::None (0))]
	public int SoloMilestoneEventsStarted
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(271, MetaMemberFlags::None (0))]
	public private override RandomPCG SoloMilestoneRandom
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(106, MetaMemberFlags::None (0))]
	public private override SpawnFactoryState SpawnFactoryState
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[IgnoreDataMember]
	public override SpawnFactoryState SpawnState
	{
		 get { } //Length: 8
	}

	[MetaMember(281, MetaMemberFlags::None (0))]
	public override RandomPCG StackMiniGameRandom
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[MetaMember(302, MetaMemberFlags::None (0))]
	public override LocationId StartLocation
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(101, MetaMemberFlags::None (0))]
	[NoChecksum]
	public private override Statistics Statistics
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(105, MetaMemberFlags::None (0))]
	public private override StoreStatus StoreStatus
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(279, MetaMemberFlags::None (0))]
	public private override PlayerTemporaryCardCollectionEventsModel TemporaryCardCollectionEvents
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(265, MetaMemberFlags::None (0))]
	[NoChecksum]
	public private UnitySystemInfo UnitySystemInfo
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	[MetaMember(214, MetaMemberFlags::None (0))]
	public override GameFeaturesStates UnlockedFeatures
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[MetaMember(243, MetaMemberFlags::None (0))]
	public List<String> UnlockedSongs
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[MetaMember(103, MetaMemberFlags::None (0))]
	public override Wallet Wallet
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	[MetaMember(254, MetaMemberFlags::None (0))]
	public WebshopState WebshopState
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	private static PlayerModel() { }

	public PlayerModel() { }

	[CompilerGenerated]
	private MergeChainId <ConvertArtifactsToBoxes>b__673_2(MergeItem item) { }

	[CompilerGenerated]
	private int <ConvertArtifactsToBoxes>b__673_4(IGrouping<MergeChainId, MergeItem> group) { }

	[CompilerGenerated]
	private List<IItemDefinition> <ConvertArtifactsToBoxes>b__673_6(KeyValuePair<MergeChainId, Int32> pair) { }

	[CompilerGenerated]
	private int <ConvertArtifactsToBoxes>b__673_9(MergeItem item) { }

	[CompilerGenerated]
	private PlayerTimeZoneInfo <GameLogic.Player.IPlayer.get_TimeZoneInfo>b__19_0() { }

	[CompilerGenerated]
	private bool <GetActiveOrSoldOutOfferGroup>g__IsSoldOutOfferGroupModel|676_0(MetaOfferGroupModelBase offerGroupModel, ref <>c__DisplayClass676_0 unnamed_param_1) { }

	[CompilerGenerated]
	public override void add_EventStreamInterceptor(Action<PlayerEventBase> value) { }

	public void AddMailToInbox(MetaInGameMail mailContents, MetaTime timestamp) { }

	public void AddMailToInbox(MetaInGameMail mailContents) { }

	public override IPlayerModifier AddModifier(IPlayerModifier playerModifier) { }

	public override void AddProgressionEventIAPStreak(ProgressionEventId eventId) { }

	public void AddRentableInventoryBatch(int amountToAdd) { }

	public override void AddScriptedEvent(IScriptedEventCondition condition, ISerializedAction action) { }

	public void AddTimeToRentableInventory(MetaDuration duration) { }

	public void AddTokensToFlashSales(SoloMilestoneEventModel eventModel) { }

	private void AnalyticsCurrencyReceivedEvent(Currencies currency, long amountSoft, long amountHard, CurrencySource currencySource, int itemId, EventCurrencyId eventCurrencyId, AnalyticsContext context) { }

	private void AnalyticsCurrencyRemovedEvent(Currencies currency, long amountSoft, long amountHard, CurrencySink currencySink, int itemId, EventCurrencyId eventCurrencyId, AnalyticsContext context) { }

	private void AnalyticsItemDiscoveredEvent(int itemId) { }

	public void AnalyticsZeroEnergyCostActivationEvent(long analyticsFakeZeroEnergyCost, long analyticsFakeZeroEnergySaldo, CurrencySink currencySink, int itemId, AnalyticsContext context, string attachmnet, int attachmentAmount) { }

	public bool AreFlagsSet(ulong flags) { }

	public override BoultonLeagueEventModel BoultonLeagueEventState(BoultonLeagueEventInfo eventInfo) { }

	public ValueTuple<Int32, Int32> CalculateDailyTaskV2TokenAmount(SoloMilestoneEventModel model, int taskSoloMilestonePoints) { }

	public override ValueTuple<Int32, Int32> CalculateHotspotTokenAmount(SoloMilestoneEventModel model, HotspotDefinition hotspotDefinition) { }

	private bool CanHotspotBeVisible(HotspotId hotspotId) { }

	private void CheckPlayerProgress(RestoredStateFixupChangeLog changeLog) { }

	private void ClampBrokenItemTimers(IBoard board, IPlayer player, RestoredStateFixupChangeLog changeLog) { }

	private void CleanOldSessionData() { }

	private void CleanupPocket() { }

	public void ClearProgressionEventIAPStreak() { }

	public override CollectibleBoardEventModel CollectibleBoardEventState(CollectibleBoardEventInfo eventInfo) { }

	private void CollectItemsOnSessionStart(CollectItemsOnSessionStartSettings sharedGlobalsAutoCollectOnSessionStarted) { }

	private void CollectItemsOnSessionStart(MetaDuration durationSinceInclusive, ICollection<Int32> typesToCollect) { }

	private void CollectPlayerEvent(PlayerEventBase playerEvent) { }

	private void ConvertArtifactsToBoxes(MetacoreTime conversionTime, RestoredStateFixupChangeLog changeLog) { }

	public virtual InAppPurchaseHistory CreateInAppPurchaseHistorySummary(Nullable<MetaTime> now) { }

	public override DailyScoopEventModel DailyScoopEventState(DailyScoopEventInfo eventInfo) { }

	public virtual void DebugForceSetActivablePhase(MetaActivableKindId kindId, string activableIdStr, Nullable<DebugPhase> phase) { }

	private void DoStartupCleanupForReEngagement() { }

	private void ExpireModifiers(MetaTime tick) { }

	private IBoardEventModel FindBoardEventModel(MetaActivableSet<TId, TInfo, TEventState> model, MergeBoardId boardId) { }

	private ShortLeaderboardEventModel FindShortLeaderboardEventModel(MergeBoardId boardId) { }

	protected virtual PlayerAuthEntryBase FixupLegacyPlayerAuthEntry(AuthenticationKey key, LegacyPlayerAuthEntry auth) { }

	private void FixVisibleHotspots(RestoredStateFixupChangeLog changeLog) { }

	public void ForceReEngagementCleanup(ReEngagementSettings activeSettings) { }

	public void ForceSessionStartCleanup(ICollection<Int32> typesToCollect, MetacoreTime now, out int mergeBoardTupleCount, out int inventoryMergeItemCount) { }

	public void ForwardEvent(PlayerEventBase evt) { }

	protected virtual void GameFastForwardTime(MetaDuration elapsedTime) { }

	protected virtual void GameImportAfterOverwrite(PlayerModel source) { }

	protected virtual void GameImportAfterReset(PlayerModel source) { }

	protected virtual void GameImportAfterResetRevert(PlayerModel source) { }

	protected virtual void GameInitializeNewPlayerModel(MetaTime now, ISharedGameConfig gameConfig, EntityId playerId, string name) { }

	private override IBuilderEventMinigameData GameLogic.Player.IPlayer.get_BuilderEventMinigameData() { }

	private override MetacoreTime GameLogic.Player.IPlayer.get_CurrentTime() { }

	private override ICustomMergeBoardsState GameLogic.Player.IPlayer.get_CustomMergeBoardsState() { }

	private override IDailyChallengesEventsHistoricalDataModel GameLogic.Player.IPlayer.get_DailyChallengesEventsHistoricalData() { }

	private override IDigEventMinigameData GameLogic.Player.IPlayer.get_DigEventMinigameData() { }

	private override IBoardInventory GameLogic.Player.IPlayer.get_GarageBoardInventory() { }

	private override IBoardInventory GameLogic.Player.IPlayer.get_GarageBoardProducerInventory() { }

	private override ILastNSegmentsCache GameLogic.Player.IPlayer.get_LastNSegmentsCache() { }

	private override IReadOnlyList<IWritableProducerInventorySlotState> GameLogic.Player.IPlayer.get_ProducerInventoryEntries() { }

	private override IBoardInventory GameLogic.Player.IPlayer.get_RentableBoardInventory() { }

	private override IRollTheDiceMinigameData GameLogic.Player.IPlayer.get_RollTheDiceMinigameData() { }

	private override IMetacorePlayerTimeZoneInfo GameLogic.Player.IPlayer.get_TimeZoneInfo() { }

	private override void GameLogic.Player.IPlayer.set_GarageBoardInventory(IBoardInventory value) { }

	protected virtual void GameOnInitialLogin() { }

	protected virtual void GameOnRestoredFromPersistedState(MetaDuration elapsedTime) { }

	protected virtual void GameOnSessionEnded() { }

	protected virtual void GameOnSessionStarted() { }

	protected virtual void GameTick(IChecksumContext checksumCtx) { }

	public override GarageCleanupEventModel GarageCleanupEventState(GarageCleanupEventInfo eventInfo) { }

	public override IEnumerable<CardCollectionSupportingEventModel> get_ActiveCardCollectionSupportingEvents() { }

	public override IEnumerable<CollectibleBoardEventModel> get_ActiveCollectibleBoardEvents() { }

	public override IEnumerable<CoreSupportEventModel> get_ActiveCoreSupportEvents() { }

	public override IEnumerable<DailyScoopEventModel> get_ActiveDailyScoopEvents() { }

	public override IEnumerable<EnergyModeEventModel> get_ActiveEnergyModeEvents() { }

	public override IEnumerable<GarageCleanupEventModel> get_ActiveGarageCleanups() { }

	public override IEnumerable<LeaderboardEventModel> get_ActiveLeaderboardEvents() { }

	[CompilerGenerated]
	public override MergeBoardId get_ActiveMergeBoardId() { }

	public override IEnumerable<MiniEventModel> get_ActiveMiniEvents() { }

	public IEnumerable<MixABoosterEventModel> get_ActiveMixABoosterEvents() { }

	[CompilerGenerated]
	public override OrderedSet<PlayerModeId> get_ActiveModesGlobal() { }

	[CompilerGenerated]
	public override MetaDictionary<MergeBoardId, OrderedSet`1<PlayerModeId>> get_ActiveModesPerBoard() { }

	public override IEnumerable<IPlayerModifier> get_ActiveModifiers() { }

	public override List<IPlayerModifier> get_ActiveModifiersNonAlloc() { }

	public override IEnumerable<MysteryMachineEventModel> get_ActiveMysteryMachineEvents() { }

	public override IEnumerable<IActiveOfferGroup> get_ActiveOfferGroups() { }

	public override IEnumerable<ProgressionEventModel> get_ActiveProgressionEvents() { }

	public IEnumerable<ProgressionPackEventModel> get_ActiveProgressionPackEvents() { }

	[IteratorStateMachine(typeof(<get_ActiveShortLeaderboardEvents>d__613))]
	public override IEnumerable<ShortLeaderboardEventModel> get_ActiveShortLeaderboardEvents() { }

	public override IEnumerable<SoloMilestoneEventModel> get_ActiveSoloMilestoneEvents() { }

	public override IEnumerable<TemporaryCardCollectionEventModel> get_ActiveTemporaryCardCollectionEvents() { }

	public override IEnumerable<GarageCleanupEventModel> get_AllGarageCleanups() { }

	[CompilerGenerated]
	public string get_AnalyticsApiKey() { }

	[CompilerGenerated]
	public Queue<PlayerAnalyticsEventDPL2> get_AnalyticsEvents() { }

	[CompilerGenerated]
	public override IAutoMergeFeatureModel get_AutoMergeFeatureModel() { }

	public override IEnumerable<IBoard> get_Boards() { }

	public override IEnumerable<ValueTuple`2<IBoard, Nullable`1<MetaTime>>> get_BoardsWithExpirationTimes() { }

	public BoultonLeagueDivisionClientState get_BoultonLeagueDivisionClientState() { }

	[CompilerGenerated]
	public PlayerBoultonLeagueEventsModel get_BoultonLeagueEvents() { }

	[CompilerGenerated]
	public override BoultonLeagueStatus get_BoultonLeagueStatus() { }

	[CompilerGenerated]
	public BuilderEventMinigameData get_BuilderEventMinigameData() { }

	[CompilerGenerated]
	public MetaDictionary<LocationId, F64Vec3> get_CameraPositionsPerLocation() { }

	[CompilerGenerated]
	public MetaDictionary<LocationId, F64> get_CameraZoomPerLocation() { }

	[CompilerGenerated]
	public override PlayerCardCollectionSupportingEventsModel get_CardCollectionSupportingEvents() { }

	public override ClassicRacesEventDivisionClientState get_ClassicRacesEventDivisionClientState() { }

	[CompilerGenerated]
	public override IPlayerModelClientListener get_ClientListener() { }

	[CompilerGenerated]
	public override PlayerCollectibleBoardEventsModel get_CollectibleBoardEvents() { }

	[CompilerGenerated]
	public List<DigEventBoardId> get_CompletedShinyBoards() { }

	[CompilerGenerated]
	public MetaDictionary<Int32, ThirdPartySurveyStatus> get_CompletedThirdPartySurveys() { }

	[CompilerGenerated]
	public override PlayerCoreSupportEventsModel get_CoreSupportEvents() { }

	public override CurrencyBankModel get_CurrencyBankModel() { }

	[CompilerGenerated]
	public override CurrencyBanksModel get_CurrencyBanksModel() { }

	[CompilerGenerated]
	public override DigEventBoardId get_CurrentDigEventBoard() { }

	[CompilerGenerated]
	public int get_CurrentDigEventShinyProgressIndex() { }

	public override PlayerLocalTime get_CurrentLocalTime() { }

	[CompilerGenerated]
	public CustomMergeBoardsState get_CustomMergeBoardsState() { }

	[CompilerGenerated]
	private DailyChallengesEventsHistoricalDataModel get_DailyChallengesEventsHistoricalData() { }

	[CompilerGenerated]
	public PlayerDailyScoopEventModel get_DailyScoopEvents() { }

	[CompilerGenerated]
	public override DailyTaskStatus get_DailyTaskStatus() { }

	[CompilerGenerated]
	public override DailyTasksV2Status get_DailyTasksV2Status() { }

	public virtual MetaDuration get_DebugTimeOffset() { }

	[CompilerGenerated]
	public MetaDuration get_DebugTimeOffsetValue() { }

	[CompilerGenerated]
	public override bool get_DebugUseAreaGlobalRequirement() { }

	[CompilerGenerated]
	public PlayerDecorationShopsModel get_DecorationShops() { }

	[CompilerGenerated]
	public RandomPCG get_DigEventChanceRandom() { }

	[CompilerGenerated]
	public DigEventMinigameData get_DigEventMinigameData() { }

	[CompilerGenerated]
	public override DigEventMuseumModel get_DigEventMuseum() { }

	[CompilerGenerated]
	public override RandomPCG get_DigEventRandom() { }

	[CompilerGenerated]
	public DigEvent get_DigEvents() { }

	[CompilerGenerated]
	public int get_DigEventShinyBoardTries() { }

	[CompilerGenerated]
	public override WeightedDistributionStates get_DistributionStates() { }

	[CompilerGenerated]
	public override PlayerEnergyModeEventsModel get_EnergyModeEvents() { }

	[CompilerGenerated]
	public override OrderedSet<EventLevelData> get_EventLevelsUpgradedByCardCollectionSupportingEvent() { }

	[CompilerGenerated]
	public MergeBoard get_EventMergeBoard() { }

	[CompilerGenerated]
	public ulong get_Flags() { }

	[CompilerGenerated]
	public OrderedSet<PlayerSegmentId> get_ForcedSegments() { }

	public override SharedGameConfig get_GameConfig() { }

	[CompilerGenerated]
	public override GameSettings get_GameSettings() { }

	[CompilerGenerated]
	public BoardInventory get_GarageBoardInventory() { }

	[CompilerGenerated]
	public BoardInventory get_GarageBoardProducerInventory() { }

	public override GarageCleanupEventModel get_GarageCleanupEventModel() { }

	[CompilerGenerated]
	public PlayerGarageCleanupEventsModel get_GarageCleanupEvents() { }

	[CompilerGenerated]
	public override MergeBoard get_GarageMergeBoard() { }

	[CompilerGenerated]
	private bool get_HadArtifactsEnabled() { }

	[CompilerGenerated]
	public bool get_HasAds() { }

	[CompilerGenerated]
	public override bool get_IsProductionEnvironment() { }

	public bool get_IsRentableInventoryExpired() { }

	[CompilerGenerated]
	public ClientPlatform get_LastClientPlatform() { }

	public override Option<PlayerLocation> get_LastKnownLocationOption() { }

	[CompilerGenerated]
	private LastNSegmentsCache get_LastNSegmentsCache() { }

	[CompilerGenerated]
	private MetaTime get_LastTimeZoneUpdateTimestamp() { }

	public LeaderboardClientState get_LeaderboardClientState() { }

	[CompilerGenerated]
	public override PlayerLeaderboardEventsModel get_LeaderboardEvents() { }

	[CompilerGenerated]
	private PlayerBanInfo get_LegacyBanInfo() { }

	[CompilerGenerated]
	public SortedDictionary<Int32, Int32> get_LoginCountsPerDay() { }

	public override IEnumerable<IMailMessage> get_MailMessages() { }

	[CompilerGenerated]
	public List<Int32> get_MassMailsReceived() { }

	public override IMergeMansionGameConfig get_MergeMansionGameConfig() { }

	[CompilerGenerated]
	public override PlayerMiniEventOverrides get_MiniEventOverrides() { }

	[CompilerGenerated]
	public PlayerMiniEventsModel get_MiniEvents() { }

	private MetaDuration get_MinTimeBetweenTimeZoneUpdate() { }

	[CompilerGenerated]
	public PlayerMixABoosterEventsModel get_MixABoosterEvents() { }

	[CompilerGenerated]
	public override PlayerModesChangedEvent get_ModesChanged() { }

	[CompilerGenerated]
	public override PlayerModifiersChangedEvent get_ModifiersChanged() { }

	[CompilerGenerated]
	public override SortedDictionary<Int32, F64> get_MoneySpentPerDay() { }

	[CompilerGenerated]
	public int get_MysteryMachineAllTasksCompletedRewardClaimedEventInstance() { }

	[CompilerGenerated]
	public override PlayerMysteryMachineEventsModel get_MysteryMachineEvents() { }

	[CompilerGenerated]
	public int get_MysteryMachineEventsStarted() { }

	[CompilerGenerated]
	public PlayerMysteryMachineLeaderboardRewardsState get_MysteryMachineLeaderboardRewardsState() { }

	[CompilerGenerated]
	public override RandomPCG get_MysteryMachineRandom() { }

	[CompilerGenerated]
	public int get_NumOfResets() { }

	[CompilerGenerated]
	public override OverrideSpawnItemsStatus get_OverrideSpawnItemsStatus() { }

	[CompilerGenerated]
	public Nullable<TasksTabStyle> get_OverrideTasksTabStyle() { }

	public override Option<TasksTabStyle> get_OverrideTasksTabStyleOption() { }

	[CompilerGenerated]
	public MetaDictionary<CollectibleBoardEventId, Queue`1<Int32>> get_PastPortalsGivenPerEvent() { }

	[CompilerGenerated]
	public override PityRuns get_PityRuns() { }

	[CompilerGenerated]
	public virtual EntityId get_PlayerId() { }

	[CompilerGenerated]
	public override PlayerIdentity get_PlayerIdentity() { }

	public virtual int get_PlayerLevel() { }

	[CompilerGenerated]
	private List<IPlayerModifier> get_PlayerModifiers() { }

	[CompilerGenerated]
	public virtual string get_PlayerName() { }

	[CompilerGenerated]
	public List<ProducerInventorySlotState> get_ProducerInventoryEntries() { }

	public override int get_ProgressionEventIAPStreakLength() { }

	[CompilerGenerated]
	private List<ProgressionEventId> get_ProgressionEventIAPStreaks() { }

	[CompilerGenerated]
	public override PlayerProgressionEventsModel get_ProgressionEvents() { }

	[CompilerGenerated]
	public override ProgressionPackEventsModel get_ProgressionPackEvents() { }

	[CompilerGenerated]
	public override ProgressState get_ProgressState() { }

	[CompilerGenerated]
	public override RandomPCG get_Random() { }

	[CompilerGenerated]
	public override MetaDictionary<Int32, RandomPCG> get_RandomsByFishingRodType() { }

	[CompilerGenerated]
	public ReEngagementSettingsId get_ReEngagementSettingsId() { }

	[CompilerGenerated]
	private List<ScriptedEvent> get_RegisteredScriptedEvents() { }

	[CompilerGenerated]
	public BoardInventory get_RentableBoardInventory() { }

	public override ValueTuple<IBoardInventory, Nullable`1<MetaTime>> get_RentableInventory() { }

	[CompilerGenerated]
	public int get_RentableInventoryBoughtBatchCount() { }

	[CompilerGenerated]
	public MetaTime get_RentableInventoryExpirationTime() { }

	[CompilerGenerated]
	public RentableInventoryState get_RentableInventoryState() { }

	[CompilerGenerated]
	public override RandomPCG get_RewardContainerRandom() { }

	[CompilerGenerated]
	public RollTheDiceMinigameData get_RollTheDiceMinigameData() { }

	[CompilerGenerated]
	public override RandomPCG get_RollTheDiceRandom() { }

	[CompilerGenerated]
	public PlayerScheduledActions get_ScheduledActions() { }

	[CompilerGenerated]
	private int get_ScriptedEventNextId() { }

	public IReadOnlyList<ScriptedEvent> get_ScriptedEvents() { }

	[CompilerGenerated]
	public override SegmentorState get_Segmentor() { }

	[CompilerGenerated]
	public string get_ServerBuildVersion() { }

	[CompilerGenerated]
	public override IPlayerModelServerListener get_ServerListener() { }

	[CompilerGenerated]
	public string get_SessionConfigVersion() { }

	[CompilerGenerated]
	public MetaDictionary<MetaTime, MetaDuration> get_SessionData() { }

	[CompilerGenerated]
	public string get_SessionHandshakeDeviceModel() { }

	[CompilerGenerated]
	public List<MetaTime> get_SessionsInTheLast240HoursStartAt() { }

	public override ShortLeaderboardEventDivisionClientState get_ShortLeaderboardEventDivisionClientState() { }

	[CompilerGenerated]
	public override PlayerShortLeaderboardEventsModel get_ShortLeaderboardEvents() { }

	[CompilerGenerated]
	public override PlayerSoloMilestoneEventModel get_SoloMilestoneEvents() { }

	[CompilerGenerated]
	public int get_SoloMilestoneEventsStarted() { }

	[CompilerGenerated]
	public override RandomPCG get_SoloMilestoneRandom() { }

	[CompilerGenerated]
	public override SpawnFactoryState get_SpawnFactoryState() { }

	public override SpawnFactoryState get_SpawnState() { }

	[CompilerGenerated]
	public override RandomPCG get_StackMiniGameRandom() { }

	[CompilerGenerated]
	public override LocationId get_StartLocation() { }

	[CompilerGenerated]
	public override Statistics get_Statistics() { }

	[CompilerGenerated]
	public override StoreStatus get_StoreStatus() { }

	[CompilerGenerated]
	public override PlayerTemporaryCardCollectionEventsModel get_TemporaryCardCollectionEvents() { }

	[CompilerGenerated]
	public UnitySystemInfo get_UnitySystemInfo() { }

	[CompilerGenerated]
	public override GameFeaturesStates get_UnlockedFeatures() { }

	[CompilerGenerated]
	public List<String> get_UnlockedSongs() { }

	[CompilerGenerated]
	public override Wallet get_Wallet() { }

	[CompilerGenerated]
	public WebshopState get_WebshopState() { }

	public string GetActiveBoardModesLogContent() { }

	public override IActiveOfferGroup GetActiveOfferGroup(MetaOfferGroupId offerGroupId) { }

	public override IActiveOfferGroup GetActiveOrSoldOutOfferGroup(MetaOfferGroupId offerGroupId) { }

	[IteratorStateMachine(typeof(<GetAllActiveAndJoinedBoultonLeagueEvents>d__630))]
	public override IEnumerable<BoultonLeagueEventModel> GetAllActiveAndJoinedBoultonLeagueEvents() { }

	public int GetAmountOfBatchesWithItems() { }

	protected virtual PlayerBanInfo GetAndClearLegacyPlayerBanInfoForFixup() { }

	private int GetBatchCostIndex(RentableInventorySettings settings) { }

	public override Option<IBoard> GetBoard(MergeBoardId boardId) { }

	public static List<IWritableProducerInventorySlotState> GetDefaultProducerInventoryEntries(IReadOnlyDictionary<ProducerInventorySlotId, ProducerInventorySlotConfig> producerInventorySlots) { }

	private static List<IWritableProducerInventorySlotState> GetDefaultProducerInventoryEntries(int initialSize, int maximumSize) { }

	[IteratorStateMachine(typeof(<GetInventories>d__577))]
	public override IEnumerable<IBoardInventory> GetInventories(MergeBoardId boardId, int typeFlags, bool forceExpiredInventories = false) { }

	public int GetInventoryIndex(MergeBoardId boardId, IBoardInventory boardInventory) { }

	public virtual bool GetMasterNotificationsOn() { }

	public override int GetMergeBoards(Span<MergeBoard> results, bool includeEvents = false) { }

	public override IReadOnlyCollection<MergeBoard> GetMergeBoards(bool includeEvents = false) { }

	public override IEnumerable<IHotspotDefinition> GetMissingHotspots() { }

	public override ValueTuple<Int32, Currencies, Int64> GetRentableInventoryBatchCost() { }

	public RentableInventorySettings GetRentableInventorySettings() { }

	public virtual IModelRuntimeData<IPlayerModelBase> GetRuntimeData() { }

	protected virtual int GetTicksPerSecond() { }

	private void HandleCacheLastNSegments() { }

	private void HandleIntervalChecks() { }

	private void HideHotspots(List<HotspotId> hotspots, RestoredStateFixupChangeLog changeLog) { }

	private void HotfixBrokenVisibleHotspots(RestoredStateFixupChangeLog changeLog) { }

	public bool IncludedInProgressionEventStreak(ProgressionEventId eventId) { }

	public override bool IsActivableActive(MetaActivableState activable) { }

	public bool IsOnFireActiveOnAnyBoard() { }

	public override LeaderboardEventModel LeaderboardEventState(LeaderboardEventInfo eventInfo) { }

	public void MakeCompletedHotspotChildrenVisible(bool skipAppearActions = false, RestoredStateFixupChangeLog changeLog = null) { }

	[MigrationFromVersion(57)]
	private void MigrateFromVersion57() { }

	[MigrationFromVersion(58)]
	private void MigrateFromVersion58() { }

	[MigrationFromVersion(59)]
	private void MigrateFromVersion59() { }

	public override MysteryMachineEventModel MysteryMachineEventState(MysteryMachineEventInfo eventInfo) { }

	public void OnAdStarted() { }

	public virtual void OnClaimedInAppProduct(InAppPurchaseEvent ev, InAppProductInfoBase productInfoBase, out ResolvedPurchaseContentBase resolvedContent) { }

	public virtual void OnInAppPurchaseHistoryUpdated() { }

	private void OnItemDiscovered(int itemId) { }

	public void OnPlayerLogin(MetaTime curTime, string loginGameVersion, ClientPlatform clientPlatform) { }

	public override void PlayerInventoryContentChanged(int itemId, MergeBoardId boardId, int count, PlayerInventoryChangeEventType changeType) { }

	private void PlayerPocketChangedEvent(int itemId, string itemType, MergeBoardId boardId, int count, Nullable<PlayerPocketChangeEventType> changeType) { }

	public override ProgressionEventModel ProgressionEventState(ProgressionEventInfo eventInfo) { }

	public ProgressionPackEventModel ProgressionPackEventState(ProgressionPackEventInfo eventInfo) { }

	public void ProgressSoloMilestone(SoloMilestoneEventModel activeSoloMilestoneEvent) { }

	public override void RecordStaleExtensionPurchase(CollectibleBoardEventInfo eventInfo) { }

	public override void RecordStaleProgressionEventPremiumIAPPurchase(ProgressionEventId eventId) { }

	public override void RecordStaleProgressionEventPremiumIAPPurchase(IStringId eventId) { }

	public void RefreshActiveBoard(MetacoreTime time) { }

	private void RefreshEnergy(MetacoreTime time) { }

	public override void RefreshEventModelStates(PlayerEventsModelRefreshAction action) { }

	private void RefreshMergeChainLevels(RestoredStateFixupChangeLog changeLog = null) { }

	private void RefreshProducerInventory(RestoredStateFixupChangeLog changeLog) { }

	private void RegisterModelEvents() { }

	[CompilerGenerated]
	public override void remove_EventStreamInterceptor(Action<PlayerEventBase> value) { }

	private void RemoveExpiredThirdPartySurveyMails(RestoredStateFixupChangeLog changeLog = null) { }

	private void RemoveNonExistingHotspots(RestoredStateFixupChangeLog changeLog) { }

	private void RemoveNonExistingItemsFromMails(RestoredStateFixupChangeLog changeLog) { }

	private void RemoveOutOfBoundsEnergyConsumptionMultiplierModes() { }

	public void RemoveRegisteredScriptedEvent(int index) { }

	public override void ReportEvent(AnalyticsServersideEventBase commonEvent, bool skipOnlineCheck = false) { }

	public override void ReportEvent(PlayerEventBase analyticsEvent) { }

	public override void ReportLevelReachedDuringCardCollectionSupportingEvent(string eventId, int eventLevel) { }

	public void ResetRentableInventoryBatchCount(int amount) { }

	public void ResetRentableInventoryExpirationTime() { }

	public void SendAnalyticsEvent(AnalyticsServersideEventBase commonEvent, bool skipOnlineCheck = false) { }

	public void SendAnalyticsEvents(IEnumerable<AnalyticsServersideEventBase> events) { }

	public int SessionCount(int hoursSince) { }

	[CompilerGenerated]
	public void set_ActiveMergeBoardId(MergeBoardId value) { }

	[CompilerGenerated]
	private void set_ActiveModesGlobal(OrderedSet<PlayerModeId> value) { }

	[CompilerGenerated]
	private void set_ActiveModesPerBoard(MetaDictionary<MergeBoardId, OrderedSet`1<PlayerModeId>> value) { }

	[CompilerGenerated]
	public void set_AnalyticsApiKey(string value) { }

	[CompilerGenerated]
	private void set_AnalyticsEvents(Queue<PlayerAnalyticsEventDPL2> value) { }

	[CompilerGenerated]
	private void set_AutoMergeFeatureModel(IAutoMergeFeatureModel value) { }

	[CompilerGenerated]
	private void set_BoultonLeagueEvents(PlayerBoultonLeagueEventsModel value) { }

	[CompilerGenerated]
	private void set_BoultonLeagueStatus(BoultonLeagueStatus value) { }

	[CompilerGenerated]
	private void set_BuilderEventMinigameData(BuilderEventMinigameData value) { }

	[CompilerGenerated]
	public void set_CameraPositionsPerLocation(MetaDictionary<LocationId, F64Vec3> value) { }

	[CompilerGenerated]
	public void set_CameraZoomPerLocation(MetaDictionary<LocationId, F64> value) { }

	[CompilerGenerated]
	private void set_CardCollectionSupportingEvents(PlayerCardCollectionSupportingEventsModel value) { }

	[CompilerGenerated]
	public void set_ClientListener(IPlayerModelClientListener value) { }

	[CompilerGenerated]
	private void set_CollectibleBoardEvents(PlayerCollectibleBoardEventsModel value) { }

	[CompilerGenerated]
	public void set_CompletedShinyBoards(List<DigEventBoardId> value) { }

	[CompilerGenerated]
	private void set_CompletedThirdPartySurveys(MetaDictionary<Int32, ThirdPartySurveyStatus> value) { }

	[CompilerGenerated]
	private void set_CoreSupportEvents(PlayerCoreSupportEventsModel value) { }

	[CompilerGenerated]
	public void set_CurrencyBanksModel(CurrencyBanksModel value) { }

	[CompilerGenerated]
	public override void set_CurrentDigEventBoard(DigEventBoardId value) { }

	[CompilerGenerated]
	public void set_CurrentDigEventShinyProgressIndex(int value) { }

	[CompilerGenerated]
	private void set_CustomMergeBoardsState(CustomMergeBoardsState value) { }

	[CompilerGenerated]
	private void set_DailyChallengesEventsHistoricalData(DailyChallengesEventsHistoricalDataModel value) { }

	[CompilerGenerated]
	private void set_DailyScoopEvents(PlayerDailyScoopEventModel value) { }

	[CompilerGenerated]
	public void set_DailyTaskStatus(DailyTaskStatus value) { }

	[CompilerGenerated]
	private void set_DailyTasksV2Status(DailyTasksV2Status value) { }

	[CompilerGenerated]
	public void set_DebugTimeOffsetValue(MetaDuration value) { }

	[CompilerGenerated]
	public void set_DebugUseAreaGlobalRequirement(bool value) { }

	[CompilerGenerated]
	private void set_DecorationShops(PlayerDecorationShopsModel value) { }

	[CompilerGenerated]
	public void set_DigEventChanceRandom(RandomPCG value) { }

	[CompilerGenerated]
	private void set_DigEventMinigameData(DigEventMinigameData value) { }

	[CompilerGenerated]
	private void set_DigEventMuseum(DigEventMuseumModel value) { }

	[CompilerGenerated]
	public void set_DigEventRandom(RandomPCG value) { }

	[CompilerGenerated]
	public void set_DigEvents(DigEvent value) { }

	[CompilerGenerated]
	public void set_DigEventShinyBoardTries(int value) { }

	[CompilerGenerated]
	public void set_DistributionStates(WeightedDistributionStates value) { }

	[CompilerGenerated]
	private void set_EnergyModeEvents(PlayerEnergyModeEventsModel value) { }

	[CompilerGenerated]
	public void set_EventLevelsUpgradedByCardCollectionSupportingEvent(OrderedSet<EventLevelData> value) { }

	[CompilerGenerated]
	public void set_EventMergeBoard(MergeBoard value) { }

	[CompilerGenerated]
	private void set_Flags(ulong value) { }

	[CompilerGenerated]
	private void set_ForcedSegments(OrderedSet<PlayerSegmentId> value) { }

	[CompilerGenerated]
	private void set_GameSettings(GameSettings value) { }

	[CompilerGenerated]
	public void set_GarageBoardInventory(BoardInventory value) { }

	[CompilerGenerated]
	private void set_GarageBoardProducerInventory(BoardInventory value) { }

	[CompilerGenerated]
	private void set_GarageCleanupEvents(PlayerGarageCleanupEventsModel value) { }

	[CompilerGenerated]
	public void set_GarageMergeBoard(MergeBoard value) { }

	[CompilerGenerated]
	private void set_HadArtifactsEnabled(bool value) { }

	[CompilerGenerated]
	public void set_HasAds(bool value) { }

	[CompilerGenerated]
	public void set_IsProductionEnvironment(bool value) { }

	[CompilerGenerated]
	private void set_LastClientPlatform(ClientPlatform value) { }

	[CompilerGenerated]
	private void set_LastNSegmentsCache(LastNSegmentsCache value) { }

	[CompilerGenerated]
	private void set_LastTimeZoneUpdateTimestamp(MetaTime value) { }

	[CompilerGenerated]
	private void set_LeaderboardEvents(PlayerLeaderboardEventsModel value) { }

	[CompilerGenerated]
	private void set_LegacyBanInfo(PlayerBanInfo value) { }

	[CompilerGenerated]
	private void set_LoginCountsPerDay(SortedDictionary<Int32, Int32> value) { }

	[CompilerGenerated]
	public void set_MassMailsReceived(List<Int32> value) { }

	[CompilerGenerated]
	private void set_MiniEventOverrides(PlayerMiniEventOverrides value) { }

	[CompilerGenerated]
	private void set_MiniEvents(PlayerMiniEventsModel value) { }

	[CompilerGenerated]
	private void set_MixABoosterEvents(PlayerMixABoosterEventsModel value) { }

	[CompilerGenerated]
	public override void set_ModesChanged(PlayerModesChangedEvent value) { }

	[CompilerGenerated]
	public override void set_ModifiersChanged(PlayerModifiersChangedEvent value) { }

	[CompilerGenerated]
	private void set_MoneySpentPerDay(SortedDictionary<Int32, F64> value) { }

	[CompilerGenerated]
	public void set_MysteryMachineAllTasksCompletedRewardClaimedEventInstance(int value) { }

	[CompilerGenerated]
	private void set_MysteryMachineEvents(PlayerMysteryMachineEventsModel value) { }

	[CompilerGenerated]
	public void set_MysteryMachineEventsStarted(int value) { }

	[CompilerGenerated]
	public void set_MysteryMachineLeaderboardRewardsState(PlayerMysteryMachineLeaderboardRewardsState value) { }

	[CompilerGenerated]
	public void set_MysteryMachineRandom(RandomPCG value) { }

	[CompilerGenerated]
	private void set_NumOfResets(int value) { }

	[CompilerGenerated]
	public void set_OverrideSpawnItemsStatus(OverrideSpawnItemsStatus value) { }

	[CompilerGenerated]
	public void set_OverrideTasksTabStyle(Nullable<TasksTabStyle> value) { }

	[CompilerGenerated]
	public void set_PastPortalsGivenPerEvent(MetaDictionary<CollectibleBoardEventId, Queue`1<Int32>> value) { }

	[CompilerGenerated]
	private void set_PityRuns(PityRuns value) { }

	[CompilerGenerated]
	public virtual void set_PlayerId(EntityId value) { }

	[CompilerGenerated]
	private void set_PlayerIdentity(PlayerIdentity value) { }

	public virtual void set_PlayerLevel(int value) { }

	[CompilerGenerated]
	private void set_PlayerModifiers(List<IPlayerModifier> value) { }

	[CompilerGenerated]
	public virtual void set_PlayerName(string value) { }

	[CompilerGenerated]
	private void set_ProducerInventoryEntries(List<ProducerInventorySlotState> value) { }

	[CompilerGenerated]
	private void set_ProgressionEventIAPStreaks(List<ProgressionEventId> value) { }

	[CompilerGenerated]
	private void set_ProgressionEvents(PlayerProgressionEventsModel value) { }

	[CompilerGenerated]
	private void set_ProgressionPackEvents(ProgressionPackEventsModel value) { }

	[CompilerGenerated]
	private void set_ProgressState(ProgressState value) { }

	[CompilerGenerated]
	private void set_Random(RandomPCG value) { }

	[CompilerGenerated]
	public override void set_RandomsByFishingRodType(MetaDictionary<Int32, RandomPCG> value) { }

	[CompilerGenerated]
	public void set_ReEngagementSettingsId(ReEngagementSettingsId value) { }

	[CompilerGenerated]
	private void set_RegisteredScriptedEvents(List<ScriptedEvent> value) { }

	[CompilerGenerated]
	private void set_RentableBoardInventory(BoardInventory value) { }

	[CompilerGenerated]
	private void set_RentableInventoryBoughtBatchCount(int value) { }

	[CompilerGenerated]
	private void set_RentableInventoryExpirationTime(MetaTime value) { }

	[CompilerGenerated]
	public void set_RentableInventoryState(RentableInventoryState value) { }

	[CompilerGenerated]
	public void set_RewardContainerRandom(RandomPCG value) { }

	[CompilerGenerated]
	private void set_RollTheDiceMinigameData(RollTheDiceMinigameData value) { }

	[CompilerGenerated]
	public void set_RollTheDiceRandom(RandomPCG value) { }

	[CompilerGenerated]
	private void set_ScheduledActions(PlayerScheduledActions value) { }

	[CompilerGenerated]
	private void set_ScriptedEventNextId(int value) { }

	[CompilerGenerated]
	private void set_Segmentor(SegmentorState value) { }

	[CompilerGenerated]
	public void set_ServerBuildVersion(string value) { }

	[CompilerGenerated]
	public void set_ServerListener(IPlayerModelServerListener value) { }

	[CompilerGenerated]
	public void set_SessionConfigVersion(string value) { }

	[CompilerGenerated]
	public void set_SessionData(MetaDictionary<MetaTime, MetaDuration> value) { }

	[CompilerGenerated]
	public void set_SessionHandshakeDeviceModel(string value) { }

	[CompilerGenerated]
	public void set_SessionsInTheLast240HoursStartAt(List<MetaTime> value) { }

	[CompilerGenerated]
	private void set_ShortLeaderboardEvents(PlayerShortLeaderboardEventsModel value) { }

	[CompilerGenerated]
	private void set_SoloMilestoneEvents(PlayerSoloMilestoneEventModel value) { }

	[CompilerGenerated]
	public void set_SoloMilestoneEventsStarted(int value) { }

	[CompilerGenerated]
	private void set_SoloMilestoneRandom(RandomPCG value) { }

	[CompilerGenerated]
	private void set_SpawnFactoryState(SpawnFactoryState value) { }

	[CompilerGenerated]
	public void set_StackMiniGameRandom(RandomPCG value) { }

	[CompilerGenerated]
	public void set_StartLocation(LocationId value) { }

	[CompilerGenerated]
	private void set_Statistics(Statistics value) { }

	[CompilerGenerated]
	private void set_StoreStatus(StoreStatus value) { }

	[CompilerGenerated]
	private void set_TemporaryCardCollectionEvents(PlayerTemporaryCardCollectionEventsModel value) { }

	[CompilerGenerated]
	private void set_UnitySystemInfo(UnitySystemInfo value) { }

	[CompilerGenerated]
	public void set_UnlockedFeatures(GameFeaturesStates value) { }

	[CompilerGenerated]
	public void set_UnlockedSongs(List<String> value) { }

	[CompilerGenerated]
	public void set_Wallet(Wallet value) { }

	[CompilerGenerated]
	public void set_WebshopState(WebshopState value) { }

	public void SetFlags(ulong flags, bool set) { }

	public void SetLastTimeZoneUpdateTimestamp(MetacoreTime newTimestamp) { }

	public void SetupInitialProducerInventory() { }

	public void SetupProducerInventory(int initialSize, int maximumSize) { }

	public override void SetWallet(Wallet wallet) { }

	public override bool ShouldCardPacksBeUpgraded(RewardSourceContext rewardSourceContext) { }

	private static bool ShouldRemoveMail(PlayerMailItem mail) { }

	public bool ShouldShowRentableInventoryExtensionPopup() { }

	public override SoloMilestoneEventModel SoloMilestoneEventState(SoloMilestoneEventInfo eventInfo) { }

	private void StorePreviousSessions() { }

	public void SubscribeToPlayerEvent(Action<T> callback) { }

	public TemporaryCardCollectionEventModel TemporaryCardCollectionEventState(TemporaryCardCollectionEventInfo eventInfo) { }

	public override bool TryConsumeCurrencyBank(CurrencyBankId currencyBankId, int storedAmount, AnalyticsContext context) { }

	public override bool TryExtendingCollectibleBoardEvent(CollectibleBoardEventInfo eventInfo) { }

	public override bool TryGetFirstActiveAndJoinedBoultonLeagueEvent(out BoultonLeagueEventModel outEventModel) { }

	public MergeBoard TryGetMergeBoard(MergeBoardId boardId, out bool isLegacyEvent, out bool isLiveOpsEvent, out IBoardEventModel boardEventModel) { }

	public MergeBoard TryGetMergeBoard(MergeBoardId boardId) { }

	public bool TryGetScriptedEvent(int eventId, out ScriptedEvent scriptedEvent, out int scriptedEventIndex) { }

	private void TryRefreshDailyTasks() { }

	public void UnsubscribeFromPlayerEvent(Action<T> callback) { }

	private void UpdateDiscoveredDialogueCharacters() { }

	private void UpdateRentableInventoryTimer() { }

	public virtual void UpdateTimeZone(PlayerTimeZoneInfo newTimeZone, bool isFirstLogin) { }

	public void UpdateTrackingSessionsInTheLast240Hours(MetacoreTime currentTime) { }

	public void UpdateUnitySystemInfo(UnitySystemInfo unitySystemInfo) { }

	private bool WasEventLevelReachedDuringSupportingEvent(string eventId, int eventLevel) { }

}

