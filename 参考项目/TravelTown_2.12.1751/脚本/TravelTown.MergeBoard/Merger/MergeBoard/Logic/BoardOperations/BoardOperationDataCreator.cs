using System;
using System.Collections.Generic;
using ContextualizedECS.Context;
using Merger.MergeBoard.Data.Payload;
using Zenject;

namespace Merger.MergeBoard.Logic.BoardOperations
{
	public abstract class BoardOperationDataCreator : IBoardOperationDataCreator
	{
		[Inject]
		[NonSerialized]
		public IBoardOperationActionsBuilder OperationActionsBuilder;

		public abstract string OperationType { get; }

		public abstract List<MergeBoardItemNotificationData> CreateOperationData(TickArgs tickArgs);

		public BoardOperationDataCreator()
		{
		}
	}
}
