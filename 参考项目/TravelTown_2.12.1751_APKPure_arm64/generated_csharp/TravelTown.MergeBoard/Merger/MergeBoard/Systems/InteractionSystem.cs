using System;
using ContextualizedECS;
using ContextualizedECS.Context;
using ContextualizedECS.Systems;
using MergeEngine.Configuration.Definitions;
using Merger.MergeBoard.Data.TickInputActions;
using Merger.MergeBoard.Logic;
using Merger.MergeBoard.Logic.CombineValidators;
using Zenject;

namespace Merger.MergeBoard.Systems
{
	public class InteractionSystem : ISystem
	{
		[Inject]
		[NonSerialized]
		public IItemInteractionAffordabilityChecker _affordability;

		[Inject]
		[NonSerialized]
		public ItemConsumableCombinerValidator _itemConsumableCombinerValidator;

		public void Tick(TickContext context)
		{
		}

		public void HandleInteractByTap(TickContext context, TapAction tap)
		{
		}

		public void HandleInteractForConsumableItem(TickContext context)
		{
		}

		public bool IsInteractionAvailable(TickContext context, Entity interactableEntity)
		{
			return false;
		}

		public string GetDefaultEntityUuidToConsume(TickContext context, ItemMultiple itemToConsume)
		{
			return null;
		}

		public bool IsItemEligibleForConsume(Entity entity, ItemMultiple itemToConsume)
		{
			return false;
		}
	}
}
