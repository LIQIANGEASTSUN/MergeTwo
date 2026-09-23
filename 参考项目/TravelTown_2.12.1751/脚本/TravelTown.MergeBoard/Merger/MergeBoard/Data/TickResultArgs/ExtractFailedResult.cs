using ContextualizedECS;
using MergeEngine.Configuration;

namespace Merger.MergeBoard.Data.TickResultArgs
{
	public class ExtractFailedResult
	{
		public Entity Entity { get; set; }

		public string Reason { get; set; }

		public IMergeItem MergeItem { get; set; }

		public ExtractFailedResult(Entity entity, string reason, IMergeItem mergeItem)
		{
		}
	}
}
