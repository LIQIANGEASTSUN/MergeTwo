//Type is in global namespace

[DefaultMember("Item")]
public class UnityBoardController : IBoardController, ISharedBoardController, IMainStateBoardEvents, ITickSystem, IApplicationPauseSystem, IApplicationFocusSystem
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Predicate<MergeBoardAct> <>9__251_0; //Field offset: 0x8
		public static Func<MergeBoardAct, Boolean> <>9__345_0; //Field offset: 0x10
		public static Func<MergeBoardAct, IItemDefinition> <>9__348_0; //Field offset: 0x18
		public static Func<MergeBoardAct, Coordinate> <>9__349_0; //Field offset: 0x20
		public static Func<MergeBoardAct, IItemDefinition> <>9__350_0; //Field offset: 0x28
		public static Func<EventTaskId, Boolean> <>9__417_0; //Field offset: 0x30

		private static <>c() { }

		public <>c() { }

		internal bool <ActualPreprocessUnprocessedActs>b__345_0(MergeBoardAct act) { }

		internal bool <IsValidAndActiveBoardEventTaskItem>b__417_0(EventTaskId _) { }

		internal IItemDefinition <ProcessEnqueuedAutoSellItemFromAllInventories>b__350_0(MergeBoardAct act) { }

		internal Coordinate <ProcessEnqueuedAutoSellItemFromBoardActs>b__349_0(MergeBoardAct act) { }

		internal IItemDefinition <ProcessEnqueuedAutoSellItemsFromPocketActs>b__348_0(MergeBoardAct act) { }

		internal bool <UpdateInner>b__251_0(MergeBoardAct item) { }

	}

	[CompilerGenerated]
	private struct <>c__DisplayClass251_0
	{
		public MergeBoardId boardId; //Field offset: 0x0
		public UnityBoardController <>4__this; //Field offset: 0x8
		public IActionsExecutor actionExecutor; //Field offset: 0x10

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass295_0
	{
		public Action onComplete; //Field offset: 0x10
		public UnityBoardController <>4__this; //Field offset: 0x18
		public MetaDuration timeTakenToLoad; //Field offset: 0x20
		public Action onReadyToPlay; //Field offset: 0x28

		public <>c__DisplayClass295_0() { }

		internal void <ShowCanvas>g__OnTransitionComplete|0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass297_0
	{
		public MergeBoardId boardId; //Field offset: 0x10
		public UnityBoardController <>4__this; //Field offset: 0x18
		public LeaderboardEventModel leaderboardEventModel; //Field offset: 0x20

		public <>c__DisplayClass297_0() { }

		internal bool <MakeReadyToPlay>b__0(CollectibleBoardEventModel ev) { }

		internal bool <MakeReadyToPlay>b__1(LeaderboardEventModel ev) { }

		internal void <MakeReadyToPlay>b__2() { }

		internal bool <MakeReadyToPlay>b__3(ShortLeaderboardEventModel ev) { }

		internal void <MakeReadyToPlay>g__OnTransitionComplete|4() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass304_0
	{
		public Action onTransitionComplete; //Field offset: 0x10
		public UnityBoardController <>4__this; //Field offset: 0x18
		public bool ignoreScriptedEvents; //Field offset: 0x20

		public <>c__DisplayClass304_0() { }

		internal void <HideCanvas>g__OnTransitionComplete|0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass331_0
	{
		public UnityBoardController <>4__this; //Field offset: 0x10
		public Coordinate sellLocation; //Field offset: 0x18

		public <>c__DisplayClass331_0() { }

		internal void <SellAttempt>b__0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass332_0
	{
		public UnityBoardController <>4__this; //Field offset: 0x10
		public MergeBoardId boardId; //Field offset: 0x18
		public Coordinate coordinate; //Field offset: 0x20
		public IItemDefinition itemDefinition; //Field offset: 0x28

		public <>c__DisplayClass332_0() { }

		internal void <CollectItemAttempt>g__Action|0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass342_0
	{
		public int x; //Field offset: 0x10
		public int y; //Field offset: 0x14

		public <>c__DisplayClass342_0() { }

		internal bool <CheckIfAddedActIsMissing>b__0(MergeBoardAct act) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass343_0
	{
		public int x; //Field offset: 0x10
		public int y; //Field offset: 0x14
		public Func<MergeBoardAct, Boolean> <>9__0; //Field offset: 0x18

		public <>c__DisplayClass343_0() { }

		internal bool <CheckIfRemovedActIsMissing>b__0(MergeBoardAct act) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass345_0
	{
		public Dictionary<Coordinate, MetacoreTime> highestTransformTimes; //Field offset: 0x10

		public <>c__DisplayClass345_0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass345_1
	{
		public Coordinate coordinate; //Field offset: 0x10
		public <>c__DisplayClass345_0 CS$<>8__locals1; //Field offset: 0x18

		public <>c__DisplayClass345_1() { }

		internal bool <ActualPreprocessUnprocessedActs>g__RemoveCheck|1(MergeBoardAct mba) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass348_0
	{
		public UnityBoardController <>4__this; //Field offset: 0x10
		public Vector2 from; //Field offset: 0x18

		public <>c__DisplayClass348_0() { }

		internal Action <ProcessEnqueuedAutoSellItemsFromPocketActs>b__1(MergeBoardAct act) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass348_1
	{
		public PlayerReward reward; //Field offset: 0x10
		public <>c__DisplayClass348_0 CS$<>8__locals1; //Field offset: 0x18

		public <>c__DisplayClass348_1() { }

		internal void <ProcessEnqueuedAutoSellItemsFromPocketActs>b__2() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass349_0
	{
		public MergeBoardAct act; //Field offset: 0x10
		public BoardItemHandler boardItem; //Field offset: 0x60
		public UnityBoardController <>4__this; //Field offset: 0x68

		public <>c__DisplayClass349_0() { }

		internal void <ProcessEnqueuedAutoSellItemFromBoardActs>b__2() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass350_0
	{
		public UnityBoardController <>4__this; //Field offset: 0x10
		public Vector3 from; //Field offset: 0x18

		public <>c__DisplayClass350_0() { }

		internal Action <ProcessEnqueuedAutoSellItemFromAllInventories>b__1(MergeBoardAct act) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass350_1
	{
		public PlayerReward reward; //Field offset: 0x10
		public <>c__DisplayClass350_0 CS$<>8__locals1; //Field offset: 0x18

		public <>c__DisplayClass350_1() { }

		internal void <ProcessEnqueuedAutoSellItemFromAllInventories>b__2() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass355_0
	{
		public UnityBoardController <>4__this; //Field offset: 0x10
		public PlayerModel playerModel; //Field offset: 0x18
		public MergeBoardId targetBoardId; //Field offset: 0x20

		public <>c__DisplayClass355_0() { }

		internal void <ProcessUseBoardPortal>b__0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass361_0
	{
		public UnityBoardController <>4__this; //Field offset: 0x10
		public BoardItemHandler boardHandler; //Field offset: 0x18

		public <>c__DisplayClass361_0() { }

		internal void <ProcessManualDecayAutoDecaySoldOrCollectedAct>b__0() { }

		internal void <ProcessManualDecayAutoDecaySoldOrCollectedAct>b__1() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass362_0
	{
		public UnityBoardController <>4__this; //Field offset: 0x10
		public BoardItemHandler boardItem; //Field offset: 0x18

		public <>c__DisplayClass362_0() { }

		internal void <ProcessCollectionAct>b__0() { }

		internal void <ProcessCollectionAct>b__10() { }

		internal void <ProcessCollectionAct>b__11() { }

		internal void <ProcessCollectionAct>b__12() { }

		internal void <ProcessCollectionAct>b__2() { }

		internal void <ProcessCollectionAct>b__3() { }

		internal void <ProcessCollectionAct>b__4() { }

		internal void <ProcessCollectionAct>b__5() { }

		internal void <ProcessCollectionAct>b__6() { }

		internal void <ProcessCollectionAct>b__7() { }

		internal void <ProcessCollectionAct>b__8() { }

		internal void <ProcessCollectionAct>b__9() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass362_1
	{
		public ICollectEventCurrencyAction <eventCurrencyAction>5__2; //Field offset: 0x10
		public <>c__DisplayClass362_0 CS$<>8__locals2; //Field offset: 0x18

		public <>c__DisplayClass362_1() { }

		internal void <ProcessCollectionAct>b__1() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass376_0
	{
		public MergeBoardAct act; //Field offset: 0x10
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"coordinate", "actSource"})]
		public Func<ValueTuple`2<Coordinate, ItemActSource>, Boolean> <>9__0; //Field offset: 0x60

		public <>c__DisplayClass376_0() { }

		internal bool <ProcessAddedAct>b__0(ValueTuple<Coordinate, ItemActSource> itemAction) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass380_0
	{
		public UnityBoardController <>4__this; //Field offset: 0x10
		public BoardItemHandler itemToBeRemoved; //Field offset: 0x18

		public <>c__DisplayClass380_0() { }

		internal void <RemoveVisualItemAfterAnimation>b__0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass382_0
	{
		public Action onTransitionComplete; //Field offset: 0x10

		public <>c__DisplayClass382_0() { }

		internal void <Show>b__0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass383_0
	{
		public Action onTransitionComplete; //Field offset: 0x10

		public <>c__DisplayClass383_0() { }

		internal void <Hide>b__0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass399_0
	{
		public UnityBoardController <>4__this; //Field offset: 0x10
		public IItemDefinition newSelectionDefinition; //Field offset: 0x18
		public IMergeItem newSelection; //Field offset: 0x20
		public Coordinate position; //Field offset: 0x28

		public <>c__DisplayClass399_0() { }

		internal void <RefreshSelectedItemInfo>b__0() { }

		internal void <RefreshSelectedItemInfo>b__1() { }

		internal void <RefreshSelectedItemInfo>b__2() { }

		internal void <RefreshSelectedItemInfo>b__3() { }

		internal void <RefreshSelectedItemInfo>b__4() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass417_0
	{
		public MergeItem item; //Field offset: 0x10
		public Func<PlayerItemRequirement, Boolean> <>9__1; //Field offset: 0x18

		public <>c__DisplayClass417_0() { }

		internal bool <IsValidAndActiveBoardEventTaskItem>b__1(PlayerItemRequirement requirement) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass431_0
	{
		public MergeBoardAct act; //Field offset: 0x10
		public UnityBoardController <>4__this; //Field offset: 0x60

		public <>c__DisplayClass431_0() { }

		internal void <SpreadMergeBoardActs>b__1() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass462_0
	{
		public UnityBoardController <>4__this; //Field offset: 0x10
		public BoardItemHandler boardItem; //Field offset: 0x18

		public <>c__DisplayClass462_0() { }

		internal void <AnimateCollectibleBoardEventCollectActionReward>b__0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass490_0
	{
		public UnityBoardController <>4__this; //Field offset: 0x10
		public IBoardEventCard card; //Field offset: 0x18

		public <>c__DisplayClass490_0() { }

		internal void <AnimateAuxEnergyForEventsOnBoard>g__OnComplete|0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass509_0
	{
		public UnityBoardController <>4__this; //Field offset: 0x10
		public Vector3 from; //Field offset: 0x18
		public IItemDefinition itemDefinition; //Field offset: 0x28
		public Vector3 target; //Field offset: 0x30
		public FlightAnimationContextExtra contextExtra; //Field offset: 0x40

		public <>c__DisplayClass509_0() { }

		internal void <PlayScoreUp>g__Animate|0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass520_0
	{
		public int count; //Field offset: 0x10
		public Action onFinished; //Field offset: 0x18

		public <>c__DisplayClass520_0() { }

		internal void <PlayTimeSkipEffectFromCoordinate>g__OnFinished|0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass535_0
	{
		public UnityBoardController <>4__this; //Field offset: 0x10
		public DefaultSeasonPassCard card; //Field offset: 0x18
		public Option<Action> onCompletedOption; //Field offset: 0x20

		public <>c__DisplayClass535_0() { }

		internal void <AnimateProgressionEventProgressEventsOnBoard>g__OnComplete|0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass536_0
	{
		public UnityBoardController <>4__this; //Field offset: 0x10
		public SoloMilestoneEventCard card; //Field offset: 0x18

		public <>c__DisplayClass536_0() { }

		internal void <AnimateSoloMilestoneEventProgress>g__OnComplete|0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass551_0
	{
		public int activeAnimationCount; //Field offset: 0x10

		public <>c__DisplayClass551_0() { }

		internal void <ProcessExtraSpawnQueue_Default>b__0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass556_0
	{
		public UnityBoardController <>4__this; //Field offset: 0x10
		public Option<Coordinate> targetCoordinate; //Field offset: 0x18

		public <>c__DisplayClass556_0() { }

		internal void <AnimateExtraSpawnCurrency>b__0() { }

		internal void <AnimateExtraSpawnCurrency>g__SetDisplayStatus|2(bool ignoreUpdates) { }

		internal void <AnimateExtraSpawnCurrency>g__UpdateCard|1(IBoardEventCard card) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass556_1
	{
		public IBoardEventCard card; //Field offset: 0x10
		public <>c__DisplayClass556_0 CS$<>8__locals1; //Field offset: 0x18

		public <>c__DisplayClass556_1() { }

		internal void <AnimateExtraSpawnCurrency>b__3() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass557_0
	{
		public IBoardEventCard card; //Field offset: 0x10
		public UnityBoardController <>4__this; //Field offset: 0x18

		public <>c__DisplayClass557_0() { }

		internal void <AnimateExtraSpawnCoreSupportEventTokens>b__1() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass561_0
	{
		public Sprite onFireSprite; //Field offset: 0x10
		public UnityBoardController <>4__this; //Field offset: 0x18

		public <>c__DisplayClass561_0() { }

		internal void <TryShowOnFireItemInfoArea>b__0(IDisposableAssetHandle<Sprite> handle) { }

		internal void <TryShowOnFireItemInfoArea>b__1() { }

	}

	[CompilerGenerated]
	private struct <AnimateAuxEnergyForEventsOnBoard>d__490 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public UnityBoardController <>4__this; //Field offset: 0x18
		public EnergyType energyType; //Field offset: 0x20
		public Vector3 from; //Field offset: 0x24
		public IItemDefinition item; //Field offset: 0x30
		public int amount; //Field offset: 0x38
		public CancellationToken ct; //Field offset: 0x40
		private <>c__DisplayClass490_0 <>8__1; //Field offset: 0x48
		private Vector3 <targetPosition>5__2; //Field offset: 0x50
		private Awaiter <>u__1; //Field offset: 0x60

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <AnimateExtraSpawn>d__553 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public UnityBoardController <>4__this; //Field offset: 0x18
		public ExtraSpawnQueueItem item; //Field offset: 0x20
		public AnimateExtraSpawnStyle style; //Field offset: 0x50
		public CancellationToken ct; //Field offset: 0x58
		public Option<Action> onCompleteOption; //Field offset: 0x60
		private Awaiter <>u__1; //Field offset: 0x70

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <AnimateExtraSpawnCoreSupportEventTokens>d__557 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public int amountAfter; //Field offset: 0x18
		public int amountBefore; //Field offset: 0x1C
		public CoreSupportEventTokenId tokenId; //Field offset: 0x20
		public UnityBoardController <>4__this; //Field offset: 0x28
		public AnimateExtraSpawnStyle style; //Field offset: 0x30
		public IItemDefinition item; //Field offset: 0x38
		public Coordinate coordinate; //Field offset: 0x40
		public CancellationToken ct; //Field offset: 0x48
		public Vector3 from; //Field offset: 0x50
		private RewardCoreSupportEventTokens <reward>5__2; //Field offset: 0x60
		private CoreSupportEventModel <eventModel>5__3; //Field offset: 0x68
		private bool <showInfoPanel>5__4; //Field offset: 0x70
		private Awaiter <>u__1; //Field offset: 0x78

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <AnimateExtraSpawnCurrency>d__554 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public Currencies currency; //Field offset: 0x18
		public UnityBoardController <>4__this; //Field offset: 0x20
		public int amountAfter; //Field offset: 0x28
		public int amountBefore; //Field offset: 0x2C
		public Vector3 from; //Field offset: 0x30
		public AnimateExtraSpawnStyle style; //Field offset: 0x3C
		public IItemDefinition item; //Field offset: 0x40
		public Coordinate coordinate; //Field offset: 0x48
		public CancellationToken ct; //Field offset: 0x50
		private Awaiter <>u__1; //Field offset: 0x58

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <AnimateExtraSpawnCurrency>d__556 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public UnityBoardController <>4__this; //Field offset: 0x18
		public int amountAfter; //Field offset: 0x20
		public int amountBefore; //Field offset: 0x24
		public Currencies currency; //Field offset: 0x28
		public AnimateExtraSpawnStyle style; //Field offset: 0x2C
		public IItemDefinition item; //Field offset: 0x30
		public Coordinate coordinate; //Field offset: 0x38
		public CancellationToken ct; //Field offset: 0x40
		private <>c__DisplayClass556_0 <>8__1; //Field offset: 0x48
		public Vector3 from; //Field offset: 0x50
		private PlayerReward <reward>5__2; //Field offset: 0x60
		private Nullable<Vector3> <target>5__3; //Field offset: 0x68
		private Awaiter <>u__1; //Field offset: 0x78

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <DelayedTapHintAsync>d__453 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public UnityBoardController <>4__this; //Field offset: 0x18
		public CancellationToken ct; //Field offset: 0x20
		private Awaiter <>u__1; //Field offset: 0x28

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <LoadAndInstantiateBoardBackground>d__288 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder<Option`1<GameObject>> <>t__builder; //Field offset: 0x8
		public MergeBoardId mergeBoardId; //Field offset: 0x28
		public UnityBoardController <>4__this; //Field offset: 0x30
		public IBoardEventModel boardEventModel; //Field offset: 0x38
		public CancellationToken ct; //Field offset: 0x40
		private Awaiter<Option<GameObject>> <>u__1; //Field offset: 0x48

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <LoadAndInstantiateBoardBackgroundInternal>d__289 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder<Option`1<GameObject>> <>t__builder; //Field offset: 0x8
		public IMergeBoardEventPrefabs boardEventPrefabs; //Field offset: 0x28
		public CancellationToken ct; //Field offset: 0x30
		public UnityBoardController <>4__this; //Field offset: 0x38
		public MergeBoardId mergeBoardId; //Field offset: 0x40
		private Awaiter<IDisposableAssetHandle<GameObject>> <>u__1; //Field offset: 0x48

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ProcessExtraSpawnQueue_Default>d__551 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public UnityBoardController <>4__this; //Field offset: 0x18
		public CancellationToken ct; //Field offset: 0x20
		private <>c__DisplayClass551_0 <>8__1; //Field offset: 0x28
		private Option<ExtraSpawnQueueItem> <previousItemOption>5__2; //Field offset: 0x30
		private Option<Action> <onAnimationComplete>5__3; //Field offset: 0x68
		private ExtraSpawnQueueItem <item>5__4; //Field offset: 0x78
		private Awaiter <>u__1; //Field offset: 0xA8

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ProcessExtraSpawnQueue_EventsOnBoard>d__552 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public UnityBoardController <>4__this; //Field offset: 0x18
		public CancellationToken ct; //Field offset: 0x20
		private Awaiter <>u__1; //Field offset: 0x28

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ProcessExtraSpawnQueue>d__550 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public UnityBoardController <>4__this; //Field offset: 0x18
		public CancellationToken ct; //Field offset: 0x20
		private Awaiter <>u__1; //Field offset: 0x28

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	private enum AnimateExtraSpawnStyle : int
	{
		Default = 0,
		EventsOnBoard = 1,
	}

	private class DelayedCollectibleBoardEventRewardAnimationData
	{
		public int State; //Field offset: 0x10
		public ICollectibleBoardEventCollectAction CollectAction; //Field offset: 0x18
		public CollectibleBoardEventModel EventModel; //Field offset: 0x20
		public BoardItemHandler BoardItem; //Field offset: 0x28
		public IItemDefinition Item; //Field offset: 0x30
		public Vector3 From; //Field offset: 0x38
		public Coordinate FromCoordinate; //Field offset: 0x44

		public DelayedCollectibleBoardEventRewardAnimationData(ICollectibleBoardEventCollectAction collectAction, CollectibleBoardEventModel eventModel, BoardItemHandler boardItem, IItemDefinition item, Vector3 from, Coordinate fromCoordinate) { }

	}

	private struct DelayedTapHintData
	{
		public int ItemId; //Field offset: 0x0
		public Coordinate Coordinate; //Field offset: 0x4
		public ItemVisibility Visibility; //Field offset: 0xC
		public DirectorGroupId GroupId; //Field offset: 0x10
		public bool AllowBubbleItems; //Field offset: 0x18
		public float StartDelay; //Field offset: 0x1C

		public DelayedTapHintData(int itemId, Coordinate coordinate, ItemVisibility visibility, DirectorGroupId groupId, bool allowBubbleItems, float startDelay) { }

	}

	private struct ExtraSpawnQueueItem
	{
		public readonly Coordinate Coordinate; //Field offset: 0x0
		public readonly IItemDefinition Item; //Field offset: 0x8
		public readonly Option<Currencies> CurrencyOption; //Field offset: 0x10
		public readonly Option<CoreSupportEventTokenId> TokenIdOption; //Field offset: 0x18
		public readonly int AmountBefore; //Field offset: 0x28
		public readonly int AmountAfter; //Field offset: 0x2C

		public ExtraSpawnQueueItem(Coordinate coordinate, IItemDefinition item, Option<Currencies> currencyOption, Option<CoreSupportEventTokenId> tokenIdOption, int amountBefore, int amountAfter) { }

		public bool SpawnsSameUnit(ExtraSpawnQueueItem other) { }

	}

	private const string hapticConfigIdGenericError = "GenericErrorOnMergeboard1"; //Field offset: 0x0
	private const string ErrorInventoryFullLocId = "Error_InventoryFull"; //Field offset: 0x0
	private const string ErrorMoveToInventoryNotAllowedLocId = "Error_MoveToInventoryNotAllowed"; //Field offset: 0x0
	private const float ItemAnimationToCoordinateDuration = 0.3; //Field offset: 0x0
	private const Ease ItemAnimationToCoordinateEasing = 4; //Field offset: 0x0
	private const float ItemMoveDuration = 0.75; //Field offset: 0x0
	private const RewardsAnimationsFlags EXTRA_SPAWN_REWARDS_ANIMATION_FLAGS = 68; //Field offset: 0x0
	private const int EXTRA_SPAWN_SCORE_UP_DURATION_MILLISECONDS = 700; //Field offset: 0x0
	private const int EXTRA_SPAWN_DIFFERENT_UNIT_DELAY_MILLISECONDS = 1250; //Field offset: 0x0
	private const int EXTRA_SPAWN_INFO_PANEL_DELAY_MILLISECONDS = 250; //Field offset: 0x0
	private const int EXTRA_SPAWN_EVENTS_ON_BOARD_DELAY = 1500; //Field offset: 0x0
	private static readonly Random MergeHintRandom; //Field offset: 0x0
	public static Action OnMergeBoardBecameVisible; //Field offset: 0x8
	public static Action OnMapBecameVisible; //Field offset: 0x10
	private static readonly MetaDuration leaderboardEventRankingPollingInterval; //Field offset: 0x18
	private MenuStatus menuStatus; //Field offset: 0x10
	private IBoardEventModel currentBoardEventModel; //Field offset: 0x18
	private MergeBoard mergeBoard; //Field offset: 0x20
	private MergeBoardId _previousMergeBoardId; //Field offset: 0x28
	private bool boardNeedsVisualRebuild; //Field offset: 0x30
	private IEnumerable<IBoardInventory> defaultInventories; //Field offset: 0x38
	private IEnumerable<IBoardInventory> producerInventories; //Field offset: 0x40
	private IEnumerable<IBoardInventory> rentableInventories; //Field offset: 0x48
	private HashSet<Int32> wantedDailyTaskItems; //Field offset: 0x50
	private readonly ICollection<MergeBoardAct> enqueuedAutoSellItemsFromBoardActs; //Field offset: 0x58
	private readonly ICollection<MergeBoardAct> enqueuedAutoSellItemsFromInventoryActs; //Field offset: 0x60
	private readonly ICollection<MergeBoardAct> enqueuedAutoSellItemsFromPocketActs; //Field offset: 0x68
	private Func<MergeBoard, Boolean> shouldEventEndCheck; //Field offset: 0x70
	private Canvas boardCanvas; //Field offset: 0x78
	private BoardItemHandler[2] slots; //Field offset: 0x80
	private Vector2[2] uiPositions; //Field offset: 0x88
	private Vector2[2] uiDragPositions; //Field offset: 0x90
	private readonly List<MergeBoardAct> unprocessedActs; //Field offset: 0x98
	private MetaTime lastBoardUpdateTime; //Field offset: 0xA0
	private bool doBoardItemsDrawOrderUpdate; //Field offset: 0xA8
	private Coordinate processClickForCoordinate; //Field offset: 0xAC
	private List<ProcessClickActionType> processClickActionTypes; //Field offset: 0xB8
	private Coordinate processSelectForCoordinate; //Field offset: 0xC0
	private int selectedItem; //Field offset: 0xC8
	private Coordinate selectedCoordinate; //Field offset: 0xCC
	private Coordinate processSoldCoordinate; //Field offset: 0xD4
	private Coordinate processSpeedUpCoordinate; //Field offset: 0xDC
	private bool hasToProcessPocketItem; //Field offset: 0xE4
	private Coordinate processPocketEmptyCoordinate; //Field offset: 0xE8
	private Vector2 pocketButtonPosition; //Field offset: 0xF0
	private bool processDragCoordinates; //Field offset: 0xF8
	private Coordinate mergeOrMoveFrom; //Field offset: 0xFC
	private Coordinate mergeOrMoveTo; //Field offset: 0x104
	private Coordinate mergeOrMoveToNear; //Field offset: 0x10C
	private bool nearInventoryButton; //Field offset: 0x114
	private bool dragIsOngoing; //Field offset: 0x115
	private bool updateEventTimeLeft; //Field offset: 0x116
	private readonly int updateEventTimeLeftEveryNthFrame; //Field offset: 0x118
	private int updateEventTimeLeftCounter; //Field offset: 0x11C
	private bool readyForUpdates; //Field offset: 0x120
	private WallClockTime lastMergeHintRelatedEventTimestamp; //Field offset: 0x128
	private List<BoardItemHandler> currentTagSinkHints; //Field offset: 0x130
	private bool showingSinkTagHint; //Field offset: 0x138
	private Coordinate selectedSinkTagCoordinates; //Field offset: 0x13C
	private BoardItemHandler currentTagSinkableHint; //Field offset: 0x148
	private bool showingSinkableTagHint; //Field offset: 0x150
	private Coordinate selectedSinkableTagCoordinates; //Field offset: 0x154
	private BoardItemHandler currentOrderHintItem; //Field offset: 0x160
	private bool showingOrderHint; //Field offset: 0x168
	private Coordinate selectedOrderCoordinates; //Field offset: 0x16C
	private bool showingMergeHint; //Field offset: 0x174
	private BoardItemHandler mergeHintItem1; //Field offset: 0x178
	private BoardItemHandler mergeHintItem2; //Field offset: 0x180
	private bool showingSinkHint; //Field offset: 0x188
	private List<BoardItemHandler> sinkHintItems; //Field offset: 0x190
	private readonly SearchOptions mergeHintSearch; //Field offset: 0x198
	private bool canBeMergedShowing; //Field offset: 0x1A0
	private bool canBeSunkShowing; //Field offset: 0x1A1
	private bool canBeConsumedShowing; //Field offset: 0x1A2
	private bool canTakePhotoShowing; //Field offset: 0x1A3
	private bool nearInventoryEffectShowing; //Field offset: 0x1A4
	private HashSet<Int32> itemsWithDiscoveryEffectShowing; //Field offset: 0x1A8
	private BoardItemHandler tapHintItem; //Field offset: 0x1B0
	private bool isLegacyEvent; //Field offset: 0x1B8
	private bool isLiveOpsEventBoard; //Field offset: 0x1B9
	private readonly Vector2 hideLocation; //Field offset: 0x1BC
	[TupleElementNames(new IL2CPP_TYPE_STRING[] {"boardItemHandler", "mergeItem"})]
	private Nullable<ValueTuple`2<BoardItemHandler, MergeItem>> draggedItem; //Field offset: 0x1C8
	private IMenuController menuController; //Field offset: 0x1E0
	private Director director; //Field offset: 0x1E8
	private IHotspotProgressRefresher hotspotProgressRefresher; //Field offset: 0x1F0
	private IHotspotPopupActions hotspotPopupActions; //Field offset: 0x1F8
	private IMergeGoalItemQuery mergeGoalItemQuery; //Field offset: 0x200
	private MapVisibilityController mapVisibilityController; //Field offset: 0x208
	private CollectibleBoardEventManager collectibleBoardEventManager; //Field offset: 0x210
	private LeaderboardEventManager leaderboardEventManager; //Field offset: 0x218
	private INavigationController Navigation; //Field offset: 0x220
	private DialogueRunner dialogueController; //Field offset: 0x228
	private TitleBarController titleBarController; //Field offset: 0x230
	private TutorialHandController tutorialHandController; //Field offset: 0x238
	private TooltipManager tooltipManager; //Field offset: 0x240
	private CollectibleBoardEventManager _collectibleBoardEventManager; //Field offset: 0x248
	private LeaderboardEventManager _leaderboardEventManager; //Field offset: 0x250
	private readonly Dictionary<String, ValueTuple`2<GameObject, IDisposableAssetHandle`1<GameObject>>> _dynamicBackgrounds; //Field offset: 0x258
	[TupleElementNames(new IL2CPP_TYPE_STRING[] {"coordinate", "actSource"})]
	private List<ValueTuple`2<Coordinate, ItemActSource>> itemActions; //Field offset: 0x260
	[CompilerGenerated]
	private Action<MenuStatus> OnTransition; //Field offset: 0x268
	private IRewardsAnimations RewardsAnimations; //Field offset: 0x270
	private readonly IAudioPlayer Audio; //Field offset: 0x278
	private readonly IPoolsManager PoolsManager; //Field offset: 0x280
	private HapticsController HapticsController; //Field offset: 0x288
	private IActionsExecutor actionsExecutor; //Field offset: 0x290
	private readonly IScheduler scheduler; //Field offset: 0x298
	private readonly ISafeRollback schedulerRollback; //Field offset: 0x2A0
	private readonly PlayerClientCache _playerClientCache; //Field offset: 0x2A8
	private readonly SceneContextMansion sceneContextMansion; //Field offset: 0x2B0
	private readonly PlayerModel player; //Field offset: 0x2B8
	private readonly PlayerClientContext playerContext; //Field offset: 0x2C0
	private readonly IAnalyticsCollector analytics; //Field offset: 0x2C8
	private bool waitingForMergeConfirmationResult; //Field offset: 0x2D0
	private bool hasMergeConfirmationResult; //Field offset: 0x2D1
	private MergeResult confirmableMergeResult; //Field offset: 0x2D4
	private HashSet<Int32> bannedSearchItems; //Field offset: 0x2D8
	private bool IsEnergyFillVisualUpdatePaused; //Field offset: 0x2E0
	private MysteryMachineBoard mysteryMachineBoard; //Field offset: 0x2E8
	private MessagingController messagingController; //Field offset: 0x2F0
	private GameObject activeBackground; //Field offset: 0x2F8
	private bool hasActiveCooldownRemover; //Field offset: 0x300
	private bool hasActiveOnFireEffect; //Field offset: 0x301
	private bool isActivatingOnFireEffect; //Field offset: 0x302
	[CompilerGenerated]
	private Action<MergeBoardAct> OnMergeActProcessed; //Field offset: 0x308
	[CompilerGenerated]
	private Action<MergeBoardAct> OnManualSpawnActProcessed; //Field offset: 0x310
	private Nullable<MetaTime> lastLeaderboardEventBoardButtonRefreshTime; //Field offset: 0x318
	private BoardStatusEffectSystem boardStatusEffectSystem; //Field offset: 0x328
	private readonly Dictionary<BoardStepResult, MetaTime> _lastBoardStepResultTimes; //Field offset: 0x330
	[CompilerGenerated]
	private Action<BoardStepResult> OnBoardStepResult; //Field offset: 0x338
	[CompilerGenerated]
	private Action<MergeResult> OnMergeResult; //Field offset: 0x340
	private Option<BoardCustomInit> _boardCustomInitOption; //Field offset: 0x348
	private BoardViewTaskHandler _boardViewTaskHandler; //Field offset: 0x358
	private readonly IBoardCamera _boardCamera; //Field offset: 0x360
	private readonly IPurchaseManager _purchaseManager; //Field offset: 0x368
	[CompilerGenerated]
	private readonly LocationLoader <LocationLoader>k__BackingField; //Field offset: 0x370
	[CompilerGenerated]
	private readonly AddressablesSession <AddressablesSession>k__BackingField; //Field offset: 0x378
	private Option<CancellationTokenSource> _ctsOption; //Field offset: 0x380
	[CompilerGenerated]
	private Option<AutoMergeController> <AutoMergeController>k__BackingField; //Field offset: 0x390
	private Nullable<Vector3> originalBottomRightMarkerLocalPos; //Field offset: 0x3A0
	private Nullable<Vector3> originalTopleftMarkerLocalPos; //Field offset: 0x3B0
	private readonly Dictionary<IItemDefinition, Boolean> _unlockedActivationSpawnItemsCache; //Field offset: 0x3C0
	private readonly Dictionary<IItemDefinition, Boolean> _unlockedSpawnItemsCache; //Field offset: 0x3C8
	private DelayedTapHintData delayedTapHint; //Field offset: 0x3D0
	private bool delayedTapHintSet; //Field offset: 0x3F0
	private readonly Queue<DelayedCollectibleBoardEventRewardAnimationData> delayedCollectibleBoardEventRewardAnimations; //Field offset: 0x3F8
	private int delayedCollectibleBoardEventProgressChange; //Field offset: 0x400
	private int delayedLeaderboardEventScoreChange; //Field offset: 0x404
	private int delayedShortLeaderboardEventScoreChange; //Field offset: 0x408
	private int _scoreUpCount; //Field offset: 0x40C
	private Option<CancellationTokenSource> _processExtraSpawnQueueCtsOption; //Field offset: 0x410
	private readonly Queue<ExtraSpawnQueueItem> _extraSpawnQueue; //Field offset: 0x420

	public override event Action<BoardStepResult> OnBoardStepResult
	{
		[CompilerGenerated]
		 add { } //Length: 176
		[CompilerGenerated]
		 remove { } //Length: 176
	}

	public event Action<MergeBoardAct> OnManualSpawnActProcessed
	{
		[CompilerGenerated]
		 add { } //Length: 176
		[CompilerGenerated]
		 remove { } //Length: 176
	}

	public event Action<MergeBoardAct> OnMergeActProcessed
	{
		[CompilerGenerated]
		 add { } //Length: 176
		[CompilerGenerated]
		 remove { } //Length: 176
	}

	public override event Action<MergeResult> OnMergeResult
	{
		[CompilerGenerated]
		 add { } //Length: 176
		[CompilerGenerated]
		 remove { } //Length: 176
	}

	public override event Action<MenuStatus> OnTransition
	{
		[CompilerGenerated]
		 add { } //Length: 176
		[CompilerGenerated]
		 remove { } //Length: 176
	}

	public AddressablesSession AddressablesSession
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	private IAnalyticsCollector Analytics
	{
		private get { } //Length: 8
	}

	public private Option<AutoMergeController> AutoMergeController
	{
		[CompilerGenerated]
		 get { } //Length: 16
		[CompilerGenerated]
		private set { } //Length: 28
	}

	public override Option<BoardCustomInit> BoardCustomInitOption
	{
		 get { } //Length: 16
	}

	private Transform boardParent
	{
		private get { } //Length: 32
	}

	public Vector2 botRightDraggingLimit
	{
		 get { } //Length: 28
	}

	public Vector2 botRightLimit
	{
		 get { } //Length: 28
	}

	public RectTransform bottomRightMarker
	{
		 get { } //Length: 24
	}

	public GameObject canBeConsumedIndicator
	{
		 get { } //Length: 24
	}

	public GameObject canBeMergedIndicator
	{
		 get { } //Length: 24
	}

	public GameObject canBeSinkedIndicator
	{
		 get { } //Length: 24
	}

	private CancellationToken CancellationToken
	{
		private get { } //Length: 248
	}

	public GameObject canTakePhotoIndicator
	{
		 get { } //Length: 24
	}

	public override GameObject CanvasGameObject
	{
		 get { } //Length: 24
	}

	public GameObject canvasGO
	{
		 get { } //Length: 24
	}

	public override CanvasScaleFactorStack CanvasScaleFactorStack
	{
		 get { } //Length: 24
	}

	public GameObject cooldownRemoverIndicator
	{
		 get { } //Length: 24
	}

	public TimerControl cooldownRemoverTimer
	{
		 get { } //Length: 24
	}

	public override MergeBoard CurrentBoard
	{
		 get { } //Length: 8
	}

	public override Option<BoardInfo> CurrentBoardInfoOption
	{
		 get { } //Length: 460
	}

	public GameObject defaultBackground
	{
		 get { } //Length: 24
	}

	public static bool HasInstance
	{
		 get { } //Length: 116
	}

	public static UnityBoardController Instance
	{
		 get { } //Length: 136
	}

	private BoardItemHandler Item
	{
		private get { } //Length: 76
		private set { } //Length: 80
	}

	public BoardItemHandler Item
	{
		 get { } //Length: 160
		 set { } //Length: 168
	}

	private CompactItemInfoArea itemInfoArea
	{
		private get { } //Length: 24
	}

	public override RectTransform ItemParent
	{
		 get { } //Length: 24
	}

	public override IReadOnlyDictionary<BoardStepResult, MetaTime> LastBoardStepResultTimes
	{
		 get { } //Length: 8
	}

	public LocationLoader LocationLoader
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	private MenuStatus MenuStatus
	{
		private get { } //Length: 8
		private set { } //Length: 48
	}

	public bool MergeHintEnabled
	{
		 get { } //Length: 64
	}

	public MysteryMachineView MysteryMachineView
	{
		 get { } //Length: 128
	}

	private PlayerModel Player
	{
		private get { } //Length: 8
	}

	private ProgressionEventBoardTopBar ProgressionEventBoardTopBar
	{
		private get { } //Length: 24
	}

	public IScheduler Scheduler
	{
		 get { } //Length: 8
	}

	public ISafeRollback SchedulerRollback
	{
		 get { } //Length: 8
	}

	public override Coordinate SelectedCoordinate
	{
		 get { } //Length: 4
	}

	public override MergeItem SelectedItem
	{
		 get { } //Length: 32
	}

	public RectTransform selectionIndicator
	{
		 get { } //Length: 24
	}

	private SharedGlobals SharedGlobals
	{
		private get { } //Length: 192
	}

	public Vector2 topLeftDraggingLimit
	{
		 get { } //Length: 28
	}

	public Vector2 topLeftLimit
	{
		 get { } //Length: 28
	}

	public RectTransform topLeftMarker
	{
		 get { } //Length: 24
	}

	public override MenuStatus VisualStatus
	{
		 get { } //Length: 8
	}

	private static UnityBoardController() { }

	public UnityBoardController(IActionsExecutor actionsExecutor, IScheduler scheduler, ISafeRollback schedulerRollback, PlayerClientCache playerClientCache, SceneContextMansion sceneContextMansion, PlayerModel player, PlayerClientContext playerContext, IAnalyticsCollector analytics, IAudioPlayer audio, IPoolsManager poolsManager, IBoardCamera boardCamera, IPurchaseManager purchaseManager, LocationLoader locationLoader, AddressablesSession addressablesSession) { }

	[CompilerGenerated]
	private void <AnimateExtraSpawnCoreSupportEventTokens>g__UpdateCard|557_0(IBoardEventCard card) { }

	[CompilerGenerated]
	private void <AnimateItemToCoordinate>b__259_0() { }

	[CompilerGenerated]
	private void <GetItemEffectTransition>b__392_0() { }

	[CompilerGenerated]
	private void <Init3>b__237_0() { }

	[CompilerGenerated]
	private Action <ProcessEnqueuedAutoSellItemFromBoardActs>b__349_1(MergeBoardAct act) { }

	[CompilerGenerated]
	internal static bool <ShowPossibleItemsCanBeMergedOrSunkOrConsumableIndicator>g__ShouldSinkableBeShown|320_0(IPlayer player, MergeItem fromItem, MergeItem toItem) { }

	[CompilerGenerated]
	private void <ShowTimeSkipFlow>b__518_0() { }

	[CompilerGenerated]
	private Action <SpreadMergeBoardActs>b__431_0(MergeBoardAct act) { }

	[CompilerGenerated]
	private void <StopPlay>b__307_0() { }

	[CompilerGenerated]
	private bool <UpdateInner>g__DryMoveItemFromBoardToInventoryIsASuccess|251_1(out TryMasterFunctionsMoveItemFromBoardToInventory action, ref <>c__DisplayClass251_0 unnamed_param_1) { }

	[CompilerGenerated]
	private void <UpdateOnFire>b__560_0() { }

	[CompilerGenerated]
	private void <UpdateOnFire>b__560_2() { }

	[CompilerGenerated]
	private void <UpdateOnFire>g__ShowActivationFlow|560_1() { }

	[CompilerGenerated]
	private void <UsePendingCooldownRemover>b__528_0() { }

	private void ActionAttempt(Coordinate actionLocation) { }

	private static void ActualPreprocessUnprocessedActs(List<MergeBoardAct> unprocessedActs) { }

	[CompilerGenerated]
	public override void add_OnBoardStepResult(Action<BoardStepResult> value) { }

	[CompilerGenerated]
	public void add_OnManualSpawnActProcessed(Action<MergeBoardAct> value) { }

	[CompilerGenerated]
	public void add_OnMergeActProcessed(Action<MergeBoardAct> value) { }

	[CompilerGenerated]
	public override void add_OnMergeResult(Action<MergeResult> value) { }

	[CompilerGenerated]
	public override void add_OnTransition(Action<MenuStatus> value) { }

	private void AddAct(MergeBoardAct act) { }

	private void AddBoardStatusEffects() { }

	private void AddDelayedCollectibleBoardEventRewardAnimation(ICollectibleBoardEventCollectAction collectAction, CollectibleBoardEventModel eventModel, BoardItemHandler boardItem, IItemDefinition item, Vector3 from, Coordinate fromCoordinate) { }

	private static ValueTuple<Vector3, Vector3> AdjustForBoardDimensionsRatio(Vector3 topLeft, Vector3 bottomRight, Vector2 ratio) { }

	private void AnimateAuxEnergyAttachment(BoardItemHandler boardItem, EnergyType energyType, Vector3 from, Vector3 offsetVector, int amount) { }

	private void AnimateAuxEnergyAttachmentsIfActive(BoardItemHandler fromItem, BoardItemHandler toItem, Coordinate animateFromCoordinate) { }

	[AsyncStateMachine(typeof(<AnimateAuxEnergyForEventsOnBoard>d__490))]
	private UniTask AnimateAuxEnergyForEventsOnBoard(IItemDefinition item, EnergyType energyType, Vector3 from, int amount, CancellationToken ct) { }

	private void AnimateBubbleAuxEnergyBonus(Coordinate sourceCoordinate, BubbleAuxEnergyBonus bonus) { }

	private void AnimateBubbleProgressionEventProgressBonus(Coordinate sourceCoordinate, BubbleProgressionEventProgressBonus bonus) { }

	private void AnimateCollectibleBoardEventCollectActionReward(ICollectibleBoardEventCollectAction collectAction, CollectibleBoardEventModel eventModel, IItemDefinition item, Vector3 from, Coordinate fromCoordinate, BoardItemHandler boardItem = null) { }

	[AsyncStateMachine(typeof(<AnimateExtraSpawn>d__553))]
	private UniTask AnimateExtraSpawn(AnimateExtraSpawnStyle style, ExtraSpawnQueueItem item, Option<Action> onCompleteOption, CancellationToken ct) { }

	[AsyncStateMachine(typeof(<AnimateExtraSpawnCoreSupportEventTokens>d__557))]
	private UniTask AnimateExtraSpawnCoreSupportEventTokens(AnimateExtraSpawnStyle style, CoreSupportEventTokenId tokenId, int amountBefore, int amountAfter, Vector3 from, IItemDefinition item, Coordinate coordinate, CancellationToken ct) { }

	[AsyncStateMachine(typeof(<AnimateExtraSpawnCurrency>d__554))]
	private UniTask AnimateExtraSpawnCurrency(AnimateExtraSpawnStyle style, Currencies currency, int amountBefore, int amountAfter, Vector3 from, Coordinate coordinate, IItemDefinition item, CancellationToken ct) { }

	[AsyncStateMachine(typeof(<AnimateExtraSpawnCurrency>d__556))]
	private UniTask AnimateExtraSpawnCurrency(AnimateExtraSpawnStyle style, Currencies currency, int amountBefore, int amountAfter, Vector3 from, IItemDefinition item, Coordinate coordinate, CancellationToken ct) { }

	private void AnimateItemToCoordinate(Coordinate itemCoordinate, Coordinate animateToCoordinate, float animationDuration = 0.3, Ease animationEasing = 1) { }

	private void AnimateLeaderboardScoreCollection(IItemDefinition itemDefinition, Coordinate coordinate, int scoreChange) { }

	private void AnimateProgressionEventPoints(int amount, Vector3 from) { }

	public void AnimateProgressionEventProgress(SoloMilestoneEventModel progressionEvent, List<IPlayerReward> rewards, Vector3 from, Vector3 to, FlightAnimationContext extraAnimation) { }

	public override void AnimateProgressionEventProgress(ProgressionEventModel progressionEvent, IProgressCollectAction collectAction, IItemDefinition item, Vector3 from, Option<Action> onCompletedOption) { }

	private void AnimateProgressionEventProgressEventsOnBoard(ProgressionEventModel progressionEvent, IItemDefinition item, Vector3 from, Option<Action> onCompletedOption) { }

	private void AnimateShortLeaderboardScoreCollection(IItemDefinition itemDefinition, Coordinate coordinate, int scoreChange) { }

	private void AnimateSoloMilestoneEventProgress(SoloMilestoneEventModel model, IEnumerable<IPlayerReward> rewards, Vector3 from) { }

	public override bool BoardActive(MergeBoardId boardId) { }

	public override bool BoardIsVisible(MergeBoardId mergeBoardId = null) { }

	public Coordinate CalculateCoordinateFromScreenPoint(Vector2 screenPoint) { }

	private void CalculateDragLimits(SceneContextMansion context) { }

	public override void CalculateDragLimits() { }

	private void CalculateDragPositionsForUI(int xSlots, int ySlots, Vector2 topLeft, Vector2 bottomRight) { }

	private ValueTuple<Vector3, Vector3> CalculateLevelUpFromAndTargetPosition(Vector3 from) { }

	public Coordinate CalculateNearCoordinateFromScreenPoint(Vector2 screenPoint, Coordinate compareToThis, Vector2[2] itemSlotPositions) { }

	private void CalculatePositionsForUI(int xSlots, int ySlots, Vector2 topLeft, Vector2 bottomRight) { }

	private ValueTuple<Vector3, Vector3> CalculateScoreUpFromAndTargetPosition(Coordinate coordinate) { }

	private ValueTuple<Vector3, Vector3> CalculateScoreUpFromAndTargetPosition(Vector3 origin) { }

	private Vector2 CalculateSlotSize() { }

	public void ChangeEnergyFillVisualUpdateState(bool value) { }

	private bool CheckConsumptionPossibility(Coordinate from, Coordinate to) { }

	private bool CheckHighlightPossibility(Coordinate from, Coordinate to) { }

	private static bool CheckIfAddedActIsMissing(List<MergeBoardAct> unprocessedActs, int x, int y) { }

	private static bool CheckIfRemovedActIsMissing(List<MergeBoardAct> unprocessedActs, int x, int y) { }

	private void CheckInitializeCollectibleBoardMinigame(IBoardEventModel boardModel) { }

	private void ClearDelayedCollectibleBoardEventRewardAnimations() { }

	public override void ClearExtraSpawns() { }

	private void ClearSelectionText() { }

	private void ClearSlots() { }

	private void ClearUndoSellState() { }

	private void ClearUnlockedItemsCaches() { }

	private void CollectItem(MergeBoardId boardId, Coordinate coordinate, IItemDefinition itemDefinition) { }

	private void CollectItemAttempt(MergeBoardId boardId, Coordinate coordinate) { }

	private void CreateActForAddedAndRemovedItems(MetaTime currentTime) { }

	private RewardItem[] CreateCollectionAnimateRewardsForItem(IItemDefinition item, int amount = 1) { }

	public static RewardItem[] CreateCollectionAnimateRewardsForItemStatic(IItemDefinition item) { }

	public static RewardItem[] CreateCollectionAnimateRewardsForItemStatic(Currencies item, int amount) { }

	private BoardItemHandler CreateItemForUI(int x, int y, IItemDefinition item, Vector2 localPos, ItemVisibility itemVisibility, ItemSource itemSource, BoardItemFlags flags, BubbleState bubbleState) { }

	private BoardItemHandler CreateItemForUI(Coordinate coordinate, IItemDefinition itemDefinition, ItemVisibility visibility, ItemSource itemSource, BoardItemFlags flags, BubbleState bubbleState) { }

	[AsyncStateMachine(typeof(<DelayedTapHintAsync>d__453))]
	private UniTask DelayedTapHintAsync(CancellationToken ct) { }

	private void DeselectItem() { }

	public override void DestroyBackground(MergeBoardId mergeBoardId) { }

	private bool DoesSinkInAnyItem(Coordinate c) { }

	private void DraggingStarts(Coordinate deselectLocation) { }

	private void EnableMergeConfirmation(MergeResult mergeResult, Coordinate fromPosition, Coordinate toPosition) { }

	private bool ForcesGoalsReevaluation(MergeItem mergeItem) { }

	[CompilerGenerated]
	public AddressablesSession get_AddressablesSession() { }

	private IAnalyticsCollector get_Analytics() { }

	[CompilerGenerated]
	public Option<AutoMergeController> get_AutoMergeController() { }

	public override Option<BoardCustomInit> get_BoardCustomInitOption() { }

	private Transform get_boardParent() { }

	public Vector2 get_botRightDraggingLimit() { }

	public Vector2 get_botRightLimit() { }

	public RectTransform get_bottomRightMarker() { }

	public GameObject get_canBeConsumedIndicator() { }

	public GameObject get_canBeMergedIndicator() { }

	public GameObject get_canBeSinkedIndicator() { }

	private CancellationToken get_CancellationToken() { }

	public GameObject get_canTakePhotoIndicator() { }

	public override GameObject get_CanvasGameObject() { }

	public GameObject get_canvasGO() { }

	public override CanvasScaleFactorStack get_CanvasScaleFactorStack() { }

	public GameObject get_cooldownRemoverIndicator() { }

	public TimerControl get_cooldownRemoverTimer() { }

	public override MergeBoard get_CurrentBoard() { }

	public override Option<BoardInfo> get_CurrentBoardInfoOption() { }

	public GameObject get_defaultBackground() { }

	public static bool get_HasInstance() { }

	public static UnityBoardController get_Instance() { }

	private BoardItemHandler get_Item(int x, int y) { }

	public BoardItemHandler get_Item(Coordinate coord) { }

	private CompactItemInfoArea get_itemInfoArea() { }

	public override RectTransform get_ItemParent() { }

	public override IReadOnlyDictionary<BoardStepResult, MetaTime> get_LastBoardStepResultTimes() { }

	[CompilerGenerated]
	public LocationLoader get_LocationLoader() { }

	private MenuStatus get_MenuStatus() { }

	public bool get_MergeHintEnabled() { }

	public MysteryMachineView get_MysteryMachineView() { }

	private PlayerModel get_Player() { }

	private ProgressionEventBoardTopBar get_ProgressionEventBoardTopBar() { }

	public IScheduler get_Scheduler() { }

	public ISafeRollback get_SchedulerRollback() { }

	public override Coordinate get_SelectedCoordinate() { }

	public override MergeItem get_SelectedItem() { }

	public RectTransform get_selectionIndicator() { }

	private SharedGlobals get_SharedGlobals() { }

	public Vector2 get_topLeftDraggingLimit() { }

	public Vector2 get_topLeftLimit() { }

	public RectTransform get_topLeftMarker() { }

	public override MenuStatus get_VisualStatus() { }

	public Vector3 GetAnimateFromPosition(Coordinate coordinate) { }

	private static AuxEnergyItemAttachment GetAuxEnergyAttachmentIfExists(MergeItem item) { }

	private ValueTuple<Int32, Int32> GetBoardDimensions() { }

	private static BoardItemFlags GetBoardItemFlags(IMergeItem item, IMergeMansionGameConfig config) { }

	public override Option<BoardItemHandler> GetBoardItemHandlerAtCoordinate(Coordinate coordinate) { }

	private Option<CoreSupportEventTokenId> GetCoreSupportEventTokenIdForPortalItem(MergeItem portalItem) { }

	public override IBoardEventModel GetCurrentBoardEventModel() { }

	public BoardItemHandler GetCurrentBoardItemHandler() { }

	public MergeBoard GetCurrentMergeBoard() { }

	private MergeBoardId GetCurrentMergeBoardIdentifier() { }

	private Nullable<TapHintAnimationType> GetDesiredTapHintAnimationType(MergeItem currentItem, bool canItemBeActivated, bool isItemSupportsActivation, bool hasActivationItems, bool showOnFire) { }

	private long GetEnergyDisplayAmount(EnergyType type) { }

	public bool GetEnergyFillVisualUpdateState() { }

	private ValueTuple<Option`1<EnergyType>, Option`1<CoreSupportEventTokenId>> GetEnergyTypeForEnergyDisplay(MergeItem item) { }

	private Action GetItemEffectTransition() { }

	private void GetItemsForSinkHintAnimation(MergeItem draggedItem, ref List<BoardItemHandler>& outList) { }

	private List<BoardItemHandler> GetItemsToSink(ISinkState sinkState) { }

	private Coordinate GetMidCoordinate() { }

	private BoardItemHandler GetOrderItem(int itemId) { }

	private Nullable<Vector3> GetRewardCoreSupportEventTokensOverrideTarget(CoreSupportEventTokenId tokenId) { }

	private Option<Vector3> GetRewardCoreSupportEventTokensOverrideTarget(CoreSupportEventModel eventModel) { }

	private Nullable<Vector3> GetRewardCurrencyOverrideTarget(Currencies currency, out Option<Coordinate>& targetCoordinate) { }

	private Coordinate GetSelectedItemCoordinate() { }

	public override int GetSelectedItemType() { }

	private BoardItemHandler GetTagSink(string tag) { }

	public override Vector2 GetUISlotPosition(Coordinate coordinate) { }

	public override Vector2[2] GetUISlotPositions() { }

	private void GlobalStopPlayOfCurrentEvent() { }

	private void HandleActivationItemInfoAreaForceRefresh(IMergeItem item) { }

	private void HandleCelebrationCollect(IItemDefinition itemDefinition, bool skipBigCelebration = false) { }

	private void HandleSpawnEffect(MergeItem mergeItem, BoardItemHandler boardItem, Coordinate actCoordinate) { }

	private bool HasSpaceInInventoryForItem(MergeItem item) { }

	private bool HasUnlockedActivationSpawnItemsCached(IPlayer player, IMergeItem item, IItemDefinition itemDefinition) { }

	private bool HasUnlockedSpawnItemsCached(IPlayer player, IBoard board, IMergeItem item, IItemDefinition itemDefinition) { }

	public override void Hide(bool instantHide, Action onTransitionComplete = null, bool ignoreScriptedEvents = false) { }

	private void HideArtifactCanBeMergedEffects() { }

	private void HideArtifactProgressBarPreviewEffects() { }

	private void HideBoardEventItemEffects() { }

	private void HideCanvas(bool instantHide, Action onTransitionComplete = null, bool ignoreScriptedEvents = false) { }

	public static void HideChargeCountTooltip(BoardItemHandler boardItemHandler) { }

	private void HideDailyTaskItemEffects() { }

	private void HideGarageCleanupEventItemEffects() { }

	private void HideMergeGoalItemEffects() { }

	private void HideSeasonalBoardEventItemEffects() { }

	private void HideSelectionIndicator() { }

	public static void HideSinkItemTooltip(BoardItemHandler boardItemHandler) { }

	public void HideSinkItemTooltipExceptSelectedOne(Coordinate c) { }

	private void HideSinkItemTooltips() { }

	private void HideSinkTagItemEffects() { }

	public void Init2(IScheduler scheduler, MenuController menuController, RewardAnimationController rewardAnimationController, TooltipManager tooltipManager, HapticsController hapticsController, BoardViewTaskHandler boardViewTaskHandler, TitleBarController titleBarController) { }

	public void Init3(ISafeRollback rollback, NavigationController navigationController, MenuController menuController, DialogueRunner dialogueController, Director director, MapVisibilityController mapVisibilityController, TutorialHandController tutorialHandController, BoardStatusEffectSystem boardStatusEffectSystem, IHotspotProgressRefresher hotspotProgressRefresher, IHotspotPopupActions hotspotPopupActions, IMergeGoalItemQuery mergeGoalItemQuery, CollectibleBoardEventManager collectibleBoardEventManager, LeaderboardEventManager leaderboardEventManager) { }

	private bool IsActiveMysteryMachineEvent(MysteryMachineEventId eventId) { }

	private bool IsAuxEnergyBoard() { }

	public bool IsConsumableBySink(int itemId) { }

	private bool IsConsumableBySink(int itemId, MergeItem sinkMergeItem) { }

	private bool IsCurrentHintItemsCanBeMerged() { }

	public override bool IsDraggingItem() { }

	private bool IsEventsOnBoardActive() { }

	public bool IsInsideCoordinateSafeArea(Vector2 screenPoint, Coordinate currentCoordinate) { }

	public override bool IsInTransition() { }

	public bool IsItemUsingDragSafeArea(Coordinate coordinate) { }

	public bool IsMergeGridVisible() { }

	private bool IsSpawnedFromOutsideOfBoard(MergeBoardAct act) { }

	private static bool IsTagSinkItem(MergeItem item, IPlayer player) { }

	public bool IsValidAndActiveBoardEventTaskItem(MergeItem item, bool allowBubbles = false, bool isSeasonalBoardEvent = false) { }

	public bool IsValidAndActiveDailyTaskItem(MergeItem item, bool allowBubbles = false) { }

	public bool IsValidAndActiveGarageCleanupEventTaskItem(MergeItem item, bool allowBubbles = false) { }

	private bool IsValidAndActiveMergeGoalItem(MergeItem item, bool allowBubbles = false) { }

	[AsyncStateMachine(typeof(<LoadAndInstantiateBoardBackground>d__288))]
	public override UniTask<Option`1<GameObject>> LoadAndInstantiateBoardBackground(IBoardEventModel boardEventModel, MergeBoardId mergeBoardId, CancellationToken ct) { }

	[AsyncStateMachine(typeof(<LoadAndInstantiateBoardBackgroundInternal>d__289))]
	private UniTask<Option`1<GameObject>> LoadAndInstantiateBoardBackgroundInternal(MergeBoardId mergeBoardId, IMergeBoardEventPrefabs boardEventPrefabs, CancellationToken ct) { }

	private void MakeReadyToPlay(MetaDuration loadDuration) { }

	private void MergeOrMoveAttempt(Coordinate from, Coordinate to, Coordinate near, bool isNearInventoryButton) { }

	private override void Metacore.MergeMansion.SystemGroups.IApplicationFocusSystem.OnApplicationFocus(bool hasFocus) { }

	private override void Metacore.MergeMansion.SystemGroups.IApplicationPauseSystem.OnApplicationPause(bool pauseStatus) { }

	private override void Metacore.MergeMansion.SystemGroups.ITickSystem.Tick() { }

	public override void OnAutoMergeDurationChanged() { }

	public override void OnAutoMergeStateChanged() { }

	public override void OnBoardAct(MergeBoardId boardId, ICollection<MergeBoardAct> boardActs) { }

	public override void OnBoardAct(MergeBoardId boardId, MergeBoardAct boardAct) { }

	public override void OnBoardTransition() { }

	public override void OnBubbleBonusGranted(Coordinate sourceCoordinate, IBubbleBonus bonus) { }

	private void OnCobwebCleared(IItemDefinition itemDefinition, Coordinate coordinate) { }

	public override void OnDailyTaskStatusChanged() { }

	private void OnEventRemoved(CollectibleBoardEventInfo removed) { }

	public override void OnExtraSpawn(IExtraSpawnTrigger trigger, MergeBoardId boardId, Coordinate coordinate, IItemDefinition item, Option<List`1<ValueTuple`2<Currencies, Int64>>> spawnCurrenciesOption, Option<List`1<ValueTuple`2<CoreSupportEventTokenId, Int64>>> spawnTokensOption) { }

	private void OnItemDiscovered(int discoveredItem) { }

	public override void OnLeaderboardEventScoreChanged(int scoreChange) { }

	private void OnMergeConfirmationAccepted() { }

	private void OnMergeConfirmationCancelled() { }

	public override void OnMergeItemRewardsClaimed(Coordinate coordinate, IEnumerable<IPlayerReward> rewards) { }

	public override void OnMysteryMachineHeatLevelUp(MysteryMachineEventId eventId) { }

	public override void OnMysteryMachineLevelUp(MysteryMachineEventId eventId) { }

	public void OnOverlayMenuChange(bool isVisible) { }

	public override void OnPlayerNameChanged() { }

	public override void OnSetPlayerModeActive(PlayerModeId playerModeId, bool active) { }

	public override void OnSetPlayerModeActiveForBoard(PlayerModeId playerModeId, MergeBoardId boardId, bool active) { }

	public override void OnShortLeaderboardEventScoreChanged(int scoreChange) { }

	private void OnUndoSellItemCleared() { }

	public override void OnVisualEffectRequest(IBoardVisualEffect boardVisualEffect) { }

	private void PlayCollectibleBoardEventProgressUp(CollectibleBoardEventId eventId, IItemDefinition itemDefinition, Coordinate coordinate, int progress, float delay) { }

	private void PlayFishRarityTooltip(IItemDefinition itemDefinition, Coordinate coordinate, float delay) { }

	private void PlayLeaderboardFeaturesScoreContributionIfNecessary(Coordinate coordinate, float delay = 0) { }

	private void PlayLeaderboardScoreUp(IItemDefinition itemDefinition, Coordinate coordinate, int scoreContribution, float delay) { }

	private void PlayRewardAnimationsAndRemoveVisualItems(MergeBoardAct act, BoardItemHandler boardItem) { }

	private void PlayScoreUp(IItemDefinition itemDefinition, Coordinate coordinate, FlightAnimationContextExtra contextExtra, float delay) { }

	private void PlayScoreUp(IItemDefinition itemDefinition, Vector3 from, Vector3 target, FlightAnimationContextExtra contextExtra, float delay) { }

	private void PlaySfxMergeSpawnManual(MergeBoardAct act, MergeItem sourceItem, IItemDefinition chainLastItem) { }

	private void PlayShortLeaderboardEventScoreUp(IItemDefinition itemDefinition, Coordinate coordinate, int scoreContribution, float delay) { }

	private void PlayTimeSkipEffectFromCoordinate(Coordinate coordinate, Action onFinished = null) { }

	private void PreprocessUnprocessedActs() { }

	private bool ProcessActs(WallClockTime currentWallTime) { }

	private bool ProcessAddedAct(MergeBoardAct act) { }

	private bool ProcessAutoSpawnedOrManualSpawnedAct(MergeBoardAct act, WallClockTime currentWallTime) { }

	private void ProcessBecameVisibleAct(MergeBoardAct act) { }

	private void ProcessBubbleDismiss(Coordinate position) { }

	private void ProcessBubblePurchase(Coordinate position, ICollection<MergeBoardAct> actsCollection) { }

	private bool ProcessBubbleRemovedAct(MergeBoardAct act) { }

	private void ProcessCollectionAct(MergeBoardAct act, Coordinate coordinate) { }

	private void ProcessCollectionOnSpawnAct(MergeBoardAct act) { }

	private void ProcessConsumedAct(MergeBoardAct act) { }

	private void ProcessConsumedChargeAct(MergeBoardAct act) { }

	private void ProcessDelayedCollectibleBoardEventProgressChange() { }

	private void ProcessDelayedCollectibleBoardEventRewardAnimation() { }

	private void ProcessDelayedLeaderboardEventScoreChange() { }

	private void ProcessDelayedShortLeaderboardEventScoreChange() { }

	private void ProcessDelayedTapHint() { }

	private void ProcessEnqueuedAutoSellItemFromAllInventories(ICollection<MergeBoardAct> sellItemActs) { }

	private void ProcessEnqueuedAutoSellItemFromBoardActs(ICollection<MergeBoardAct> sellItemActs) { }

	private void ProcessEnqueuedAutoSellItemsFromPocketActs(ICollection<MergeBoardAct> sellItemActs) { }

	[AsyncStateMachine(typeof(<ProcessExtraSpawnQueue>d__550))]
	private UniTask ProcessExtraSpawnQueue(CancellationToken ct) { }

	[AsyncStateMachine(typeof(<ProcessExtraSpawnQueue_Default>d__551))]
	private UniTask ProcessExtraSpawnQueue_Default(CancellationToken ct) { }

	[AsyncStateMachine(typeof(<ProcessExtraSpawnQueue_EventsOnBoard>d__552))]
	private UniTask ProcessExtraSpawnQueue_EventsOnBoard(CancellationToken ct) { }

	private void ProcessLeaderboardEventRankingPolling(PlayerModel playerModel) { }

	private void ProcessLevelUpItemAct(MergeBoardAct act) { }

	private void ProcessManualDecayAutoDecaySoldOrCollectedAct(MergeBoardAct act, WallClockTime currentWallTime) { }

	private void ProcessMergeAct(MergeBoardAct act) { }

	private void ProcessRemovedAct(MergeBoardAct act, WallClockTime currentWallTime) { }

	private void ProcessSinkInAct(MergeBoardAct act) { }

	private void ProcessSinkInReverseAct(MergeBoardAct act) { }

	private void ProcessSpeedUpAct(MergeBoardAct act) { }

	private void ProcessTransformAct(MergeBoardAct act, WallClockTime currentWallTime) { }

	private void ProcessUnlockItemForCoordinate(int x, int y) { }

	private void ProcessUseBoardPortal(PlayerModel playerModel, MergeBoardId targetBoardId) { }

	private void ProcessUseMinigamePortal(IPlayer player, IItemDefinition portalItem) { }

	public override void ProcessUsePortal(PlayerModel playerModel, IItemDefinition portalItem) { }

	public override void ReconstructBoard() { }

	private void RefreshArtifactCanBeMergedEffect(MergeItem selectedItem, Coordinate selectedCoordinate) { }

	private void RefreshArtifactInfo(MergeItem itemFrom, Coordinate coordinateFrom, MergeItem itemTo, Coordinate coordinateTo) { }

	private void RefreshAuxEnergyAttachment(MergeItem item, BoardItemHandler boardItemHandler) { }

	private void RefreshBoardSlots(out bool refreshed) { }

	private void RefreshBoardUIPositions() { }

	public override void RefreshCollectibleBoardEventInfoPanel() { }

	private void RefreshCooldownRemoverIndicator(bool animateTimer = false) { }

	private void RefreshDecayWarning() { }

	private void RefreshEnergyDisplay(MergeItem item, BoardItemHandler boardItem) { }

	private void RefreshItemEffects(Coordinate coordinate) { }

	private void RefreshLeaderboardEventBoardButton(LeaderboardEventModel eventModel) { }

	private void RefreshLeaderboardEventBoardButton() { }

	private void RefreshLeaderboardUI() { }

	private void RefreshLimitedItemCountDisplay(BoardItemHandler boardItem) { }

	public void RefreshMysteryMachineView() { }

	public void RefreshSelectedItemInfo(IMergeItem newSelection, Coordinate position) { }

	private void RefreshShopButton(bool recheckShopRedDotIndicator) { }

	public void RefreshUnlockableUI() { }

	private void RefreshWantedDailyTaskItems(IPlayer player) { }

	[CompilerGenerated]
	public override void remove_OnBoardStepResult(Action<BoardStepResult> value) { }

	[CompilerGenerated]
	public void remove_OnManualSpawnActProcessed(Action<MergeBoardAct> value) { }

	[CompilerGenerated]
	public void remove_OnMergeActProcessed(Action<MergeBoardAct> value) { }

	[CompilerGenerated]
	public override void remove_OnMergeResult(Action<MergeResult> value) { }

	[CompilerGenerated]
	public override void remove_OnTransition(Action<MenuStatus> value) { }

	private void RemoveVisualItemAfterAnimation(Coordinate fromCoordinate, Coordinate toCoordinate) { }

	private void ResetDragAction() { }

	private void ResetStatusBars(bool artifactStatusBarEnabled = false) { }

	private void RestartProcessExtraSpawnQueue() { }

	private void ReturnBoardItemHandlerToPool(BoardItemHandler existingItem) { }

	private void SelectionAttempt(Coordinate selectLocation) { }

	public override void SelectItemAt(Coordinate c, bool showSinkItemTooltip = false, bool fromClick = false) { }

	public override void SelectMergeBoard(PlayerModel playerModel, MergeBoard mb, bool legacyEventBoard, bool liveOpsEventBoard, Func<MergeBoard, Boolean> eventEndCheck, bool eventTimeUpdate, bool forceVisualRebuild = false) { }

	private void SellAttempt(Coordinate sellLocation) { }

	private void SellSelectedItem() { }

	private void SendBubblePurchaseEvent(IItemDefinition itemDefinition, MetacoreTime timestamp, BubbleStateData analyticsBubbleData) { }

	[CompilerGenerated]
	private void set_AutoMergeController(Option<AutoMergeController> value) { }

	private void set_Item(int x, int y, BoardItemHandler value) { }

	public void set_Item(Coordinate coord, BoardItemHandler value) { }

	private void set_MenuStatus(MenuStatus value) { }

	public void SetBannedSearchItems(HashSet<Int32> bannedItems) { }

	private void SetDelayedTapHint(int itemId, Coordinate coordinate, ItemVisibility visibility, DirectorGroupId groupId, bool allowBubbleItems, float startDelay) { }

	private void SetMergeBoard(MergeBoard board) { }

	public void SetMessagingController(MessagingController messagingController) { }

	public void SetSelectionText(IMergeItem newSelection, Coordinate position, MergeItem previewItemFrom = null, MergeItem previewItemTo = null) { }

	private void SetSinkItemTooltipsActiveForSinkConsumable(int sinkConsumable) { }

	private bool ShouldCollectibleBoardEventInfoRemainActive() { }

	private bool ShouldConfirmCollectItem(IItemDefinition itemDefinition) { }

	private bool ShouldFishingRodInfoRemainActive(MergeItem selectedItem, bool selectedCoordinateChanged) { }

	private bool ShouldItemLevelUpMergeChainBeActive(MergeItem item, BoardItemHandler boardItem) { }

	private bool ShouldLeaderboardEventInfoRemainActive() { }

	private bool ShouldShortLeaderboardEventInfoRemainActive() { }

	private static bool ShouldUseDefaultBackground(MergeBoardId mergeBoardId) { }

	public override void Show(MetaDuration loadDuration, Action onTransitionComplete = null, Action onReadyToPlay = null, BoardTransitionFlags transitionFlags = 0) { }

	public override void ShowAlert(string text, string hapticConfigId = "") { }

	private void ShowCanvas(MetaDuration timeTakenToLoad, Action onComplete = null, Action onReadyToPlay = null, BoardTransitionFlags transitionFlags = 0) { }

	private void ShowChargeCountTooltip(IMergeItem item, BoardItemHandler boardItemHandler) { }

	public override void ShowCollectibleBoardEventInfoPanel() { }

	private void ShowMergeGoalItemEffects() { }

	private void ShowOrDisableAnimations() { }

	private void ShowPossibleItemCanBeMovedToInventoryHighlight(bool shouldShow, Coordinate originOfDraggedItem) { }

	private void ShowPossibleItemsCanBeMergedOrSunkOrConsumableIndicator(Coordinate start, Coordinate current, Coordinate potentialNearCoordinate) { }

	private void ShowSelectionIndicator(Coordinate selectionPoint) { }

	private void ShowSinkItemTooltip(IPlayer player, MergeItem item, BoardItemHandler boardItemHandler, Nullable<Int32> sinkableItemId = null) { }

	private void ShowTapHintAnimationAtItemOnCoordinate(Coordinate coordinate, ItemVisibility visibility) { }

	public void ShowTimeSkipFlow(MetaDuration skipDuration) { }

	private void SpeedUpAttempt(Coordinate speedUpLocation) { }

	private void SpeedUpSelectedItem() { }

	private void SpreadMergeBoardActs(SpreadMergeBoardActs visualEffect) { }

	private void StartDragFishRarityTooltipsIfFish(MergeItem mergeItem, BoardItemHandler boardItemHandler) { }

	private void StartRevealIfHidden(int x, int y) { }

	private void StartRevealIfHidden(Coordinate coord) { }

	private static void StopArtifactCanBeMergedItemAnimationIfNeeded(BoardItemHandler boardItemHandler) { }

	private static void StopArtifactProgressBarPreviewItemAnimationIfNeeded(BoardItemHandler boardItemHandler) { }

	private static void StopBoardEventTaskItemAnimationIfNeeded(BoardItemHandler boardItemHandler) { }

	private static void StopDailyTaskItemAnimationIfNeeded(BoardItemHandler boardItemHandler) { }

	private void StopDragFishRarityTooltips() { }

	private static void StopGarageCleanupEventTaskItemAnimationIfNeeded(BoardItemHandler boardItemHandler) { }

	private void StopMergeAndSinkHintAnimationsOnItem(BoardItemHandler boardItem, WallClockTime currentTime) { }

	private static void StopMergeGoalItemAnimationIfNeeded(BoardItemHandler boardItemHandler) { }

	private void StopMergeHintAnimation(WallClockTime currentTime) { }

	public override void StopPlay(bool transitionToMansionView = false, bool ignoreScriptedEvents = false) { }

	private void StopPlayOfEventMergeBoard() { }

	private void StopPossibleCanBeConsumedIndicator() { }

	private void StopPossibleCanBeMergedIndicator() { }

	private void StopPossibleCanBeSunkIndicator() { }

	private void StopPossibleCanTakePhotoIndicator() { }

	private static void StopSeasonalBoardEventTaskItemAnimationIfNeeded(BoardItemHandler boardItemHandler) { }

	private void StopSinkHintAnimation() { }

	private void StopTapHintAnimation() { }

	public override void ToggleBackground(MergeBoard board) { }

	private void TransitionToMergeBoard(PlayerModel playerModel, MergeBoardId targetBoardId) { }

	private void TriggerSelectedItemAction() { }

	private bool TryDryThenExecuteAddDigEventMuseumCollection(DigEventId eventId) { }

	private bool TryDryThenExecuteStartDigEventMinigame(string minigameId) { }

	private Nullable<Vector3> TryGetBubbleAuxEnergyBonusRewardDestinationTarget(BubbleAuxEnergyBonus bonus) { }

	private void TryShowOnFireItemInfoArea() { }

	public override ValueTuple<Boolean, Coordinate> TryToMoveItemFromPocketToBoard(Vector2 buttonPos) { }

	private void UndoSell() { }

	public override void UpdateAllBubbles() { }

	private void UpdateAllSlots() { }

	private void UpdateArtifactPreview(Coordinate from, Coordinate to) { }

	public void UpdateBoardItemEffects() { }

	private void UpdateInner() { }

	private void UpdateItemLevelUpMergeChainActive(MergeItem item, BoardItemHandler boardItem) { }

	private void UpdateOnFire(bool activateEffect) { }

	private void UsePendingCooldownRemover() { }

	private void UsePendingRewards() { }

	private void UsePendingTimeSkips() { }

}

