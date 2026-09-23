using ContextualizedECS;
using MergeEngine.Configuration;

namespace Merger.MergeBoardQueue.Services
{
	public interface IMergeBoardQueueOperationTrackingService
	{
		void TrackEnqueueItemOperation(Entity entity, IMergeItem mergeItem);

		void TrackEnqueueItemOperationFromUndoSell(Entity entity, IMergeItem mergeItem);
	}
}
