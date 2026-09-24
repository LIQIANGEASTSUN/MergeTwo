using System.Collections.Generic;
using ContextualizedECS;
using ContextualizedECS.Context;
using ContextualizedECS.Systems;

namespace Merger.TimeLimitedItems.Systems
{
	public class TimeLimitedItemsCleanUpSystem : ISystem
	{
		public void Tick(TickContext context)
		{
		}

		public void CleanUpEntities(TickContext context, List<Entity> entities)
		{
		}
	}
}
