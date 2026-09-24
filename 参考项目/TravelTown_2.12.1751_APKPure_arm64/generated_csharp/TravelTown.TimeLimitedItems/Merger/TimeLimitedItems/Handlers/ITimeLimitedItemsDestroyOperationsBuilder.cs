using System.Collections.Generic;
using ContextualizedECS;
using Framework.Core.Services.Backend.Data.Payload;
using Merger.MergeBoardQueue.Data;

namespace Merger.TimeLimitedItems.Handlers
{
	public interface ITimeLimitedItemsDestroyOperationsBuilder
	{
		OperationNotificationData[] Build(List<Entity> entitiesToDestroy, List<QueuedItem> queuedItemsToDestroy);
	}
}
