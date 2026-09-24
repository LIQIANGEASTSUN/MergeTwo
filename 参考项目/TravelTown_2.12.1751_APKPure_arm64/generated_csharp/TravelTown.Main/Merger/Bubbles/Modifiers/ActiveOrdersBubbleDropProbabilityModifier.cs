using System;
using System.Collections.Generic;
using MergeEngine.Configuration;
using MergeEngine.ECS.Components.Orders;
using MergeEngine.ECS.Util;
using Merger.Bubbles.Model;
using Merger.ItemsRelations.Model;
using Merger.Services.MergeGraphChain;
using Zenject;

namespace Merger.Bubbles.Modifiers
{
	public class ActiveOrdersBubbleDropProbabilityModifier : BubbleDropProbabilityModifierBase
	{
		[InjectComponent]
		[NonSerialized]
		public OrdersComponent _ordersComponent;

		[Inject]
		[NonSerialized]
		public IMergeGraphChainModel _mergeGraphChainModel;

		[Inject]
		[NonSerialized]
		public ISmarterBubblesAnalyticsModel _analyticsModel;

		[Inject]
		[NonSerialized]
		public IItemsRelationsModel _itemsRelationsModel;

		[Inject]
		[NonSerialized]
		public ISmarterBubblesActiveOrdersChainsModel _activeOrdersChainsModel;

		[NonSerialized]
		public bool _shouldUseItemsRelations;

		public override bool IsEnabled => false;

		public override string AnalyticsString => null;

		public float ActiveOrdersBoostValue => 0f;

		public HashSet<OrderData> Objectives => null;

		public override void Initialize()
		{
		}

		public override void Reset()
		{
		}

		public override void TryModifyProbability(ref float probability, IMergeItem mergeItem, SmarterBubblesCheatData cheatData = null)
		{
		}

		public HashSet<ChainData> GetRelatedGraphs(HashSet<OrderData> objectives, bool shouldUseItemsRelations)
		{
			return null;
		}
	}
}
