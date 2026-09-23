using System;
using ContextualizedECS;
using ContextualizedECS.Context;
using ContextualizedECS.Systems;
using Merger.MergeBoard.Components;
using Merger.MergeBoard.Logic;
using Zenject;

namespace Merger.MergeBoard.Systems
{
	public class InteractionCostSystem : ISystem
	{
		[Inject]
		[NonSerialized]
		public IItemInteractionAffordabilityChecker _affordabilityChecker;

		public void Tick(TickContext context)
		{
		}

		public void ConsumeItems(TickContext context, Entity interactedEntity, PendingInteractionComponent pendingInteractionComponent, InteractionComponent interactionComponent)
		{
		}
	}
}
