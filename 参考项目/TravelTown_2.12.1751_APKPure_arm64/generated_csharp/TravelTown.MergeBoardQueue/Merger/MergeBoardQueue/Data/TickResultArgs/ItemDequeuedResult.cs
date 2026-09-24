using ContextualizedECS;
using Merger.MergeBoard.Analytics.Data;

namespace Merger.MergeBoardQueue.Data.TickResultArgs
{
	public class ItemDequeuedResult
	{
		public Entity Entity { get; set; }

		public ItemAnalyticsData AnalyticsData { get; set; }

		public QueuedItem Item { get; set; }

		public int DestinationPosition { get; set; }

		public ItemDequeuedResult(Entity entity, ItemAnalyticsData itemAnalyticsData, QueuedItem item, int destinationPosition)
		{
		}
	}
}
