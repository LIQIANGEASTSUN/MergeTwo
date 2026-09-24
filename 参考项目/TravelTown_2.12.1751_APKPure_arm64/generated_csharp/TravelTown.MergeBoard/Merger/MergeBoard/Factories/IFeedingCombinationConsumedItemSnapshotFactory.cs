using ContextualizedECS;
using Merger.MergeBoard.Data;

namespace Merger.MergeBoard.Factories
{
	public interface IFeedingCombinationConsumedItemSnapshotFactory
	{
		FeedingCombinationConsumedItemSnapshot CreateFeedingCombinationConsumedItemSnapshot(Entity entity);
	}
}
