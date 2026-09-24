using ContextualizedECS;
using Merger.MergeBoard.Components;

namespace Merger.MergeBoard.Logic
{
	public interface IItemInteractionAffordabilityChecker
	{
		bool CanAfford(Entity entity);

		void ConsumeResource(InteractionComponent interactionComponent);
	}
}
