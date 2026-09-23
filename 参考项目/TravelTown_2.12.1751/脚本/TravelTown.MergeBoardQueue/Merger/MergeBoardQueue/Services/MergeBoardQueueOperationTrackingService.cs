using System;
using ContextualizedECS;
using Framework.Core.Services;
using MergeEngine.Configuration;
using Merger.MergeBoard.Services;
using Merger.MergeBoardQueue.Models;
using Zenject;

namespace Merger.MergeBoardQueue.Services
{
	public class MergeBoardQueueOperationTrackingService : ServiceBase, IMergeBoardQueueOperationTrackingService, IMergeBoardQueueOperationTrackingCheatService
	{
		[Inject]
		[NonSerialized]
		public IMergeBoardOperationTrackingService _operationTrackingService;

		[Inject]
		[NonSerialized]
		public IBoardQueueModel _boardQueueModel;

		public void TrackEnqueueItemOperation(IMergeItem mergeItem, string uuidInBoardQueue, long enqueueTimestamp)
		{
		}

		public void TrackEnqueueItemOperation(Entity entity, IMergeItem mergeItem)
		{
		}

		public void TrackEnqueueItemOperationFromUndoSell(Entity entity, IMergeItem mergeItem)
		{
		}

		public void SendOperation(Entity entity, IMergeItem mergeItem, string operationType)
		{
		}
	}
}
