using System.Collections.Generic;
using Framework.Core.Services.Backend.Data.Payload;
using MergeEngine.Configuration;
using MergeEngine.ECS;
using MergeEngine.ECS.Components.Items;
using Merger.Boosters.Declarations.Definitions.Interfaces;

namespace Merger.Services.Backend.WebSocket.NotificationFactory
{
	public interface INotificationDataFactory
	{
		ItemNotificationData GetItemNotification(string action, IMergeItem item, Entity entity, string destination = null);

		BaseNotificationData GetBoosterNotification(string action, IBoosterItem item, string destination = null);

		IEnumerable<BaseNotificationData> GetBatchUIdNotification(string action, IEnumerable<IdComponent> items, string destination = null);

		ItemInventoryNotificationData GetItemInventoryNotification(string action, IMergeItem item, Entity entity, string inventoryType);
	}
}
