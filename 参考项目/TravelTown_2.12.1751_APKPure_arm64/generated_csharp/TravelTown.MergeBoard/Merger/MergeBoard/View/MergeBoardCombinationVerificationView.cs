using System;
using ContextualizedECS;
using ContextualizedECS.Context;
using Framework.Core.MVVM.View;
using MergeEngine.Data;
using Merger.Game.Views;
using Merger.Game.Views.Popups.Data;
using Merger.MergeBoard.Data.TickResultArgs;
using Merger.MergeBoard.View.Items;
using Merger.MergeBoard.View.Layout;
using Merger.MergeBoard.ViewModel;
using UnityEngine;

namespace Merger.MergeBoard.View
{
	public class MergeBoardCombinationVerificationView : ViewBase<MergeBoardViewModel>
	{
		[SerializeField]
		public MergeBoardLayout _layout;

		[SerializeField]
		public MergeBoardItemsContainer _itemsContainer;

		[NonSerialized]
		public bool _isPopupOpen;

		[NonSerialized]
		public IBoardItemView _item1DisplayedInPopup;

		[NonSerialized]
		public IBoardItemView _item2DisplayedInPopup;

		[NonSerialized]
		public PendingItemsCombinationResult _pendingCombinationResult;

		public void Start()
		{
		}

		public override void OnDestroy()
		{
		}

		public void ConfirmCombination(TickArgs boardResult)
		{
		}

		public void OpenVerifyCombinationPopup(PendingItemsCombinationResult result)
		{
		}

		public void OnItemRemoved(IBoardItemView boardItemView)
		{
		}

		public BoardItemPosition GetBoardItemPosition(Entity entity)
		{
			return default(BoardItemPosition);
		}

		public void OnVerifyCombinationFailed(Entity firstItem, Entity secondItem, MergeCheckItemType checkType)
		{
		}

		public void OnVerifyCombinationSuccess(BoardItemPosition firstItemPosition, BoardItemPosition secondItemPosition, MergeCheckItemType checkType)
		{
		}

		public void OnPopupOpened(PendingItemsCombinationResult result)
		{
		}

		public void OnPopupClosed()
		{
		}
	}
}
