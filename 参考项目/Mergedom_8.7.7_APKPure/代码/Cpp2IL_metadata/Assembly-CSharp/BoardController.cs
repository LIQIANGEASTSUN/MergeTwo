//Type is in global namespace

public class BoardController : MonoBehaviour, IBoardController
{
	[CompilerGenerated]
	private struct <<Initialize>g__SaveBoardRepeatedly|32_5>d : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncVoidMethodBuilder <>t__builder; //Field offset: 0x8
		public BoardController <>4__this; //Field offset: 0x28
		private Awaiter<Boolean> <>u__1; //Field offset: 0x30

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <Initialize>d__32 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public BoardController <>4__this; //Field offset: 0x18

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	public const string HAVE_MOVED_ITEM_TO_INVENTORY_KEY = "BoardController.haveMovedItemToInventory"; //Field offset: 0x0
	public const string HAVE_SOLD_ITEM_KEY = "BoardController.haveSoldItem"; //Field offset: 0x0
	private const string RECEIVED_EMPTY_BOARD_COMPENSATION = "BoardController.received_empty_board_compensation"; //Field offset: 0x0
	[Inject]
	private ItemInfoViewer itemInfoViewer; //Field offset: 0x20
	[Inject]
	private IItemPooler itemPooler; //Field offset: 0x28
	[Inject]
	private BoardHintChecker boardHintChecker; //Field offset: 0x30
	[Inject]
	private GameData gameData; //Field offset: 0x38
	[Inject]
	private EffectsManager effectsManager; //Field offset: 0x40
	[Inject]
	private GameSceneManager gameSceneManager; //Field offset: 0x48
	[Inject]
	private readonly SignalBus signalBus; //Field offset: 0x50
	public Transform Board; //Field offset: 0x58
	public Transform BoardPivots; //Field offset: 0x60
	public BoardSettings BoardSettings; //Field offset: 0x68
	public BoardCompensationSettings BoardCompensationSettings; //Field offset: 0x70
	public BoardSlotIndicator BoardSlotIndicator; //Field offset: 0x78
	[SerializeField]
	private SpriteRenderer boardSpriteRenderer; //Field offset: 0x80
	[SerializeField]
	private List<SpriteVariation> boardSpriteVariants; //Field offset: 0x88
	[SerializeField]
	private List<SpriteVariation> cellsSpriteVariants; //Field offset: 0x90
	[SerializeField]
	private LayerMask _blockingLayerMask; //Field offset: 0x98
	private BoardSlot[][] board; //Field offset: 0xA0
	private BoardSlot prevSelectedBoardSlot; //Field offset: 0xA8
	private Vector2 bottomLeftPosition; //Field offset: 0xB0
	private Vector2 topRightPosition; //Field offset: 0xB8
	private readonly HashSet<BaseChest> chestsOnBoard; //Field offset: 0xC0
	private BaseChest openingChest; //Field offset: 0xC8
	private CancellationTokenSource saveBoardCancellationToken; //Field offset: 0xD0

	private BoardData boardData
	{
		private get { } //Length: 36
	}

	public BoardController() { }

	[CompilerGenerated]
	private void <GetEmptySlotsInRadius>g__CheckSlot|43_0(int r, int c, List<BoardSlot> slots) { }

	[CompilerGenerated]
	private void <Initialize>b__32_0(PostMergeSignal s) { }

	[CompilerGenerated]
	private void <Initialize>b__32_1() { }

	[CompilerGenerated]
	private void <Initialize>b__32_2(ItemRemovedSignal t) { }

	[CompilerGenerated]
	private void <Initialize>g__Create|32_7() { }

	[CompilerGenerated]
	private void <Initialize>g__LogBoardData|32_6() { }

	[CompilerGenerated]
	private void <Initialize>g__SaveBoardCallBack|32_3() { }

	[AsyncStateMachine(typeof(<<Initialize>g__SaveBoardRepeatedly|32_5>d))]
	[CompilerGenerated]
	private void <Initialize>g__SaveBoardRepeatedly|32_5() { }

	[CompilerGenerated]
	private void <Initialize>g__SetBoardItems|32_8() { }

	[CompilerGenerated]
	private void <Initialize>g__SetCompensationItems|32_9() { }

	[CompilerGenerated]
	private void <Initialize>g__TrySetCompensationItems|32_4() { }

	[CompilerGenerated]
	private void <Initialize>g__ValidateBoardSlotItemId|32_10(BoardSlotData boardSlot) { }

	[CompilerGenerated]
	private void <OnPostMerge>g__PlayChainBrokeParticle|54_0(Vector3 position) { }

	[CompilerGenerated]
	private BoardSlot <TryGetClosestEmptyBoardSlot>g__GetClosestEmptyBoardSlot|42_0(BoardSlot boardSlot, int degree = 1) { }

	[CompilerGenerated]
	private void <UnlockNeighbourBoardSlots>g__PlayCardboardUnlockParticle|41_1(Vector3 position) { }

	[CompilerGenerated]
	private void <UnlockNeighbourBoardSlots>g__UnlockNeighbour|41_0(int neighbourRow, int neighbourColumn) { }

	private void CheckChestOpenIndicators() { }

	public override void CheckForMergeHint() { }

	public override void DestroyActivityItems() { }

	private BoardData FillBoardDataUsingGameData() { }

	private BoardData get_boardData() { }

	public override List<BaseItem> GetAllItemsAtBoard(bool checkLockStatus = true) { }

	public override BoardPivots GetBoardPivots() { }

	public override BoardSettings GetBoardSettings() { }

	private BoardSlot GetBoardSlot(int row, int column) { }

	[Obsolete("This method should only called from SROptions.", False)]
	public BoardSlot GetBoardSlotSR(int row, int column) { }

	private List<BoardSlot> GetEmptySlotsInRadius(BoardSlot boardSlot, int radiusMax) { }

	public override BoardSlot GetFirstEmptyBoardSlot() { }

	public override List<BaseItem> GetItemsAtBoard(int itemId, int itemLevel = -1, bool checkLockStatus = true) { }

	public override List<BaseItem> GetItemsAtBoardWithMinLevel(int itemId, int itemLevel = 1, bool checkLockStatus = true) { }

	public override BoardSlot GetSelectedBoardSlot() { }

	private override BoardSlotIndicator IBoardController.GetBoardSlotIndicator() { }

	private override BoardSlot[][] IBoardController.GetBoardSlots() { }

	private override Vector2 IBoardController.GetMaxPosition() { }

	private override Vector2 IBoardController.GetMinPosition() { }

	[AsyncStateMachine(typeof(<Initialize>d__32))]
	public override UniTask Initialize() { }

	private void OnAppPause() { }

	public override void OnChestPlacedOnBoard(BaseChest chest) { }

	public override void OnChestRechargeStatusChanged(BaseChest chest, bool isRecharging) { }

	public override void OnChestRemovedFromBoard(BaseChest chest) { }

	private void OnDestroy() { }

	public override void OnItemRemovedFromBoard(BaseItem item) { }

	private void OnPostMerge(PostMergeSignal postMergeSignal) { }

	private void OnPreMerge(PreMergeSignal preMergeSignal) { }

	public override void ResetCurrentlySelectedBoardSlot() { }

	private void SaveBoard(bool fromPause = false) { }

	public override void SelectBoardSlot(BoardSlot boardSlot) { }

	public override void SwapBoardSlotsData(BoardSlot firstSlot, BoardSlot secondSlot) { }

	public override BoardSlot TryGetClosestEmptyBoardSlot(BoardSlot boardSlot, string parameters, int degree = 1) { }

	public override void UnlockNeighbourBoardSlots(BoardSlot boardSlot) { }

}

