using ContextualizedECS;

namespace Merger.MergeBoard.Data.TickResultArgs
{
	public class ItemConsumedResult
	{
		public Entity ConsumerEntity { get; set; }

		public Entity ConsumedEntity { get; set; }

		public int TargetPosition { get; set; }

		public int SourcePosition { get; set; }
	}
}
