using System.Collections.Generic;
using ContextualizedECS.Context;
using Merger.MergeBoard.Data.Payload;

namespace Merger.MergeBoard.Logic.BoardOperations
{
	public class BoardExpendOperationDataCreator : BoardOperationDataCreator
	{
		public override string OperationType => null;

		public override List<MergeBoardItemNotificationData> CreateOperationData(TickArgs tickArgs)
		{
			return null;
		}
	}
}
