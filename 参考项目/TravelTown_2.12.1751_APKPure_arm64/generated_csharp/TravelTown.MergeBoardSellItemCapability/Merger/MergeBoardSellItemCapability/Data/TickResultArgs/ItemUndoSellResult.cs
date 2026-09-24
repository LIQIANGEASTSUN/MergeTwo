using ContextualizedECS;
using MergeEngine.Model;

namespace Merger.MergeBoardSellItemCapability.Data.TickResultArgs
{
	public class ItemUndoSellResult
	{
		public Entity Entity { get; set; }

		public string EntityId { get; set; }

		public string ItemId { get; set; }

		public int TargetPosition { get; set; }

		public int Amount { get; set; }

		public PlayerResourceEnum Resource { get; set; }
	}
}
