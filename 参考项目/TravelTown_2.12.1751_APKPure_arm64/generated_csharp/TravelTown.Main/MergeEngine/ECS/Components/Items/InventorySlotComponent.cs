using MergeEngine.Configuration.Capabilities;
using MergeEngine.ECS.Systems.State;

namespace MergeEngine.ECS.Components.Items
{
	public class InventorySlotComponent : ComponentBase<InventorySlotCapability>, IRemoteLoadedComponent<SerializedInventorySlotComponent>
	{
		public int SlotIndex;

		public InventorySlotType Type;

		public string SlotId;

		public InventorySlotComponent(InventorySlotCapability capability, Entity entity)
			: base((InventorySlotCapability)default(_00210), (Entity)null)
		{
		}

		public void LoadComponent(SerializedInventorySlotComponent componentData)
		{
		}
	}
}
