using System;
using System.Collections.Generic;
using ContextualizedECS;
using ContextualizedECS.Context;
using Framework.Core.Assets;
using Framework.UIFSM.Model.Navigation;
using MergeEngine.Configuration;
using MergeEngine.Data;
using MergeEngine.Model.Configuration;
using Merger.Game.ItemInfoData.Data;
using Merger.Game.ItemInfoData.Model;
using Merger.ItemSelectionBox.Models;
using Merger.ItemSelectionBox.Service;
using Merger.MergeBoard.Controller;
using Merger.MergeBoard.Logic.BoardOperations;
using Merger.MergeBoard.Services;
using Merger.MergeBoard.View.Layout;
using Merger.RemoteContentManager.Services;
using Zenject;

namespace Merger.MergeBoard.Logic
{
	public class ItemSelectionBoxPickHandler : IBoardControllerPostTickProcessor, IItemSelectionBoxPickHandler
	{
		[Inject]
		[NonSerialized]
		public INavigationModel _navigationModel;

		[Inject]
		[NonSerialized]
		public IMergeBoardLayout _layout;

		[Inject]
		[NonSerialized]
		public BoardController _boardController;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public ItemSelectionBoxConfigurationModel _itemSelectionBoxConfigurationModel;

		[Inject]
		[NonSerialized]
		public IItemInfoConfigurationModel _itemInfoConfigurationModel;

		[Inject]
		[NonSerialized]
		public IRemoteContentService _remoteContentService;

		[Inject]
		[NonSerialized]
		public IAssetOverrideMappingModel _assetOverrideMappingModel;

		[Inject]
		[NonSerialized]
		public ItemSelectionBoxRepository _itemSelectionBoxRepository;

		[Inject]
		[NonSerialized]
		public IBoardOperationActionsBuilder _boardOperationActionsBuilder;

		[Inject]
		[NonSerialized]
		public IMergeBoardOperationTrackingService _operationTrackingService;

		[Inject]
		[NonSerialized]
		public DiContainer _container;

		public void Process(TickArgs result)
		{
		}

		public void OpenItemSelectionBoxPopup(Entity entity, IMergeItem mergeItem, string uuid, int boardIndex)
		{
		}

		public void ShowPopup(IMergeItem mergeItem, BoardItemPosition boardItemPosition, string uuid, int itemsCount)
		{
		}

		public void GenerateContent(Entity entity, IMergeItem mergeItem, string uuid, string reason)
		{
		}

		public bool AreAllItemsAvailable(List<ItemSelectionBoxPredictedItem> predictedItems)
		{
			return false;
		}

		public void SendChangeStateOperation(Entity entity)
		{
		}
	}
}
