using System.Collections.Generic;
using ContextualizedECS;
using ContextualizedECS.Context;
using Merger.MergeBoard.Data.Payload;
using Merger.MergeBoard.Logic.BoardOperations;

namespace Merger.MergeBoardQueue.Logic.BoardOperations
{
	public class BoardQueueOperationDataCreator : BoardOperationDataCreator
	{
		public override string OperationType => null;

		public override List<MergeBoardItemNotificationData> CreateOperationData(TickArgs tickArgs)
		{
			return null;
		}

		public void BuildDequeueActions(Entity entity, string uuidInBoardQueue)
		{
		}
	}
}
