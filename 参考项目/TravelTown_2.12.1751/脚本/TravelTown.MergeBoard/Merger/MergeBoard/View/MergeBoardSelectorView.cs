using System;
using Framework.Core.MVVM.View;
using Merger.Game.Views;
using Merger.Game.Views.Components;
using Merger.MergeBoard.View.Items;
using Merger.MergeBoard.ViewModel;
using UnityEngine;

namespace Merger.MergeBoard.View
{
	public class MergeBoardSelectorView : ViewBase<MergeBoardSelectorViewModel>
	{
		[SerializeField]
		public SelectorView _selector;

		[SerializeField]
		public MergeBoardItemsContainer _itemsContainer;

		[NonSerialized]
		public IBoardItemView _selectedItem;

		public bool IsItemSelected(IBoardItemView itemView)
		{
			return false;
		}

		public void Show()
		{
		}

		public void Hide()
		{
		}

		public void SetSelectedItem(IBoardItemView itemView)
		{
		}

		public void SetSelectedItem(int position)
		{
		}

		public void ClearSelection()
		{
		}

		public void RemoveSelectorFromItem(IBoardItemView itemToRemove)
		{
		}

		public bool TryGetItemViewOnSamePosition(IBoardItemView removedItemView, out IBoardItemView boardItemView)
		{
			boardItemView = null;
			return false;
		}

		public void ShowSelectorAt(IBoardItemView boardItem, RectTransform tileTransform)
		{
		}
	}
}
