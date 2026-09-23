using ContextualizedECS;
using Merger.MergeBoard.Analytics.Data;

namespace Merger.MergeBoard.Data.TickResultArgs
{
	public class ItemCreatedResult
	{
		public Entity Entity { get; set; }

		public ItemAnalyticsData AnalyticsData { get; set; }

		public ItemCreatedResult(Entity entity, ItemAnalyticsData itemAnalyticsData)
		{
		}
	}
}
