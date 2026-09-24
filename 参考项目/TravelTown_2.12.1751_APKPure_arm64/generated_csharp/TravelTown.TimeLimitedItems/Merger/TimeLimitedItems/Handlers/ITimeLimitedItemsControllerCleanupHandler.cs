using System;
using Merger.TimeLimitedItems.Data;

namespace Merger.TimeLimitedItems.Handlers
{
	public interface ITimeLimitedItemsControllerCleanupHandler
	{
		void CleanUp(TimeLimitedItemsEventData eventData, Action onCompleted);
	}
}
