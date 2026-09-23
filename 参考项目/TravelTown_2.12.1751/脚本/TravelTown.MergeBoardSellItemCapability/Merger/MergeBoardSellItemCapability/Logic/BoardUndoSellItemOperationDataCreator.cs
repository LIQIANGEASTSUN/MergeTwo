using System.Collections.Generic;
using ContextualizedECS.Context;
using Merger.MergeBoard.Data.Payload;
using Merger.MergeBoard.Logic.BoardOperations;

namespace Merger.MergeBoardSellItemCapability.Logic
{
	public class BoardUndoSellItemOperationDataCreator : BoardOperationDataCreator
	{
		public override string OperationType => null;

		public override List<MergeBoardItemNotificationData> CreateOperationData(TickArgs tickArgs)
		{
			return null;
		}
	}
}
