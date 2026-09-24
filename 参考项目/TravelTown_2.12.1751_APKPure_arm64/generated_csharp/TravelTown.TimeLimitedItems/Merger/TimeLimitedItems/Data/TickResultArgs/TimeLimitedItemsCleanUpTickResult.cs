using System.Collections.Generic;
using ContextualizedECS;

namespace Merger.TimeLimitedItems.Data.TickResultArgs
{
	public class TimeLimitedItemsCleanUpTickResult
	{
		public List<Entity> CleanedUpEntities { get; }

		public TimeLimitedItemsCleanUpTickResult(List<Entity> cleanedUpEntities)
		{
		}
	}
}
