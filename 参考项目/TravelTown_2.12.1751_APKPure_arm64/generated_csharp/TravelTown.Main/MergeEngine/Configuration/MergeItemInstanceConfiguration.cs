using MergeEngine.Configuration.Capabilities;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Data;
using MergeEngine.ECS.Components.Items;

namespace MergeEngine.Configuration
{
	public class MergeItemInstanceConfiguration
	{
		public ItemOrigin? ItemOrigin;

		public BoardItemPosition? Position { get; set; }

		public LockedCapability Locked { get; set; }

		public int? SlotIndex { get; set; }

		public InventorySlotType SlotType { get; set; }

		public string SlotId { get; set; }

		public string Uuid { get; set; }

		public static MergeItemInstanceConfiguration CreateBoardConfiguration(BoardItemPosition position, ItemOrigin? itemOrigin, LockedCapability lockedCapability = null, string uuid = null)
		{
			return null;
		}

		public static MergeItemInstanceConfiguration CreateInventoryConfiguration(int slotIndex, InventorySlotType slotType = InventorySlotType.Normal, string slotId = null)
		{
			return null;
		}
	}
}
