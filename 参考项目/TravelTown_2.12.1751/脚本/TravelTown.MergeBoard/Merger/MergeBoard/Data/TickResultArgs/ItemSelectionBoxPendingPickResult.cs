using ContextualizedECS;
using MergeEngine.Configuration;

namespace Merger.MergeBoard.Data.TickResultArgs
{
	public class ItemSelectionBoxPendingPickResult
	{
		public string Uuid { get; set; }

		public int BoardPosition { get; set; }

		public IMergeItem MergeItem { get; set; }

		public Entity Entity { get; set; }
	}
}
