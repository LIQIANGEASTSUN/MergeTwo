using System;

namespace Merger.Services.Backend.Sync.Data.Payloads.Board
{
	[Serializable]
	public class ProducerInventorySlot : ProducerInventorySlotBase
	{
		public ProducerInventorySlotData data;
	}
}
