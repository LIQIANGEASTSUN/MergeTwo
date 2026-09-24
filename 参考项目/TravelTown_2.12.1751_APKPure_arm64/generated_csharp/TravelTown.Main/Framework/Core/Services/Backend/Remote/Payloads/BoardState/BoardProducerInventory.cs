using System.Collections.Generic;
using GameCore.States.Attributes;
using Merger.Services.Backend.Sync.Data.Payloads.Board;

namespace Framework.Core.Services.Backend.Remote.Payloads.BoardState
{
	[StateName("boardProducerInventory")]
	public class BoardProducerInventory : BackendState
	{
		public List<ProducerInventoryItem> Items;
	}
}
