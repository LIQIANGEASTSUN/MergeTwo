using System.Collections.Generic;
using Merger.Services.Backend.Sync.Data.Payloads.Board;

namespace Framework.Core.Services.Backend.Remote.Payloads.BoardState
{
	public class BoardInventory : BoardInventorySlots
	{
		public List<InventoryItem> Items;
	}
}
