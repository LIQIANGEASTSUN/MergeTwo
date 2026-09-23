using System.Collections.Generic;
using ContextualizedECS;
using MergeEngine.Configuration;

namespace Merger.MergeBoard.Data.TickResultArgs
{
	public class ImmediateToolBoxCollectedResult
	{
		public Entity Entity { get; set; }

		public int Position { get; set; }

		public IList<IMergeItem> CollectedTools { get; set; }

		public ImmediateToolBoxCollectedResult(Entity entity, int position, IList<IMergeItem> collectedTools)
		{
		}
	}
}
