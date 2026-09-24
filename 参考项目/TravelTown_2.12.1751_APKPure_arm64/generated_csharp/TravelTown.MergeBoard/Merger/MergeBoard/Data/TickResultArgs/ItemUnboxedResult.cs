using ContextualizedECS;

namespace Merger.MergeBoard.Data.TickResultArgs
{
	public class ItemUnboxedResult
	{
		public Entity Entity { get; set; }

		public int Position { get; set; }

		public string Reason { get; set; }

		public string MergedItemId1 { get; set; }

		public string MergedItemId2 { get; set; }

		public int InteractionPosition { get; set; }
	}
}
