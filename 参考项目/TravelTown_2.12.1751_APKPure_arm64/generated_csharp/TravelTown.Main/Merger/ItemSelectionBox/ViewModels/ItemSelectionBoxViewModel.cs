using System;
using System.Collections.Generic;
using Framework.Core.Assets;
using Framework.Core.DataBinding.Collections;
using MergeEngine.Configuration;
using MergeEngine.Data;
using MergeEngine.Model.Configuration;
using Merger.Game.ViewModel;
using Merger.ItemSelectionBox.Models;
using Zenject;

namespace Merger.ItemSelectionBox.ViewModels
{
	public class ItemSelectionBoxViewModel : GameBaseViewModel
	{
		[NonSerialized]
		public readonly IAsset MergeGraphPopupAsset;

		[Inject]
		[NonSerialized]
		public ItemSelectionBoxConfigurationModel _itemSelectionBoxConfigurationModel;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		public ObservableDictionary<string, List<IMergeItem>> SelectionItems => null;

		public void SelectItem(string fromUniqueId, string toUniqueId, BoardItemPosition boardItemPosition)
		{
		}

		public virtual void TransitionToMergeGraph(IMergeItem mergeItem)
		{
		}

		public bool TryGetMergeItems(string uuid, out List<IMergeItem> mergeItems)
		{
			mergeItems = null;
			return false;
		}

		public float GetDiffScore(string itemId)
		{
			return 0f;
		}
	}
}
