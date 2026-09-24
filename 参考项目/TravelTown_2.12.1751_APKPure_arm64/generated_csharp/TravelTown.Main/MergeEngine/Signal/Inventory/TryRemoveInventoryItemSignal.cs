using MergeEngine.ECS.Components.Items;

namespace MergeEngine.Signal.Inventory
{
	public class TryRemoveInventoryItemSignal
	{
		public int SlotIndex { get; }

		public InventorySlotType SlotType { get; }

		public TryRemoveInventoryItemSignal(int slotIndex, InventorySlotType slotType)
		{
		}
	}
}
