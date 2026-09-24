using ContextualizedECS;
using MergeEngine.Configuration;

namespace Merger.MergeBoard.Data.TickResultArgs
{
	public class ImmediateToolFragmentCollectedResult
	{
		public Entity Entity { get; set; }

		public int Position { get; set; }

		public IMergeItem CollectedTool { get; set; }

		public ImmediateToolFragmentCollectedResult(Entity entity, int position, IMergeItem collectedTool)
		{
		}
	}
}
