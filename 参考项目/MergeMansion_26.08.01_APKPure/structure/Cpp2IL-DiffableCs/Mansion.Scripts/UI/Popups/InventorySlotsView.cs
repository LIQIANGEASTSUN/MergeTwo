namespace UI.Popups;

public class InventorySlotsView : MonoBehaviour
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass25_0
	{
		public ProducerInventorySlotConfig slot; //Field offset: 0x10
		public InventoryItemFrame itemFrame; //Field offset: 0x18
		public InventorySlotsView <>4__this; //Field offset: 0x20

		public <>c__DisplayClass25_0() { }

		internal void <SetupTeasedSlots>b__0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass26_0
	{
		public InventorySlotsView <>4__this; //Field offset: 0x10
		public InventoryItemFrame itemFrame; //Field offset: 0x18

		public <>c__DisplayClass26_0() { }

		internal void <AddItem>b__0() { }

	}

	[SerializeField]
	private InventoryItemFrame itemFramePrefab; //Field offset: 0x20
	[SerializeField]
	private Transform itemContainer; //Field offset: 0x28
	private readonly List<InventoryItemFrame> instantiatedItems; //Field offset: 0x30
	private readonly List<InventoryItemFrame> instantiatedEmptySlots; //Field offset: 0x38
	private readonly List<InventoryItemFrame> teasedProdInventorySlots; //Field offset: 0x40
	private readonly List<InventoryItemFrame> unlockableProdInventorySlots; //Field offset: 0x48
	private readonly List<ProducerInventorySlotConfig> newlySeenProdInventorySlots; //Field offset: 0x50
	private InventoryItemFrame instantiatedBuyNewSlot; //Field offset: 0x58
	private PlayerModel player; //Field offset: 0x60
	private PlayerClientCache _playerClientCache; //Field offset: 0x68
	private IBoardInventory inventory; //Field offset: 0x70
	private int inventoryTypeFlag; //Field offset: 0x78
	private IMenuController menuController; //Field offset: 0x80
	private IAudioPlayer audioPlayer; //Field offset: 0x88
	private PlayerClientContext playerContext; //Field offset: 0x90
	private MergeBoard board; //Field offset: 0x98
	private Action<InventoryItemFrame, MergeBoard> moveItemToBoard; //Field offset: 0xA0

	public InventorySlotsView() { }

	private void AddBuyNewSlot(bool withAnimation) { }

	private void AddEmptySlot(bool withAnimation, bool withParticles) { }

	private void AddItem(MergeItem item, bool withAnimation) { }

	private void DestroyBuyNewSlotIfExists() { }

	private ValueTuple<Currencies, Int64> GetSlotPrice() { }

	public void Initialize(PlayerModel player, PlayerClientCache playerClientCache, IBoardInventory inventory, int inventoryTypeFlag, IMenuController menuController, IAudioPlayer audioPlayer, PlayerClientContext playerContext, MergeBoard board, Action<InventoryItemFrame, MergeBoard> moveItemToBoard, bool withAnimation) { }

	private void ProcessBuySlot() { }

	private void ProcessUnlockSlot(ProducerInventorySlotConfig producerInventorySlot, InventoryItemFrame itemFrame) { }

	private void SetupBuyNewSlot(bool withAnimation) { }

	private void SetupEmptySlots(bool withAnimation) { }

	private void SetupItems(bool withAnimation) { }

	private void SetupLimitedSlots(bool withAnimation) { }

	private void SetupTeasedSlots(bool withAnimation) { }

	public void TearDown() { }

	private static void TearDownInstantiatedItemFrames(List<InventoryItemFrame> itemFrames) { }

	public bool TryRefreshSeenProducerInventorySlots() { }

	private void UpdateSlotPrice() { }

}

