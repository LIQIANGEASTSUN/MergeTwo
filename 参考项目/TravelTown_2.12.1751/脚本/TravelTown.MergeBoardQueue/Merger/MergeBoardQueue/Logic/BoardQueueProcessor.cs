using System;
using ContextualizedECS;
using ContextualizedECS.Context;
using Framework.Core.Services.ServerTime;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Model;
using Merger.Game.Model;
using Merger.MergeBoard.Logic;
using Merger.MergeBoardQueue.Models;
using Merger.MergeBoardQueue.Services;
using Zenject;

namespace Merger.MergeBoardQueue.Logic
{
	public class BoardQueueProcessor : IBoardControllerPostTickProcessor
	{
		[Inject]
		[NonSerialized]
		public IBoardQueueModel _boardQueueModel;

		[Inject]
		[NonSerialized]
		public IResourcesModel _resourcesModel;

		[Inject]
		[NonSerialized]
		public IMergeBoardQueueOperationTrackingService _mergeBoardQueueOperationTrackingService;

		[Inject]
		[NonSerialized]
		public IServerTimeService _serverTimeService;

		public long CurrentServerTimeMS => 0L;

		public void Process(TickArgs result)
		{
		}

		public void DequeueFinished()
		{
		}

		public void GrantSellPriceResource(string itemId, PlayerResourceEnum resource, int amount)
		{
		}

		public void Enqueue(Entity entity, IMergeItem mergeItem, ResourceSource source)
		{
		}
	}
}
