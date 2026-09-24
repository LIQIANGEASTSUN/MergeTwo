using System;
using Framework.Core;
using MergeEngine.Configuration;
using MergeEngine.Model;
using MergeEngine.Model.Collection;
using Merger.Game.Model;
using Zenject;

namespace Merger.MergeBoard.Handlers
{
	public class ItemsCollectionHandler : Base, IItemsCollectionHandler
	{
		[Inject]
		[NonSerialized]
		public IPlayerItemsCollectionModel _playerItemsCollectionModel;

		[Inject]
		[NonSerialized]
		public IMergeItemStateChangedModel _mergeItemStateChangedModel;

		[Inject]
		[NonSerialized]
		public IGameSessionModel _gameSessionModel;

		public void ReportItemDiscovered(IMergeItem item)
		{
		}

		public void ReportItemCreated(IMergeItem item)
		{
		}
	}
}
