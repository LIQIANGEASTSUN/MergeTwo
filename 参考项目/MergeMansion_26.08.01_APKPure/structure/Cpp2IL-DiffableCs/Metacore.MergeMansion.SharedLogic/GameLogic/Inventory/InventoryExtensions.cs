namespace GameLogic.Inventory;

[Extension]
public static class InventoryExtensions
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<ProducerInventorySlotConfig, Boolean> <>9__5_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal bool <InitialProducerInventorySize>b__5_0(ProducerInventorySlotConfig slot) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass3_0
	{
		public Predicate<MergeItem> predicate; //Field offset: 0x10

		public <>c__DisplayClass3_0() { }

		internal bool <FindItems>b__0(MergeItem pair) { }

	}


	[Extension]
	public static bool AreAllSlotsPurchased(IBoardInventory inventory, IReadOnlyDictionary<InventorySlotId, InventorySlotsConfig> slots) { }

	[Extension]
	public static IEnumerable<MergeItem> FindItems(IBoardInventory mergeBoard, Predicate<MergeItem> predicate) { }

	public static int FreeSlotsCount(IReadOnlyDictionary<InventorySlotId, InventorySlotsConfig> slots) { }

	private static IReadOnlyDictionary<InventorySlotId, InventorySlotsConfig> GetInventorySlotsConfig(IMergeMansionGameConfig gameConfig, int inventoryTypeFlag) { }

	public static bool HasSpaceInInventoryForItem(MergeItem item, PlayerModel player) { }

	[Extension]
	public static int InitialProducerInventorySize(IReadOnlyDictionary<ProducerInventorySlotId, ProducerInventorySlotConfig> producerInventorySlots) { }

	[Extension]
	public static ValueTuple<Currencies, Int64> InventorySlotPrice(IBoardInventory inventory, IPlayer player, int inventoryTypeFlag) { }

	[Extension]
	public static ValueTuple<Currencies, Int64> InventorySlotPrice(IBoardInventory inventory, IReadOnlyDictionary<InventorySlotId, InventorySlotsConfig> slots) { }

	public static bool TryGetTargetInventoryTypeFlagForItem(MergeItem item, IPlayer player, out int targetInventoryTypeFlag) { }

}

