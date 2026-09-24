using System.Collections.Generic;
using Merger.Services.Backend.Sync.Data.Payloads.Board;

namespace Framework.Core.Services.Backend.Remote.Payloads.BoardState
{
	public class BoardItems : BackendState
	{
		public List<BoardItem> Items;
	}
}
