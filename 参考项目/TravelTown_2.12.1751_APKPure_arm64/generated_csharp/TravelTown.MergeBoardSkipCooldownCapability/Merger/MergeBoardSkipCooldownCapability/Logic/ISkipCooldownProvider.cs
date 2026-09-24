using ContextualizedECS;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;

namespace Merger.MergeBoardSkipCooldownCapability.Logic
{
	public interface ISkipCooldownProvider
	{
		bool CanSkipCooldown(Entity entity);

		double GetTimeLeft(Entity entity);

		ResourceMultiple GetSkipCooldownPrice(Entity entity, IMergeItem mergeItem);
	}
}
