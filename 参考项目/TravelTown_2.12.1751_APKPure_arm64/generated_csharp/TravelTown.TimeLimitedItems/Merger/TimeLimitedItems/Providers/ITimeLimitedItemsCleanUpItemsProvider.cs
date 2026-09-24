using System.Collections.Generic;
using ContextualizedECS;
using Merger.MergeBoardQueue.Data;

namespace Merger.TimeLimitedItems.Providers
{
	public interface ITimeLimitedItemsCleanUpItemsProvider
	{
		List<Entity> GetBoardEntitiesToDestroy(HashSet<string> graphIds);

		List<QueuedItem> GetQueuedItemsToDestroy(HashSet<string> graphIds);
	}
}
