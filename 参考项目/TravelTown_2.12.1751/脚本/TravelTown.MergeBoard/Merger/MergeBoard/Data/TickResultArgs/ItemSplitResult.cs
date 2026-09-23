using ContextualizedECS;

namespace Merger.MergeBoard.Data.TickResultArgs
{
	public class ItemSplitResult
	{
		public Entity SplitterItem { get; set; }

		public Entity TargetItem { get; set; }

		public Entity NewItem1 { get; set; }

		public Entity NewItem2 { get; set; }

		public int SplitPosition { get; set; }
	}
}
