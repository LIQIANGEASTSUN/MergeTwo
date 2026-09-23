using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.CompilerServices;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Data;
using MergeEngine.ECS.Components.Board;
using MergeEngine.ECS.Components.InteractionTracking;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Systems.Board;
using MergeEngine.ECS.Systems.Player;
using MergeEngine.ECS.Util;
using MergeEngine.Model;
using MergeEngine.Model.Configuration;
using Zenject;

namespace MergeEngine.ECS.Systems
{
	public class InteractionSystem : TickableSystem<InteractionComponent>, IItemsCombiner
	{
		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IResourcesConfigurationModel _resourcesConfigurationModel;

		[InjectSystem]
		[NonSerialized]
		public ResourcesSystem _resourcesSystem;

		[InjectSystem]
		[NonSerialized]
		public BoardItemConsumerSystem _boardItemConsumerSystem;

		[InjectSystem]
		[NonSerialized]
		public BoardSystem _boardSystem;

		[InjectSystem]
		[NonSerialized]
		public ItemConsumeSystem _itemConsumeSystem;

		[InjectComponent]
		[NonSerialized]
		public BoardComponent _boardComponent;

		[InjectComponent]
		[NonSerialized]
		public BoardItemCountComponent _boardItemCountComponent;

		[InjectComponent]
		[NonSerialized]
		public InteractionTrackingComponent _interactionTrackingComponent;

		public override SystemPriorities Priority => default(SystemPriorities);

		public event Action<IMergeItem, BoardItemPosition, InteractionType, List<ItemMultiple>> ItemInteracted
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public override void ProcessComponents(ReadOnlyCollection<InteractionComponent> components)
		{
		}

		public bool TryConsumeInteractionCost(InteractionComponent interactionComponent, bool notifyPlayer = true, OperationContext context = null, CombiningComponent combiningComponent = null)
		{
			return false;
		}

		public bool CanAffordInteractionCost(InteractionComponent interactionComponent, bool notifyPlayer)
		{
			return false;
		}

		public bool CanAffordResourceInteractionCost(InteractionComponent interactionComponent)
		{
			return false;
		}

		public bool CanAffordItemInteractionCost(InteractionComponent interactionComponent)
		{
			return false;
		}

		public void ConsumeInteractionCost(InteractionComponent interactionComponent, OperationContext context, CombiningComponent combiningComponent, out InteractionType interactionType, out List<ItemMultiple> consumed)
		{
			interactionType = default(InteractionType);
			consumed = null;
		}

		public bool CanCombineItems(PositionComponent firstItem, PositionComponent secondItem)
		{
			return false;
		}

		public bool TryCombineItems(PositionComponent firstItem, PositionComponent secondItem, IItemsCombiner.OnItemsCombined callback)
		{
			return false;
		}

		public void ResetCombine()
		{
		}

		public void OnItemsConsumed(InteractionComponent interactionComponent)
		{
		}
	}
}
