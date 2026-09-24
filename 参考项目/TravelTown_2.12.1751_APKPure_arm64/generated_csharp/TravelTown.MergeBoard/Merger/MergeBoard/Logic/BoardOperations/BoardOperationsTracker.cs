using System;
using System.Collections.Generic;
using ContextualizedECS.Context;
using Merger.MergeBoard.Services;
using Zenject;

namespace Merger.MergeBoard.Logic.BoardOperations
{
	public class BoardOperationsTracker : IBoardControllerPostTickProcessor
	{
		[Inject]
		[NonSerialized]
		public IMergeBoardOperationTrackingService _operationTrackingService;

		[Inject]
		[NonSerialized]
		public IBoardOperationDataCreator[] _operations;

		public void Process(TickArgs result)
		{
		}

		public Dictionary<string, string> GetOperationsMetadata(TickArgs result)
		{
			return null;
		}
	}
}
