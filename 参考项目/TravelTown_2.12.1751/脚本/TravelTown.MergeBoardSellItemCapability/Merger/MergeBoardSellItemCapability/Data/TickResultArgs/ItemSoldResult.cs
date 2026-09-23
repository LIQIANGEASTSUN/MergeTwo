using ContextualizedECS;
using MergeEngine.Model;

namespace Merger.MergeBoardSellItemCapability.Data.TickResultArgs
{
	public class ItemSoldResult
	{
		public Entity Entity { get; set; }

		public string ItemId { get; set; }

		public string EntityId { get; set; }

		public int SourcePosition { get; set; }

		public PlayerResourceEnum Resource { get; set; }

		public int Amount { get; set; }
	}
}
