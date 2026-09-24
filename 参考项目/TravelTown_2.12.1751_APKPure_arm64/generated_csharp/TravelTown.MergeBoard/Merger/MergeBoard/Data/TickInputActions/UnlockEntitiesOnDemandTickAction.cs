using System.Collections.Generic;
using ContextualizedECS;

namespace Merger.MergeBoard.Data.TickInputActions
{
	public class UnlockEntitiesOnDemandTickAction
	{
		public List<Entity> EntitiesToUnlock { get; }

		public string Reason { get; }

		public UnlockEntitiesOnDemandTickAction(List<Entity> entitiesToUnlock, string reason)
		{
		}
	}
}
