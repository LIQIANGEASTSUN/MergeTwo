using MergeEngine.ECS.Components.Items;
using Merger.Audio.Attributes;

namespace MergeEngine.Signal.Inventory
{
	[SoundBoundSignal("Item Out From Inventory")]
	public class ItemRemovedFromInventorySignal : ItemAmountInventoryBaseSignal
	{
		public int SlotIndex { get; }

		public string ItemId { get; }

		public int? BoardItemIndex { get; }

		public int? StackSize { get; }

		public ItemRemovedFromInventorySignal(string itemId, int? boardItemIndex, int slotIndex, int availableSlots, int inventoryCapacity, int freeTilesOnBoard, InventorySlotType type, int numNewProducersSlots, int? stackSize = null)
			: base(0, 0, 0, default(InventorySlotType), 0)
		{
		}
	}
}
