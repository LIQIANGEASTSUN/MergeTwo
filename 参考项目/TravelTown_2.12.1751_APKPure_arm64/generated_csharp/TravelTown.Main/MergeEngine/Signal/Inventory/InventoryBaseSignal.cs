using MergeEngine.ECS.Components.Items;

namespace MergeEngine.Signal.Inventory
{
	public class InventoryBaseSignal
	{
		public int AvailableSlots { get; }

		public int InventoryCapacity { get; }

		public int FreeTilesOnBoard { get; }

		public InventorySlotType Type { get; }

		public InventoryBaseSignal(int availableSlots, int inventoryCapacity, int freeTilesOnBoard, InventorySlotType type)
		{
		}
	}
}
