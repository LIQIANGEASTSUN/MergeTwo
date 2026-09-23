using Framework.Core.DataBinding;
using Framework.Core.Services.Backend.Remote.Payloads.BoardState;

namespace MergeEngine.Model.Board
{
	public interface IBoardEventQueueModel
	{
		BindableProperty<int> BoardEventQueueCount { get; }

		void SetBoardEventQueue(BoardQueueBackendState boardEventQueueState);
	}
}
