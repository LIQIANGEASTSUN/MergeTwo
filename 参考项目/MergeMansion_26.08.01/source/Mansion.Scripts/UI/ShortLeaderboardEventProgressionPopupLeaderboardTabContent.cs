using System;
using Audio;
using Code.GameLogic.GameEvents;
using Common;
using Dialogue;
using GameLogic.Player;
using GameLogic.Player.Leaderboard.ShortLeaderboardEvent;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.Common.Rollbacks;
using Metacore.MergeMansion.UI.Libraries;
using Navigation;
using UnityEngine;

namespace UI
{
	public class ShortLeaderboardEventProgressionPopupLeaderboardTabContent : MonoBehaviour
	{
		[SerializeField]
		public ShortLeaderboardEventStageProgressionView stageProgressionView;

		[SerializeField]
		public ShortLeaderboardEventFinalRewardProgressBarSimple finalRewardProgressBar;

		[SerializeField]
		public ShortLeaderboardEventStageNotJoinedView stageNotJoinedView;

		[SerializeField]
		public ShortLeaderboardEventWaitingForOtherPlayersView waitingForOtherPlayersView;

		[SerializeField]
		public ShortLeaderboardEventStageJoinedView stageJoinedView;

		[SerializeField]
		public ShortLeaderboardEventStageEndedView stageEndedView;

		[SerializeField]
		public ShortLeaderboardEventStageReplayView stageReplayView;

		[NonSerialized]
		public PlayerModel _playerModel;

		[NonSerialized]
		public PlayerClientContext _playerContext;

		[NonSerialized]
		public ShortLeaderboardEventModel _eventModel;

		[NonSerialized]
		public IMenuController _menuController;

		[NonSerialized]
		public INavigationController _navigationController;

		[NonSerialized]
		public IDialogueController _dialogueController;

		[NonSerialized]
		public IAudioPlayer _audioPlayer;

		[NonSerialized]
		public IIconLibrary _iconLibrary;

		[NonSerialized]
		public IScheduler _scheduler;

		[NonSerialized]
		public ISafeRollback _rollback;

		public void Init(PlayerModel playerModel, PlayerClientContext playerContext, ShortLeaderboardEventModel eventModel, IMenuController menuController, INavigationController navigationController, IDialogueController dialogueController, IAudioPlayer audioPlayer, IIconLibrary iconLibrary, IScheduler scheduler, ISafeRollback rollback)
		{
		}

		public void TearDown()
		{
		}

		public void RefreshViews()
		{
		}

		public void RefreshStageProgressionView()
		{
		}

		public void RefreshFinalRewardProgressBar()
		{
		}

		public void InitStageEndedView(ShortLeaderboardEventStageId stageId)
		{
		}

		public void OnEnoughOtherPlayers(Option<ShortLeaderboardEventDivisionModel> divisionModelOption)
		{
		}

		public void TransitionToMergeBoard()
		{
		}

		public bool InStageEndedView()
		{
			return false;
		}
	}
}
