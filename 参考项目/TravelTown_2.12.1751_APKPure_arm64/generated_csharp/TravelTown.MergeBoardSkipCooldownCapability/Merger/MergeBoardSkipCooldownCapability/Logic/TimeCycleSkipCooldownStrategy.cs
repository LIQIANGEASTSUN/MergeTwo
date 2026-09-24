using ContextualizedECS;

namespace Merger.MergeBoardSkipCooldownCapability.Logic
{
	public class TimeCycleSkipCooldownStrategy : ISkipCooldownStrategy
	{
		public bool IsOnCooldown(Entity entity)
		{
			return false;
		}

		public double GetTimeLeft(Entity entity)
		{
			return 0.0;
		}
	}
}
