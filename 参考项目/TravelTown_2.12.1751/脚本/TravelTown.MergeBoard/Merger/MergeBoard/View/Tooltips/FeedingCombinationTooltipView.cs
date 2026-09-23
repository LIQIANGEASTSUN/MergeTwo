using System;
using System.Collections.Generic;
using Framework.Core.View.ReactiveComponents;
using Framework.UIFSM.View;
using MergeEngine.Configuration.Definitions.WeakReferences.References;
using Merger.Game.Views.Popups;
using Merger.MergeBoard.Data;
using Merger.UI.Tooltips;
using UnityEngine;

namespace Merger.MergeBoard.View.Tooltips
{
	public class FeedingCombinationTooltipView : TooltipView, IViewWithPayload<FeedingCombinationTooltipData>
	{
		[SerializeField]
		public ReactiveButton _combinationsButton;

		[SerializeField]
		public GameObject _comboText;

		[SerializeField]
		public CombinationItemView _combinationItemPrefab;

		[SerializeField]
		public RectTransform _itemsContainer;

		[NonSerialized]
		public FeedingCombinationTooltipData _data;

		[NonSerialized]
		public List<CombinationItemView> _items;

		public void SetPayload(FeedingCombinationTooltipData payload)
		{
		}

		public void SetupRequiredItems()
		{
		}

		public void SetupSingleCombinationInProgress()
		{
		}

		public void SetupMultipleCombinationsInProgress()
		{
		}

		public List<MergeItemWeakReference> BuildMatchedItemsList(List<MergeItemWeakReference> itemsToConsume)
		{
			return null;
		}

		public bool ShouldIncludeItemInMatches(MergeItemWeakReference item, List<MergeItemWeakReference> matchedItems)
		{
			return false;
		}

		public bool IsItemConsistentInAllCombinations(MergeItemWeakReference item)
		{
			return false;
		}

		public int GetConsumedItemCount(MergeItemWeakReference item)
		{
			return 0;
		}

		public int GetCreatedItemCount(MergeItemWeakReference item, List<MergeItemWeakReference> matchedItems)
		{
			return 0;
		}

		public void SetupItemsFromMatchedList(List<MergeItemWeakReference> matchedItems)
		{
		}

		public void HandleEmptyMatchedItemsFallback(List<MergeItemWeakReference> matchedItems, List<MergeItemWeakReference> itemsToConsume)
		{
		}

		public void SetupPotentialCombinations()
		{
		}

		public void SetupSinglePotentialCombination()
		{
		}

		public void SetupMultiplePotentialCombinations()
		{
		}

		public void SetupItem(bool isLast, MergeItemWeakReference item)
		{
		}

		public void SetupCombinationButton()
		{
		}
	}
}
