using System.Collections.Generic;
using strange.extensions.promise.api;

namespace Merger.TimeLimitedItems.Handlers
{
	public interface ITimeLimitedItemsBoardMiniGameCleanUpHandler
	{
		IPromise CleanUp(string eventId, HashSet<string> graphIds);
	}
}
