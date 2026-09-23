using System;
using Framework.Core.Services.Backend.Remote.Payloads.BoardState;
using MergeEngine.Model.Board;
using Zenject;

namespace MergeEngine.ECS.Systems.State.Board.Event
{
	public class EventBoardQueueStateSystem : BoardQueueStateSystem<EventBoardQueueBackendState>
	{
		[Inject]
		[NonSerialized]
		public IBoardEventQueueModel _boardEventQueueModel;

		public override bool ShouldLoadStateForDomain()
		{
			return false;
		}

		public override void LoadState(EventBoardQueueBackendState boardQueueBackendState)
		{
		}
	}
}
