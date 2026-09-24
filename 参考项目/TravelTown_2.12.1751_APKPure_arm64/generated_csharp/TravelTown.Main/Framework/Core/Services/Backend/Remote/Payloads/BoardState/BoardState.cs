using System;
using Newtonsoft.Json;

namespace Framework.Core.Services.Backend.Remote.Payloads.BoardState
{
	[Serializable]
	public class BoardState
	{
		public BoardItems BoardItems;

		public BoardInventorySlots BoardInventorySlots;

		public BoardInventory BoardInventory;

		public BoardResources BoardResources;

		[JsonProperty("rewardQueue")]
		public BoardQueueBackendState BoardQueueBackendState;
	}
}
