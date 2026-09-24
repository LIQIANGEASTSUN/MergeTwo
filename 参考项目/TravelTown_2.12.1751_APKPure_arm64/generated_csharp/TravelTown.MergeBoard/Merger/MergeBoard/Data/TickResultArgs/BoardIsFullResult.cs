using ContextualizedECS;

namespace Merger.MergeBoard.Data.TickResultArgs
{
	public class BoardIsFullResult
	{
		public Entity InteractedEntity { get; set; }

		public BoardIsFullResult(Entity entity)
		{
		}
	}
}
