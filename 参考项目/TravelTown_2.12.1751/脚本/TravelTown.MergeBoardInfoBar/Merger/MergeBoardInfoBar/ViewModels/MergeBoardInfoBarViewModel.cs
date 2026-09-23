using System;
using ContextualizedECS;
using Framework.Core.MVVM.ViewModel;
using MergeEngine.Configuration;
using MergeEngine.Model.Configuration;
using Merger.MergeBoard.Models;
using Merger.MergeBoardInfoBar.Logic.ItemInfoPopup;
using Zenject;

namespace Merger.MergeBoardInfoBar.ViewModels
{
	public class MergeBoardInfoBarViewModel : ViewModelBase
	{
		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IMergeBoardSelectedItemModel _mergeBoardSelectedItemModel;

		[Inject]
		[NonSerialized]
		public IMergeBoardItemInfoPopupHandler _itemInfoPopupHandler;

		public Entity SelectedEntity => null;

		public IMergeItem SelectedMergeItem => null;

		public IMergeItem GetNextMergeItem(IMergeItem item)
		{
			return null;
		}

		public void OnInfoButtonClicked(string reason)
		{
		}
	}
}
