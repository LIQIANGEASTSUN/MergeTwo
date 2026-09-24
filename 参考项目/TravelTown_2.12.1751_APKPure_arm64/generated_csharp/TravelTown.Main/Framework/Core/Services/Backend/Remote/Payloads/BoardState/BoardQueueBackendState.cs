using System.Collections.Generic;
using Newtonsoft.Json;

namespace Framework.Core.Services.Backend.Remote.Payloads.BoardState
{
	public class BoardQueueBackendState : BackendState
	{
		[JsonProperty("ItemQueue")]
		public List<BackendBoardQueueItem> BackendBoardQueueItems;
	}
}
