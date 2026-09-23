using ContextualizedECS;
using Merger.MergeBoard.Analytics.Data;

namespace Merger.MergeBoard.Data.TickResultArgs
{
	public class ItemsMergedResult
	{
		public string ActionUuid;

		public Entity Item1;

		public Entity Item2;

		public Entity NewItem;

		public int Position;

		public ItemAnalyticsData AnalyticsData;

		public int ItemLevel;
	}
}
