using System.Collections.Generic;
using ContextualizedECS.Context;
using Merger.MergeBoard.Data.Payload;

namespace Merger.MergeBoard.Logic.BoardOperations
{
	public interface IBoardOperationDataCreator
	{
		string OperationType { get; }

		List<MergeBoardItemNotificationData> CreateOperationData(TickArgs tickArgs);
	}
}
