using System;
using System.Collections.Generic;
using MergeEngine.Configuration;
using MergeEngine.ECS.Components;
using MergeEngine.ECS.Components.Board;
using MergeEngine.ECS.Util;
using MergeEngine.Model.Configuration;
using Zenject;

namespace Merger.Bubbles.Modifiers
{
	public class ChainRelationsProbabilityModifier : BubbleDropProbabilityModifierBase
	{
		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[InjectComponent]
		[NonSerialized]
		public BoardItemCountComponent _itemCountComponent;

		[InjectComponent]
		[NonSerialized]
		public InventoryItemCountComponent _inventoryItemCountComponent;

		[NonSerialized]
		public Dictionary<IMergeGraphItem, List<IMergeGraphItem>> _consumersToConsumablesCache;

		[NonSerialized]
		public Dictionary<IMergeGraphItem, IMergeItem> _consumablesToConsumersCache;

		public override bool IsEnabled => false;

		public override string AnalyticsString => null;

		public override void TryModifyProbability(ref float probability, IMergeItem mergeItem, SmarterBubblesCheatData cheatData = null)
		{
		}

		public bool TryCalculateProbabilityForConsumer(ref float probability, IMergeItem consumer, SmarterBubblesCheatData cheatData)
		{
			return false;
		}

		public void TryCalculateProbabilityForConsumable(ref float probability, IMergeItem consumableItem, SmarterBubblesCheatData cheatData)
		{
		}

		public List<IMergeGraphItem> GetConsumables(IMergeItem mergeItem)
		{
			return null;
		}

		public IMergeItem GetConsumer(IMergeItem mergeItem)
		{
			return null;
		}

		public int GetLastItemsCount(IMergeItem mergeItem, bool countLastItemInGraphAsBeforeMerge = false)
		{
			return 0;
		}

		public void ModifyProbability(ref float probability, int diff, SmarterBubblesCheatData cheatData)
		{
		}
	}
}
