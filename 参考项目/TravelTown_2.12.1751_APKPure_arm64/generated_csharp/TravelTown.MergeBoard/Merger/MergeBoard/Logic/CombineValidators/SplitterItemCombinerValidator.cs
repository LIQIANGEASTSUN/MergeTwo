using System;
using ContextualizedECS;
using MergeEngine.ECS.Components.Items;
using MergeEngine.Model.Configuration;
using Merger.MergeBoard.Data;
using Zenject;

namespace Merger.MergeBoard.Logic.CombineValidators
{
	public class SplitterItemCombinerValidator : IItemCombinerValidator, IItemCombinerVisualPresentation
	{
		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		public bool CanCombineItems(Entity entity1, Entity entity2)
		{
			return false;
		}

		public void ToggleVisuals(IVisualComponent draggedItem, IVisualComponent overlapItemOnDragAction, bool toggle)
		{
		}

		public string GetSplitResultItemId(string targetItemId)
		{
			return null;
		}

		public bool CanBeSplit(string itemId)
		{
			return false;
		}
	}
}
