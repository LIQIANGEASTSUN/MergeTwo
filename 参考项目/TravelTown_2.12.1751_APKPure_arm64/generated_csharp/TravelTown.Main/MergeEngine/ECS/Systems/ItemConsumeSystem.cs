using System;
using System.Collections.Generic;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using MergeEngine.ECS.Components.Board;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Systems.Board;
using MergeEngine.ECS.Util;
using MergeEngine.Model.Configuration;
using Zenject;

namespace MergeEngine.ECS.Systems
{
	public class ItemConsumeSystem : SystemBase
	{
		[InjectComponent]
		[NonSerialized]
		public BoardItemCountComponent _boardItemCountComponent;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[InjectSystem]
		[NonSerialized]
		public BoardSystem _boardSystem;

		[InjectSystem]
		[NonSerialized]
		public CombiningSystem _combiningSystem;

		public bool CanAffordItemInteractionCost(InteractionComponent interactionComponent)
		{
			return false;
		}

		public bool TryConsumeInteractionCostItems(InteractionComponent interactionComponent, OperationContext context, Action<int> onComplete, out List<ItemMultiple> consumedItems)
		{
			consumedItems = null;
			return false;
		}

		public ItemMultiple[] GetConsumedItems(InteractionComponent interactionComponent)
		{
			return null;
		}

		public ItemMultiple[] GetAnyConsumedItems(InteractionComponent interactionComponent)
		{
			return null;
		}

		public Tuple<IMergeItem, PositionComponent> TryFindPreferredItemFromHint(ItemMultiple[] consumedItems)
		{
			return null;
		}
	}
}
