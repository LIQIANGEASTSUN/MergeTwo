using strange.extensions.promise.api;

namespace Merger.MergeBoard.View
{
	public interface IMergeBoardTransitionHandler
	{
		IPromise RunTransition(string eventId);
	}
}
