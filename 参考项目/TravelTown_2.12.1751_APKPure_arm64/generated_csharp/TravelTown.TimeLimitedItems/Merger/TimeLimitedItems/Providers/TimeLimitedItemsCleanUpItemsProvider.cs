using System;
using System.Collections.Generic;
using ContextualizedECS;
using MergeEngine.Model.Configuration;
using Merger.MergeBoard.Models;
using Merger.MergeBoardQueue.Data;
using Merger.MergeBoardQueue.Models;
using Zenject;

namespace Merger.TimeLimitedItems.Providers
{
	public class TimeLimitedItemsCleanUpItemsProvider : ITimeLimitedItemsCleanUpItemsProvider
	{
		[Inject]
		[NonSerialized]
		public IMergeBoardModel _mergeBoardModel;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IBoardQueueModel _boardQueueModel;

		public List<Entity> GetBoardEntitiesToDestroy(HashSet<string> graphIds)
		{
			return null;
		}

		public List<QueuedItem> GetQueuedItemsToDestroy(HashSet<string> graphIds)
		{
			return null;
		}
	}
}
