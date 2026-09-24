//Type is in global namespace

public class ItemTaskManager
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static TweenCallback <>9__58_0; //Field offset: 0x8
		public static Func<BaseItem, Boolean> <>9__59_0; //Field offset: 0x10

		private static <>c() { }

		public <>c() { }

		internal void <OrderDoneTicketsAndStarsAnimation>b__58_0() { }

		internal bool <RemoveItemsFromBoard>b__59_0(BaseItem item) { }

	}

	[CompilerGenerated]
	private struct <>c__DisplayClass53_0
	{
		public ItemTaskManager <>4__this; //Field offset: 0x0
		public List<ActiveItemTaskData> newTasks; //Field offset: 0x8

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass56_0
	{
		public ActiveItemTask activeItemTask; //Field offset: 0x10

		public <>c__DisplayClass56_0() { }

		internal bool <RemoveItemTask>b__0(ActiveItemTask ait) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass66_0
	{
		public Pair<Int32, Int32> itemObjective; //Field offset: 0x10

		public <>c__DisplayClass66_0() { }

		internal bool <IsItemTaskObjective>b__0(ActiveItemTask activeItemTask) { }

	}

	[CompilerGenerated]
	private struct <CompleteTask>d__55 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncVoidMethodBuilder <>t__builder; //Field offset: 0x8
		public ItemTaskManager <>4__this; //Field offset: 0x28
		public ActiveItemTask activeItemTask; //Field offset: 0x30
		public ItemTaskView itemTaskView; //Field offset: 0x38
		public bool skip; //Field offset: 0x40
		private ItemTask <itemTask>5__2; //Field offset: 0x48
		private List<UniTask> <uiAnimationTasks>5__3; //Field offset: 0x50
		private Awaiter <>u__1; //Field offset: 0x58
		private TaskAwaiter <>u__2; //Field offset: 0x68

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <Initialize>d__45 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public ItemTaskManager <>4__this; //Field offset: 0x18
		public Action OnOrderInterstitialShown; //Field offset: 0x20
		public int numberOfGameBadges; //Field offset: 0x28
		private Awaiter <>u__1; //Field offset: 0x30

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <OrderDoneReceivingItemRewards>d__57 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public ItemTask itemTask; //Field offset: 0x20
		public List<UniTask> uiAnimationTasks; //Field offset: 0x28
		public ItemTaskManager <>4__this; //Field offset: 0x30
		public ItemTaskView itemTaskView; //Field offset: 0x38
		private bool <itemRewardGiven>5__2; //Field offset: 0x40
		private Awaiter <>u__1; //Field offset: 0x48

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <OrderDoneTicketsAndStarsAnimation>d__58 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public ActiveItemTask activeItemTask; //Field offset: 0x20
		public ItemTaskView itemTaskView; //Field offset: 0x28
		public ItemTaskManager <>4__this; //Field offset: 0x30
		private Awaiter <>u__1; //Field offset: 0x38

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ShowNewTasks>d__61 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public List<ActiveItemTask> newActiveTasks; //Field offset: 0x18
		public ItemTaskManager <>4__this; //Field offset: 0x20
		private Awaiter <>u__1; //Field offset: 0x28

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	private const string ITEM_TASK_COMPLETED_PLACEMENT_STRING = "OrderCompleted"; //Field offset: 0x0
	private List<ActiveItemTask> activeItemTasks; //Field offset: 0x10
	[Inject]
	private UIAnimationController uiAnimationController; //Field offset: 0x18
	[Inject]
	private ItemTaskViewer itemTaskViewer; //Field offset: 0x20
	[Inject]
	private IItemPooler itemPooler; //Field offset: 0x28
	[Inject]
	private IBoardController boardController; //Field offset: 0x30
	[Inject]
	private IGameManager gameManager; //Field offset: 0x38
	[Inject]
	private ItemQueueController itemQueueController; //Field offset: 0x40
	[Inject]
	private SignalBus signalBus; //Field offset: 0x48
	[Inject]
	private DiContainer diContainer; //Field offset: 0x50
	[Inject]
	private GameData gameData; //Field offset: 0x58
	[Inject]
	private ArenaController arenaController; //Field offset: 0x60
	[Inject]
	private UIManager uiManager; //Field offset: 0x68
	[Inject]
	private GameScreenMenuBarComponent gameScreenMenuBarComponent; //Field offset: 0x70
	[Inject]
	private GameSceneManager gameSceneManager; //Field offset: 0x78
	[Inject]
	private AdsController adsController; //Field offset: 0x80
	[Inject]
	private EnergyController energyController; //Field offset: 0x88
	[Inject]
	private EpisodeManager episodeManager; //Field offset: 0x90
	private int maxActiveTaskCount; //Field offset: 0x98
	private bool canCompleteTask; //Field offset: 0x9C
	private bool isInitialized; //Field offset: 0x9D
	private bool fillTasksOnSceneChange; //Field offset: 0x9E
	private List<Int32> providerIds; //Field offset: 0xA0
	private Action OnOrderInterstitialShown; //Field offset: 0xA8
	[CompilerGenerated]
	private IItemTaskLoader <defaultItemTaskLoader>k__BackingField; //Field offset: 0xB0
	[CompilerGenerated]
	private IItemTaskLoader <arenaItemTaskLoader>k__BackingField; //Field offset: 0xB8
	[CompilerGenerated]
	private QuickOrdersItemTaskLoader <quickOrdersItemTaskLoader>k__BackingField; //Field offset: 0xC0

	public IEnumerable<ActiveItemTask> activeTasks
	{
		 get { } //Length: 8
	}

	private bool arenaEnabled
	{
		private get { } //Length: 24
	}

	public private IItemTaskLoader arenaItemTaskLoader
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public private IItemTaskLoader defaultItemTaskLoader
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public bool IsInitialized
	{
		 get { } //Length: 8
	}

	public private QuickOrdersItemTaskLoader quickOrdersItemTaskLoader
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public private int totalCompletedTaskCount
	{
		 get { } //Length: 88
		private set { } //Length: 108
	}

	public ItemTaskManager() { }

	[CompilerGenerated]
	private void <GetNewActiveTasks>g__AddArenaTasks|53_0(ref <>c__DisplayClass53_0 unnamed_param_0) { }

	[CompilerGenerated]
	private IEnumerable<ActiveItemTask> <Initialize>b__45_0() { }

	[CompilerGenerated]
	private void <Initialize>b__45_1(ItemAddedSignal t) { }

	[CompilerGenerated]
	private void <Initialize>b__45_2(ItemRemovedSignal t) { }

	[CompilerGenerated]
	private int <Initialize>b__45_3() { }

	private List<ActiveItemTask> AddActiveTasks(IReadOnlyCollection<ActiveItemTaskData> activeItemTaskData) { }

	private void CheckAndAddNewTasks() { }

	private void CheckItemTasksObjectives() { }

	[AsyncStateMachine(typeof(<CompleteTask>d__55))]
	public void CompleteTask(ActiveItemTask activeItemTask, ItemTaskView itemTaskView, bool skip = false) { }

	public IEnumerable<ActiveItemTask> get_activeTasks() { }

	private bool get_arenaEnabled() { }

	[CompilerGenerated]
	public IItemTaskLoader get_arenaItemTaskLoader() { }

	[CompilerGenerated]
	public IItemTaskLoader get_defaultItemTaskLoader() { }

	public bool get_IsInitialized() { }

	[CompilerGenerated]
	public QuickOrdersItemTaskLoader get_quickOrdersItemTaskLoader() { }

	public int get_totalCompletedTaskCount() { }

	private IReadOnlyCollection<ActiveItemTaskData> GetActiveTasksData() { }

	public ItemTaskView GetFirstActiveItemTaskView() { }

	public ItemTask GetItemTask(ActiveItemTask activeItemTask) { }

	private List<ActiveItemTaskData> GetNewActiveTasks() { }

	public int GetUniqueTaskProviderId() { }

	[AsyncStateMachine(typeof(<Initialize>d__45))]
	public UniTask Initialize(Action OnOrderInterstitialShown, int numberOfGameBadges) { }

	public bool IsItemTaskObjective(Pair<Int32, Int32> itemObjective) { }

	private void MarkArenaTasks() { }

	private void OnInterstitialShow() { }

	private void OnPlayerArenaStatusChanged(PlayerArenaStatusChangedSignal signal) { }

	private void OnPostGameSceneModeUpdatedSignal(PostGameSceneModeUpdatedSignal signal) { }

	[AsyncStateMachine(typeof(<OrderDoneReceivingItemRewards>d__57))]
	private Task OrderDoneReceivingItemRewards(ItemTaskView itemTaskView, ItemTask itemTask, List<UniTask> uiAnimationTasks) { }

	[AsyncStateMachine(typeof(<OrderDoneTicketsAndStarsAnimation>d__58))]
	private Task OrderDoneTicketsAndStarsAnimation(ActiveItemTask activeItemTask, ItemTaskView itemTaskView) { }

	private void PostMergeCheck(PostMergeSignal signal) { }

	private void ReinitializeItemTaskViewer(bool arenaEnabledFlag) { }

	private List<UniTask> RemoveItemsFromBoard(ActiveItemTask activeItemTask, ItemTaskView itemTaskView) { }

	private void RemoveItemTask(ActiveItemTask activeItemTask) { }

	[CompilerGenerated]
	private void set_arenaItemTaskLoader(IItemTaskLoader value) { }

	[CompilerGenerated]
	private void set_defaultItemTaskLoader(IItemTaskLoader value) { }

	[CompilerGenerated]
	private void set_quickOrdersItemTaskLoader(QuickOrdersItemTaskLoader value) { }

	private void set_totalCompletedTaskCount(int value) { }

	[AsyncStateMachine(typeof(<ShowNewTasks>d__61))]
	private UniTask ShowNewTasks(List<ActiveItemTask> newActiveTasks) { }

	private void UpdateItemTasksOfAddedItem(BaseItem addedItem) { }

	private void UpdateItemTasksOfRemovedItem(int itemId, int itemLevel) { }

}

