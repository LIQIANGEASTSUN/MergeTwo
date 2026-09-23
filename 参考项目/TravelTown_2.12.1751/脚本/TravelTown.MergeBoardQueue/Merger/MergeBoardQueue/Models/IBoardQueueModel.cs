using System.Collections.Generic;
using Framework.Core.DataBinding;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using Merger.MergeBoardQueue.Data;

namespace Merger.MergeBoardQueue.Models
{
	public interface IBoardQueueModel : IBoardQueueSyncModel
	{
		BindableProperty<int> BoardEventQueueCount { get; }

		BindableProperty<QueuedItem> HeadItem { get; }

		int Count { get; }

		QueuedItem Peek();

		QueuedItem Dequeue();

		void ExtractItem(QueuedItem item);

		QueuedItem FindNewestInQueue(string itemId);

		QueuedItem EnqueueItem(IMergeItem mergeItem, string entity, long enqueuingTimestamp, BoardQueueOrder boardQueueOrder, ResourceSource source);

		QueuedItem EnqueueItemPendingSync(IMergeItem mergeItem, string uuidInBoardQueue, long enqueuingTimestamp, BoardQueueOrder boardQueueOrder, ResourceSource source);

		void SyncPendingEnqueuedItem(string uuid);

		IEnumerable<QueuedItem> GetAllItems();
	}
}
