using ContextualizedECS;
using Merger.MergeBoard.Analytics.Data;

namespace Merger.MergeBoard.Data.TickResultArgs
{
	public class ExpendableTimerActivatedResult
	{
		public Entity Entity { get; set; }

		public string Reason { get; set; }

		public ItemAnalyticsData AnalyticsData { get; set; }
	}
}
