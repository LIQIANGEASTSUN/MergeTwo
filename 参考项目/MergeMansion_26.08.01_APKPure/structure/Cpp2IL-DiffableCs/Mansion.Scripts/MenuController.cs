//Type is in global namespace

public class MenuController : MonoBehaviour, IMenuController, ISharedMenuController, ITickSystem
{
	[CompilerGenerated]
	private struct <<ShowRatingPopupMenu>g__WaitAndAskForFeedback|307_1>d : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public MenuController <>4__this; //Field offset: 0x18
		public CancellationToken ct; //Field offset: 0x20
		private Awaiter <>u__1; //Field offset: 0x28

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<PopupData, String> <>9__175_0; //Field offset: 0x8
		public static Func<GameObject, String> <>9__226_0; //Field offset: 0x10
		public static Func<GameObject, IMenuSection> <>9__226_1; //Field offset: 0x18
		public static Func<TimedMergeBoard, MergeBoardId> <>9__344_1; //Field offset: 0x20

		private static <>c() { }

		public <>c() { }

		internal string <CollectPopups>b__226_0(GameObject instance) { }

		internal IMenuSection <CollectPopups>b__226_1(GameObject instance) { }

		internal MergeBoardId <ShowEventCalendarPopupMenu>b__344_1(TimedMergeBoard timedBoard) { }

		internal string <SortPopupsByName>b__175_0(PopupData n) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass228_0
	{
		public MenuController <>4__this; //Field offset: 0x10
		public IMenuSection menuToPush; //Field offset: 0x18
		public bool immediate; //Field offset: 0x20
		public string menuTag; //Field offset: 0x28
		public string eventId; //Field offset: 0x30
		public AnalyticsEventParameters analyticsEventParameters; //Field offset: 0x38
		public IDisposableAssetHandle<GameObject> popupHandle; //Field offset: 0x40
		public Action <>9__2; //Field offset: 0x48

		public <>c__DisplayClass228_0() { }

		internal void <PushAndShow>b__0() { }

		internal void <PushAndShow>b__2() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass228_1
	{
		public IMenuSection currentSection; //Field offset: 0x10
		public <>c__DisplayClass228_0 CS$<>8__locals1; //Field offset: 0x18

		public <>c__DisplayClass228_1() { }

		internal void <PushAndShow>b__1() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass235_0
	{
		public IMenuSection menuToPush; //Field offset: 0x10

		public <>c__DisplayClass235_0() { }

		internal bool <MakeVisible>b__0(IMenuSection menu) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass236_0
	{
		public MenuController <>4__this; //Field offset: 0x10
		public IMenuSection currentSection; //Field offset: 0x18

		public <>c__DisplayClass236_0() { }

		internal void <PopMenuAndShowShop>b__0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass240_0
	{
		public string menuTag; //Field offset: 0x10

		public <>c__DisplayClass240_0() { }

		internal bool <RemoveFromMenuStackIfExists>b__0(IMenuSection menu) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass242_0
	{
		public MenuController <>4__this; //Field offset: 0x10
		public IMenuSection replaced; //Field offset: 0x18

		public <>c__DisplayClass242_0() { }

		internal void <ReplaceMenu>b__0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass244_0
	{
		public MenuController <>4__this; //Field offset: 0x10
		public IMenuSection currentSection; //Field offset: 0x18

		public <>c__DisplayClass244_0() { }

		internal void <CloseNoStackedMenu>b__0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass246_0
	{
		public Action onFinish; //Field offset: 0x10
		public MenuController <>4__this; //Field offset: 0x18
		public string menuTag; //Field offset: 0x20
		public IMenuSection currentSection; //Field offset: 0x28

		public <>c__DisplayClass246_0() { }

		internal void <NavigateBack>b__0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass248_0
	{
		public MenuController <>4__this; //Field offset: 0x10
		public IMenuSection currentSection; //Field offset: 0x18

		public <>c__DisplayClass248_0() { }

		internal void <PopMenu>b__0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass250_0
	{
		public MenuController <>4__this; //Field offset: 0x10
		public IMenuSection currentSection; //Field offset: 0x18

		public <>c__DisplayClass250_0() { }

		internal void <PopMenuAndShowAll>b__0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass251_0
	{
		public MenuController <>4__this; //Field offset: 0x10
		public IMenuSection currentSection; //Field offset: 0x18
		public bool showImmediately; //Field offset: 0x20

		public <>c__DisplayClass251_0() { }

		internal void <PopMenuAndShowPrevious>b__0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass255_0
	{
		public IMenuSection currentSection; //Field offset: 0x10
		public MenuController <>4__this; //Field offset: 0x18

		public <>c__DisplayClass255_0() { }

		internal void <OnPopMenuAndShowPreviousHideCompleted>b__0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass260_0
	{
		public int hiddenCount; //Field offset: 0x10
		public int popCount; //Field offset: 0x14
		public MenuController <>4__this; //Field offset: 0x18
		public string menuTag; //Field offset: 0x20

		public <>c__DisplayClass260_0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass260_1
	{
		public IMenuSection menu; //Field offset: 0x10
		public <>c__DisplayClass260_0 CS$<>8__locals1; //Field offset: 0x18

		public <>c__DisplayClass260_1() { }

		internal void <PopMenusBeforeShow>b__0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass266_0
	{
		public string capturedTag; //Field offset: 0x10
		public IMenuSection capturedSection; //Field offset: 0x18
		public HideMenuReason capturedReason; //Field offset: 0x20
		public MenuController <>4__this; //Field offset: 0x28

		public <>c__DisplayClass266_0() { }

		internal void <HideAllMenus>b__0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass295_0
	{
		public RewardPet <rewardPet>5__2; //Field offset: 0x10
		public RewardDecoration <rewardDecoration>5__3; //Field offset: 0x18
		public RewardLayeredDecoration <rewardLayeredDecoration>5__4; //Field offset: 0x20
		public MenuController <>4__this; //Field offset: 0x28

		public <>c__DisplayClass295_0() { }

		internal void <ShowPlayerRewardInfoPopupMenu>b__1() { }

		internal void <ShowPlayerRewardInfoPopupMenu>b__2() { }

		internal void <ShowPlayerRewardInfoPopupMenu>b__3() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass295_1
	{
		public int zeroBasedSlotIndex; //Field offset: 0x10
		public DecorationInfo info; //Field offset: 0x18
		public DecorationId currentDecorationInSlot; //Field offset: 0x20
		public int decorationLayer; //Field offset: 0x28
		public IDecorationCamera decorationCamera; //Field offset: 0x30
		public MenuController <>4__this; //Field offset: 0x38
		public Action <>9__6; //Field offset: 0x40

		public <>c__DisplayClass295_1() { }

		internal void <ShowPlayerRewardInfoPopupMenu>b__4() { }

		internal void <ShowPlayerRewardInfoPopupMenu>b__5() { }

		internal void <ShowPlayerRewardInfoPopupMenu>b__6() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass296_0
	{
		public MenuController <>4__this; //Field offset: 0x10
		public PetId previewPetId; //Field offset: 0x18
		public DecorationId previewDecoration; //Field offset: 0x20
		public int decorationLayer; //Field offset: 0x28

		public <>c__DisplayClass296_0() { }

		internal void <OnPetPreview>b__0() { }

	}

	[CompilerGenerated]
	private struct <>c__DisplayClass309_0
	{
		public bool tryShowOfferFirst; //Field offset: 0x0
		public MenuController <>4__this; //Field offset: 0x8

	}

	[CompilerGenerated]
	private struct <>c__DisplayClass313_0
	{
		public MenuController <>4__this; //Field offset: 0x0
		public bool wasTriggeredFirst; //Field offset: 0x8
		public EnergyType energyType; //Field offset: 0xC

	}

	[CompilerGenerated]
	private struct <>c__DisplayClass336_0
	{
		public MenuController <>4__this; //Field offset: 0x0
		public bool isFirstShow; //Field offset: 0x8
		public OfferPopupTriggerPlacement offerPopupTriggerPlacement; //Field offset: 0x10

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass337_0
	{
		public MenuController <>4__this; //Field offset: 0x10
		public OfferPopupTriggerPlacement offerPopupTriggerPlacement; //Field offset: 0x18
		public List<ValueTuple`2<OfferPopupTrigger, IActiveOfferGroup>> offerPopupTriggerGroups; //Field offset: 0x30
		public int index; //Field offset: 0x38
		public string showMethod; //Field offset: 0x40
		public bool wasActivatedViaFallback; //Field offset: 0x48
		public CancellationToken ct; //Field offset: 0x50

		public <>c__DisplayClass337_0() { }

		internal void <ShowTriggeredOfferPopup>g__CloseSequenceAction|0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass341_0
	{
		private struct <<ShowOfferGroupPopupAsync>g__ShowAsync|1>d : IAsyncStateMachine
		{
			public int <>1__state; //Field offset: 0x0
			public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
			public <>c__DisplayClass341_0 <>4__this; //Field offset: 0x18
			public CancellationToken innerCt; //Field offset: 0x20
			private Awaiter<Option<IDisposableAssetHandle`1<GameObject>>> <>u__1; //Field offset: 0x28

			private override void MoveNext() { }

			[DebuggerHidden]
			private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

		}

		public bool shouldReplaceMenu; //Field offset: 0x10
		public MenuController <>4__this; //Field offset: 0x18
		public OffersPopupViewModel menuState; //Field offset: 0x20
		public IActiveOfferGroup activeOfferGroup; //Field offset: 0x28

		public <>c__DisplayClass341_0() { }

		[AsyncStateMachine(typeof(<<ShowOfferGroupPopupAsync>g__ShowAsync|1>d))]
		internal UniTask <ShowOfferGroupPopupAsync>g__ShowAsync|1(CancellationToken innerCt) { }

		internal void <ShowOfferGroupPopupAsync>g__ShowOrReplace|0(IMenuSection section, OffersPopupViewModel state, string eventId = null, AnalyticsViewType viewType = 0) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass347_0
	{
		public MenuController <>4__this; //Field offset: 0x10
		public CurrencyBankState currencyBankState; //Field offset: 0x18
		public Currencies currencyType; //Field offset: 0x1C
		public int amount; //Field offset: 0x20

		public <>c__DisplayClass347_0() { }

		internal void <ShowCurrencyBankPopup>b__0() { }

		internal void <ShowCurrencyBankPopup>b__1(PurchaseResult purchaseResult) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass405_0
	{
		public IMenuSection menu; //Field offset: 0x10
		public MenuController <>4__this; //Field offset: 0x18

		public <>c__DisplayClass405_0() { }

		internal void <FilterAndRebuildMenuStack>b__0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass451_0
	{
		public CollectibleBoardEventStartMenuState state; //Field offset: 0x10

		public <>c__DisplayClass451_0() { }

		internal IMenuState <ShowCollectibleBoardEventStartPopup>g__ConstructMenuState|0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass468_0
	{
		public LeaderboardEventStartMenuState state; //Field offset: 0x10

		public <>c__DisplayClass468_0() { }

		internal IMenuState <ShowLeaderboardEventStartPopup>g__ConstructMenuState|0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass497_0
	{
		public MenuController <>4__this; //Field offset: 0x10
		public MetaDuration duration; //Field offset: 0x18
		public bool animateRewardClaim; //Field offset: 0x20
		public Action onClosed; //Field offset: 0x28

		public <>c__DisplayClass497_0() { }

		internal IMenuSection <ShowInfiniteEnergyPopup>g__ConstructMenuSection|0() { }

		internal IMenuState <ShowInfiniteEnergyPopup>g__ConstructMenuState|1() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass512_0
	{
		public MenuController <>4__this; //Field offset: 0x10
		public MysteryMachineEventStartMenuState menuState; //Field offset: 0x18
		public MysteryMachineEventStartPopup prefab; //Field offset: 0x20
		public MysteryMachineEventModel eventModel; //Field offset: 0x28

		public <>c__DisplayClass512_0() { }

		internal IMenuSection <ShowMysteryMachineEventStartPopup>g__ConstructMenuSection|0() { }

		internal IMenuState <ShowMysteryMachineEventStartPopup>g__ConstructMenuState|1() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass522_0
	{
		public MenuController <>4__this; //Field offset: 0x10
		public SoloMilestonePopupMenuState menuState; //Field offset: 0x18
		public SoloMilestonePopup prefab; //Field offset: 0x20

		public <>c__DisplayClass522_0() { }

		internal IMenuSection <ShowSoloMilestoneEventStartPopup>g__ConstructMenuSection|0() { }

		internal IMenuState <ShowSoloMilestoneEventStartPopup>g__ConstructMenuState|1() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass528_0
	{
		public MenuController <>4__this; //Field offset: 0x10
		public DailyScoopPopupMenuState menuState; //Field offset: 0x18
		public DailyScoopPopup prefab; //Field offset: 0x20

		public <>c__DisplayClass528_0() { }

		internal IMenuSection <ShowDailyScoopEventStartPopup>g__ConstructMenuSection|0() { }

		internal IMenuState <ShowDailyScoopEventStartPopup>g__ConstructMenuState|1() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass532_0
	{
		public MenuController <>4__this; //Field offset: 0x10
		public EnergyModeEventStartMenuState menuState; //Field offset: 0x18
		public EnergyModeEventStartPopup prefab; //Field offset: 0x20
		public EnergyModeEventModel eventModel; //Field offset: 0x28

		public <>c__DisplayClass532_0() { }

		internal IMenuSection <ShowEnergyModeEventStartPopup>g__ConstructMenuSection|0() { }

		internal IMenuState <ShowEnergyModeEventStartPopup>g__ConstructMenuState|1() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass557_0
	{
		public MenuController <>4__this; //Field offset: 0x10
		public ShortLeaderboardEventStartMenuState menuState; //Field offset: 0x18
		public ShortLeaderboardEventStartPopup prefab; //Field offset: 0x20

		public <>c__DisplayClass557_0() { }

		internal IMenuSection <ShowShortLeaderboardEventStartPopup>b__0() { }

		internal IMenuState <ShowShortLeaderboardEventStartPopup>b__1() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass558_0
	{
		public MenuController <>4__this; //Field offset: 0x10
		public ShortLeaderboardEventEndMenuState menuState; //Field offset: 0x18
		public ShortLeaderboardEventEndPopup prefab; //Field offset: 0x20

		public <>c__DisplayClass558_0() { }

		internal IMenuSection <ShowShortLeaderboardEventEndPopup>b__0() { }

		internal IMenuState <ShowShortLeaderboardEventEndPopup>b__1() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass561_0
	{
		public MenuController <>4__this; //Field offset: 0x10
		public ShortLeaderboardEventTeaseMenuState menuState; //Field offset: 0x18
		public ShortLeaderboardEventTeasePopup prefab; //Field offset: 0x20

		public <>c__DisplayClass561_0() { }

		internal IMenuSection <ShowShortLeaderboardEventTeasePopup>b__0() { }

		internal IMenuState <ShowShortLeaderboardEventTeasePopup>b__1() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass562_0
	{
		public bool enabled; //Field offset: 0x10
		public MenuController <>4__this; //Field offset: 0x18
		public ICoreSupportEventModel eventModel; //Field offset: 0x20

		public <>c__DisplayClass562_0() { }

		internal void <ShowDigEventPrototype>b__0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass563_0
	{
		public MenuController <>4__this; //Field offset: 0x10
		public GameObject cloudTransitionEffect; //Field offset: 0x18

		public <>c__DisplayClass563_0() { }

		internal void <ShowCloudTransitionEffect>b__0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass570_0
	{
		public Action onStart; //Field offset: 0x10
		public List<IPlayerReward> rewardsToClaim; //Field offset: 0x18
		public MenuController <>4__this; //Field offset: 0x20
		public List<IWalletState> walletStates; //Field offset: 0x28
		public List<RandomPCG> rewardContainerRandomCheckpoints; //Field offset: 0x30
		public Action onComplete; //Field offset: 0x38

		public <>c__DisplayClass570_0() { }

		internal void <BatchRewardContainerClaimSequence>g__ClaimReward|0(int index) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass570_1
	{
		public int index; //Field offset: 0x10
		public <>c__DisplayClass570_0 CS$<>8__locals1; //Field offset: 0x18
		public Action <>9__2; //Field offset: 0x20

		public <>c__DisplayClass570_1() { }

		internal void <BatchRewardContainerClaimSequence>b__1() { }

		internal void <BatchRewardContainerClaimSequence>b__2() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass578_0
	{
		public BuilderEventPrefabs eventPrefabs; //Field offset: 0x10
		public MenuController <>4__this; //Field offset: 0x18
		public BuilderEventMinigameModel minigameModel; //Field offset: 0x20
		public ICoreSupportEventModel eventModel; //Field offset: 0x28

		public <>c__DisplayClass578_0() { }

		internal void <ShowBuilderEventMinigamePopup>b__0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass580_0
	{
		public MenuController <>4__this; //Field offset: 0x10
		public GameObject transitionEffect; //Field offset: 0x18

		public <>c__DisplayClass580_0() { }

		internal void <ShowBuilderEventScreenTransitionEffect>b__0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass586_0
	{
		public MenuController <>4__this; //Field offset: 0x10
		public CoreSupportEventStartPopup prefab; //Field offset: 0x18
		public AutoMergeEventStartMenuState menuState; //Field offset: 0x20

		public <>c__DisplayClass586_0() { }

		internal IMenuSection <ShowAutoMergeEventStartPopup>b__0() { }

		internal IMenuState <ShowAutoMergeEventStartPopup>b__1() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass587_0
	{
		public MenuController <>4__this; //Field offset: 0x10
		public AutoMergeFeatureFTUEPopupMenuState menuState; //Field offset: 0x18

		public <>c__DisplayClass587_0() { }

		internal IMenuSection <ShowAutoMergeFeatureFTUEPopup>b__0() { }

		internal IMenuState <ShowAutoMergeFeatureFTUEPopup>b__1() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass588_0
	{
		public MenuController <>4__this; //Field offset: 0x10
		public CoreSupportEventStartPopup prefab; //Field offset: 0x18
		public CoreSupportEventStartMenuState menuState; //Field offset: 0x20

		public <>c__DisplayClass588_0() { }

		internal IMenuSection <ShowCoreSupportEventStartPopup>b__0() { }

		internal IMenuState <ShowCoreSupportEventStartPopup>b__1() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass589_0
	{
		public MenuController <>4__this; //Field offset: 0x10
		public CoreSupportEventEndPopup prefab; //Field offset: 0x18
		public CoreSupportEventEndMenuState menuState; //Field offset: 0x20

		public <>c__DisplayClass589_0() { }

		internal IMenuSection <ShowCoreSupportEventEndPopup>b__0() { }

		internal IMenuState <ShowCoreSupportEventEndPopup>b__1() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass590_0
	{
		public MenuController <>4__this; //Field offset: 0x10
		public CoreSupportEventTeasePopup prefab; //Field offset: 0x18
		public CoreSupportEventTeaseMenuState menuState; //Field offset: 0x20

		public <>c__DisplayClass590_0() { }

		internal IMenuSection <ShowCoreSupportEventTeasePopup>b__0() { }

		internal IMenuState <ShowCoreSupportEventTeasePopup>b__1() { }

	}

	[CompilerGenerated]
	private struct <BatchRewardContainerClaimSequence>d__570 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public Action onStart; //Field offset: 0x18
		public List<IPlayerReward> rewardsToClaim; //Field offset: 0x20
		public MenuController <>4__this; //Field offset: 0x28
		public List<RandomPCG> rewardContainerRandomCheckpoints; //Field offset: 0x30
		public Action onComplete; //Field offset: 0x38
		public IWalletState startingWalletState; //Field offset: 0x40
		private <>c__DisplayClass570_0 <>8__1; //Field offset: 0x48
		private Awaiter <>u__1; //Field offset: 0x50

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <DelayedCall>d__584 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public float waitBeforeCall; //Field offset: 0x18
		public Action action; //Field offset: 0x20
		private Awaiter <>u__1; //Field offset: 0x28
		private Awaiter <>u__2; //Field offset: 0x30

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ShowCameraTutorialPopup>d__490 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public MenuController <>4__this; //Field offset: 0x18
		public CollectibleBoardEventId relatedEventId; //Field offset: 0x20
		public CancellationToken ct; //Field offset: 0x28
		private IDisposableAssetHandle<GameObject> <handle>5__2; //Field offset: 0x30
		private Awaiter<IDisposableAssetHandle<GameObject>> <>u__1; //Field offset: 0x38
		private Awaiter <>u__2; //Field offset: 0x50

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ShowCardGamePopupMenu>d__504 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public IHotspotDefinition hotspot; //Field offset: 0x18
		public MenuController <>4__this; //Field offset: 0x20
		public CancellationToken ct; //Field offset: 0x28
		public TaskSource taskSource; //Field offset: 0x30
		private IDisposableAssetHandle<GameObject> <handle>5__2; //Field offset: 0x40
		private FullscreenLoadingScope <>7__wrap2; //Field offset: 0x48
		private Awaiter<IDisposableAssetHandle<GameObject>> <>u__1; //Field offset: 0x50
		private Awaiter <>u__2; //Field offset: 0x68

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ShowCollectibleBoardEventEndPopup>d__452 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public MenuController <>4__this; //Field offset: 0x18
		public CollectibleBoardEventModel eventModel; //Field offset: 0x20
		public CancellationToken ct; //Field offset: 0x28
		private CollectibleBoardEventPrefabs <prefabs>5__2; //Field offset: 0x30
		private Awaiter<Option<CollectibleBoardEventPrefabs>> <>u__1; //Field offset: 0x38
		private IDisposableAssetHandle<GameObject> <handle>5__3; //Field offset: 0x58
		private Awaiter<IDisposableAssetHandle<GameObject>> <>u__2; //Field offset: 0x60
		private Awaiter <>u__3; //Field offset: 0x78

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ShowCollectibleBoardEventExtendPopup>d__456 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public MenuController <>4__this; //Field offset: 0x18
		public CollectibleBoardEventModel eventModel; //Field offset: 0x20
		public CancellationToken ct; //Field offset: 0x28
		public Nullable<MetaTime> reviewEndAt; //Field offset: 0x30
		public bool automaticShow; //Field offset: 0x40
		public Action onFinalize; //Field offset: 0x48
		private IDisposableAssetHandle<GameObject> <handle>5__2; //Field offset: 0x50
		private Awaiter<IDisposableAssetHandle<GameObject>> <>u__1; //Field offset: 0x58
		private Awaiter <>u__2; //Field offset: 0x70

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ShowCollectibleBoardEventInfoPopup>d__454 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public MenuController <>4__this; //Field offset: 0x18
		public CollectibleBoardEventModel eventModel; //Field offset: 0x20
		public CancellationToken ct; //Field offset: 0x28
		private IDisposableAssetHandle<GameObject> <handle>5__2; //Field offset: 0x30
		private Awaiter<IDisposableAssetHandle<GameObject>> <>u__1; //Field offset: 0x38
		private Awaiter <>u__2; //Field offset: 0x50

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ShowCollectibleBoardEventIntroPopup>d__458 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public MenuController <>4__this; //Field offset: 0x18
		public CollectibleBoardEventInfo eventInfo; //Field offset: 0x20
		public CancellationToken ct; //Field offset: 0x28
		public InPreview inPreview; //Field offset: 0x30
		private CollectibleBoardEventPrefabs <prefabs>5__2; //Field offset: 0x38
		private IDisposableAssetHandle<GameObject> <handle>5__3; //Field offset: 0x40
		private Awaiter<IDisposableAssetHandle<GameObject>> <>u__1; //Field offset: 0x48
		private Awaiter <>u__2; //Field offset: 0x60

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ShowCollectibleBoardEventProgressionPopup>d__453 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public MenuController <>4__this; //Field offset: 0x18
		public CollectibleBoardEventModel eventModel; //Field offset: 0x20
		public CancellationToken ct; //Field offset: 0x28
		public bool hideCurrentFirst; //Field offset: 0x30
		private IDisposableAssetHandle<GameObject> <handle>5__2; //Field offset: 0x38
		private Awaiter<IDisposableAssetHandle<GameObject>> <>u__1; //Field offset: 0x40
		private Awaiter <>u__2; //Field offset: 0x58

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ShowCollectibleBoardEventStartPopup>d__451 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public MenuController <>4__this; //Field offset: 0x18
		public CollectibleBoardEventModel eventModel; //Field offset: 0x20
		public CancellationToken ct; //Field offset: 0x28
		private <>c__DisplayClass451_0 <>8__1; //Field offset: 0x30
		private IDisposableAssetHandle<GameObject> <handle>5__2; //Field offset: 0x38
		private Awaiter<IDisposableAssetHandle<GameObject>> <>u__1; //Field offset: 0x40
		private Awaiter <>u__2; //Field offset: 0x58

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ShowCollectibleBoardEventTeasePopup>d__455 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public MenuController <>4__this; //Field offset: 0x18
		public CollectibleBoardEventInfo eventInfo; //Field offset: 0x20
		public CancellationToken ct; //Field offset: 0x28
		private IDisposableAssetHandle<GameObject> <handle>5__2; //Field offset: 0x30
		private Awaiter<IDisposableAssetHandle<GameObject>> <>u__1; //Field offset: 0x38
		private Awaiter <>u__2; //Field offset: 0x50

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ShowDecorationOwnedPopup>d__462 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public MenuController <>4__this; //Field offset: 0x18
		public CollectibleBoardEventModel eventModel; //Field offset: 0x20
		public CancellationToken ct; //Field offset: 0x28
		private CollectibleBoardEventPrefabs <prefabs>5__2; //Field offset: 0x30
		private IDisposableAssetHandle<GameObject> <handle>5__3; //Field offset: 0x38
		private Awaiter<IDisposableAssetHandle<GameObject>> <>u__1; //Field offset: 0x40
		private Awaiter <>u__2; //Field offset: 0x58

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private sealed class <ShowDownloadContentMenu>d__487 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private object <>2__current; //Field offset: 0x18
		public MenuController <>4__this; //Field offset: 0x20
		public AddressablesDownloadProcess downloadProcess; //Field offset: 0x28
		private DownloadContentPopupMenuState <menuState>5__2; //Field offset: 0x30

		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
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
		public <ShowDownloadContentMenu>d__487(int <>1__state) { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[DebuggerHidden]
		private override object System.Collections.IEnumerator.get_Current() { }

		[DebuggerHidden]
		private override void System.Collections.IEnumerator.Reset() { }

		[DebuggerHidden]
		private override void System.IDisposable.Dispose() { }

	}

	[CompilerGenerated]
	private struct <ShowExtendGameEventPopup>d__338 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public MenuController <>4__this; //Field offset: 0x18
		public IBoardEventModel boardEvent; //Field offset: 0x20
		public CancellationToken ct; //Field offset: 0x28
		public Nullable<MetaTime> reviewEndAt; //Field offset: 0x30
		public bool automaticShow; //Field offset: 0x40
		public Action onFinalize; //Field offset: 0x48
		private IDisposableAssetHandle<GameObject> <handle>5__2; //Field offset: 0x50
		private Awaiter<IDisposableAssetHandle<GameObject>> <>u__1; //Field offset: 0x58
		private Awaiter <>u__2; //Field offset: 0x70

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ShowFishCatchPopup>d__466 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public MenuController <>4__this; //Field offset: 0x18
		public CollectibleBoardEventId collectibleBoardEventId; //Field offset: 0x20
		public CancellationToken ct; //Field offset: 0x28
		public ItemDefinition fishItemDefinition; //Field offset: 0x30
		public F32 fishWeight; //Field offset: 0x38
		public WeightCategory fishWeightCategory; //Field offset: 0x3C
		public int flags; //Field offset: 0x40
		private IDisposableAssetHandle<GameObject> <handle>5__2; //Field offset: 0x48
		private Awaiter<IDisposableAssetHandle<GameObject>> <>u__1; //Field offset: 0x50
		private Awaiter <>u__2; //Field offset: 0x68

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ShowGarageCleanupEndPopup>d__391 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public GarageCleanupEventPrefabs eventPrefabs; //Field offset: 0x18
		public CancellationToken ct; //Field offset: 0x20
		public MenuController <>4__this; //Field offset: 0x28
		public GarageCleanupEventModel eventModel; //Field offset: 0x30
		private IDisposableAssetHandle<GameObject> <handle>5__2; //Field offset: 0x38
		private Awaiter<IDisposableAssetHandle<GameObject>> <>u__1; //Field offset: 0x40
		private Awaiter <>u__2; //Field offset: 0x58

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ShowGarageCleanupEventPopup>d__388 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public MenuController <>4__this; //Field offset: 0x18
		public GarageCleanupEventModel eventModel; //Field offset: 0x20
		public CancellationToken ct; //Field offset: 0x28
		public string source; //Field offset: 0x30
		private IDisposableAssetHandle<GameObject> <handle>5__2; //Field offset: 0x38
		private Awaiter<IDisposableAssetHandle<GameObject>> <>u__1; //Field offset: 0x40
		private Awaiter <>u__2; //Field offset: 0x58

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ShowGarageCleanupInfoPopup>d__389 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public MenuController <>4__this; //Field offset: 0x18
		public GarageCleanupEventModel eventModel; //Field offset: 0x20
		public CancellationToken ct; //Field offset: 0x28
		private Awaiter<IDisposableAssetHandle<GameObject>> <>u__1; //Field offset: 0x30
		private Awaiter <>u__2; //Field offset: 0x48

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ShowGarageCleanupStartPopup>d__390 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public GarageCleanupEventPrefabs eventPrefabs; //Field offset: 0x18
		public CancellationToken ct; //Field offset: 0x20
		public MenuController <>4__this; //Field offset: 0x28
		public GarageCleanupEventModel eventModel; //Field offset: 0x30
		private IDisposableAssetHandle<GameObject> <handle>5__2; //Field offset: 0x38
		private Awaiter<IDisposableAssetHandle<GameObject>> <>u__1; //Field offset: 0x40
		private Awaiter <>u__2; //Field offset: 0x58

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ShowLayeredDecorationInfoPopup>d__459 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public MenuController <>4__this; //Field offset: 0x18
		public CollectibleBoardEventModel eventModel; //Field offset: 0x20
		public CancellationToken ct; //Field offset: 0x28
		private CollectibleBoardEventPrefabs <prefabs>5__2; //Field offset: 0x30
		private IDisposableAssetHandle<GameObject> <handle>5__3; //Field offset: 0x38
		private Awaiter<IDisposableAssetHandle<GameObject>> <>u__1; //Field offset: 0x40
		private Awaiter <>u__2; //Field offset: 0x58

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ShowLayeredDecorationLockedPopup>d__460 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public MenuController <>4__this; //Field offset: 0x18
		public CollectibleBoardEventModel eventModel; //Field offset: 0x20
		public CancellationToken ct; //Field offset: 0x28
		private LayeredDecorationLockedMenuState <menuState>5__2; //Field offset: 0x30
		private Awaiter<IDisposableAssetHandle<GameObject>> <>u__1; //Field offset: 0x38

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ShowLeaderboardEventEndPopup>d__472 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public MenuController <>4__this; //Field offset: 0x18
		public LeaderboardEventModel eventModel; //Field offset: 0x20
		public CancellationToken ct; //Field offset: 0x28
		private Awaiter<Option<LeaderboardEventPrefabs>> <>u__1; //Field offset: 0x30
		private IDisposableAssetHandle<GameObject> <handle>5__2; //Field offset: 0x50
		private Awaiter<IDisposableAssetHandle<GameObject>> <>u__2; //Field offset: 0x58
		private Awaiter <>u__3; //Field offset: 0x70

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ShowLeaderboardEventInfoPopup>d__469 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public MenuController <>4__this; //Field offset: 0x18
		public LeaderboardEventModel eventModel; //Field offset: 0x20
		public CancellationToken ct; //Field offset: 0x28
		private IDisposableAssetHandle<GameObject> <handle>5__2; //Field offset: 0x30
		private Awaiter<IDisposableAssetHandle<GameObject>> <>u__1; //Field offset: 0x38
		private Awaiter <>u__2; //Field offset: 0x50

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ShowLeaderboardEventRankingPopup>d__470 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public MenuController <>4__this; //Field offset: 0x18
		public LeaderboardEventModel eventModel; //Field offset: 0x20
		public CancellationToken ct; //Field offset: 0x28
		public Action buttonActionOverride; //Field offset: 0x30
		private Awaiter <>u__1; //Field offset: 0x38

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ShowLeaderboardEventRankingPopup>d__471 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public MenuController <>4__this; //Field offset: 0x18
		public LeaderboardEventModel eventModel; //Field offset: 0x20
		public CancellationToken ct; //Field offset: 0x28
		public ValueTuple<List`1<LeaderboardEventPlayerRankingEntry>, Int32> rankingsAndRankingPosition; //Field offset: 0x30
		public Action buttonActionOverride; //Field offset: 0x40
		private IDisposableAssetHandle<GameObject> <handle>5__2; //Field offset: 0x48
		private Awaiter<IDisposableAssetHandle<GameObject>> <>u__1; //Field offset: 0x50
		private Awaiter <>u__2; //Field offset: 0x68

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ShowLeaderboardEventStartPopup>d__468 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public MenuController <>4__this; //Field offset: 0x18
		public LeaderboardEventModel eventModel; //Field offset: 0x20
		public CancellationToken ct; //Field offset: 0x28
		private <>c__DisplayClass468_0 <>8__1; //Field offset: 0x30
		private IDisposableAssetHandle<GameObject> <handle>5__2; //Field offset: 0x38
		private Awaiter<IDisposableAssetHandle<GameObject>> <>u__1; //Field offset: 0x40
		private Awaiter <>u__2; //Field offset: 0x58

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ShowMenuAfterOthersHaveBeenHidden>d__422 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public AssetReferenceT<GameObject> prefabRef; //Field offset: 0x18
		public CancellationToken ct; //Field offset: 0x20
		public MenuController <>4__this; //Field offset: 0x28
		public string eventID; //Field offset: 0x30
		public IMenuState menuState; //Field offset: 0x38
		private IDisposableAssetHandle<GameObject> <assetHandle>5__2; //Field offset: 0x40
		private Awaiter<IDisposableAssetHandle<GameObject>> <>u__1; //Field offset: 0x48
		private Awaiter <>u__2; //Field offset: 0x60

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ShowNextTriggeredOfferPopupAsync>d__336 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public MenuController <>4__this; //Field offset: 0x18
		public OfferPopupTriggerPlacement offerPopupTriggerPlacement; //Field offset: 0x20
		public bool replaceUnderlyingMenu; //Field offset: 0x38
		public List<ValueTuple`2<OfferPopupTrigger, IActiveOfferGroup>> offerPopupTriggerGroups; //Field offset: 0x40
		public int startIndex; //Field offset: 0x48
		private <>c__DisplayClass336_0 <>8__1; //Field offset: 0x50
		public CancellationToken ct; //Field offset: 0x78
		public bool wasActivatedViaFallback; //Field offset: 0x80
		public string showMethod; //Field offset: 0x88
		private int <index>5__2; //Field offset: 0x90
		private OfferPopupTrigger <trigger>5__3; //Field offset: 0x98
		private IActiveOfferGroup <offerGroupToShow>5__4; //Field offset: 0xA0
		private Nullable<MetaTime> <waitUntil>5__5; //Field offset: 0xA8
		private Awaiter <>u__1; //Field offset: 0xB8

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ShowOfferGroupPopupAsync>d__341 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public bool shouldReplaceMenu; //Field offset: 0x18
		public MenuController <>4__this; //Field offset: 0x20
		public OffersPopupViewModel menuState; //Field offset: 0x28
		public IActiveOfferGroup activeOfferGroup; //Field offset: 0x30
		public CancellationToken ct; //Field offset: 0x38
		private <>c__DisplayClass341_0 <>8__1; //Field offset: 0x40
		private Awaiter <>u__1; //Field offset: 0x48

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ShowProgressionEventChallengeRewardPopup>d__443 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public MenuController <>4__this; //Field offset: 0x18
		public ProgressionEventModel eventModel; //Field offset: 0x20
		public CancellationToken ct; //Field offset: 0x28
		public int claimedLevelNumber; //Field offset: 0x30
		public Action rewardClaimedAction; //Field offset: 0x38
		private IDisposableAssetHandle<GameObject> <assetHandle>5__2; //Field offset: 0x40
		private Awaiter<IDisposableAssetHandle<GameObject>> <>u__1; //Field offset: 0x48
		private Awaiter <>u__2; //Field offset: 0x60

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ShowProgressionEventEndPopup>d__438 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public MenuController <>4__this; //Field offset: 0x18
		public ProgressionEventModel eventModel; //Field offset: 0x20
		public CancellationToken ct; //Field offset: 0x28
		private ProgressionEventPrefabs <prefabs>5__2; //Field offset: 0x30
		private IDisposableAssetHandle<GameObject> <assetHandle>5__3; //Field offset: 0x38
		private Awaiter<IDisposableAssetHandle<GameObject>> <>u__1; //Field offset: 0x40
		private Awaiter <>u__2; //Field offset: 0x58

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ShowProgressionEventGenericInfoPopup>d__436 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public MenuController <>4__this; //Field offset: 0x18
		public ProgressionEventModel eventModel; //Field offset: 0x20
		public CancellationToken ct; //Field offset: 0x28
		private ProgressionEventPrefabs <prefabs>5__2; //Field offset: 0x30
		private IDisposableAssetHandle<GameObject> <assetHandle>5__3; //Field offset: 0x38
		private Awaiter<IDisposableAssetHandle<GameObject>> <>u__1; //Field offset: 0x40
		private Awaiter <>u__2; //Field offset: 0x58

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ShowProgressionEventProgressionPopup>d__433 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public MenuController <>4__this; //Field offset: 0x18
		public ProgressionEventModel eventModel; //Field offset: 0x20
		public CancellationToken ct; //Field offset: 0x28
		private ProgressionEventPrefabs <prefabs>5__2; //Field offset: 0x30
		private IDisposableAssetHandle<GameObject> <progressionPopupHandle>5__3; //Field offset: 0x38
		private Awaiter<IDisposableAssetHandle<GameObject>> <>u__1; //Field offset: 0x40
		private Awaiter <>u__2; //Field offset: 0x58

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ShowProgressionEventStartPopup>d__434 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public MenuController <>4__this; //Field offset: 0x18
		public ProgressionEventModel eventModel; //Field offset: 0x20
		public CancellationToken ct; //Field offset: 0x28
		private ProgressionEventPrefabs <prefabs>5__2; //Field offset: 0x30
		private IDisposableAssetHandle<GameObject> <assetHandle>5__3; //Field offset: 0x38
		private Awaiter<IDisposableAssetHandle<GameObject>> <>u__1; //Field offset: 0x40
		private Awaiter <>u__2; //Field offset: 0x58

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <TransitionWatchdogTask>d__599 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public CancellationToken ct; //Field offset: 0x18
		public MenuController <>4__this; //Field offset: 0x20
		public string menuTag; //Field offset: 0x28
		public float timeoutSeconds; //Field offset: 0x30
		private float <startTime>5__2; //Field offset: 0x34
		private Awaiter <>u__1; //Field offset: 0x38

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <WaitForClose>d__230 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public IMenuSection section; //Field offset: 0x18
		public CancellationToken ct; //Field offset: 0x20
		private Awaiter <>u__1; //Field offset: 0x28

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	internal class Controllers
	{
		[SerializeField]
		public MailController mailController; //Field offset: 0x10
		[SerializeField]
		public FlightController flightController; //Field offset: 0x18
		[SerializeField]
		public RewardAnimationController rewardAnimationController; //Field offset: 0x20
		[SerializeField]
		public UnityBoardController boardController; //Field offset: 0x28
		[SerializeField]
		public OffersManager offersManager; //Field offset: 0x30
		[SerializeField]
		public NavigationController navigationController; //Field offset: 0x38
		[SerializeField]
		public CurrencyBankPurchaseManager currencyBankPurchaseManager; //Field offset: 0x40
		[SerializeField]
		public DialogueRunner dialogueRunner; //Field offset: 0x48
		[SerializeField]
		public GameEventExtensionPurchaseManager gameEventExtensionPurchaseManager; //Field offset: 0x50
		[SerializeField]
		public ProgressionEventPurchaseManager progressionEventPurchaseManager; //Field offset: 0x58
		[SerializeField]
		public ProgressionPackEventPurchaseManager progressionPackEventPurchaseManager; //Field offset: 0x60
		[SerializeField]
		public DecorationController decorationController; //Field offset: 0x68
		[SerializeField]
		public ReEngagementController reEngagement; //Field offset: 0x70
		public IHotspotProgressRefresher hotspotProgressRefresher; //Field offset: 0x78
		public IHotspotController hotspotController; //Field offset: 0x80
		public IHotspotCompletableQuery hotspotCompletableQuery; //Field offset: 0x88
		public IHotspotCompletionState hotspotCompletionState; //Field offset: 0x90
		public IMergeGoalItemQuery mergeGoalItemQuery; //Field offset: 0x98
		public IHotspotVisibilityHider hotspotVisibilityHider; //Field offset: 0xA0
		public IEventHotspotRegistry eventHotspots; //Field offset: 0xA8
		public IPetSelectionHotspots petSelectionHotspots; //Field offset: 0xB0
		public IHotspotActivator hotspotActivator; //Field offset: 0xB8
		public IAreaLockedHotspotActions areaLockedHotspotActions; //Field offset: 0xC0
		public IAreaCompletionRewardHotspots areaCompletionRewardHotspots; //Field offset: 0xC8
		public IDebugHotspots debugHotspots; //Field offset: 0xD0
		public IHotspotPopupActions hotspotPopupActions; //Field offset: 0xD8
		public IIllustrationTaskHotspots illustrationTaskHotspots; //Field offset: 0xE0
		[SerializeField]
		public TutorialHandController tutorialHand; //Field offset: 0xE8
		[SerializeField]
		public BoardViewTaskHandler boardViewTaskHandler; //Field offset: 0xF0
		[SerializeField]
		public FirebaseService firebaseService; //Field offset: 0xF8
		[SerializeField]
		public InputController inputController; //Field offset: 0x100
		public CollectibleBoardEventManager CollectibleBoardEventManager; //Field offset: 0x108
		public LeaderboardEventManager LeaderboardEventManager; //Field offset: 0x110
		public GarageCleanupEventManager GarageCleanupEventManager; //Field offset: 0x118
		public ProgressionEventManager ProgressionEventManager; //Field offset: 0x120
		public BoultonLeagueEventManager BoultonLeagueEventManager; //Field offset: 0x128

		public Controllers() { }

	}

	internal class PopupData
	{
		public string Name; //Field offset: 0x10
		public UnityGameObjectReference PopupPrefabRef; //Field offset: 0x18
		public string MenuTag; //Field offset: 0x20

		public PopupData() { }

	}

	private class ShowAfterOthersHaveBeenHidden
	{
		[CompilerGenerated]
		private readonly Func<IMenuSection> <ConstructMenuSection>k__BackingField; //Field offset: 0x10
		[CompilerGenerated]
		private readonly Func<IMenuState> <ConstructMenuState>k__BackingField; //Field offset: 0x18
		[CompilerGenerated]
		private readonly bool <HideNavigation>k__BackingField; //Field offset: 0x20
		[CompilerGenerated]
		private readonly string <MenuTag>k__BackingField; //Field offset: 0x28
		[CompilerGenerated]
		private readonly Option<AssetReferenceT`1<GameObject>> <PrefabRef>k__BackingField; //Field offset: 0x30
		[CompilerGenerated]
		private string <EventId>k__BackingField; //Field offset: 0x40
		[CompilerGenerated]
		private IDisposableAssetHandle<GameObject> <PopupHandle>k__BackingField; //Field offset: 0x48

		public Func<IMenuSection> ConstructMenuSection
		{
			[CompilerGenerated]
			 get { } //Length: 8
		}

		public Func<IMenuState> ConstructMenuState
		{
			[CompilerGenerated]
			 get { } //Length: 8
		}

		public private string EventId
		{
			[CompilerGenerated]
			 get { } //Length: 8
			[CompilerGenerated]
			private set { } //Length: 8
		}

		public bool HideNavigation
		{
			[CompilerGenerated]
			 get { } //Length: 8
		}

		public string MenuTag
		{
			[CompilerGenerated]
			 get { } //Length: 8
		}

		public private IDisposableAssetHandle<GameObject> PopupHandle
		{
			[CompilerGenerated]
			 get { } //Length: 8
			[CompilerGenerated]
			private set { } //Length: 8
		}

		public Option<AssetReferenceT`1<GameObject>> PrefabRef
		{
			[CompilerGenerated]
			 get { } //Length: 12
		}

		public ShowAfterOthersHaveBeenHidden(Func<IMenuSection> constructMenuSection, Func<IMenuState> constructMenuState, bool hideNavigation, string eventId, IDisposableAssetHandle<GameObject> popupHandle = null) { }

		public ShowAfterOthersHaveBeenHidden(string menuTag, AssetReferenceT<GameObject> prefabRef, Func<IMenuState> constructMenuState, bool hideNavigation, string eventId = null) { }

		[CompilerGenerated]
		public Func<IMenuSection> get_ConstructMenuSection() { }

		[CompilerGenerated]
		public Func<IMenuState> get_ConstructMenuState() { }

		[CompilerGenerated]
		public string get_EventId() { }

		[CompilerGenerated]
		public bool get_HideNavigation() { }

		[CompilerGenerated]
		public string get_MenuTag() { }

		[CompilerGenerated]
		public IDisposableAssetHandle<GameObject> get_PopupHandle() { }

		[CompilerGenerated]
		public Option<AssetReferenceT`1<GameObject>> get_PrefabRef() { }

		[CompilerGenerated]
		private void set_EventId(string value) { }

		[CompilerGenerated]
		private void set_PopupHandle(IDisposableAssetHandle<GameObject> value) { }

	}

	public const string CleanPlayTestDebug = "CleanPlayTestDebug"; //Field offset: 0x0
	[CompilerGenerated]
	private static int <MenusClosedVersion>k__BackingField; //Field offset: 0x0
	private Controllers controllers; //Field offset: 0x20
	private IPurchaseManager purchaseManager; //Field offset: 0x28
	private readonly Stack<IMenuSection> menuStack; //Field offset: 0x30
	private readonly List<IMenuSection> menuNoStacked; //Field offset: 0x38
	private readonly HashSet<String> menuTransitions; //Field offset: 0x40
	private IDictionary<String, IMenuSection> menuSections; //Field offset: 0x48
	private bool doSomethingAfterLastMenuAnimatedAway; //Field offset: 0x50
	private ShowAfterOthersHaveBeenHidden showAfterOthersHaveBeenHidden; //Field offset: 0x58
	private DailyScoopTaskCompleteView dailyScoopTaskCompleteView; //Field offset: 0x60
	private ProgressionPackTaskCompleteView progressionPackTaskCompleteView; //Field offset: 0x68
	private bool _isMinigameOpening; //Field offset: 0x70
	[CompilerGenerated]
	private Action<Boolean> OnMenuVisibilityChange; //Field offset: 0x78
	[CompilerGenerated]
	private Action OnStackedMenuPushed; //Field offset: 0x80
	[CompilerGenerated]
	private Action<StatsObjective, TaskType, List`1<IPlayerReward>, Action, Int32> OnDailyScoopTaskCompleted; //Field offset: 0x88
	[CompilerGenerated]
	private Action<StatsObjective, TaskType, List`1<IPlayerReward>, Action, Int32, Boolean> OnProgressionPackTaskCompleted; //Field offset: 0x90
	public Action<IPlayer> OnShopItemPurchasedAds; //Field offset: 0x98
	private bool BackButtonEnabled; //Field offset: 0xA0
	[CompilerGenerated]
	private PlayerModel <Player>k__BackingField; //Field offset: 0xA8
	[CompilerGenerated]
	private PlayerClientContext <PlayerContext>k__BackingField; //Field offset: 0xB0
	private MessageDispatcher messageDispatcher; //Field offset: 0xB8
	private IActionsExecutor actionsExecutor; //Field offset: 0xC0
	private IScheduler scheduler; //Field offset: 0xC8
	private LocationLoader locationLoader; //Field offset: 0xD0
	private AddressablesSession addressablesSession; //Field offset: 0xD8
	private ModelRender modelRender; //Field offset: 0xE0
	private LogErrorProvider logErrorProvider; //Field offset: 0xE8
	private ICameraHotspotNavigator cameraHotspotNavigator; //Field offset: 0xF0
	private ICameraMenuInput cameraMenuInput; //Field offset: 0xF8
	private IDecorationCamera decorationCamera; //Field offset: 0x100
	private ICameraPanning cameraPanning; //Field offset: 0x108
	private ICameraProjection cameraProjection; //Field offset: 0x110
	private ICameraInputLock cameraInputLock; //Field offset: 0x118
	private ISafeRollback _safeRollback; //Field offset: 0x120
	private GameConfigClientCache _gameConfigClientCache; //Field offset: 0x128
	private PlayerClientCache _playerClientCache; //Field offset: 0x130
	private TitleBarController titleBarController; //Field offset: 0x138
	private ITitleBarRewardWidgets titleBarRewardWidgets; //Field offset: 0x140
	private ITitleBarInfiniteEnergy titleBarInfiniteEnergy; //Field offset: 0x148
	private ITitleBarWalletOverride titleBarWalletOverride; //Field offset: 0x150
	private Dictionary<MetaActivableState, HashSet`1<String>> popupsToCloseOnEventEnd; //Field offset: 0x158
	private readonly List<IMenuSection> _hideBuffer; //Field offset: 0x160
	private bool _isHidingAll; //Field offset: 0x168

	public event Action<StatsObjective, TaskType, List`1<IPlayerReward>, Action, Int32> OnDailyScoopTaskCompleted
	{
		[CompilerGenerated]
		 add { } //Length: 176
		[CompilerGenerated]
		 remove { } //Length: 176
	}

	public override event Action<Boolean> OnMenuVisibilityChange
	{
		[CompilerGenerated]
		 add { } //Length: 176
		[CompilerGenerated]
		 remove { } //Length: 176
	}

	public event Action<StatsObjective, TaskType, List`1<IPlayerReward>, Action, Int32, Boolean> OnProgressionPackTaskCompleted
	{
		[CompilerGenerated]
		 add { } //Length: 176
		[CompilerGenerated]
		 remove { } //Length: 176
	}

	public override event Action OnStackedMenuPushed
	{
		[CompilerGenerated]
		 add { } //Length: 156
		[CompilerGenerated]
		 remove { } //Length: 156
	}

	private bool allowDirectorAccess
	{
		private get { } //Length: 60
	}

	private IAnalyticsCollector Analytics
	{
		private get { } //Length: 8
	}

	public override AnimationConfigLibrary AnimationConfigLibrary
	{
		 get { } //Length: 80
	}

	public AnimationSettingsConfig AnimationSettingsConfig
	{
		 get { } //Length: 80
	}

	public override bool AnyPopupIsVisible
	{
		 get { } //Length: 40
	}

	public AreaIcons AreaIconsLibrary
	{
		 get { } //Length: 32
	}

	public override ArtifactLibrary ArtifactLibrary
	{
		 get { } //Length: 80
	}

	private IAudioPlayer Audio
	{
		private get { } //Length: 8
	}

	private IAudioSettings AudioSettings
	{
		private get { } //Length: 8
	}

	public GameObject blockingLayer
	{
		 get { } //Length: 32
	}

	private IBoardController BoardController
	{
		private get { } //Length: 80
	}

	public override BoultonLeagueStageLibrary BoultonLeagueStageLibrary
	{
		 get { } //Length: 80
	}

	private ICameraHotspotNavigator CameraHotspotNavigator
	{
		private get { } //Length: 8
	}

	private ICameraInputLock CameraInputLock
	{
		private get { } //Length: 8
	}

	private ICameraMenuInput CameraMenuInput
	{
		private get { } //Length: 8
	}

	private ICameraPanning CameraPanning
	{
		private get { } //Length: 8
	}

	private ICameraProjection CameraProjection
	{
		private get { } //Length: 8
	}

	public override CardCollectionSupportingEventPrefabsLibrary CardCollectionSupportingEventPrefabsLibrary
	{
		 get { } //Length: 80
	}

	public override CharacterLibrary CharacterLibrary
	{
		 get { } //Length: 80
	}

	public GameObject CloudsTransitionParent
	{
		 get { } //Length: 32
	}

	public GameObject CloudsTransitionPrefab
	{
		 get { } //Length: 32
	}

	public override AllCollectibleBoardEventsPrefabsLibrary CollectibleBoardEventPrefabsLibrary
	{
		 get { } //Length: 80
	}

	public override CoreSupportEventPrefabsLibrary CoreSupportEventPrefabsLibrary
	{
		 get { } //Length: 80
	}

	public override CoreSupportingEventsPrefabsLibrary CoreSupportingEventsPrefabsLibrary
	{
		 get { } //Length: 80
	}

	public override CurrencyBankLibrary CurrencyBankLibrary
	{
		 get { } //Length: 80
	}

	public override LocationId CurrentLocation
	{
		 get { } //Length: 24
	}

	public CutsceneGroupLibrary CutsceneGroupLibrary
	{
		 get { } //Length: 80
	}

	public override DailyScoopEventPrefabsLibrary DailyScoopEventPrefabsLibrary
	{
		 get { } //Length: 172
	}

	public DailyScoopTaskCompleteView DailyScoopTaskCompleteView
	{
		 get { } //Length: 8
	}

	public override DailyTasksV2Library DailyTasksV2Library
	{
		 get { } //Length: 80
	}

	public IDebugHotspots DebugHotspots
	{
		 get { } //Length: 24
	}

	private IDecorationCamera DecorationCamera
	{
		private get { } //Length: 8
	}

	public override DecorationShopPrefabsLibrary DecorationShopPrefabsLibrary
	{
		 get { } //Length: 80
	}

	public override DecorationsLibrary DecorationsLibrary
	{
		 get { } //Length: 80
	}

	public override IIconLibrary DefaultIconLibrary
	{
		 get { } //Length: 80
	}

	private static Director Director
	{
		private get { } //Length: 8
	}

	public override EnergyModeEventPrefabsLibrary EnergyModeEventPrefabsLibrary
	{
		 get { } //Length: 80
	}

	public override IIconLibrary EventIconLibrary
	{
		 get { } //Length: 80
	}

	public FlightController FlightController
	{
		 get { } //Length: 24
	}

	public GraphicsConfigLibrary GraphicsConfigLibrary
	{
		 get { } //Length: 80
	}

	public static bool HasInstance
	{
		 get { } //Length: 116
	}

	public IHotspotCompletionState HotspotCompletionState
	{
		 get { } //Length: 24
	}

	public IHotspotPopupActions HotspotPopupActions
	{
		 get { } //Length: 24
	}

	public override IllustrationLibrary IllustrationLibrary
	{
		 get { } //Length: 80
	}

	public override IInputController InputController
	{
		 get { } //Length: 24
	}

	public static MenuController Instance
	{
		 get { } //Length: 136
	}

	public override bool IsInTransition
	{
		 get { } //Length: 80
	}

	public override bool IsMenuOpen
	{
		 get { } //Length: 80
	}

	private PopupData[] menuPrefabDatas
	{
		private get { } //Length: 40
	}

	private GameObject[] menus
	{
		private get { } //Length: 32
	}

	public private static int MenusClosedVersion
	{
		[CompilerGenerated]
		 get { } //Length: 72
		[CompilerGenerated]
		private set { } //Length: 76
	}

	public override MergeBoardLibrary MergeBoardLibrary
	{
		 get { } //Length: 80
	}

	public IMergeGoalItemQuery MergeGoalItemQuery
	{
		 get { } //Length: 24
	}

	public override MiniEventPrefabsLibrary MiniEventPrefabsLibrary
	{
		 get { } //Length: 80
	}

	public MiniGamesPrefabsLibrary MiniGamesPrefabsLibrary
	{
		 get { } //Length: 80
	}

	public override MixABoosterEventPrefabsLibrary MixABoosterEventPrefabsLibrary
	{
		 get { } //Length: 172
	}

	public override MysteryMachineEventPrefabsLibrary MysteryMachineEventPrefabsLibrary
	{
		 get { } //Length: 80
	}

	public override IOfferPopupsLibrary OfferPopupsLibrary
	{
		 get { } //Length: 80
	}

	public override IMenuState OpenedPopupModel
	{
		 get { } //Length: 228
	}

	public override string OpenMenuTag
	{
		 get { } //Length: 4
	}

	private PlayerModel Player
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override MergeBoardId PlayerActiveMergeBoardId
	{
		 get { } //Length: 24
	}

	private PlayerClientContext PlayerContext
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private RectTransform popupContainer
	{
		private get { } //Length: 32
	}

	public override ProgressionPackEventPrefabLibrary ProgressionPackEventPrefabsLibrary
	{
		 get { } //Length: 172
	}

	public ProgressionPackTaskCompleteView ProgressionPackTaskCompleteView
	{
		 get { } //Length: 8
	}

	public Prop3DLibrary Prop3DLibrary
	{
		 get { } //Length: 80
	}

	public override IRewardsAnimations RewardsAnimations
	{
		 get { } //Length: 24
	}

	public IRewardVisuals RewardVisuals
	{
		 get { } //Length: 80
	}

	public override ISafeRollback Rollback
	{
		 get { } //Length: 8
	}

	public override SeasonalityPrefabsLibrary SeasonalityPrefabsLibrary
	{
		 get { } //Length: 80
	}

	public IRewardVisuals ShopRewardVisuals
	{
		 get { } //Length: 80
	}

	public override ShortLeaderboardEventPrefabsLibrary ShortLeaderboardEventPrefabsLibrary
	{
		 get { } //Length: 80
	}

	public override SoloMilestoneEventPrefabsLibrary SoloMilestoneEventPrefabsLibrary
	{
		 get { } //Length: 172
	}

	public override TemporaryCardCollectionEventPrefabsLibrary TemporaryCardCollectionEventPrefabsLibrary
	{
		 get { } //Length: 80
	}

	public override TemporaryCardCollectionEventSpritesLibrary TemporaryCardCollectionEventSpritesLibrary
	{
		 get { } //Length: 80
	}

	public UIArtScriptableObject UiArt
	{
		 get { } //Length: 80
	}

	public UICharacterContainer UICharacterContainer
	{
		 get { } //Length: 32
	}

	public VFXConfigLibrary VFXConfigLibrary
	{
		 get { } //Length: 80
	}

	public MenuController() { }

	[CompilerGenerated]
	internal static void <AskForFeedback>g__DoNothing|308_0() { }

	[CompilerGenerated]
	internal static void <AskForFeedback>g__PresentFeedback|308_1() { }

	[CompilerGenerated]
	private bool <GenerateDailyTasksPopupMenuState>g__HasItem|343_0(int itemId) { }

	[CompilerGenerated]
	private void <Init1>b__218_0() { }

	[CompilerGenerated]
	private void <ShowAreaCompleteRewardPopup>b__417_0() { }

	[CompilerGenerated]
	private bool <ShowEnergyPopupMenu>g__TryShowOfferFirst|309_0(string popupTag, EnergyType energyType, ref <>c__DisplayClass309_0 unnamed_param_2) { }

	[CompilerGenerated]
	private bool <ShowEventCalendarPopupMenu>b__344_0(TimedMergeBoard timedBoard) { }

	[CompilerGenerated]
	private bool <ShowNextTriggeredOfferPopupAsync>g__CanShowOfferPopup|336_0(ref <>c__DisplayClass336_0 unnamed_param_0) { }

	[CompilerGenerated]
	private void <ShowPlayerRewardInfoPopupMenu>g__ShowDecorationPreview|295_0(DecorationInfo info, int decorationLayer) { }

	[CompilerGenerated]
	private void <ShowRatingPopupMenu>g__RequestReview|307_0() { }

	[AsyncStateMachine(typeof(<<ShowRatingPopupMenu>g__WaitAndAskForFeedback|307_1>d))]
	[CompilerGenerated]
	private UniTask <ShowRatingPopupMenu>g__WaitAndAskForFeedback|307_1(CancellationToken ct) { }

	[CompilerGenerated]
	private void <ShowRatingPopupMenu>g__WaitForFeedback|307_2() { }

	[CompilerGenerated]
	private void <TryShowTriggerActivatedOutOfEnergyOfferPopup>g__TriggerOfferPopup|313_0(OfferPopupTrigger trigger, IActiveOfferGroup group, ref <>c__DisplayClass313_0 unnamed_param_2) { }

	[CompilerGenerated]
	public void add_OnDailyScoopTaskCompleted(Action<StatsObjective, TaskType, List`1<IPlayerReward>, Action, Int32> value) { }

	[CompilerGenerated]
	public override void add_OnMenuVisibilityChange(Action<Boolean> value) { }

	[CompilerGenerated]
	public void add_OnProgressionPackTaskCompleted(Action<StatsObjective, TaskType, List`1<IPlayerReward>, Action, Int32, Boolean> value) { }

	[CompilerGenerated]
	public override void add_OnStackedMenuPushed(Action value) { }

	public void AddMenuVisibilityCallback(Action<Boolean> addAction) { }

	public void AnimateDailyScoopTaskCompleted(StatsObjective objective, TaskType taskType, List<IPlayerReward> rewards, Action endWalletOverrideCallback, int progressIndex) { }

	public void AnimateProgressionPackTaskCompleted(StatsObjective objective, TaskType taskType, List<IPlayerReward> rewards, Action onComplete, int levelProgress, bool isFullProgress) { }

	private void AnyMenuGoesVisible() { }

	private void AskForFeedback() { }

	private void AwakeInner() { }

	[AsyncStateMachine(typeof(<BatchRewardContainerClaimSequence>d__570))]
	public override UniTask BatchRewardContainerClaimSequence(List<IPlayerReward> rewardsToClaim, IWalletState startingWalletState, List<RandomPCG> rewardContainerRandomCheckpoints, Action onStart, Action onComplete) { }

	public void CheckIntegrity() { }

	public override bool CloseCurrentMenu(object from) { }

	public override bool CloseNoStackedMenu(IMenuSection from) { }

	private HashSet<String> CollectEventEndTagsToClose(out bool forceCloseAll) { }

	private IDictionary<String, IMenuSection> CollectPopups() { }

	public override void CompleteTransition(string menuTag) { }

	[AsyncStateMachine(typeof(<DelayedCall>d__584))]
	private static UniTask DelayedCall(Action action, float waitBeforeCall = -1) { }

	public override void DeleteInboxItem(IMailMessage inboxItem) { }

	private void DestroyMenu(IMenuSection menu) { }

	private void DisableBlockingLayer() { }

	private void DoAfterLastMenuHasAnimatedAway(string menuTag) { }

	private void DoLastCloseStepsIfNeeded() { }

	private void EnableBlockingLayer() { }

	public void EnforceHideBlockingLayer() { }

	private void EnsureValidCurrentMenu(HashSet<String> tagsToClose, bool forceCloseAllAndRedirectMansion) { }

	private void FilterAndRebuildMenuStack(HashSet<String> tagsToClose) { }

	private IMenuSection FindMenuWithTag(string menuTag, GameObject dynamicPopup = null, bool useMenuTagParameterAsKey = false) { }

	public override void ForceCloseAllPopups() { }

	private DailyTasksPopupMenuState GenerateDailyTasksPopupMenuState() { }

	private IMenuState GenerateShopMenuState(ShopMenuContentBlock focusContext, bool openedFromTitleBar, bool forceOpenCoinsAndGems, bool forceOpenGarageShop, bool forceOpenAnyBoardShop, string openSource, RedDotStatus redDotStatus, string showMethod, IActiveOfferGroup overrideOfferGroup = null) { }

	private IMenuState GenerateShopOfferMenuState(bool automaticShow, IEnumerable<IActiveOfferGroup> overrideOfferGroups = null) { }

	private bool get_allowDirectorAccess() { }

	private IAnalyticsCollector get_Analytics() { }

	public override AnimationConfigLibrary get_AnimationConfigLibrary() { }

	public AnimationSettingsConfig get_AnimationSettingsConfig() { }

	public override bool get_AnyPopupIsVisible() { }

	public AreaIcons get_AreaIconsLibrary() { }

	public override ArtifactLibrary get_ArtifactLibrary() { }

	private IAudioPlayer get_Audio() { }

	private IAudioSettings get_AudioSettings() { }

	public GameObject get_blockingLayer() { }

	private IBoardController get_BoardController() { }

	public override BoultonLeagueStageLibrary get_BoultonLeagueStageLibrary() { }

	private ICameraHotspotNavigator get_CameraHotspotNavigator() { }

	private ICameraInputLock get_CameraInputLock() { }

	private ICameraMenuInput get_CameraMenuInput() { }

	private ICameraPanning get_CameraPanning() { }

	private ICameraProjection get_CameraProjection() { }

	public override CardCollectionSupportingEventPrefabsLibrary get_CardCollectionSupportingEventPrefabsLibrary() { }

	public override CharacterLibrary get_CharacterLibrary() { }

	public GameObject get_CloudsTransitionParent() { }

	public GameObject get_CloudsTransitionPrefab() { }

	public override AllCollectibleBoardEventsPrefabsLibrary get_CollectibleBoardEventPrefabsLibrary() { }

	public override CoreSupportEventPrefabsLibrary get_CoreSupportEventPrefabsLibrary() { }

	public override CoreSupportingEventsPrefabsLibrary get_CoreSupportingEventsPrefabsLibrary() { }

	public override CurrencyBankLibrary get_CurrencyBankLibrary() { }

	public override LocationId get_CurrentLocation() { }

	public CutsceneGroupLibrary get_CutsceneGroupLibrary() { }

	public override DailyScoopEventPrefabsLibrary get_DailyScoopEventPrefabsLibrary() { }

	public DailyScoopTaskCompleteView get_DailyScoopTaskCompleteView() { }

	public override DailyTasksV2Library get_DailyTasksV2Library() { }

	public IDebugHotspots get_DebugHotspots() { }

	private IDecorationCamera get_DecorationCamera() { }

	public override DecorationShopPrefabsLibrary get_DecorationShopPrefabsLibrary() { }

	public override DecorationsLibrary get_DecorationsLibrary() { }

	public override IIconLibrary get_DefaultIconLibrary() { }

	private static Director get_Director() { }

	public override EnergyModeEventPrefabsLibrary get_EnergyModeEventPrefabsLibrary() { }

	public override IIconLibrary get_EventIconLibrary() { }

	public FlightController get_FlightController() { }

	public GraphicsConfigLibrary get_GraphicsConfigLibrary() { }

	public static bool get_HasInstance() { }

	public IHotspotCompletionState get_HotspotCompletionState() { }

	public IHotspotPopupActions get_HotspotPopupActions() { }

	public override IllustrationLibrary get_IllustrationLibrary() { }

	public override IInputController get_InputController() { }

	public static MenuController get_Instance() { }

	public override bool get_IsInTransition() { }

	public override bool get_IsMenuOpen() { }

	private PopupData[] get_menuPrefabDatas() { }

	private GameObject[] get_menus() { }

	[CompilerGenerated]
	public static int get_MenusClosedVersion() { }

	public override MergeBoardLibrary get_MergeBoardLibrary() { }

	public IMergeGoalItemQuery get_MergeGoalItemQuery() { }

	public override MiniEventPrefabsLibrary get_MiniEventPrefabsLibrary() { }

	public MiniGamesPrefabsLibrary get_MiniGamesPrefabsLibrary() { }

	public override MixABoosterEventPrefabsLibrary get_MixABoosterEventPrefabsLibrary() { }

	public override MysteryMachineEventPrefabsLibrary get_MysteryMachineEventPrefabsLibrary() { }

	public override IOfferPopupsLibrary get_OfferPopupsLibrary() { }

	public override IMenuState get_OpenedPopupModel() { }

	public override string get_OpenMenuTag() { }

	[CompilerGenerated]
	private PlayerModel get_Player() { }

	public override MergeBoardId get_PlayerActiveMergeBoardId() { }

	[CompilerGenerated]
	private PlayerClientContext get_PlayerContext() { }

	private RectTransform get_popupContainer() { }

	public override ProgressionPackEventPrefabLibrary get_ProgressionPackEventPrefabsLibrary() { }

	public ProgressionPackTaskCompleteView get_ProgressionPackTaskCompleteView() { }

	public Prop3DLibrary get_Prop3DLibrary() { }

	public override IRewardsAnimations get_RewardsAnimations() { }

	public IRewardVisuals get_RewardVisuals() { }

	public override ISafeRollback get_Rollback() { }

	public override SeasonalityPrefabsLibrary get_SeasonalityPrefabsLibrary() { }

	public IRewardVisuals get_ShopRewardVisuals() { }

	public override ShortLeaderboardEventPrefabsLibrary get_ShortLeaderboardEventPrefabsLibrary() { }

	public override SoloMilestoneEventPrefabsLibrary get_SoloMilestoneEventPrefabsLibrary() { }

	public override TemporaryCardCollectionEventPrefabsLibrary get_TemporaryCardCollectionEventPrefabsLibrary() { }

	public override TemporaryCardCollectionEventSpritesLibrary get_TemporaryCardCollectionEventSpritesLibrary() { }

	public UIArtScriptableObject get_UiArt() { }

	public UICharacterContainer get_UICharacterContainer() { }

	public VFXConfigLibrary get_VFXConfigLibrary() { }

	public Sprite GetBubbleIcon() { }

	private string GetCollectConfirmationQuestionLocalizationId(string prefix = null) { }

	public override IMenuSection GetCurrentMenu() { }

	private IMenuSection GetMenuWithTag(string menuTag) { }

	public string GetNameOfCurrentOpenMenu() { }

	public Sprite GetTimeIcon() { }

	private void HandleBackButtonInputs() { }

	private void HandleEventPopups() { }

	private static bool HasEventEndedFromContentDepletion(PlayerModel player, MetaActivableState meta) { }

	public override void HideAllMenus(HideMenuReason hideMenuReason = 4) { }

	private void IncreaseOfferPopupTriggerActivationCounts(OfferPopupTrigger popupTrigger, IActiveOfferGroup offerGroup) { }

	public MenuController Init1(IScheduler scheduler, PlayerModel player, PlayerClientContext playerContext, MessageDispatcher messageDispatcher, Controllers controllers, IPurchaseManager purchaseManager, LocationLoader locationLoader, AddressablesSession addressablesSession, LogErrorProvider logErrorProvider, IActionsExecutor actionsExecutor, ICameraHotspotNavigator cameraHotspotNavigator, ICameraMenuInput cameraMenuInput, IDecorationCamera decorationCamera, ICameraPanning cameraPanning, ICameraProjection cameraProjection, ICameraInputLock cameraInputLock, ISafeRollback rollback, ModelRender modelRender, GameConfigClientCache gameConfigClientCache, PlayerClientCache playerClientCache) { }

	public void Init2(NavigationController navigationController, DialogueRunner dialogueRunner, BoardViewTaskHandler boardViewTaskHandler, TitleBarController titleBarController, ITitleBarRewardWidgets titleBarRewardWidgets, ITitleBarInfiniteEnergy titleBarInfiniteEnergy, ITitleBarWalletOverride titleBarWalletOverride) { }

	public void Init3(ReEngagementController reEngagement, IHotspotController hotspotController, IHotspotProgressRefresher hotspotProgressRefresher, IHotspotCompletableQuery hotspotCompletableQuery, IHotspotCompletionState hotspotCompletionState, IMergeGoalItemQuery mergeGoalItemQuery, IHotspotVisibilityHider hotspotVisibilityHider, IEventHotspotRegistry eventHotspots, IPetSelectionHotspots petSelectionHotspots, IHotspotActivator hotspotActivator, IAreaLockedHotspotActions areaLockedHotspotActions, IAreaCompletionRewardHotspots areaCompletionRewardHotspots, IDebugHotspots debugHotspots, IHotspotPopupActions hotspotPopupActions, IIllustrationTaskHotspots illustrationTaskHotspots, TutorialHandController tutorialHand, CollectibleBoardEventManager collectibleBoardEventManager, LeaderboardEventManager leaderboardEventManager, GarageCleanupEventManager garageCleanupEventManager, ProgressionEventManager progressionEventManager, BoultonLeagueEventManager boultonLeagueEventManager) { }

	public void InitDailyScoopTaskRewardScreen(DailyScoopTaskCompleteView dailyScoopCompleteView, IHotspotCompletionState hotspotCompletionState, DialogueRunner dialogueRunner, MessagingController messagingController) { }

	public void InitProgressionPackTaskRewardScreen(ProgressionPackTaskCompleteView progressionPackCompleteView, IHotspotCompletionState hotspotCompletionState, DialogueRunner dialogueRunner, MessagingController messagingController) { }

	public void InputInBlockingLayer() { }

	public override bool IsAnyMenuInStack(Type[] menuTypes) { }

	public override bool IsDebugStatePreventing() { }

	public override bool IsMenuInStack() { }

	public override bool IsSpecificMenuInStack(string menuTag) { }

	public bool IsSpecificMenuInStackContains(string menuTag) { }

	private void LastMenuGoesHidden() { }

	private void MakeVisible(IMenuSection menuToPush, bool fadePanelBackground = true, bool immediate = false, bool doPush = true, Action onShownCallback = null, string EventId = null, AnalyticsViewType viewType = 0, AnalyticsEventParameters analyticsEventParameters = null, IDisposableAssetHandle<GameObject> popupHandle = null) { }

	public bool MenuAlreadyShown(Type menuStateType) { }

	private void MenuTransitionCompleted(string menuTag) { }

	private void MenuTransitionStarted(string menuTag) { }

	public override bool NavigateBack(object from, bool showAllPrevious = false, bool showPreviousImmediately = false) { }

	public override bool NavigateBack(object from, Action onFinish) { }

	private void NotifyDirector() { }

	private void OnEventReceived(PlayerEventBase evt) { }

	private void OnHiddenFinished(string menuTag) { }

	private void OnHiddenNoStackedMenu() { }

	private void OnHideMenuComplete(IMenuSection menu, HideMenuReason reason) { }

	private void OnPetPreview(PetId previewPetId, DecorationId previewDecoration, int decorationLayer) { }

	private void OnPopMenuAndShowAllHideCompleted(string menuTag) { }

	private void OnPopMenuAndShowPreviousHideCompleted(string menuTag, bool showImmediately) { }

	private void OnShownFinished(string menuTag) { }

	public void OnTransitionFromMergeGrid() { }

	private void OpenPetPreviewMenu(PetId previewPetId, DecorationId previewDecoration, int decorationLayer) { }

	public void PlayDialogue(StoryDefinitionId storyDefinitionId, Action action) { }

	public void PopMenu() { }

	public override void PopMenuAndShowAll() { }

	public override void PopMenuAndShowPrevious(bool showImmediately = false) { }

	private void PopMenuAndShowPreviousIfCurrent(IMenuSection section) { }

	public override void PopMenuAndShowShop(ShopMenuContentBlock shopContext, bool forceOpenCoinsAndGems, string openingSource, RedDotStatus redDotStatus, string showMethod) { }

	public override void PopMenusBeforeShow(string menuTag, int maxPopCount = -1) { }

	public void ProcessMenuTags() { }

	public override void PromptBuyConfirmation(Action confirmationAction, ICost cost) { }

	public override void PromptCollectConfirmation(Action confirmationAction, string questionLocalizationIdPrefix = null) { }

	public override void PromptCraftCardConfirmation(TemporaryCardCollectionEventModel eventModel, TemporaryCardCollectionCardHolder cardHolder, bool discovered, bool wildCardIsSpecial) { }

	public override void PromptMergeConfirmation(MergeResult mergeResult, MergeItem fromItem, MergeItem toItem, Action confirmationAction = null, Action cancelAction = null, bool isAutoMergeEnabled = false) { }

	public override void PromptSellConfirmation(Action confirmationAction) { }

	private void PushAndShow(IMenuSection menuToPush, bool hideCurrentFirst, IMenuState menuState = null, bool immediate = false, bool fadePanelBackground = true, string eventId = null, AnalyticsViewType viewType = 0, AnalyticsEventParameters analyticsEventParameters = null, IDisposableAssetHandle<GameObject> popupHandle = null) { }

	private UniTask PushAndShowWaitForClose(IMenuSection menuToPush, bool hideCurrentFirst, CancellationToken ct, IMenuState menuState = null, bool immediate = false, bool fadePanelBackground = true, string eventId = null, AnalyticsViewType viewType = 0, AnalyticsEventParameters analyticsEventParameters = null) { }

	public override void RefreshProducerInventoryIndicators() { }

	public override void RegisterPopupToCloseOnEventEnd(MetaActivableState eventModel, string menuTag) { }

	[CompilerGenerated]
	public void remove_OnDailyScoopTaskCompleted(Action<StatsObjective, TaskType, List`1<IPlayerReward>, Action, Int32> value) { }

	[CompilerGenerated]
	public override void remove_OnMenuVisibilityChange(Action<Boolean> value) { }

	[CompilerGenerated]
	public void remove_OnProgressionPackTaskCompleted(Action<StatsObjective, TaskType, List`1<IPlayerReward>, Action, Int32, Boolean> value) { }

	[CompilerGenerated]
	public override void remove_OnStackedMenuPushed(Action value) { }

	private void RemoveFromMenuStack(string menuTag) { }

	private void RemoveFromMenuStackIfExists(string menuTag) { }

	private void ReplaceMenu(IMenuSection menuToShow, IMenuState menuState = null, string eventId = null, AnalyticsViewType viewType = 0) { }

	public void RepopulateMenusInStack() { }

	[CompilerGenerated]
	private static void set_MenusClosedVersion(int value) { }

	[CompilerGenerated]
	private void set_Player(PlayerModel value) { }

	[CompilerGenerated]
	private void set_PlayerContext(PlayerClientContext value) { }

	public override void SetBackButtonEnabled(bool buttonEnabled) { }

	public override void SetTab(string targetId, int tabIndex) { }

	public override void ShowAccountDeleteInformationPopup() { }

	public override void ShowAccountDeleteScheduledPopup(bool userInitiated, bool fromGameLoading) { }

	public override void ShowAccountResetPopup() { }

	public override void ShowAccountSuccessfullyResettedPopup(Action continueAction) { }

	public override void ShowActivateWildCardPopup(TemporaryCardCollectionEventModel eventModel, bool isSpecial, Action onTap) { }

	private bool ShowActiveOfferPopupTriggers(OfferPopupTriggerPlacement offerPopupTriggerPlacement, string showMethod) { }

	private void ShowAfterOtherMenusHaveBeenHidden(Func<IMenuSection> menuToPush, Func<IMenuState> menuState, bool hideNavigation, string eventId = null, IDisposableAssetHandle<GameObject> popupHandle = null) { }

	private void ShowAfterOtherMenusHaveBeenHidden(string menuTag, AssetReferenceT<GameObject> prefabRef, Func<IMenuState> menuState, bool hideNavigation, string eventId = null) { }

	public override void ShowAreaCompleteRewardPopup(IAreaInfo area, IWalletState walletState, RandomPCG rewardContainerRandom) { }

	public void ShowAreaCompleteRewardPopup(AreaId areaId) { }

	public void ShowAreaHotspotPopupMenu(HotspotId hotspotId, TaskSource taskSource) { }

	public override void ShowAreaHotspotPopupMenu(IHotspotDefinition hotspot, TaskSource taskSource, Action showHotspotFinished = null) { }

	public override void ShowAreaHotspotPopupMenuInventorySinkConfirmationPopup(Action<IHotspotDefinition> confirmationAction, IHotspotDefinition hotspot, ValueTuple<IItemDefinition, Int32>[] sinkItems) { }

	public override void ShowAreaInfoPopupMenu(IAreaInfo area, AreaInfoStyle areaInfoStyle, bool showIsNavigateBack, TaskSource taskSource) { }

	public override void ShowAreaLockedHotspotPopupMenu(IHotspotDefinition hotspot, TaskSource taskSource) { }

	public void ShowAreaLockedHotspotPopupMenu(HotspotId hotspotId, TaskSource taskSource) { }

	public void ShowAreaUnlockedPopupMenu(AreaId areaId) { }

	public override void ShowAreaUnlockedPopupMenu(IAreaInfo area) { }

	private void ShowArtifactItemInfoPopupMenu(IMergeItem mergeItem, bool hideCurrentFirst = false) { }

	public override void ShowAutoMergeBoosterPopup(MetaDuration durationSeconds) { }

	public override void ShowAutoMergeEventInfoPopup(ICoreSupportEventModel eventModel) { }

	public override void ShowAutoMergeEventStartPopup(CoreSupportEventModel eventModel) { }

	public override void ShowAutoMergeFeatureFTUEPopup(bool force = false) { }

	private void ShowAuxEnergyPopup(EnergyType energyType, bool isMinigameLayerVisible = false) { }

	private void ShowBasicItemInfoPopupMenu(IMergeChainDefinition mergeChain, IItemDefinition itemDefinition, bool hideCurrentFirst, IActionsExecutor executor, IOffersManager offersManager, IPoolsManager poolsManager, IRewardsAnimations rewardsAnimations, PlayerModel player, IOfferPopupsLibrary offerPopupsLibrary, IRewardVisuals rewardVisuals, ItemInfoPopupFlags flags) { }

	public override void ShowBoardShop(ShopMenuContentBlock shopContext, string openingSource, RedDotStatus redDotStatus, string showMethod, IActiveOfferGroup overrideOfferGroup = null, bool fadePanelBackground = true) { }

	public void ShowBoosterInfoPopup(IPlayerReward reward) { }

	public override void ShowBoultonLeagueDeterminingLeaderboardPlacementRewardsPopup() { }

	public override void ShowBoultonLeagueEventEndPopup(BoultonLeagueEventModel eventModel, BoultonLeagueEventEndPopupShowParams showParams = null) { }

	public override void ShowBoultonLeagueEventInfoPopup(BoultonLeagueEventModel eventModel) { }

	public override void ShowBoultonLeagueEventProgressionPopup(BoultonLeagueEventModel eventModel) { }

	public override void ShowBoultonLeagueEventStartPopup(BoultonLeagueEventModel eventModel) { }

	public override void ShowBuilderEventAllBuildsCompletedPopup(string titleText, string descriptionText, string buttonText) { }

	public override void ShowBuilderEventCompletionRewardPopup(IBuilderEventMinigame minigameModel, ICoreSupportEventModel eventModel, Action onCompletedCallback) { }

	public override void ShowBuilderEventInfoPopup(ICoreSupportEventModel eventModel) { }

	public override void ShowBuilderEventMinigamePopup(BuilderEventMinigameModel minigameModel, ICoreSupportEventModel eventModel) { }

	public override void ShowBuilderEventOutOfTokensPopup(ICoreSupportEventModel eventModel) { }

	public override void ShowBuilderEventScreenTransitionEffect(ICoreSupportEventModel eventModel) { }

	private void ShowBuyMoreEnergyPopup(EnergyItem energyItem, bool tryShowOfferAfter) { }

	[AsyncStateMachine(typeof(<ShowCameraTutorialPopup>d__490))]
	public override UniTask ShowCameraTutorialPopup(CollectibleBoardEventId relatedEventId, CancellationToken ct) { }

	public override void ShowCardCollectionSupportingEventPopup(CardCollectionSupportingEventModel eventModel) { }

	[AsyncStateMachine(typeof(<ShowCardGamePopupMenu>d__504))]
	private UniTask ShowCardGamePopupMenu(IHotspotDefinition hotspot, TaskSource taskSource, CancellationToken ct) { }

	public override void ShowCardGamePopupMenu(IHotspotDefinition hotspot, TaskSource taskSource) { }

	public override void ShowCelebrationPopup(Action onRestart, string type) { }

	public override void ShowChooseLanguagePopupMenu() { }

	public override void ShowClassicRacesEventInfoPopup(ClassicRacesMinigameModel minigameModel, Action onClosedCallback) { }

	public override void ShowClassicRacesEventProgressionPopup(ClassicRacesMinigameModel minigameModel, ICoreSupportEventModel eventModel) { }

	public override void ShowClassicRacesExtraRacesPopup(ClassicRacesMinigameModel minigameModel) { }

	public override void ShowClassicRacesRaceResultPopup(ClassicRacesMinigameModel minigameModel, CoreSupportEventModel eventModel, Action onCompletedCallback) { }

	public override void ShowCloudTransitionEffect() { }

	public void ShowCodexCombinedPopupMenu() { }

	public void ShowCodexPopupMenu(CodexCategoryInfo category) { }

	public override void ShowCollectEventProgressRewardPopupMenu(bool hideCurrentFirst = false) { }

	[AsyncStateMachine(typeof(<ShowCollectibleBoardEventEndPopup>d__452))]
	public override UniTask ShowCollectibleBoardEventEndPopup(CollectibleBoardEventModel eventModel, CancellationToken ct) { }

	[AsyncStateMachine(typeof(<ShowCollectibleBoardEventExtendPopup>d__456))]
	public override UniTask ShowCollectibleBoardEventExtendPopup(CollectibleBoardEventModel eventModel, Nullable<MetaTime> reviewEndAt, bool automaticShow, Action onFinalize, CancellationToken ct) { }

	[AsyncStateMachine(typeof(<ShowCollectibleBoardEventInfoPopup>d__454))]
	public override UniTask ShowCollectibleBoardEventInfoPopup(CollectibleBoardEventModel eventModel, CancellationToken ct) { }

	[AsyncStateMachine(typeof(<ShowCollectibleBoardEventIntroPopup>d__458))]
	public override UniTask ShowCollectibleBoardEventIntroPopup(CollectibleBoardEventInfo eventInfo, InPreview inPreview, CancellationToken ct) { }

	[AsyncStateMachine(typeof(<ShowCollectibleBoardEventProgressionPopup>d__453))]
	public override UniTask ShowCollectibleBoardEventProgressionPopup(CollectibleBoardEventModel eventModel, CancellationToken ct, bool hideCurrentFirst = false) { }

	[AsyncStateMachine(typeof(<ShowCollectibleBoardEventStartPopup>d__451))]
	public override UniTask ShowCollectibleBoardEventStartPopup(CollectibleBoardEventModel eventModel, CancellationToken ct) { }

	public override void ShowCollectibleBoardEventTaskPopup(CollectibleBoardEventModel eventModel) { }

	[AsyncStateMachine(typeof(<ShowCollectibleBoardEventTeasePopup>d__455))]
	public override UniTask ShowCollectibleBoardEventTeasePopup(CollectibleBoardEventInfo eventInfo, CancellationToken ct) { }

	public override void ShowConfirmationDialogPopup(string titleTextLocId, string questionTextLocId, string confirmButtonTextLocId, string cancelButtonTextLocId, Action confirmAction, Action cancelAction, ConfirmationDialogExtra extra) { }

	public override void ShowConnectionErrorMessage(string titleText, string descriptionText, string buttonText, Action positiveButtonAction) { }

	public override void ShowConnectionErrorMessage(string titleText, string descriptionText, string buttonText, Action positiveButtonAction, Func<String> livingError) { }

	public override void ShowCooldownRemoverRewardPopup(MetaDuration duration, Action onClosed) { }

	public override void ShowCoreSupportEventEndPopup(CoreSupportEventModel eventModel) { }

	public override void ShowCoreSupportEventIntroPopup(ICoreSupportEventInfo eventInfo, InPreview inPreview) { }

	public override void ShowCoreSupportEventStartPopup(CoreSupportEventModel eventModel) { }

	public override void ShowCoreSupportEventTeasePopup(CoreSupportEventModel eventModel) { }

	public override void ShowCurrencyBankInfoPopup(CurrencyBankModel currencyBankModel) { }

	public override void ShowCurrencyBankPopup() { }

	public void ShowCurrencyBankRewardPopup(CurrencyBankState currencyBankState, Currencies currencyType, long amount) { }

	public override void ShowCustomItemInfoPopupMenu(IItemDefinition itemDefinition, bool hideCurrentFirst = false) { }

	public override void ShowDailyChallengesEventInfoPopup(bool isAuto, ICoreSupportEventModel eventModel) { }

	public override void ShowDailyChallengesMinigamePopup(IPlayer player, IDailyChallengesMinigameModel minigameModel, ICoreSupportEventModel eventModel) { }

	public override void ShowDailyScoopEventStartPopup(DailyScoopEventModel eventModel, bool isAuto = false) { }

	public override void ShowDailyScoopInfoPopup(bool isAuto = false) { }

	public void ShowDailyTasksMenu() { }

	public override void ShowDailyTasksRefreshPurchaseConfirmationPopup() { }

	public override void ShowDailyTasksV2InfoPopup() { }

	public override void ShowDailyTasksV2RefreshPurchaseConfirmationPopup(int taskIndex, Action tryToPurchase) { }

	public override void ShowDailyTasksV2TimeExtensionOfferPopup() { }

	public void ShowDebugCardCollectionRollCardPacksSimulationPopup() { }

	public void ShowDebugConfirmationPopup(string titleText, string descriptionText, string buttonText, Action positiveButtonAction) { }

	[AsyncStateMachine(typeof(<ShowDecorationOwnedPopup>d__462))]
	public override UniTask ShowDecorationOwnedPopup(CollectibleBoardEventModel eventModel, CancellationToken ct) { }

	public void ShowDecorationSelection(DecorationSelectionMenuState wantedState = null) { }

	public override void ShowDecorationSelectionMenu(DecorationSelectionMenuState wantedState = null) { }

	public override void ShowDecorationShopPopup(DecorationShopModel decorationShopModel) { }

	public override void ShowDeleteAccountConfirmation(Action confirmationAction) { }

	public void ShowDigEventAddItemToCollectionDebugPopup() { }

	public override void ShowDigEventCollectionCompletePopup(CoreSupportEventModel eventModel) { }

	public override void ShowDigEventItemDiscoveryPopup(CoreSupportEventModel eventModel, string treasureId, Vector2 spriteSize, bool isShinyItem, Action onPopupClosed) { }

	public override void ShowDigEventMinigameInfoPopup(ICoreSupportEventModel eventModel) { }

	public override void ShowDigEventMuseumPopup(DigEventId digEventId, CoreSupportEventModel eventModel) { }

	public override void ShowDigEventPrototype(ICoreSupportEventModel eventModel, bool enabled) { }

	public void ShowDownloadContentFloatingMenu(Action onClosePopupCallback) { }

	[IteratorStateMachine(typeof(<ShowDownloadContentMenu>d__487))]
	public IEnumerator ShowDownloadContentMenu(AddressablesDownloadProcess downloadProcess) { }

	public override void ShowDownloadErrorPopup(Action positiveAction, Action negativeAction, string titleLocalizationId = "DownloadError_Popup_Title", string descriptionLocalizationId = "DownloadError_Popup_Description", string positiveButtonLocalizationId = "DownloadError_Popup_Retry", string negativeButtonTextLocalizationId = "DownloadError_Popup_Cancel") { }

	public override void ShowEndOfContentPopupMenu() { }

	public override void ShowEnergyModeEventEndPopup(EnergyModeEventModel eventModel) { }

	public override void ShowEnergyModeEventStartPopup(EnergyModeEventModel eventModel) { }

	public override void ShowEnergyModeFTUEPopup(EnergyModeEventModel eventModel) { }

	public override void ShowEnergyPopupMenu(EnergyType type, bool tryShowOfferFirst, bool isMinigameLayerVisible = false) { }

	public override void ShowEventCalendarPopupMenu(bool hideCurrentFirst = false, EventCalendarPopupMenuFlags flags = 0) { }

	public override void ShowEventEnergyMainBoardInfoPopup(EnergyType energyType) { }

	public void ShowEventProgressPopupMenu(MergeBoardId storyEventBoardId = null, bool hideCurrentFirst = false) { }

	[AsyncStateMachine(typeof(<ShowExtendGameEventPopup>d__338))]
	public override UniTask ShowExtendGameEventPopup(IBoardEventModel boardEvent, Nullable<MetaTime> reviewEndAt, bool automaticShow, Action onFinalize, CancellationToken ct) { }

	public override void ShowFallbackRewardInfoPopup(CollectibleBoardEventModel eventModel, PlayerModel playerModel, PlayerClientContext playerContext, int level, LevelEventLevelType levelType, IPlayerReward reward, IPlayerReward fallbackReward, IIconLibrary iconLibrary, Action<List`1<IPlayerReward>> onClaimed, IBoardController boardController, ITitleBarRewardWidgets titleBarRewardWidgets, Action claimCallback) { }

	[AsyncStateMachine(typeof(<ShowFishCatchPopup>d__466))]
	public UniTask ShowFishCatchPopup(CollectibleBoardEventId collectibleBoardEventId, ItemDefinition fishItemDefinition, F32 fishWeight, WeightCategory fishWeightCategory, int flags, CancellationToken ct) { }

	public void ShowGameQuitConfirmationPopup(Action confirmationAction) { }

	[AsyncStateMachine(typeof(<ShowGarageCleanupEndPopup>d__391))]
	public override UniTask ShowGarageCleanupEndPopup(GarageCleanupEventPrefabs eventPrefabs, GarageCleanupEventModel eventModel, CancellationToken ct) { }

	[AsyncStateMachine(typeof(<ShowGarageCleanupEventPopup>d__388))]
	public override UniTask ShowGarageCleanupEventPopup(GarageCleanupEventModel eventModel, string source, CancellationToken ct) { }

	[AsyncStateMachine(typeof(<ShowGarageCleanupInfoPopup>d__389))]
	public override UniTask ShowGarageCleanupInfoPopup(GarageCleanupEventModel eventModel, CancellationToken ct) { }

	[AsyncStateMachine(typeof(<ShowGarageCleanupStartPopup>d__390))]
	public override UniTask ShowGarageCleanupStartPopup(GarageCleanupEventPrefabs eventPrefabs, GarageCleanupEventModel eventModel, CancellationToken ct) { }

	public void ShowGenericPopupWithBoardItems(string title, string description, Action positiveAction, List<IItemDefinition> boardItems) { }

	public override void ShowGenericRewardPopup(IPlayerReward reward, string headerLocalizationId, Object[] headerLocalizationArgs, Action onClose, IWalletState customWalletState = null, RandomPCG rewardContainerRandomCheckpoint = null) { }

	public override void ShowGoToAppStoreOrGooglePlayMessage(string titleText, string descriptionText, string buttonText, Action positiveButtonAction) { }

	public override void ShowHotspotPopupForType(IHotspotDefinition hotspotDefinition, TaskSource taskSource) { }

	public override void ShowIllustrationPopupMenu(IHotspotDefinition hotspot, TaskSource taskSource) { }

	public override void ShowInboxItem(IMailMessage inboxItem, IInboxVisualElementLibrary visualElementLibrary) { }

	public void ShowInboxItemDummy(IMailMessage inboxItem) { }

	public override void ShowInboxMainView() { }

	public override void ShowInfiniteEnergyPopup(MetaDuration duration, bool showAfterMenusClosed = false, bool animateRewardClaim = true, Action onClosed = null) { }

	public override void ShowItemInfoPopupMenu(IMergeItem mergeItem, bool hideCurrentFirst = false) { }

	public override void ShowItemInfoPopupMenu(IMergeChainDefinition mergeChain, IItemDefinition itemDefinition, bool hideCurrentFirst, ItemInfoPopupFlags flags) { }

	public override void ShowItemInfoPopupMenu(IMergeChainDefinition mergeChain, IItemDefinition itemDefinition, bool hideCurrentFirst = false) { }

	public override void ShowItemObtainedPopup(IEnumerable<IPlayerReward> rewards) { }

	[AsyncStateMachine(typeof(<ShowLayeredDecorationInfoPopup>d__459))]
	public override UniTask ShowLayeredDecorationInfoPopup(CollectibleBoardEventModel eventModel, CancellationToken ct) { }

	[AsyncStateMachine(typeof(<ShowLayeredDecorationLockedPopup>d__460))]
	public override UniTask ShowLayeredDecorationLockedPopup(CollectibleBoardEventModel eventModel, CancellationToken ct) { }

	public override void ShowLayeredDecorationMaxLevelPopup(DecorationInfo decoration, string headerLocId, string descriptionLocId) { }

	public override void ShowLeaderboardEventDeterminingRewardsPopup() { }

	[AsyncStateMachine(typeof(<ShowLeaderboardEventEndPopup>d__472))]
	public override UniTask ShowLeaderboardEventEndPopup(LeaderboardEventModel eventModel, CancellationToken ct) { }

	[AsyncStateMachine(typeof(<ShowLeaderboardEventInfoPopup>d__469))]
	public override UniTask ShowLeaderboardEventInfoPopup(LeaderboardEventModel eventModel, CancellationToken ct) { }

	[AsyncStateMachine(typeof(<ShowLeaderboardEventRankingPopup>d__471))]
	public override UniTask ShowLeaderboardEventRankingPopup(LeaderboardEventModel eventModel, ValueTuple<List`1<LeaderboardEventPlayerRankingEntry>, Int32> rankingsAndRankingPosition, CancellationToken ct, Action buttonActionOverride = null) { }

	[AsyncStateMachine(typeof(<ShowLeaderboardEventRankingPopup>d__470))]
	public override UniTask ShowLeaderboardEventRankingPopup(LeaderboardEventModel eventModel, CancellationToken ct, Action buttonActionOverride = null) { }

	[AsyncStateMachine(typeof(<ShowLeaderboardEventStartPopup>d__468))]
	public override UniTask ShowLeaderboardEventStartPopup(LeaderboardEventModel eventModel, CancellationToken ct) { }

	public override void ShowLevelUpMergeChainPopup(IMergeChainDefinition mergeChain, int level) { }

	public override void ShowLimitedOfferInfoPopup() { }

	public override void ShowLocationTravelConfirmationPopup(LocationId locationId, bool forceTravel, string eventLocId = "", Action onTravel = null, IAreaInfo areaInfo = null, bool isAreaTeaser = false) { }

	public void ShowLocationTravelMinimapPopup(IEnumerable<LocationTravelInfo> locationTravelInfos = null) { }

	public override void ShowLocationTravelPopup(LocationTravelInfo locationTravelInfo, TaskSource taskSource, Action onTravel = null, bool allowNegativeActions = true) { }

	public void ShowLocationTravelPopup(IEnumerable<LocationTravelInfo> locationTravelInfos, TaskSource taskSource, Action onTravel = null, bool allowNegativeActions = true) { }

	public void ShowMaintenanceModeOngoingPopupMenu(Action positiveAction) { }

	public void ShowMaintenanceModeUpcomingPopupMenu() { }

	public override void ShowMakeYourOwnOfferInfoPopup() { }

	[AsyncStateMachine(typeof(<ShowMenuAfterOthersHaveBeenHidden>d__422))]
	private UniTask ShowMenuAfterOthersHaveBeenHidden(AssetReferenceT<GameObject> prefabRef, IMenuState menuState, string eventID, CancellationToken ct) { }

	public override void ShowMergeGoalsPopupMenu(HotspotId hotspotId, TaskSource taskSource) { }

	public override void ShowMergeGridInventoryPopupMenu() { }

	public override void ShowMergeGridShopPopupMenu(string shopOpeningSource, RedDotStatus redDotStatus, string showMethod, ShopMenuContentBlock focusCurrencies = 0, bool openedFromTitleBar = false, bool forceOpenCoinsAndGems = false, bool forceOpenGarageShop = false, bool forceOpenAnyBoardShop = false) { }

	public override void ShowMergeItemInfoPopupMenu(IMergeItem mergeItem, bool hideCurrentFirst = false) { }

	public override void ShowMiniEventInfoPopup(MiniEventModel eventModel) { }

	public override void ShowMiniEventStartPopup(MiniEventModel eventModel) { }

	public override void ShowMiniGameCompletedPopup(Action positiveButtonAction) { }

	public override void ShowMixABoosterEventPopup(MixABoosterEventModel eventModel, bool autoPopup) { }

	public override void ShowMixABoosterInfoPopup(MixABoosterEventModel eventModel, bool autoPopup) { }

	public override void ShowMixABoosterStartPopup(MixABoosterEventModel eventModel, bool showEndVariant, bool autoPopup) { }

	public override void ShowMuseumInfoPopup(CoreSupportEventModel eventModel) { }

	public override void ShowMysteryMachineConfirmationPopup(MysteryMachineEventModel eventModel, MysteryMachineConfirmationData data, Action onCompleteAction) { }

	public override void ShowMysteryMachineEventDeterminingRewardsPopup() { }

	public override void ShowMysteryMachineEventEndOfRunPopup(MysteryMachineEventModel eventModel, MysteryMachineScoreView scoreView, Action onClose) { }

	public override void ShowMysteryMachineEventEndPopup(MysteryMachineEventModel eventModel) { }

	public override void ShowMysteryMachineEventInfoPopup(MysteryMachineEventModel eventModel, bool enteringFirstTime = false) { }

	public override void ShowMysteryMachineEventStartPopup(MysteryMachineEventModel eventModel) { }

	public override void ShowMysteryMachineEventTaskProgressionPopup(MysteryMachineEventModel eventModel) { }

	public override void ShowMysteryMachineItemOddsPopup(MysteryMachineEventModel eventModel) { }

	public override void ShowMysteryMachineLevelInfoPopup(MysteryMachineEventModel eventModel, bool levelingUp) { }

	[AsyncStateMachine(typeof(<ShowNextTriggeredOfferPopupAsync>d__336))]
	private UniTask ShowNextTriggeredOfferPopupAsync(OfferPopupTriggerPlacement offerPopupTriggerPlacement, List<ValueTuple`2<OfferPopupTrigger, IActiveOfferGroup>> offerPopupTriggerGroups, int startIndex, string showMethod, bool wasActivatedViaFallback, bool replaceUnderlyingMenu, CancellationToken ct) { }

	public override void ShowNoInternetConnectionPopup(Action positiveButtonAction) { }

	public void ShowNoPetsUnlockedPopup(string titleText, string descriptionText, string buttonText, Action positiveButtonAction) { }

	private void ShowNoStackedMenu(IMenuSection menuToShow, IMenuState menuState = null, bool immediate = false) { }

	public override void ShowNotEnoughCurrencyPopup(ICost cost, int missingAmount) { }

	public override void ShowNotEnoughSomethingMultiplesPopupMenu(List<ValueTuple`2<Currencies, Int32>> costs) { }

	public override void ShowNotEnoughSomethingPopupMenu(ICost cost, int missingAmount) { }

	public override void ShowNotEnoughSomethingPopupMenu(ValueTuple<Currencies, Int32> missing, bool hideCurrentFirst = false) { }

	public void ShowNotEnoughSomethingPopupMenu(Currencies currency, int amount) { }

	public override void ShowNotificationWhitelistPopupMenu() { }

	public override void ShowOfferGroupPopup(IActiveOfferGroup activeOfferGroup, bool wasShownAutomatically, string showMethod, Option<OfferPlacementId> overrideOfferPlacementId) { }

	[AsyncStateMachine(typeof(<ShowOfferGroupPopupAsync>d__341))]
	private UniTask ShowOfferGroupPopupAsync(IActiveOfferGroup activeOfferGroup, OffersPopupViewModel menuState, bool shouldReplaceMenu, CancellationToken ct) { }

	private UniTask ShowOfferGroupPopupInternalAsync(IActiveOfferGroup activeOfferGroup, bool wasShownAutomatically, string showMethod, Option<OfferPlacementId> overrideOfferPlacementId, bool shouldReplaceMenu, Action closeSequenceAction, CancellationToken ct) { }

	public override void ShowOnFireInfoPopup(Action onImpact) { }

	public override void ShowOnFireRewardPopup(MetaDuration duration, Action onClosed) { }

	public override void ShowOrderItemInfoPopupMenu(IMergeItem mergeItem, bool hideCurrentFirst = false) { }

	public override void ShowOutOfCSETokensMenu(CoreSupportEventTokenId tokenId, AuxEnergyMenuLocalisationState localisationState, bool isMinigameLayerVisible = false) { }

	private void ShowPetInfoPopup(PetInfo petInfo) { }

	public override void ShowPetRewardPopup(PetInfo petInfo, Action onClose) { }

	public override void ShowPetSelectionMenu(PetSelectionMode petSelectionMode, PetId previewPetId, DecorationId previewDecorationId, int decorationLayer) { }

	public override void ShowPlayerLevelPopupMenu(bool closeCurrentPopup = false) { }

	public override void ShowPlayerNameNotificationPopup(IPlayer playerModel, PlayerNamePopupFlags playerNamePopupFlags) { }

	public override void ShowPlayerNamePopup(IPlayer playerModel, bool hideCurrentFirst = false, PlayerNamePopupFlags flags = 0) { }

	public override void ShowPlayerRewardInfoPopupMenu(IPlayerReward playerReward, bool hideCurrentFirst = false, ItemInfoPopupFlags flags = 0) { }

	public override void ShowProgressionEventBackToBackPopup(ProgressionEventModel eventModel) { }

	public override void ShowProgressionEventChallengeRewardPopup(ProgressionEventModel eventModel, int claimedLevelNumber, Action rewardClaimedAction) { }

	[AsyncStateMachine(typeof(<ShowProgressionEventChallengeRewardPopup>d__443))]
	public override UniTask ShowProgressionEventChallengeRewardPopup(ProgressionEventModel eventModel, int claimedLevelNumber, Action rewardClaimedAction, CancellationToken ct) { }

	public override void ShowProgressionEventEndPopup(ProgressionEventModel eventModel) { }

	[AsyncStateMachine(typeof(<ShowProgressionEventEndPopup>d__438))]
	public override UniTask ShowProgressionEventEndPopup(ProgressionEventModel eventModel, CancellationToken ct) { }

	public override void ShowProgressionEventGenericInfoPopup(ProgressionEventModel eventModel) { }

	[AsyncStateMachine(typeof(<ShowProgressionEventGenericInfoPopup>d__436))]
	public override UniTask ShowProgressionEventGenericInfoPopup(ProgressionEventModel eventModel, CancellationToken ct) { }

	public override void ShowProgressionEventPassObtainedPopup(ProgressionEventModel eventModel, ProgressionEventTrack previousActiveTrack, ProgressionEventTrack purchasedTrack) { }

	public override void ShowProgressionEventProgressionPopup(ProgressionEventModel eventModel) { }

	[AsyncStateMachine(typeof(<ShowProgressionEventProgressionPopup>d__433))]
	public UniTask ShowProgressionEventProgressionPopup(ProgressionEventModel eventModel, CancellationToken ct) { }

	public override void ShowProgressionEventPurchasePassPopup(ProgressionEventModel eventModel, string triggerType, ProgressionEventPurchasePassStyle style = 0) { }

	[AsyncStateMachine(typeof(<ShowProgressionEventStartPopup>d__434))]
	public override UniTask ShowProgressionEventStartPopup(ProgressionEventModel eventModel, CancellationToken ct) { }

	public override void ShowProgressionPackAfterPurchasePopup(ProgressionPackEventModel eventModel) { }

	public void ShowProgressionPackEventEndPopup(ProgressionPackEventModel eventModel) { }

	public override void ShowProgressionPackEventInfoPopup(ProgressionPackEventModel eventModel) { }

	public override void ShowProgressionPackEventProgressionPopup(ProgressionPackEventModel eventModel) { }

	public override void ShowProgressionPackEventStartPopup(ProgressionPackEventModel eventModel) { }

	public void ShowProgressionPackInfoPopup() { }

	public override void ShowRatingPopupMenu() { }

	public override void ShowReEngagementRewardPopup(ReEngagementSettings settings) { }

	public override void ShowRentableInventoryAdvertisementPopup(RentableInventorySettings settings, Action actionToConfirm, Action actionToCancel) { }

	public override void ShowRentableInventoryExtensionPopup(RentableInventorySettings settings, Action actionToConfirm, Action actionToCancel) { }

	public override void ShowReportPlayerPopup(Nullable<Int32> participantIdxToReport, Nullable<EntityId> entityIdToReport, string reportedPlayerName, bool hideCurrentFirst = false) { }

	public override void ShowResetAccountConfirmation(Action confirmationAction) { }

	public override void ShowRewardContainerInfoPopup(RewardContainerInfo rewardContainer) { }

	public override void ShowRewardContainerPopup(RewardContainerInfo rewardContainer, List<IPlayerReward> rewards, Option<Action> onClose, IWalletState customWalletState = null, RandomPCG rewardContainerRandomCheckpoint = null) { }

	public override void ShowRollTheDiceMinigameInfoPopup(ICoreSupportEventModel eventModel) { }

	public override void ShowRollTheDiceMinigamePopup(RollTheDice minigameModel, ICoreSupportEventModel eventModel) { }

	public override void ShowRollTheDiceRecipeCompletePopup(RollTheDice minigameModel, ICoreSupportEventModel eventModel, AssetReferenceSprite dishSpriteRef, string dishName, Action onPopupClosed) { }

	public override void ShowSeasonStartPopup(SeasonInfo season, Action completeAction) { }

	public override void ShowSettingsPopupMenu() { }

	public override void ShowShop(ShopMenuContentBlock shopContext, bool forceOpenCoinsAndGems, string openingSource, RedDotStatus redDotStatus, string showMethod, IActiveOfferGroup overrideOfferGroup = null, bool fadePanelBackground = true) { }

	private void ShowShopBoxItemInfoPopupMenu(IMergeChainDefinition mergeChain, IItemDefinition itemDefinition, bool forceShowOdds, bool hideCurrentFirst = false) { }

	public override void ShowShopItemInfoPopupMenu(IMergeChainDefinition mergeChain, IItemDefinition itemDefinition, bool forceShowOdds, bool hideCurrentFirst = false) { }

	public override void ShowShopOffersPopupMenu(bool hideCurrentFirst = false, IEnumerable<IActiveOfferGroup> overrideOfferGroups = null) { }

	public override void ShowShopRefreshMessage(Action positiveAction, OfferPlacementId placementId) { }

	public override void ShowShopWarningOrErrorPopupMenu(string title, string description, string button) { }

	public override void ShowShortLeaderboardEventEndPopup(ShortLeaderboardEventModel eventModel) { }

	public override void ShowShortLeaderboardEventInfoPopup(ShortLeaderboardEventModel eventModel) { }

	public override void ShowShortLeaderboardEventProgressionPopup(ShortLeaderboardEventModel eventModel) { }

	public override void ShowShortLeaderboardEventStartPopup(ShortLeaderboardEventModel eventModel) { }

	public override void ShowShortLeaderboardEventTeasePopup(ShortLeaderboardEventModel eventModel) { }

	public override void ShowSkipTimePopup(MetaDuration skipDuration, Action onClosed) { }

	public override void ShowSocialLoginAlreadyLoggedInMessage(AuthenticationPlatform authenticationPlatform) { }

	public void ShowSocialLoginConfirmStateSelectionMessage(PlayerData selectedPlayerData, Action confirmAction) { }

	public override void ShowSocialLoginFailedMessage(string error) { }

	public override void ShowSocialLoginSelectGameStateMessage(PlayerData localPlayerData, PlayerData remotePlayerData, Action<PlayerData> selectAction) { }

	public void ShowSocialLoginSuccessMessage(AuthenticationPlatform authPlatform, string authUserId) { }

	public override void ShowSocialMediaPopupMenu(SocialMediaPlatform socialMediaPlatform, string source) { }

	public override void ShowSoloMilestoneEventEndPopup(SoloMilestoneEventModel eventModel) { }

	public override void ShowSoloMilestoneEventStartPopup(SoloMilestoneEventModel eventModel, bool isAuto = false) { }

	public void ShowSoloMilestonEventCompletionPopup(SoloMilestoneEventModel eventModel) { }

	public void ShowSpecialOffers(bool hideCurrentFirst = false) { }

	public override void ShowSystemNotificationsPopupMenu() { }

	public void ShowTemplatePopupMenu() { }

	public override void ShowTemporaryCardCollectionCardPopup(TemporaryCardCollectionEventModel eventModel, List<CardCollectionCardId> cardIds, CardCollectionCardId currentCardId) { }

	public override void ShowTemporaryCardCollectionCardSetPopup(TemporaryCardCollectionEventModel eventModel, CardCollectionCardSetId cardCollectionCardSetId, bool hideCurrentFirst) { }

	public override void ShowTemporaryCardCollectionCollectedAllCardsPopup(TemporaryCardCollectionEventModel eventModel) { }

	public void ShowTemporaryCardCollectionEndPopup(TemporaryCardCollectionEventModel eventModel) { }

	public override void ShowTemporaryCardCollectionEvidenceBoxOpening(CardCollectionEvidenceBoxInfo boxInfo) { }

	public override void ShowTemporaryCardCollectionEvidenceRoomPopup(TemporaryCardCollectionEventModel eventModel) { }

	public override void ShowTemporaryCardCollectionInfoPopup(TemporaryCardCollectionEventModel eventModel) { }

	public void ShowTemporaryCardCollectionInformantPopup(TemporaryCardCollectionEventModel eventModel, bool isSpecial) { }

	public override void ShowTemporaryCardCollectionOddsPopup(TemporaryCardCollectionEventModel eventModel, CardCollectionPackId packId, bool hideCurrentFirst = false) { }

	public override void ShowTemporaryCardCollectionOpenCardPackPopup(TemporaryCardCollectionEventId eventId, List<CardCollectionPackId> openedPackIds, List<List`1<ValueTuple`2<CardCollectionCardId, Boolean>>> cardsPerPack) { }

	public override void ShowTemporaryCardCollectionPrestigePopup(TemporaryCardCollectionEventModel eventModel, bool hideCurrentFirst, bool goToProgressionPopupOnDismiss = false) { }

	public override void ShowTemporaryCardCollectionProgressionPopup(TemporaryCardCollectionEventModel eventModel) { }

	public override void ShowTemporaryCardCollectionRewardPopup(TemporaryCardCollectionEventModel eventModel, bool debug = false) { }

	public void ShowTemporaryCardCollectionStartPopup(TemporaryCardCollectionEventModel eventModel) { }

	public override void ShowThirdPartySurveyInboxItem(IMailMessage inboxItem) { }

	public override void ShowTieredOffersEndPopup(string titleText, string descriptionText, string buttonText, Action positiveButtonAction) { }

	public override void ShowToDoPopupMenu(Option<DailyTodoPopupFocusTarget> focusTargetOption = null, bool allowOpeningOnTopOfAnother = false, bool hideCurrentFirst = false, Action onPopupShown = null) { }

	public override void ShowTOSv3PopupMenu() { }

	public override void ShowTransformWildCardPopup(TemporaryCardCollectionEventModel eventModel, CardCollectionCardId cardId, bool discovered, bool wildCardIsSpecial) { }

	private UniTask ShowTriggeredOfferPopup(OfferPopupTriggerPlacement offerPopupTriggerPlacement, List<ValueTuple`2<OfferPopupTrigger, IActiveOfferGroup>> offerPopupTriggerGroups, int index, OfferPopupTrigger popupTrigger, IActiveOfferGroup offerGroup, string showMethod, bool wasActivatedViaFallback, bool shouldReplaceMenu, CancellationToken ct) { }

	private UniTask ShowTriggeredOfferPopupsAsync(OfferPopupTriggerPlacement offerPopupTriggerPlacement, List<ValueTuple`2<OfferPopupTrigger, IActiveOfferGroup>> offerPopupTriggerGroups, string showMethod, bool wasActivatedViaFallback, CancellationToken ct) { }

	public override void ShowWebShopPurchasePopupMenu(WebshopPurchase webshopPurchase) { }

	public override void ShowWebShopSecureCodePopupMenu() { }

	public override void ShowWebShopSignInPopupMenu(string mergeMansionUrl, string code) { }

	public override void ShowWebViewPopup(IWebViewTarget webTarget) { }

	public override void ShowWildItemInfoPopup(Action onPopupClosed = null) { }

	public void ShowWildItemRewardPopup(ItemDefinition item, Vector3 rewardTargetPosition) { }

	public void SortPopupsByName() { }

	private void StartInner() { }

	public override void StartTransition(string menuTag) { }

	private void StartTransitionWatchdogForTag(string menuTag, float timeoutSeconds) { }

	public override void Tick() { }

	[AsyncStateMachine(typeof(<TransitionWatchdogTask>d__599))]
	private UniTask TransitionWatchdogTask(string menuTag, float timeoutSeconds, CancellationToken ct) { }

	public override LeaderboardEventRankingPopup TryGetExistingLeaderboardEventRankingPopup(LeaderboardEventModel eventModel) { }

	public override TMenu TryGetMenu() { }

	public override bool TryHideCurrentMenuWithTag(string menuTag) { }

	private void TryReturnToMansionBeforeAction(Action onFinish) { }

	private bool TryShowAutoPopup(OfferPopupTriggerPlacement offerPopupTriggerPlacement, string showMethod) { }

	public override void TryShowAutoPopupAppLoading() { }

	public override void TryShowAutoPopupLobbyReturn() { }

	public override void TryShowAutoPopupMergeBoardEnter(MergeBoardId mergeBoardId) { }

	public override void TryShowAutoPopupPopupClose(OfferPopupTriggerPopupId id, IMenuSection closingPopup) { }

	public override void TryShowAutoPopupPopupOpen(OfferPopupTriggerPopupId id) { }

	public override void TryShowBoardEventAreaHotspotPopup(string eventId) { }

	private void TryShowCollectibleBoardEventAreaHotspotPopup(CollectibleBoardEventModel eventModel) { }

	public override bool TryShowTriggerActivatedOutOfEnergyOfferPopup(OfferPopupTriggerPlacement offerPopupTriggerPlacement, bool wasTriggeredFirst) { }

	public override void UnregisterPopupToCloseOnEventEnd(MetaActivableState eventModel, string menuTag) { }

	private void UpdateInner() { }

	[AsyncStateMachine(typeof(<WaitForClose>d__230))]
	private UniTask WaitForClose(IMenuSection section, CancellationToken ct) { }

}

