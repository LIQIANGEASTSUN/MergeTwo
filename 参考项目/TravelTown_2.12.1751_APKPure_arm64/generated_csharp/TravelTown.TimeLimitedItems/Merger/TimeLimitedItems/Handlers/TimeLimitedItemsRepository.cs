using Framework.Core.Services.Backend.Data.Payload;
using Framework.Core.Services.Backend.Repositories;
using strange.extensions.promise.api;

namespace Merger.TimeLimitedItems.Handlers
{
	public class TimeLimitedItemsRepository : RepositoryBase, ITimeLimitedItemsRepository
	{
		public const string Topic = "limitedItems";

		public const string CleanupAction = "cleanup";

		public IPromise RequestCleanup(string eventId, OperationNotificationData[] boardOperations)
		{
			return null;
		}
	}
}
