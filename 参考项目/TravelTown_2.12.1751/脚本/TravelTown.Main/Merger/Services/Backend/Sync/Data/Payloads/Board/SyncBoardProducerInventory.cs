using System;
using System.Collections.Generic;

namespace Merger.Services.Backend.Sync.Data.Payloads.Board
{
	[Serializable]
	public class SyncBoardProducerInventory
	{
		public List<InventoryItem> items;
	}
}
