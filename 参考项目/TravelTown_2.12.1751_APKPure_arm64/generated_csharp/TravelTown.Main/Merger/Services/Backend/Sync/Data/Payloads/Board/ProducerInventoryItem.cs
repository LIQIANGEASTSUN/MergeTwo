using System;

namespace Merger.Services.Backend.Sync.Data.Payloads.Board
{
	[Serializable]
	public class ProducerInventoryItem : ProducerInventorySlotBase
	{
		public InventoryItem data;
	}
}
