using ContextualizedECS;
using Merger.MergeBoard.Analytics.Data;

namespace Merger.MergeBoard.Data.TickResultArgs
{
	public class ItemSpawnedResult
	{
		public Entity SourceEntity { get; set; }

		public Entity NewEntity { get; set; }

		public int SourcePosition { get; set; }

		public int TargetPosition { get; set; }

		public ItemCreatedSource CreatedBy { get; set; }

		public bool Rare { get; set; }

		public bool Legendary { get; set; }

		public bool Boosted { get; set; }

		public ItemAnalyticsData SourceEntityAnalyticsData { get; set; }

		public ItemAnalyticsData NewEntityAnalyticsData { get; set; }

		public ItemSpawnedResult(Entity sourceEntity, Entity newEntity, int sourcePosition, int targetPosition, ItemCreatedSource itemCreatedSource, ItemAnalyticsData sourceEntityAnalyticsData, ItemAnalyticsData newEntityAnalyticsData, bool rare = false, bool legendary = false, bool boosted = false)
		{
		}
	}
}
