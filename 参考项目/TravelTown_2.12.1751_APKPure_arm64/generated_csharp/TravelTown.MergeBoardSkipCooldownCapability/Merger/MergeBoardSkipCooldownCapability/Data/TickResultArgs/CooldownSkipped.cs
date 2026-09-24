using MergeEngine.Configuration.Definitions;
using Merger.MergeBoard.Analytics.Data;

namespace Merger.MergeBoardSkipCooldownCapability.Data.TickResultArgs
{
	public class CooldownSkipped
	{
		public ResourceMultiple Price { get; set; }

		public ItemAnalyticsData AnalyticsData { get; set; }
	}
}
