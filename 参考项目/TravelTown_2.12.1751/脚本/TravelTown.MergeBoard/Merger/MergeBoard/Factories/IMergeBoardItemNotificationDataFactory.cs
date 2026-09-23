using ContextualizedECS;
using Merger.MergeBoard.Data.Payload;

namespace Merger.MergeBoard.Factories
{
	public interface IMergeBoardItemNotificationDataFactory
	{
		T CreateFullItemNotification<T>(Entity entity, string action, string destination = null) where T : MergeBoardItemNotificationData, new();
	}
}
