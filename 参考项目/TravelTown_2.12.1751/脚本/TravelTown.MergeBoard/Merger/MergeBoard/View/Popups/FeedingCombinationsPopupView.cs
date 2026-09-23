using System;
using Framework.Core.MVVM.ViewModel;
using Framework.UIFSM.View;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using Merger.Game.Views.Popups;
using Merger.MergeBoard.Data;
using UnityEngine;

namespace Merger.MergeBoard.View.Popups
{
	public class FeedingCombinationsPopupView : PopupAnimationGraphViewBase<ViewModelBase>, IViewWithPayload<FeedingCombinationsPopupPayload>
	{
		[SerializeField]
		public CombinationView _combinationPrefab;

		[SerializeField]
		public RectTransform _itemsContainer;

		[NonSerialized]
		public FeedingCombinationsPopupPayload _data;

		[NonSerialized]
		public bool _openTooltipOnClose;

		public void SetPayload(FeedingCombinationsPopupPayload payload)
		{
		}

		public void SetupItem(Combination combination)
		{
		}

		public bool IsItemLocked(IMergeItem item)
		{
			return false;
		}

		public override void OnStateExit()
		{
		}
	}
}
