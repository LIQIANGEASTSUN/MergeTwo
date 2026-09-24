//Type is in global namespace

public class ItemMover : ITickable, IInitializable
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<Collider2D, Boolean> <>9__22_0; //Field offset: 0x8
		public static Func<Collider2D, BoardSlot> <>9__27_0; //Field offset: 0x10
		public static Predicate<BoardSlot> <>9__27_1; //Field offset: 0x18
		public static Func<BoardSlot, Boolean> <>9__27_2; //Field offset: 0x20
		public static Func<Collider2D, BoardSlot> <>9__32_0; //Field offset: 0x28
		public static Predicate<BoardSlot> <>9__32_1; //Field offset: 0x30

		private static <>c() { }

		public <>c() { }

		internal BoardSlot <OnDragEnded>b__32_0(Collider2D hitCollider) { }

		internal bool <OnDragEnded>b__32_1(BoardSlot slot) { }

		internal BoardSlot <OnInputDetected>b__27_0(Collider2D hitCollider) { }

		internal bool <OnInputDetected>b__27_1(BoardSlot slot) { }

		internal bool <OnInputDetected>b__27_2(BoardSlot slot) { }

		internal bool <ReleaseItemClosestEmpty>b__22_0(Collider2D a) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass37_0
	{
		public BaseItem item; //Field offset: 0x10
		public BoardSlot boardSlot; //Field offset: 0x18
		public ItemMover <>4__this; //Field offset: 0x20

		public <>c__DisplayClass37_0() { }

		internal void <MoveItemToBoardSlot>b__0() { }

	}

	private const float DISTANCE_THRESHOLD_FOR_DRAG = 0.2; //Field offset: 0x0
	private const float FOLLOW_SPEED = 0.02; //Field offset: 0x0
	[Inject]
	private IBoardController boardController; //Field offset: 0x10
	[Inject]
	private GameCameraController gameCameraController; //Field offset: 0x18
	[Inject]
	private ItemInfoViewer itemInfoViewer; //Field offset: 0x20
	[Inject]
	private ItemMerger itemMerger; //Field offset: 0x28
	[Inject]
	private SignalBus signalBus; //Field offset: 0x30
	private bool isEnabled; //Field offset: 0x38
	private bool validInputDetected; //Field offset: 0x39
	private bool isDragStarted; //Field offset: 0x3A
	private bool isDragEnabled; //Field offset: 0x3B
	private Vector2 firstInputPosition; //Field offset: 0x3C
	private Vector2 lastInputPosition; //Field offset: 0x44
	private BoardSlot selectedBoardSlotAtStart; //Field offset: 0x50
	private BaseItem pickedItem; //Field offset: 0x58
	private string sortingLayerOfPickedItem; //Field offset: 0x60
	private readonly Collider2D[] hits; //Field offset: 0x68
	private Vector3 vel; //Field offset: 0x70

	public ItemMover() { }

	[CompilerGenerated]
	private bool <OnDragEnded>b__32_2(BoardSlot slot) { }

	[CompilerGenerated]
	private float <OnDragEnded>b__32_3(BoardSlot slot) { }

	[CompilerGenerated]
	private void <OnDragEnded>b__32_4() { }

	[CompilerGenerated]
	private void <OnDragEnded>b__32_5() { }

	[CompilerGenerated]
	private float <OnInputDetected>b__27_3(BoardSlot slot) { }

	private void CheckInput() { }

	private Vector2 GetWorldPositionOfInputPosition(Vector2 inputPosition) { }

	private bool GetWorldPositionOfInputPosition(out Vector2 worldPosition) { }

	public override void Initialize() { }

	private void InteractWithBoardSlot(BoardSlot boardSlotToInteract) { }

	private bool IsInputExist() { }

	private void MoveItemToBoardSlot(BaseItem item, BoardSlot boardSlot, float duration) { }

	private void OnAdShow() { }

	public void OnDestroy() { }

	private void OnDragEnded() { }

	private void OnDragging() { }

	private void OnDragStarting() { }

	private void OnInputDetected() { }

	private void OnInputHold() { }

	private void OnInputReleased() { }

	public void ReleaseItemClosestEmpty() { }

	private void ResetInput() { }

	public void SetDragEnable(bool status) { }

	public void SetEnable(bool status) { }

	public override void Tick() { }

}

