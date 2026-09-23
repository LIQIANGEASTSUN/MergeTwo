using ContextualizedECS;
using Merger.MergeBoard.Analytics.Data;

namespace Merger.MergeBoardQueue.Data.TickResultArgs
{
	public class ItemRewardSpawnedFromQueueToBoardResult
	{
		public Entity Entity { get; set; }

		public ItemAnalyticsData AnalyticsData { get; set; }

		public QueuedItem DequeuedItem { get; set; }

		public int DestinationPosition { get; set; }

		public ItemRewardSpawnedFromQueueToBoardResult(Entity entity, ItemAnalyticsData analyticsData, QueuedItem dequeuedItem, int destinationPosition)
		{
		}
	}
}
