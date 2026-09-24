using ContextualizedECS;

namespace Merger.MergeBoard.Data.TickResultArgs
{
	public class SpawnExpendedOnEachInteractionResult : IExpendableResult
	{
		public Entity Entity { get; set; }

		public int Position { get; set; }

		public string Reason { get; set; }
	}
}
