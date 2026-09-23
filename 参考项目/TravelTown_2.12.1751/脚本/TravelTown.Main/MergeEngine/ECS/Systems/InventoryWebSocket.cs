using System;
using System.Collections.Generic;
using Merger.Services.Backend.WebSocket.DeliveryGuarantee;
using Zenject;

namespace MergeEngine.ECS.Systems
{
	public class InventoryWebSocket
	{
		[Inject]
		[NonSerialized]
		public IWebSocketDeliveryGuaranteeService _webSocketSender;

		public void SendUnlockSlot(string slotId)
		{
		}

		public void SendFlagStateChanged(List<Tuple<string, string>> slotAndStatus)
		{
		}
	}
}
