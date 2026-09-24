using System;
using Framework.Core;
using Framework.Core.MVVM.Model.Actions;
using Merger.BoardMiniGameEvent.Compatibility.Model;
using Merger.BoardMiniGameEvent.Compatibility.Signals;
using Merger.Models;
using Merger.TimeLimitedItems.Data;
using Zenject;

namespace Merger.TimeLimitedItems.Handlers
{
	public class TimeLimitedItemsControllerCleanupHandler : Base, ITimeLimitedItemsControllerCleanupHandler
	{
		public enum CleanupState
		{
			NotStarted = 0,
			Initiated = 1,
			WaitingForBoardMiniGameStart = 2,
			WaitingForBoardMiniGameCleanUp = 3,
			InProgress = 4,
			Completed = 5
		}

		[Inject]
		[NonSerialized]
		public IActionsModel _actionsModel;

		[Inject]
		[NonSerialized]
		public ITimeLimitedItemsRepository _timeLimitedItemsRepository;

		[Inject]
		[NonSerialized]
		public IBoardMiniGameGlobalDataRegistry _boardMiniGameGlobalDataRegistry;

		[NonSerialized]
		public CleanupState _cleanupState;

		[NonSerialized]
		public IAction _cleanUpAction;

		[NonSerialized]
		public Action _onCompleted;

		[NonSerialized]
		public TimeLimitedItemsEventData _eventData;

		public bool HasConnectedActiveBoardMiniGame => false;

		public bool HasRelatedActivePendingBoardMiniGame => false;

		public void CleanUp(TimeLimitedItemsEventData eventData, Action onCompleted)
		{
		}

		public override void SubscribeToSignals()
		{
		}

		public override void UnsubscribeFromSignals()
		{
		}

		public void EvaluateCleanupInternal()
		{
		}

		public void StartGracefulCleanupWait()
		{
		}

		public void OnBoardMiniGameStarted(BoardMiniGameEventStartedSignal signal)
		{
		}

		public void OnBoardMiniGameEnded()
		{
		}

		public void PerformImmediateCleanUp()
		{
		}

		public void OnCleanUpCompleted()
		{
		}
	}
}
