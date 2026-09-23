using System;
using ContextualizedECS;
using MergeEngine.ECS.Components.Items;
using MergeEngine.Model.Configuration;
using Merger.MergeBoard.Components;
using Merger.MergeBoard.Data;
using Zenject;

namespace Merger.MergeBoard.Logic.CombineValidators
{
	public class MergeItemCombinerValidator : IItemCombinerValidator, IItemCombinerVisualPresentation
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

		public bool CanMergeSame(Merger.MergeBoard.Components.MergeComponent item1, Merger.MergeBoard.Components.MergeComponent item2, Merger.MergeBoard.Components.IdComponent id1, Merger.MergeBoard.Components.IdComponent id2)
		{
			return false;
		}

		public bool CanMergeSpecificItem(Merger.MergeBoard.Components.MergeComponent firstMerge, Merger.MergeBoard.Components.MergeComponent secondMerge, Merger.MergeBoard.Components.IdComponent id1, Merger.MergeBoard.Components.IdComponent id2)
		{
			return false;
		}
	}
}
