using System;
using System.Collections.Generic;

namespace Merger.Services.Backend.Sync.Data.Payloads.Board
{
	[Serializable]
	public class SyncBoardInventory
	{
		public int openSlotsAmount;

		public List<InventoryItem> items;
	}
}
