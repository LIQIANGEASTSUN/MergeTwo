using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using Merger.Services.Backend.Sync.Data.Payloads.Board;

namespace Merger.MergeBoardQueue.Data
{
	public class QueuedItem
	{
		public IItem Item { get; }

		public ItemPayloadBase RestoredItemPayload { get; }

		public string UUIDInBoardQueue { get; }

		public long EnqueueTimestamp { get; }

		public BoardQueueOrder BoardQueueOrder { get; }

		public QueuedItem(IItem item, long enqueueTimestamp, BoardQueueOrder boardQueueOrder, string uuidInBoardQueue, ItemPayloadBase itemPayload)
		{
		}
	}
}
