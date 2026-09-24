namespace Merge.AutoMerge;

public class AutoMergeController : ITickSystem
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Predicate<AutoMergeCandidate> <>9__42_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal bool <UpdateInner>b__42_0(AutoMergeCandidate candidate) { }

	}

	[CompilerGenerated]
	private struct <LoadAndCreateAutoMergeEffectHandler>d__30 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public AutoMergeController <>4__this; //Field offset: 0x18
		private Awaiter<AutoMergeAssetLibrary> <>u__1; //Field offset: 0x20

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	private class AutoMergeCandidate
	{
		public Coordinate ItemCoordinate; //Field offset: 0x10
		public MergeItem Item; //Field offset: 0x18
		public bool isProcessed; //Field offset: 0x20

		public AutoMergeCandidate(Coordinate itemCoordinate, MergeItem item) { }

		public float GetSecondsSinceSpawned(PlayerModel playerModel) { }

	}

	private static readonly Random SuggestionRandom; //Field offset: 0x0
	private const float DefaultAutoMergeInterval = 0.4; //Field offset: 0x0
	private const float DefaultAutoMergeSpawnCooldown = 0.1; //Field offset: 0x0
	private AutoMergeSettings _autoMergeSettings; //Field offset: 0x10
	private PlayerModel _playerModel; //Field offset: 0x18
	private UnityBoardController _boardController; //Field offset: 0x20
	private IMenuController _menuController; //Field offset: 0x28
	private IMergeGoalItemQuery _mergeGoalItemQuery; //Field offset: 0x30
	private HashSet<Int32> _bannedItems; //Field offset: 0x38
	private float _lastAutoMergeTime; //Field offset: 0x40
	private bool _hasShownAlertMessage; //Field offset: 0x44
	private List<AutoMergeCandidate> _prioritizedCandidates; //Field offset: 0x48
	private Transform _canvasRoot; //Field offset: 0x50
	private UnityOption<AutoMergeEffectHandler> _autoMergeEffectHandlerOption; //Field offset: 0x58
	private AutoMergeAssetLoader _autoMergeAssetLoader; //Field offset: 0x68
	private AutoMergeAct _currentAutoMerge; //Field offset: 0x70
	private readonly IAutoMergeFeatureModel _autoMergeFeatureModel; //Field offset: 0x78
	private readonly BoardStatusEffectSystem _boardStatusEffectSystem; //Field offset: 0x80
	private readonly MessagingController _messagingController; //Field offset: 0x88

	private float autoMergeInterval
	{
		private get { } //Length: 28
	}

	private float autoMergeSpawnCooldown
	{
		private get { } //Length: 28
	}

	public bool IsAutoMergeEnabledOnCurrentBoard
	{
		 get { } //Length: 224
	}

	private MergeBoardId RequiredAutoMergeBoardId
	{
		private get { } //Length: 268
	}

	private static AutoMergeController() { }

	public AutoMergeController(AutoMergeSettings autoMergeSettings, PlayerModel playerModel, UnityBoardController boardController, IMenuController menuController, IMergeGoalItemQuery mergeGoalItemQuery, BoardStatusEffectSystem boardStatusEffectSystem, MessagingController messagingController, Transform canvasRoot, ISafeRollback rollback) { }

	private void Cleanup() { }

	private void CreateAutoMergeEffectHandler(AutoMergeEffectHandler handlerPrefab) { }

	private void DestroyAndUnloadAutoMergeEffectHandler() { }

	private void FillBannedItems(MergeBoard mergeBoard, IPlayer player, HashSet<Int32> bannedItems) { }

	private Coordinate FindMergePartner(Coordinate itemCoordinate, MergeBoard mergeBoard, MetacoreTime currentTime) { }

	private float get_autoMergeInterval() { }

	private float get_autoMergeSpawnCooldown() { }

	public bool get_IsAutoMergeEnabledOnCurrentBoard() { }

	private MergeBoardId get_RequiredAutoMergeBoardId() { }

	private bool IsBannedFromAutoMerge(MergeItem currentItem, MergeBoard mergeBoard, IPlayer player) { }

	[AsyncStateMachine(typeof(<LoadAndCreateAutoMergeEffectHandler>d__30))]
	private UniTask LoadAndCreateAutoMergeEffectHandler() { }

	public void OnAutoMergeDurationChanged() { }

	public void OnAutoMergeStateChanged() { }

	private void OnBoardTransition(MenuStatus status) { }

	private void OnManualSpawnActProcessed(MergeBoardAct spawnAct) { }

	private void OnMenuVisibilityChanged(bool visibile) { }

	private void OnMerge(MergeBoardAct act) { }

	private void OnStatusEffectConfigLoaded(BoardStatusEffectType effectType) { }

	private void PrioritizeItemForAutoMergeCheck(Coordinate itemCoordinate, MergeBoard mergeBoard) { }

	private void RefreshAutoMergeBoardStatusEffect(bool isAvailable) { }

	private void RefreshVisuals(bool isAvailable) { }

	public override void Tick() { }

	private bool TryGetAutoMergeTimeWindow(out MetacoreTime startTime, out MetacoreTime endTime) { }

	private void TryShowAutoMergeEnabledAlertMessage() { }

	private void UpdateInner() { }

}

