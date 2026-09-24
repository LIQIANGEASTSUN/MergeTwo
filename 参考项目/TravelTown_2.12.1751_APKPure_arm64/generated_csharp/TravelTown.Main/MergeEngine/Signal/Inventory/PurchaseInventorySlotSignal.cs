using MergeEngine.ECS.Components.Items;

namespace MergeEngine.Signal.Inventory
{
	public class PurchaseInventorySlotSignal : InventoryBaseSignal
	{
		public int ResourceAmountHc;

		public PurchaseInventorySlotSignal(int availableSlots, int inventoryCapacity, int resourceAmountHc, int freeTilesOnBoard, InventorySlotType type)
			: base(0, 0, 0, default(InventorySlotType))
		{
		}
	}
}
