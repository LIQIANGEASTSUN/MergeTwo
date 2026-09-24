using ContextualizedECS;
using MergeEngine.Configuration;

namespace Merger.MergeBoard.Data.TickResultArgs
{
	public class ItemCreatedForFirstTime
	{
		public IMergeItem Item { get; }

		public Entity Entity { get; }

		public ItemCreatedForFirstTime(IMergeItem item, Entity entity)
		{
		}
	}
}
