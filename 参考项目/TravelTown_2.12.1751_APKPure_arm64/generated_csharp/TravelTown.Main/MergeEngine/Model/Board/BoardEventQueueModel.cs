using System;
using Framework.Core.DataBinding;
using Framework.Core.MVVM.Model;
using Framework.Core.Services.Backend.Remote.Payloads.BoardState;
using MergeEngine.ECS.Systems;
using MergeEngine.ECS.Systems.Board;
using Merger.Game.Model;
using Zenject;

namespace MergeEngine.Model.Board
{
	public class BoardEventQueueModel : ModelBase, IBoardEventQueueModel
	{
		[Inject]
		[NonSerialized]
		public IGameSessionModel _gameSessionModel;

		[Inject]
		[NonSerialized]
		public ISystemManager _systemManager;

		[NonSerialized]
		public MutableBindableProperty<int> _boardEventQueueCount;

		public BoardQueueSystem BoardQueueSystem => null;

		public BindableProperty<int> BoardEventQueueCount => null;

		public override void SubscribeToSignals()
		{
		}

		public override void UnsubscribeFromSignals()
		{
		}

		public void BoardEventClosed()
		{
		}

		public void SetBoardEventQueue(BoardQueueBackendState boardEventQueueState)
		{
		}
	}
}
