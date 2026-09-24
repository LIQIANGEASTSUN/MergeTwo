using System;
using ContextualizedECS;
using Framework.Core.Services;
using Merger.MergeBoard.Data;
using Zenject;

namespace Merger.MergeBoard.Factories
{
	public class FeedingCombinationConsumedItemSnapshotFactory : IFeedingCombinationConsumedItemSnapshotFactory
	{
		[Inject]
		[NonSerialized]
		public IJsonService _jsonService;

		[Inject]
		[NonSerialized]
		public IMergeBoardItemNotificationDataFactory _mergeBoardItemNotificationDataFactory;

		public FeedingCombinationConsumedItemSnapshot CreateFeedingCombinationConsumedItemSnapshot(Entity entity)
		{
			return null;
		}
	}
}
