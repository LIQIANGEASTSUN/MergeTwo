using Framework.Core.Services.Backend.Data.Payload;
using strange.extensions.promise.api;

namespace Merger.TimeLimitedItems.Handlers
{
	public interface ITimeLimitedItemsRepository
	{
		IPromise RequestCleanup(string eventId, OperationNotificationData[] boardOperations);
	}
}
