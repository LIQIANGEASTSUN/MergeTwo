using System.Collections.Generic;
using ContextualizedECS;
using ContextualizedECS.Context;
using Merger.MergeBoard.Data.Payload;

namespace Merger.MergeBoard.Logic.BoardOperations
{
	public class BoardInteractionOperationDataCreator : BoardOperationDataCreator
	{
		public override string OperationType => null;

		public override List<MergeBoardItemNotificationData> CreateOperationData(TickArgs tickArgs)
		{
			return null;
		}

		public HashSet<Entity> GetCollectedEntities(TickArgs tickArgs)
		{
			return null;
		}
	}
}
