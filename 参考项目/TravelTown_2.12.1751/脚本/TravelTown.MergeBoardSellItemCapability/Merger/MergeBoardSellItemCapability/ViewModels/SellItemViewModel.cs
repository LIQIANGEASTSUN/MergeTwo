using System;
using ContextualizedECS;
using Framework.Core.DataBinding;
using Framework.Core.MVVM.ViewModel;
using MergeEngine.Configuration;
using MergeEngine.Model;
using MergeEngine.Model.Configuration;
using Merger.Game.Model;
using Merger.MergeBoard.Controller;
using Merger.MergeBoard.Models;
using Merger.MergeBoard.View.Layout;
using Merger.MergeBoardSellItemCapability.Logic;
using Merger.MergeBoardSellItemCapability.Models;
using UnityEngine;
using Zenject;

namespace Merger.MergeBoardSellItemCapability.ViewModels
{
	public class SellItemViewModel : ViewModelBase
	{
		[Inject]
		[NonSerialized]
		public IMergeBoardSelectedItemModel _mergeBoardSelectedItemModel;

		[Inject]
		[NonSerialized]
		public IMergeBoardLayout _boardLayout;

		[Inject]
		[NonSerialized]
		public ISellItemEligibilityValidator _sellItemEligibilityValidator;

		[Inject]
		[NonSerialized]
		public BoardController _boardController;

		[Inject]
		[NonSerialized]
		public IMergeBoardUndoSellItemModel _undoSellItemModel;

		[Inject]
		[NonSerialized]
		public IResourcesModel _resourcesModel;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		public BindableProperty<(Entity, IMergeItem)> SelectedItem => null;

		public Entity SelectedEntity => null;

		public IMergeItem SelectedMergeItem => null;

		public Entity ItemAvailableToUndo => null;

		public bool CanBeSold(Entity entity)
		{
			return false;
		}

		public RectTransform GetEntityRectTransform(Entity entity)
		{
			return null;
		}

		public void SellItem(Entity entity)
		{
		}

		public void SetItemAvailableToUndo(Entity entity)
		{
		}

		public void ClearUndoSellItem()
		{
		}

		public bool CanAffordUndoSellPrice(Entity entity)
		{
			return false;
		}

		public void ConsumeUndoSellPrice(string itemId, PlayerResourceEnum resource, int amount)
		{
		}

		public void UndoSell(Entity entity)
		{
		}

		public void GrantSellPriceResource(string itemId, PlayerResourceEnum resource, int amount)
		{
		}
	}
}
