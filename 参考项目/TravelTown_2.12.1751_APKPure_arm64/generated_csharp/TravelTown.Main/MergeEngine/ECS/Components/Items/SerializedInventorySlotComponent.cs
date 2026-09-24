using System;

namespace MergeEngine.ECS.Components.Items
{
	[Serializable]
	public class SerializedInventorySlotComponent
	{
		public int SlotIndex;

		public InventorySlotType Type;

		public string SlotId;
	}
}
