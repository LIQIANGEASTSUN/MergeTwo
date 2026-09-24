using MergeEngine.ECS.Components.Items;

namespace MergeEngine.Configuration.Capabilities
{
	public class InventorySlotCapability : CapabilityBase
	{
		public int SlotIndex;

		public InventorySlotType SlotType;

		public string SlotId;

		public InventorySlotCapability(int slotIndex = 0, InventorySlotType slotType = InventorySlotType.Normal, string slotId = null)
		{
		}
	}
}
