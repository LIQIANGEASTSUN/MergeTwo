using MergeEngine.ECS.Components.Items;

namespace MergeEngine.Signal.Inventory
{
	public class ItemAmountInventoryBaseSignal : InventoryBaseSignal
	{
		public int NumNewProducerSlots;

		public ItemAmountInventoryBaseSignal(int availableSlots, int inventoryCapacity, int freeTilesOnBoard, InventorySlotType type, int numNewProducerSlots)
			: base(0, 0, 0, default(InventorySlotType))
		{
		}
	}
}
