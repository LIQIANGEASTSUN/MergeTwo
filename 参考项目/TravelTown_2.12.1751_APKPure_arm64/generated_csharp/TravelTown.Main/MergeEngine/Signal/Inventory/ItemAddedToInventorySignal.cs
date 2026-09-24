using MergeEngine.ECS.Components.Items;

namespace MergeEngine.Signal.Inventory
{
	public class ItemAddedToInventorySignal : ItemAmountInventoryBaseSignal
	{
		public string ItemId;

		public int SlotIndex { get; }

		public int? BoardItemIndex { get; }

		public int? StackSize { get; }

		public ItemAddedToInventorySignal(string itemId, int? boardItemIndex, int slotIndex, int availableSlots, int inventoryCapacity, int freeTilesOnBoard, InventorySlotType type, int numNewProducers, int? stackSize = null)
			: base(0, 0, 0, default(InventorySlotType), 0)
		{
		}
	}
}
