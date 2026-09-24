using MergeEngine.ECS.Components.Items;
using MergeEngine.Signal.Inventory;

namespace Merger.Game.Signal
{
	public class ProducerInventorySlotUnlockedSignal : ItemAmountInventoryBaseSignal
	{
		public string MergeItemUniqueId;

		public ProducerInventorySlotUnlockedSignal(string mergeItemUniqueId, int availableSlots, int inventoryCapacity, int freeTilesOnBoard, int numNewProducers, InventorySlotType type)
			: base(0, 0, 0, default(InventorySlotType), 0)
		{
		}
	}
}
