using ContextualizedECS.Context;
using Merger.MergeBoard.Data;
using strange.extensions.promise.api;

namespace Merger.MergeBoard.Handlers
{
	public interface IPostTickBoardItemAnimationHandler
	{
		bool CanHandle(TickArgs tickArgs);

		IPromise HandleAnimation(TickArgs tickArgs, PostTickBoardItemAnimationContext context);
	}
}
