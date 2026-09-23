using System;
using ContextualizedECS;
using Framework.Core.MVVM.ViewModel;
using MergeEngine.Configuration;
using MergeEngine.Model;
using MergeEngine.Model.Configuration;
using Merger.MergeBoardSellItemCapability.Models;
using Zenject;

namespace Merger.MergeBoardSellItemCapability.ViewModels
{
	public class UndoSellInfoBarModifierViewModel : ViewModelBase
	{
		[Inject(Optional = true)]
		[NonSerialized]
		public IMergeBoardUndoSellItemModel _undoSellItemModel;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IResourcesConfigurationModel _resourcesConfigurationModel;

		public bool TryGetItemAvailableToUndo(out Entity entity)
		{
			entity = null;
			return false;
		}

		public IMergeItem GetItemById(string itemId)
		{
			return null;
		}
	}
}
