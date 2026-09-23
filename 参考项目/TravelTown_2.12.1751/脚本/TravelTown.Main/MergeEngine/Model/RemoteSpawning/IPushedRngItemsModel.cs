using Framework.Core.Services.Backend.Data.Payload;
using Merger.Services.Backend.WebSocket.RemoteSpawning;

namespace MergeEngine.Model.RemoteSpawning
{
	public interface IPushedRngItemsModel
	{
		void ClearCache(string eventId);

		void AddPushItem(PushedItem pushedItem);

		PushedItemNotificationData FindBoardEventItem(string boardEventId);

		PushedItemNotificationData FindItem();
	}
}
