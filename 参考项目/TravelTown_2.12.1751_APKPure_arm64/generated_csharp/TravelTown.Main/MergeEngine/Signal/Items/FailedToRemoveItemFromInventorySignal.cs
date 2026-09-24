using MergeEngine.ECS.Components.Items;
using Merger.Game.Views.Data;

namespace MergeEngine.Signal.Items
{
	public class FailedToRemoveItemFromInventorySignal
	{
		public int SlotIndex { get; }

		public InventorySlotType SlotType { get; }

		public FloatingTextType FloatingTextType { get; }

		public FailedToRemoveItemFromInventorySignal(int slotIndex, InventorySlotType type, FloatingTextType floatingTextType)
		{
		}
	}
}
