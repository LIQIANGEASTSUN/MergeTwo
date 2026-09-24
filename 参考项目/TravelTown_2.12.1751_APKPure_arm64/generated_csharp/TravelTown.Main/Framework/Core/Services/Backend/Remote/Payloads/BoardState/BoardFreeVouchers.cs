using System.Collections.Generic;
using Merger.Services.Backend.Sync.Data.Payloads;

namespace Framework.Core.Services.Backend.Remote.Payloads.BoardState
{
	public class BoardFreeVouchers : BackendState
	{
		public List<FreeVoucher> freeVouchers;
	}
}
