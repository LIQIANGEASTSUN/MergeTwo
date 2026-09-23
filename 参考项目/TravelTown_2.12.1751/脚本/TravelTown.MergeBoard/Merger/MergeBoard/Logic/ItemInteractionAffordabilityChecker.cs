using System;
using ContextualizedECS;
using Merger.Game.Model;
using Merger.MergeBoard.Components;
using Merger.MergeBoard.Models;
using Zenject;

namespace Merger.MergeBoard.Logic
{
	public class ItemInteractionAffordabilityChecker : IItemInteractionAffordabilityChecker
	{
		[Inject]
		[NonSerialized]
		public IResourcesModel _resourceModel;

		[Inject]
		[NonSerialized]
		public IMergeBoardModel _mergeBoardModel;

		public bool CanAfford(Entity entity)
		{
			return false;
		}

		public void ConsumeResource(InteractionComponent interactionComponent)
		{
		}

		public bool CanAffordResourceInteractionCost(InteractionComponent interactionComponent)
		{
			return false;
		}

		public bool CanAffordItemInteractionCost(Entity entity, InteractionComponent interactionComponent)
		{
			return false;
		}
	}
}
