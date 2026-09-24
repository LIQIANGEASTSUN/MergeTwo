using ContextualizedECS;
using Merger.MergeBoard.Analytics.Data;

namespace Merger.MergeBoard.Data.TickResultArgs
{
	public class BoardItemCooldownEndedResult
	{
		public Entity Entity { get; set; }

		public ItemAnalyticsData AnalyticsData { get; set; }
	}
}
