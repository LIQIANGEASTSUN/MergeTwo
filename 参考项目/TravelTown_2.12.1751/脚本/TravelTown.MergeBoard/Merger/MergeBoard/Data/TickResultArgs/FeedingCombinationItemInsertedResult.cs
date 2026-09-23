using ContextualizedECS;
using Merger.MergeBoard.Analytics.Data;

namespace Merger.MergeBoard.Data.TickResultArgs
{
	public class FeedingCombinationItemInsertedResult
	{
		public Entity FeedingEntity { get; set; }

		public Entity ConsumedEntity { get; set; }

		public ItemAnalyticsData AnalyticsData { get; set; }
	}
}
