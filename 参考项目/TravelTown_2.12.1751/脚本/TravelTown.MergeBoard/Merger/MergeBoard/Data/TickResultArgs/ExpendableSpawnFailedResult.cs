using ContextualizedECS;
using MergeEngine.Configuration;

namespace Merger.MergeBoard.Data.TickResultArgs
{
	public class ExpendableSpawnFailedResult
	{
		public Entity Entity { get; }

		public string Reason { get; }

		public IMergeItem MergeItem { get; }

		public ExpendableSpawnFailedResult(Entity entity, string reason, IMergeItem mergeItem)
		{
		}
	}
}
