using ContextualizedECS;

namespace Merger.MergeBoard.Data.TickResultArgs
{
	public class ExpendableInteractionResult
	{
		public Entity Entity { get; set; }

		public int Position { get; set; }

		public int UsesRemaining { get; set; }

		public string Reason { get; set; }
	}
}
