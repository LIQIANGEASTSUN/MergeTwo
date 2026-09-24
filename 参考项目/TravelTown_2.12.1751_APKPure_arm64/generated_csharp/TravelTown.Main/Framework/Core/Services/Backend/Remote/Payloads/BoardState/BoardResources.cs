using System;
using System.Collections.Generic;
using Merger.Services.Backend.Sync.Data.Payloads;

namespace Framework.Core.Services.Backend.Remote.Payloads.BoardState
{
	[Serializable]
	public class BoardResources : BackendState
	{
		public List<Resource> Resources;
	}
}
