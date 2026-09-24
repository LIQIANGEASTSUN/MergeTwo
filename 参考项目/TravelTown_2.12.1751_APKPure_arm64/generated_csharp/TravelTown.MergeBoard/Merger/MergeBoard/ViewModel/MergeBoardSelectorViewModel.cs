using System;
using ContextualizedECS;
using Framework.Core.MVVM.ViewModel;
using MergeEngine.Configuration;
using MergeEngine.ECS.Components.Items;
using MergeEngine.Model.Configuration;
using Merger.Game.Data;
using Merger.Game.Views;
using Merger.MergeBoard.Models;
using Merger.MergeBoard.View.Layout;
using UnityEngine;
using Zenject;

namespace Merger.MergeBoard.ViewModel
{
	public class MergeBoardSelectorViewModel : ViewModelBase
	{
		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IMergeBoardModel _mergeBoardModel;

		[Inject]
		[NonSerialized]
		public IMergeBoardLayout _boardLayout;

		[Inject]
		[NonSerialized]
		public IMergeBoardSelectedItemModel _mergeBoardSelectedItemModel;

		public void ClearSelectedItem()
		{
		}

		public void SetSelectedItem(Entity entity)
		{
		}

		public SelectorMode GetSelectorMode(IVisualComponent visualComponent)
		{
			return default(SelectorMode);
		}

		public Entity GetEntityAtPosition(int position)
		{
			return null;
		}

		public RectTransform GetTransformByPosition(int position)
		{
			return null;
		}

		public int GetPositionIndex(IBoardItemView itemView)
		{
			return 0;
		}

		public IMergeItem GetMergeItem(Entity entity)
		{
			return null;
		}
	}
}
