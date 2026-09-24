//Type is in global namespace

public class MergeFeverEventController
{
	[CompilerGenerated]
	private struct <CheckMergeFeverEnd>d__68 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public MergeFeverEventController <>4__this; //Field offset: 0x18
		private Awaiter <>u__1; //Field offset: 0x20

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <DoubleMergeDeactivateCoroutine>d__65 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncVoidMethodBuilder <>t__builder; //Field offset: 0x8
		public MergeFeverEventController <>4__this; //Field offset: 0x28
		private Awaiter <>u__1; //Field offset: 0x30

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <Initialize>d__43 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public MergeFeverEventController <>4__this; //Field offset: 0x18
		public SignalBus signalBus; //Field offset: 0x20
		public GameData gameData; //Field offset: 0x28
		public SlidingTextController slidingTextController; //Field offset: 0x30
		public MergeFeverViewer mergeFeverViewer; //Field offset: 0x38
		public IGameManager gameManager; //Field offset: 0x40
		public ItemQueueController itemQueueController; //Field offset: 0x48
		public EnergyController energyController; //Field offset: 0x50
		public NavigationBarComponent navigationBarComponent; //Field offset: 0x58
		public GameSceneManager gameSceneManager; //Field offset: 0x60
		public TutorialController tutorialController; //Field offset: 0x68
		private Awaiter <>u__1; //Field offset: 0x70

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	private const string MERGE_FEVER_EVENT_CONFIG = "merge_fever_event_config"; //Field offset: 0x0
	private const string MERGE_FEVER_CONFIG = "merge_fever_config"; //Field offset: 0x0
	private SignalBus signalBus; //Field offset: 0x10
	private GameData gameData; //Field offset: 0x18
	private SlidingTextController slidingTextController; //Field offset: 0x20
	private MergeFeverViewer mergeFeverViewer; //Field offset: 0x28
	private IGameManager gameManager; //Field offset: 0x30
	private ItemQueueController itemQueueController; //Field offset: 0x38
	private EnergyController energyController; //Field offset: 0x40
	private NavigationBarComponent navigationBarComponent; //Field offset: 0x48
	private GameSceneManager gameSceneManager; //Field offset: 0x50
	private TutorialController _tutorialController; //Field offset: 0x58
	private ConfigMergeFeverEvent config; //Field offset: 0x60
	private DoubleMergeData doubleMergeData; //Field offset: 0x68
	private int incrementalValue; //Field offset: 0x88
	[CompilerGenerated]
	private Action<Boolean> onMergeFeverCountChanged; //Field offset: 0x90
	[CompilerGenerated]
	private MergeFeverEventData <currentMergeFeverEvent>k__BackingField; //Field offset: 0x98
	private MergeFeverScheduler scheduler; //Field offset: 0xA0
	[CompilerGenerated]
	private bool <isEventState>k__BackingField; //Field offset: 0xA8
	[CompilerGenerated]
	private bool <isInitialized>k__BackingField; //Field offset: 0xA9

	public event Action<Boolean> onMergeFeverCountChanged
	{
		[CompilerGenerated]
		 add { } //Length: 176
		[CompilerGenerated]
		 remove { } //Length: 176
	}

	public MergeFeverLevel currentLevel
	{
		 get { } //Length: 64
	}

	public private MergeFeverEventData currentMergeFeverEvent
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private MergeFeverEventDataPiece dataPiece
	{
		private get { } //Length: 24
	}

	private bool isAvailble
	{
		private get { } //Length: 100
	}

	private bool isCompleted
	{
		private get { } //Length: 76
	}

	public private bool isEventState
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private bool isInitialized
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private bool isNewMergeFeverAvailable
	{
		private get { } //Length: 100
	}

	public MergeFeverLevel lastLevel
	{
		 get { } //Length: 24
	}

	private MergeFeverLevel previousLevel
	{
		private get { } //Length: 64
	}

	public MergeFeverEventController() { }

	[CompilerGenerated]
	public void add_onMergeFeverCountChanged(Action<Boolean> value) { }

	private void CalculateLevelIndex() { }

	private bool CanShowPopup() { }

	private void ChangeState(MergeFeverEventData mfEvent, bool isActive) { }

	public void CheckDoubleMergeIsActive() { }

	[AsyncStateMachine(typeof(<CheckMergeFeverEnd>d__68))]
	private UniTask CheckMergeFeverEnd() { }

	public bool CheckMergeFeverNotification() { }

	private void CollectReward() { }

	private void CollectRewardByType(Reward reward, out string analyticsRewardString, out string analyticsTypeString) { }

	private void DisableDoubleMerge() { }

	private void DisableMergeFever() { }

	[AsyncStateMachine(typeof(<DoubleMergeDeactivateCoroutine>d__65))]
	private void DoubleMergeDeactivateCoroutine() { }

	private void EnableMergeFever() { }

	public MergeFeverLevel get_currentLevel() { }

	[CompilerGenerated]
	public MergeFeverEventData get_currentMergeFeverEvent() { }

	private MergeFeverEventDataPiece get_dataPiece() { }

	private bool get_isAvailble() { }

	private bool get_isCompleted() { }

	[CompilerGenerated]
	public bool get_isEventState() { }

	[CompilerGenerated]
	private bool get_isInitialized() { }

	private bool get_isNewMergeFeverAvailable() { }

	public MergeFeverLevel get_lastLevel() { }

	private MergeFeverLevel get_previousLevel() { }

	public int GetCurrentLevelMergeTotalCount() { }

	private int GetRelativeCurrentMergeCount() { }

	private int GetRelativeLastMergeCount() { }

	private int GetRelativeMergeCount() { }

	private void HideViewer() { }

	[AsyncStateMachine(typeof(<Initialize>d__43))]
	public UniTask Initialize(SignalBus signalBus, GameData gameData, SlidingTextController slidingTextController, MergeFeverViewer mergeFeverViewer, IGameManager gameManager, ItemQueueController itemQueueController, EnergyController energyController, NavigationBarComponent navigationBarComponent, GameSceneManager gameSceneManager, TutorialController tutorialController) { }

	private void InitSignals() { }

	private void InitViewer(bool animate) { }

	private bool IsCurrentMergeFeverActive() { }

	private void OnItemTaskCompleted() { }

	private void OnLevelUpPopupClosed() { }

	private void OnMergeFeverCountChanged(bool rewardReadyToBeClaimed) { }

	private void OnMergeFeverEnded() { }

	private void OnMergeFeverStarted() { }

	private void OnPostMerge(PostMergeSignal postMergeSignal) { }

	public void OnRewardCollected() { }

	[CompilerGenerated]
	public void remove_onMergeFeverCountChanged(Action<Boolean> value) { }

	public ConfigMergeFeverEvent ResolveConfigs() { }

	[CompilerGenerated]
	private void set_currentMergeFeverEvent(MergeFeverEventData value) { }

	[CompilerGenerated]
	private void set_isEventState(bool value) { }

	[CompilerGenerated]
	private void set_isInitialized(bool value) { }

	private void SetDoubleMergeData(Reward reward) { }

	public void ShowNextReward() { }

	private void ShowViewer() { }

	private bool TryRestoreCurrentMergeFever() { }

	private bool TryShowPopup() { }

	private bool TryStartNewMergeFever() { }

	public bool TryValidateRewardData(Reward reward) { }

	public void UpdateMergeFeverStatus(bool isFirstTimeChecking, bool isForInitProgress = false) { }

	public void UpdateMergeFeverViewer() { }

}

