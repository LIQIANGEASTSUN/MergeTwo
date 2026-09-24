using System.Collections.Generic;
using ContextualizedECS;

namespace Merger.TimeLimitedItems.Data.TickInputActions
{
	public class TimeLimitedItemsCleanUpTickAction
	{
		public List<Entity> EntitiesToCleanUp { get; }

		public TimeLimitedItemsCleanUpTickAction(List<Entity> entitiesToCleanUp)
		{
		}
	}
}
