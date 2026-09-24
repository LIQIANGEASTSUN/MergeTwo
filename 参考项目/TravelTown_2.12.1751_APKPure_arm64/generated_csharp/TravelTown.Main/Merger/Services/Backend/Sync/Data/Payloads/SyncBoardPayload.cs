using System;
using System.Collections.Generic;

namespace Merger.Services.Backend.Sync.Data.Payloads
{
	[Serializable]
	public class SyncBoardPayload
	{
		public List<BoardStructure> boards;
	}
}
