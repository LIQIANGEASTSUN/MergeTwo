using ContextualizedECS;

namespace Merger.MergeBoard.Data.TickResultArgs
{
	public class CooldownBlocked
	{
		public Entity Entity { get; set; }

		public CooldownBlocked(Entity entity)
		{
		}
	}
}
