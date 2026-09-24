using System;
using MergeEngine.ECS.Components.Items;

namespace Merger.Services.Backend.Sync.Data.Payloads.Board
{
	[Serializable]
	public class InventoryItem : ItemPayloadBase
	{
		public SerializedInventorySlotComponent inventorySlot;
	}
}
