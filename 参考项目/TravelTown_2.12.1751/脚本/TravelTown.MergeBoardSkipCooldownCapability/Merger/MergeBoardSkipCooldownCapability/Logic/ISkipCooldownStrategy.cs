using ContextualizedECS;

namespace Merger.MergeBoardSkipCooldownCapability.Logic
{
	public interface ISkipCooldownStrategy
	{
		bool IsOnCooldown(Entity entity);

		double GetTimeLeft(Entity entity);
	}
}
