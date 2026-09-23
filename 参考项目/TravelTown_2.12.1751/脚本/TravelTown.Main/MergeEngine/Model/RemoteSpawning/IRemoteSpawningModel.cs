using Framework.Core.Services.Backend.Data.Payload;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using Merger.Services.Backend.WebSocket.RemoteSpawning;

namespace MergeEngine.Model.RemoteSpawning
{
	public interface IRemoteSpawningModel
	{
		ItemSpawnable GetNextItem(IMergeItem spawnerItem, int bet, ExtraData extraData);

		string TryPeekNextItem(IMergeItem spawnerItem, int bet);

		void OnProducerQueueUpdated(ProducerQueuesPayload producerQueuesPayload);

		void ResetQueueFor(string spawnerId, int bet);

		void ResetQueueFor(string spawnerId);

		void ResetAllQueues();

		void LeaveRemainingItems(string spawnerId, int numberOfRemaining);

		void ClearAllExpiredItems();
	}
}
