namespace Merge;

public interface IBoardController : ISharedBoardController
{

	public event Action<BoardStepResult> OnBoardStepResult
	{
		[CompilerGenerated]
		 add { } //Length: 0
		[CompilerGenerated]
		 remove { } //Length: 0
	}

	public event Action<MergeResult> OnMergeResult
	{
		[CompilerGenerated]
		 add { } //Length: 0
		[CompilerGenerated]
		 remove { } //Length: 0
	}

	public event Action<MenuStatus> OnTransition
	{
		[CompilerGenerated]
		 add { } //Length: 0
		[CompilerGenerated]
		 remove { } //Length: 0
	}

	public Option<BoardCustomInit> BoardCustomInitOption
	{
		 get { } //Length: 0
	}

	public GameObject CanvasGameObject
	{
		 get { } //Length: 0
	}

	public CanvasScaleFactorStack CanvasScaleFactorStack
	{
		 get { } //Length: 0
	}

	public RectTransform ItemParent
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<BoardStepResult, MetaTime> LastBoardStepResultTimes
	{
		 get { } //Length: 0
	}

	public Coordinate SelectedCoordinate
	{
		 get { } //Length: 0
	}

	public MenuStatus VisualStatus
	{
		 get { } //Length: 0
	}

	[CompilerGenerated]
	public void add_OnBoardStepResult(Action<BoardStepResult> value) { }

	[CompilerGenerated]
	public void add_OnMergeResult(Action<MergeResult> value) { }

	[CompilerGenerated]
	public void add_OnTransition(Action<MenuStatus> value) { }

	public void AnimateProgressionEventProgress(ProgressionEventModel progressionEvent, IProgressCollectAction collectAction, IItemDefinition item, Vector3 from, Option<Action> onCompletedOption) { }

	public bool BoardIsVisible(MergeBoardId boardId = null) { }

	public void CalculateDragLimits() { }

	public void ClearExtraSpawns() { }

	public void DestroyBackground(MergeBoardId mergeBoardId) { }

	public Option<BoardCustomInit> get_BoardCustomInitOption() { }

	public GameObject get_CanvasGameObject() { }

	public CanvasScaleFactorStack get_CanvasScaleFactorStack() { }

	public RectTransform get_ItemParent() { }

	public IReadOnlyDictionary<BoardStepResult, MetaTime> get_LastBoardStepResultTimes() { }

	public Coordinate get_SelectedCoordinate() { }

	public MenuStatus get_VisualStatus() { }

	public Option<BoardItemHandler> GetBoardItemHandlerAtCoordinate(Coordinate coordinate) { }

	public IBoardEventModel GetCurrentBoardEventModel() { }

	public int GetSelectedItemType() { }

	public Vector2 GetUISlotPosition(Coordinate coordinate) { }

	public Vector2[2] GetUISlotPositions() { }

	public void Hide(bool instantHide, Action onComplete, bool ignoreScriptedEvents = false) { }

	public bool IsDraggingItem() { }

	public bool IsInTransition() { }

	public UniTask<Option`1<GameObject>> LoadAndInstantiateBoardBackground(IBoardEventModel boardEventModel, MergeBoardId mergeBoardId, CancellationToken ct) { }

	public void OnBoardTransition() { }

	public void ProcessUsePortal(PlayerModel playerModel, IItemDefinition portalItem) { }

	public void ReconstructBoard() { }

	public void RefreshCollectibleBoardEventInfoPanel() { }

	[CompilerGenerated]
	public void remove_OnBoardStepResult(Action<BoardStepResult> value) { }

	[CompilerGenerated]
	public void remove_OnMergeResult(Action<MergeResult> value) { }

	[CompilerGenerated]
	public void remove_OnTransition(Action<MenuStatus> value) { }

	public void SelectItemAt(Coordinate c, bool showSinkItemTooltip = false, bool fromClick = false) { }

	public void SelectMergeBoard(PlayerModel playerModel, MergeBoard mb, bool legacyEventBoard, bool liveOpsEventBoard, Func<MergeBoard, Boolean> eventEndCheck, bool eventTimeUpdate, bool forceVisualRebuild = false) { }

	public void Show(MetaDuration loadDuration, Action onComplete, Action onReadyToPlay, BoardTransitionFlags transitionFlags) { }

	public void ShowAlert(string text, string hapticConfigId = "") { }

	public void ShowCollectibleBoardEventInfoPanel() { }

	public void StopPlay(bool transitionToMansionView = false, bool ignoreScriptedEvents = false) { }

	public void ToggleBackground(MergeBoard board) { }

	public ValueTuple<Boolean, Coordinate> TryToMoveItemFromPocketToBoard(Vector2 buttonPos) { }

}

