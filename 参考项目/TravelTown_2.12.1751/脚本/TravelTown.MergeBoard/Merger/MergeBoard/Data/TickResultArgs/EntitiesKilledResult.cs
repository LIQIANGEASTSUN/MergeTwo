using System.Collections.Generic;
using ContextualizedECS;

namespace Merger.MergeBoard.Data.TickResultArgs
{
	public class EntitiesKilledResult
	{
		public int KilledCount { get; set; }

		public IReadOnlyCollection<Entity> KilledEntities { get; set; }
	}
}
