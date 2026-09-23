using System;
using ContextualizedECS;
using MergeEngine.ECS.Components.Items;
using MergeEngine.Model.Configuration;
using Merger.MergeBoard.Components;
using Merger.MergeBoard.Data;
using Zenject;

namespace Merger.MergeBoard.Logic.CombineValidators
{
	public class FeedingItemCombinerValidator : IItemCombinerValidator, IItemCombinerVisualPresentation
	{
		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		public bool CanCombineItems(Entity movedEntity, Entity otherEntity)
		{
			return false;
		}

		public void ToggleVisuals(IVisualComponent draggedItem, IVisualComponent overlapItemOnDragAction, bool toggle)
		{
		}

		public bool CanFeed(FeedingCombinationComponent feedingCombinationComponent, Merger.MergeBoard.Components.InteractionComponent interactionComponent, string itemId)
		{
			return false;
		}
	}
}
