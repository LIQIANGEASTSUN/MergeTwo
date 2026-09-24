namespace UI.Board;

public class BoardViewTaskHandler : MonoBehaviour, ITaskTab
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass131_0
	{
		public bool enabledOverlay; //Field offset: 0x10
		public BoardViewTaskHandler <>4__this; //Field offset: 0x18
		public CancellationToken sessionCt; //Field offset: 0x20
		public ToDoProgressCollectibleBoardEventItem item; //Field offset: 0x28

		public <>c__DisplayClass131_0() { }

		internal void <AnimateCompletedTaskRewards>b__0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass132_0
	{
		public IHotspotDefinition hotspot; //Field offset: 0x10
		public BoardViewTaskHandler <>4__this; //Field offset: 0x18
		public ITaskCardView taskView; //Field offset: 0x20
		public int orderIndex; //Field offset: 0x28

		public <>c__DisplayClass132_0() { }

		internal bool <ProcessShowButtonTap>b__0(Location l) { }

		internal HotspotId <ProcessShowButtonTap>b__1(Location l) { }

		internal void <ProcessShowButtonTap>b__2() { }

		internal void <ProcessShowButtonTap>b__3() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass132_1
	{
		public bool useAreaUnlockFtue; //Field offset: 0x10
		public <>c__DisplayClass132_0 CS$<>8__locals1; //Field offset: 0x18

		public <>c__DisplayClass132_1() { }

		internal void <ProcessShowButtonTap>b__4() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass133_0
	{
		public BoardViewTaskHandler <>4__this; //Field offset: 0x10
		public HotspotId scrollToHotspot; //Field offset: 0x18
		public Action onBeginScroll; //Field offset: 0x20

		public <>c__DisplayClass133_0() { }

		internal void <ProcessShowButtonTap>b__0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass149_0
	{
		public BoardViewTaskHandler <>4__this; //Field offset: 0x10
		public Action onComplete; //Field offset: 0x18

		public <>c__DisplayClass149_0() { }

		internal void <ScrollToObject>b__0() { }

	}

	[CompilerGenerated]
	private struct <DisableOverlayIfNeededAsync>d__144 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public CancellationToken ct; //Field offset: 0x18
		public BoardViewTaskHandler <>4__this; //Field offset: 0x20
		private Awaiter <>u__1; //Field offset: 0x28

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <LoadTaskItemsAsync>d__128 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder<Boolean> <>t__builder; //Field offset: 0x8
		public BoardViewTaskHandler <>4__this; //Field offset: 0x20
		public CancellationToken ct; //Field offset: 0x28
		private GameObject <basePrefab>5__2; //Field offset: 0x30
		private Awaiter<IDisposableAssetHandle<GameObject>> <>u__1; //Field offset: 0x38
		private Enumerator<MergeTask> <>7__wrap2; //Field offset: 0x50
		private MergeTask <task>5__4; //Field offset: 0x68
		private bool <isNewCardRoot>5__5; //Field offset: 0x70
		private Awaiter<BoardMergeGoalTaskGroupCard> <>u__2; //Field offset: 0x78

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <PollSorting>d__137 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public BoardViewTaskHandler <>4__this; //Field offset: 0x18
		public CancellationToken ct; //Field offset: 0x20
		private bool <eventsOnBoardEnabled>5__2; //Field offset: 0x28
		private Awaiter <>u__1; //Field offset: 0x30

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	private enum CardInfoGroup : int
	{
		None = 0,
		Area = 1,
		Character = 2,
		MiniGame = 3,
	}

	[IsReadOnly]
	private struct TaskSortEntry
	{
		public readonly BoardMergeGoalTaskGroupCard Card; //Field offset: 0x0
		public readonly BoardMergeGoalTaskGroupTaskContainer Container; //Field offset: 0x8
		public readonly BoardMergeGoalTaskGroupTask Task; //Field offset: 0x10
		public readonly MergeTask MergeTask; //Field offset: 0x18
		public readonly int AreaRow; //Field offset: 0x20
		public readonly int TaskOrder; //Field offset: 0x24
		public readonly int TieBreak; //Field offset: 0x28
		public readonly bool IsStoryEvent; //Field offset: 0x2C
		public readonly bool IsRepeatable; //Field offset: 0x2D
		public readonly bool IsLockedArea; //Field offset: 0x2E
		public readonly bool IsLockedMergeTask; //Field offset: 0x2F
		public readonly bool IsMiniGame; //Field offset: 0x30
		public readonly string MiniGameThemeId; //Field offset: 0x38
		public readonly bool IsCharacter; //Field offset: 0x40
		public readonly bool CanBeCompleted; //Field offset: 0x41
		public readonly bool HasBonusTime; //Field offset: 0x42

		public TaskSortEntry(BoardMergeGoalTaskGroupCard card, BoardMergeGoalTaskGroupTask task, PlayerModel player, IReadOnlyDictionary<AreaId, Int32> areaPriorityOrder, IReadOnlyDictionary<MergeTask, Int32> taskIndexMap) { }

	}

	private const float OVERLAY_DISABLE_DELAY = 0.5; //Field offset: 0x0
	private const float SORTING_POLL_INTERVAL = 0.25; //Field offset: 0x0
	private const int DEFAULT_PANEL_POSITION_Y = 605; //Field offset: 0x0
	[Header("Info")]
	[SerializeField]
	private Transform taskParent; //Field offset: 0x20
	[SerializeField]
	private CanvasGroup taskCanvasGroup; //Field offset: 0x28
	[SerializeField]
	private CanvasGroup taskPanelContent; //Field offset: 0x30
	[SerializeField]
	private RectTransform _scrollerParentTransform; //Field offset: 0x38
	[Header("Items")]
	[SerializeField]
	private ScrollRect scrollRect; //Field offset: 0x40
	[SerializeField]
	private RectTransform mergeBoardPanelRect; //Field offset: 0x48
	[SerializeField]
	private RectTransform taskPanel; //Field offset: 0x50
	[SerializeField]
	private RectTransform highlightPanel; //Field offset: 0x58
	[SerializeField]
	private float _taskCardViewOffsetY; //Field offset: 0x60
	[Header("Board")]
	[SerializeField]
	private RectTransform boardTransform; //Field offset: 0x68
	[SerializeField]
	private Transform _infoPanelContainer; //Field offset: 0x70
	[SerializeField]
	private Transform _pocketParent; //Field offset: 0x78
	[Header("Task Group")]
	[SerializeField]
	private Image _fadeOverlay; //Field offset: 0x80
	[SerializeField]
	private BoardTaskCountIndicator _leftSideCountIndicator; //Field offset: 0x88
	[SerializeField]
	private BoardTaskCountIndicator _rightSideCountIndicator; //Field offset: 0x90
	[SerializeField]
	private GameObject _leftGradient; //Field offset: 0x98
	[SerializeField]
	private GameObject _rightGradient; //Field offset: 0xA0
	[SerializeField]
	private RectTransform _taskGroupCompletionPanel; //Field offset: 0xA8
	[SerializeField]
	private AnimationCurve _taskGroupCompletionPanelAppearEase; //Field offset: 0xB0
	[SerializeField]
	private float _scrollAnimationDuration; //Field offset: 0xB8
	[SerializeField]
	private AnimationCurve _scrollAnimationEase; //Field offset: 0xC0
	[Header("Display Events on Board")]
	[SerializeField]
	private BoardViewEventHandler _eventHandler; //Field offset: 0xC8
	[SerializeField]
	private TweenedButton _tradesButton; //Field offset: 0xD0
	[SerializeField]
	private RedDotIndicator _tradesButtonRedDot; //Field offset: 0xD8
	[SerializeField]
	private TweenedButton _tradesIndicator; //Field offset: 0xE0
	[SerializeField]
	private RectTransform _resourcesPosition; //Field offset: 0xE8
	private PlayerModel playerModel; //Field offset: 0xF0
	private IPlayerClientContext playerContext; //Field offset: 0xF8
	private MenuController menus; //Field offset: 0x100
	private INavigationController _navigationController; //Field offset: 0x108
	private HotspotController _hotspotController; //Field offset: 0x110
	private ICameraHotspotNavigator _cameraHotspotNavigator; //Field offset: 0x118
	private IBoardController board; //Field offset: 0x120
	private IScheduler scheduler; //Field offset: 0x128
	private AddressablesSession addressablesSession; //Field offset: 0x130
	private ITitleBarRewardWidgets titleBarRewardWidgets; //Field offset: 0x138
	private IAudioPlayer audio; //Field offset: 0x140
	public IRewardsAnimations rewardsAnimations; //Field offset: 0x148
	private IHotspotCompletableQuery _hotspotCompletableQuery; //Field offset: 0x150
	private LocationLoader _locationLoader; //Field offset: 0x158
	private List<MergeTask> _tasks; //Field offset: 0x160
	private CancellationTokenSource _disableCancellation; //Field offset: 0x168
	private CancellationTokenSource _destroyCancellation; //Field offset: 0x170
	private readonly List<BoardMergeGoalTaskGroupCard> _instantiatedItems; //Field offset: 0x178
	private readonly Dictionary<AreaId, GameObject> _areaGroupRoots; //Field offset: 0x180
	private readonly Dictionary<String, GameObject> _miniGameGroupRoots; //Field offset: 0x188
	private readonly Dictionary<MergeTask, BoardMergeGoalTaskGroupCard> _taskToCardMap; //Field offset: 0x190
	private readonly Dictionary<MergeTask, Int32> _taskIndexMap; //Field offset: 0x198
	private readonly List<TaskSortEntry> _sortEntries; //Field offset: 0x1A0
	private readonly List<BoardMergeGoalTaskGroupCard> _cardOrder; //Field offset: 0x1A8
	private readonly Dictionary<BoardMergeGoalTaskGroupTaskContainer, Int32> _taskIndexInContainer; //Field offset: 0x1B0
	private readonly Dictionary<BoardMergeGoalTaskGroupCard, Int32> _containerIndexInCard; //Field offset: 0x1B8
	private readonly HashSet<MergeTask> _completableTasksBefore; //Field offset: 0x1C0
	private readonly HashSet<BoardMergeGoalTaskGroupCard> _tasksToMove; //Field offset: 0x1C8
	private bool _runningRewardsAnimation; //Field offset: 0x1D0
	private Option<Rollback> _cachedRollback; //Field offset: 0x1D8
	private int _activeCurrencyClaims; //Field offset: 0x1E8
	private readonly List<IDisposableAssetHandle`1<GameObject>> _prefabHandles; //Field offset: 0x1F0
	private bool _pendingSort; //Field offset: 0x1F8
	private readonly Vector3[] _checkedObjectWorldCorners; //Field offset: 0x200
	private readonly Vector3[] _viewPortWorldCorners; //Field offset: 0x208
	[TupleElementNames(new IL2CPP_TYPE_STRING[] {"targetObject", "canvas", "raycaster"})]
	private Option<ValueTuple`3<GameObject, Canvas, GraphicRaycaster>> cardHighlight; //Field offset: 0x210
	private HashSet<MergeTask> _completableTasks; //Field offset: 0x230
	[CompilerGenerated]
	private bool <Visible>k__BackingField; //Field offset: 0x238
	private bool _tasksInitialized; //Field offset: 0x239
	private float previousScrollPosition; //Field offset: 0x23C
	private IReadOnlyDictionary<AreaId, Int32> _areaPriorityOrder; //Field offset: 0x240
	private Dictionary<HotspotId, Int32> _taskCardPositionAnalytics; //Field offset: 0x248
	[CompilerGenerated]
	private int <EventsUnlockLevel>k__BackingField; //Field offset: 0x250
	private int _tasksStartingIndex; //Field offset: 0x254
	private HashSet<Int32> _requiredTradeItems; //Field offset: 0x258
	private bool _tradesExists; //Field offset: 0x260

	public AreaIcons AreaIcons
	{
		 get { } //Length: 24
	}

	public bool AreTasksInitialized
	{
		 get { } //Length: 80
	}

	public BoardViewEventHandler EventHandler
	{
		 get { } //Length: 8
	}

	private IIconLibrary EventIcons
	{
		private get { } //Length: 24
	}

	public private int EventsUnlockLevel
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public static bool HasInstance
	{
		 get { } //Length: 116
	}

	public Transform InfoPanelContainer
	{
		 get { } //Length: 8
	}

	public static BoardViewTaskHandler Instance
	{
		 get { } //Length: 136
	}

	public ScrollRect ScrollRect
	{
		 get { } //Length: 8
	}

	public bool TasksInitialized
	{
		 get { } //Length: 8
	}

	public TweenedButton TradesButton
	{
		 get { } //Length: 8
	}

	public private bool Visible
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public BoardViewTaskHandler() { }

	private void AnimateCompletedTaskRewards(ToDoProgressCollectibleBoardEventItem item, CollectibleBoardEventMergeTask task, List<ValueTuple`2<Vector3, IPlayerReward>> visualRewards) { }

	private int CalculateMinimumLevel(int minimumLevel, IReadOnlyDictionary<T1, T2> collection) { }

	private void CheckTasksOutsideScrollViewport() { }

	private void CheckTradesOutsideScrollViewport() { }

	private void CleanUpAnalyticsForRemovedTasks() { }

	private static int CompareTaskEntries(TaskSortEntry x, TaskSortEntry y) { }

	private void CompleteCollectibleBoardEventTask(CollectibleBoardEventMergeTask task) { }

	[AsyncStateMachine(typeof(<DisableOverlayIfNeededAsync>d__144))]
	private UniTask DisableOverlayIfNeededAsync(CancellationToken ct) { }

	public void DisposeContent(DisposeContentReason clearDynamicContent) { }

	private bool EnableOverlayIfNeeded(List<ValueTuple`2<Vector3, IPlayerReward>> rewardAnimations) { }

	public void ForceInitHidden() { }

	public AreaIcons get_AreaIcons() { }

	public bool get_AreTasksInitialized() { }

	public BoardViewEventHandler get_EventHandler() { }

	private IIconLibrary get_EventIcons() { }

	[CompilerGenerated]
	public int get_EventsUnlockLevel() { }

	public static bool get_HasInstance() { }

	public Transform get_InfoPanelContainer() { }

	public static BoardViewTaskHandler get_Instance() { }

	public ScrollRect get_ScrollRect() { }

	public bool get_TasksInitialized() { }

	public TweenedButton get_TradesButton() { }

	[CompilerGenerated]
	public bool get_Visible() { }

	public Option<BoardMergeGoalTaskGroupCard> GetAreaUnlockTaskCard(HotspotId hotspotId) { }

	private static CardInfoGroup GetCardInfoGroup(BoardMergeGoalTaskGroupCard card) { }

	private int GetEventsUnlockLevel(IPlayer player) { }

	public Option<RectTransform> GetFirstTaskCardCompleteButtonPosition() { }

	public Vector3 GetTaskPanelPosition() { }

	public Option<ValueTuple`2<BoardMergeGoalTaskGroupCard, SpineInfoItemIndicator>> GetWildItemFtueCardAndItem() { }

	public void Hide() { }

	public GameObject HighlightFirstTask() { }

	public Option<GameObject> HighlightTaskCard(BoardMergeGoalTaskGroupCard taskCard) { }

	public void Init(PlayerModel model, IPlayerClientContext context, MenuController menuController, IBoardController boardController, IScheduler schedulerInt, IHotspotCompletableQuery hotspotCompletableQuery, INavigationController navigationController, ICameraHotspotNavigator cameraHotspotNavigator, GameConfigClientCache gameConfigClientCache, LocationLoader locationLoader, AddressablesSession addressablesSession, ITitleBarRewardWidgets titleBarRewardWidgets, BoardViewEventHandlerContext eventHandlerContext, IActionsExecutor actionsExecutor, HotspotController hotspotController) { }

	public override void InitTasks() { }

	private bool IsHotspotCompletionRunning() { }

	private bool IsRepeatableTaskNeeded(RepeatableTask repeatableTask) { }

	[AsyncStateMachine(typeof(<LoadTaskItemsAsync>d__128))]
	private UniTask<Boolean> LoadTaskItemsAsync(CancellationToken ct) { }

	public void OnBoardAct(MergeBoardId boardId, ICollection<MergeBoardAct> boardActs) { }

	public void OnBoardAct(MergeBoardId boardId, MergeBoardAct boardAct) { }

	private void OnCurrencyAdded(Currencies currency, long amountSoft, long amountHard, CurrencySource currencySource, int itemId, EventCurrencyId eventCurrencyId, AnalyticsContext context) { }

	private void OnDestroy() { }

	private void OnDisable() { }

	private void OnEnable() { }

	private void OnMenuVisibilityChange(bool isMenuOpen) { }

	private void OnShowHotspotFinished() { }

	public void ParseEventsUnlockLevel() { }

	[AsyncStateMachine(typeof(<PollSorting>d__137))]
	private UniTask PollSorting(CancellationToken ct) { }

	public void ProcessCompleteCollectibleBoardEventTaskTap(ToDoProgressCollectibleBoardEventItem item, CollectibleBoardEventMergeTask task, List<ValueTuple`2<Vector3, IPlayerReward>> visualRewards) { }

	public override void ProcessShowButtonTap(ITaskCardView taskView) { }

	private void ProcessShowButtonTap(HotspotId scrollToHotspot, Action onBeginScroll) { }

	private void RearrangeGameObjectForEventsOnBoard() { }

	private void RefreshContent() { }

	public void RefreshPanelPosition(bool alignToBoard) { }

	private void ReInitTasks() { }

	private void ReleasePrefabHandles() { }

	public void RemoveHighlight() { }

	public void ReplaceOrAddAnalyticsAfterTaskCompletion(HotspotId oldKey, HotspotId newKey) { }

	public void ScrollToObject(RectTransform rectTransform, Action onComplete = null, ScrollRectSide scrollRectSide = 0) { }

	[CompilerGenerated]
	private void set_EventsUnlockLevel(int value) { }

	[CompilerGenerated]
	private void set_Visible(bool value) { }

	public void SetTaskCanvasGroupAlpha(float alpha) { }

	public void Show() { }

	private void SortTaskCards(bool animate = true) { }

	private void TradesButtonOnPressed() { }

	private void TradesIndicatorButtonOnPressed() { }

	public void UpdateAllTaskCards() { }

	private void UpdateTaskContents() { }

	public void UpdateTasks() { }

	private void UpdateTradesButtonIndicator() { }

}

