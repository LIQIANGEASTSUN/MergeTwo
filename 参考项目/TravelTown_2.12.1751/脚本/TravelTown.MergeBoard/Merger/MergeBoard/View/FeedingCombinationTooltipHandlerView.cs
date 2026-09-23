using System;
using ContextualizedECS;
using Framework.Core.MVVM.View;
using Merger.Game.Views;
using Merger.MergeBoard.Data;
using Merger.MergeBoard.View.Items;
using Merger.MergeBoard.ViewModel;
using UnityEngine;

namespace Merger.MergeBoard.View
{
	public class FeedingCombinationTooltipHandlerView : ViewBase<FeedingCombinationTooltipHandlerViewModel>
	{
		[SerializeField]
		public MergeBoardItemsContainer _itemsContainer;

		[NonSerialized]
		public bool _isCombinationsPopupOpen;

		[NonSerialized]
		public IBoardItemView _itemDisplayedInCombinationsPopup;

		public void Start()
		{
		}

		public override void OnDestroy()
		{
		}

		public void SubscribeToModelEvents()
		{
		}

		public void UnsubscribeFromModelEvents()
		{
		}

		public void OnItemAdded(IBoardItemView itemView)
		{
		}

		public void OnItemRemoved(IBoardItemView itemView)
		{
		}

		public void SubscribeToViewEvents()
		{
		}

		public void SubscribeToItemEvents(IBoardItemView boardItemView)
		{
		}

		public void UnsubscribeToViewEvents()
		{
		}

		public void UnsubscribeFromItemEvents(IBoardItemView boardItemView)
		{
		}

		public void OpenFeedingCombinationTooltip(IBoardItemView boardItemView)
		{
		}

		public void OnCombinationsPopupClose(IBoardItemView boardItemView, Entity entity)
		{
		}

		public void ExtractItem(Entity feedingCombinationEntity, string itemId)
		{
		}

		public void OpenFeedingCombinationsPopup(IBoardItemView boardItemView, FeedingCombinationsPopupPayload payload)
		{
		}
	}
}
