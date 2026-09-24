using ContextualizedECS;
using MergeEngine.Model;

namespace Merger.MergeBoard.Data.TickResultArgs
{
	public class ItemResourceCollectedResult
	{
		public Entity Entity { get; set; }

		public string EntityId { get; set; }

		public string ItemId { get; set; }

		public int Position { get; set; }

		public PlayerResourceEnum Resource { get; set; }

		public int Amount { get; set; }
	}
}
