using ContextualizedECS;
using Merger.MergeBoard.Analytics.Data;

namespace Merger.MergeBoard.Data.TickResultArgs
{
	public class FeedingCombinationItemExtractedResult
	{
		public Entity FeedingEntity { get; set; }

		public Entity ExtractedEntity { get; set; }

		public int SourcePosition { get; set; }

		public int TargetPosition { get; set; }

		public ItemAnalyticsData AnalyticsData { get; set; }
	}
}
