using MergeEngine.Configuration;

namespace Merger.MergeBoardQueue.Services
{
	public interface IMergeBoardQueueOperationTrackingCheatService
	{
		void TrackEnqueueItemOperation(IMergeItem mergeItem, string uuidInBoardQueue, long enqueueTimestamp);
	}
}
