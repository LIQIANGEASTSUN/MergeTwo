using System;
using System.Collections.Generic;
using ContextualizedECS;
using Framework.Core.Services.Backend.Data.Payload;
using Merger.MergeBoard.Data.Payload;
using Merger.MergeBoard.Logic.BoardOperations;
using Merger.MergeBoard.Services;
using Merger.MergeBoardQueue.Data;
using Zenject;

namespace Merger.TimeLimitedItems.Handlers
{
	public class TimeLimitedItemsDestroyOperationsBuilder : ITimeLimitedItemsDestroyOperationsBuilder
	{
		[Inject]
		[NonSerialized]
		public IBoardOperationActionsBuilder _boardOperationActionsBuilder;

		[Inject]
		[NonSerialized]
		public IMergeBoardOperationTrackingService _operationTrackingService;

		public OperationNotificationData[] Build(List<Entity> entitiesToDestroy, List<QueuedItem> queuedItemsToDestroy)
		{
			return null;
		}

		public List<MergeBoardItemNotificationData> BuildBoardItemNotificationData(List<Entity> entities)
		{
			return null;
		}

		public List<MergeBoardItemNotificationData> BuildQueueItemNotificationData(List<QueuedItem> queuedItems)
		{
			return null;
		}
	}
}
