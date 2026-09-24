using System;
using System.Collections.Generic;
using Framework.Core;
using Merger.MergeBoard.Controller;
using Merger.MergeBoardQueue.Data;
using Merger.MergeBoardQueue.Models;
using Merger.TimeLimitedItems.Providers;
using Zenject;
using strange.extensions.promise.api;

namespace Merger.TimeLimitedItems.Handlers
{
	public class TimeLimitedItemsBoardMiniGameCleanUpHandler : Base, ITimeLimitedItemsBoardMiniGameCleanUpHandler
	{
		[Inject]
		[NonSerialized]
		public ITimeLimitedItemsCleanUpItemsProvider _itemsProvider;

		[Inject]
		[NonSerialized]
		public ITimeLimitedItemsDestroyOperationsBuilder _operationsBuilder;

		[Inject]
		[NonSerialized]
		public ITimeLimitedItemsRepository _timeLimitedItemsRepository;

		[Inject]
		[NonSerialized]
		public BoardController _boardController;

		[Inject]
		[NonSerialized]
		public IBoardQueueModel _boardQueueModel;

		public IPromise CleanUp(string eventId, HashSet<string> graphIds)
		{
			return null;
		}

		public void ExtractQueuedItems(List<QueuedItem> queuedItemsToDestroy)
		{
		}
	}
}
