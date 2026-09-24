using System;
using System.Collections.Generic;
using ContextualizedECS;
using Framework.Core.MVVM.ViewModel;
using MergeEngine.Configuration;
using MergeEngine.Model.Configuration;
using Merger.Game.Views.Popups.Data;
using Merger.MergeBoard.Controller;
using Merger.MergeBoard.Data;
using Merger.MergeBoard.Logic.CombineValidators;
using Merger.MergeBoard.Models;
using Merger.MergeBoard.View.Layout;
using Zenject;

namespace Merger.MergeBoard.ViewModel
{
	public class MergeBoardViewModel : ViewModelBase
	{
		[Inject]
		[NonSerialized]
		public BoardController _boardController;

		[Inject]
		[NonSerialized]
		public IItemCombinerValidator[] _itemCombinerValidators;

		[Inject]
		[NonSerialized]
		public IActiveTilesModel _activeTilesModel;

		[Inject]
		[NonSerialized]
		public ITileConfigurationModel _tileConfigurationModel;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IMergeBoardModel _mergeBoardModel;

		[Inject]
		[NonSerialized]
		public IMergeBoardLayout _boardLayout;

		public IEnumerable<int> PlayableTiles => null;

		public IEnumerable<Entity> Entities => null;

		public bool HasTileConfiguration(int tileIndex)
		{
			return false;
		}

		public void MoveItem(int from, int to)
		{
		}

		public void HandleTap(int itemPosition)
		{
		}

		public bool CanCombineItems(Entity draggedEntity, Entity otherEntity, out IItemCombinerValidator validator)
		{
			validator = null;
			return false;
		}

		public bool TryGetItemCombinerVisualPresentation(IItemCombinerValidator validator, out IItemCombinerVisualPresentation visualPresentation)
		{
			visualPresentation = null;
			return false;
		}

		public void CompleteCombinationVerification(bool isSuccess, int firstPosition, int secondPosition, MergeCheckItemType checkItemType)
		{
		}

		public IItem GetItemById(string id)
		{
			return null;
		}

		public IItem GetMergeItem(Entity entity)
		{
			return null;
		}

		public void ExecuteInitializeAction()
		{
		}

		public bool IsItemGateway(Entity entity)
		{
			return false;
		}

		public string GetGatewayFloatingTextKey(Entity entity)
		{
			return null;
		}
	}
}
