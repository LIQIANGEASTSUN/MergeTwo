using MergeEngine.ECS.Components.Items;

namespace MergeEngine.Signal.Inventory
{
	public class InventoryItemAddedSignal : InventoryBaseSignal
	{
		public InventoryItemAddedSignal(string itemId, int availableSlots, int inventoryCapacity, int freeTilesOnBoard, InventorySlotType type)
			: base(0, 0, 0, default(InventorySlotType))
		{
		}
	}
}
