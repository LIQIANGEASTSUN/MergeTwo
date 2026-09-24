using Framework.Core.Services.Backend.Data.Payload;
using Merger.Services.Backend.WebSocket.RemoteSpawning;

namespace MergeEngine.Model.RemoteSpawning
{
	public interface IPushedItemsModel
	{
		void AddPushItem(PushedItem pushedItem);

		void SaveCache();

		PushedItemNotificationData FindItemToPushForSpawner(string spawnerId);

		string PeekItemForSpawner(string spawnerId);
	}
}
