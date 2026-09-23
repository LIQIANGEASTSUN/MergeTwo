using System;
using System.Collections.Generic;
using MergeEngine.ECS.Systems.Board;
using MergeEngine.ECS.Systems.Items;
using MergeEngine.ECS.Util;
using MergeEngine.Model.Configuration;
using Merger.Boosters.Declarations.Definitions.Interfaces;
using Merger.Boosters.Declarations.Definitions.Interfaces.Services;
using Merger.Boosters.Declarations.Models;
using Merger.Boosters.Declarations.Signals.Workflow;
using Merger.Game.Model;
using Merger.Game.Signal.Boosters;
using Merger.Game.Views;
using Merger.Models;
using Merger.Services.Backend.WebSocket;
using Merger.Services.Backend.WebSocket.NotificationFactory;
using Merger.SurpriseBox.Signals;
using Zenject;

namespace MergeEngine.ECS.Systems.Booster
{
	public class SurpriseBoostSystem : SystemBase
	{
		[Inject]
		[NonSerialized]
		public IOperationTrackingService _operationTrackingService;

		[Inject]
		[NonSerialized]
		public IBoosterModel _boosterModel;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergeConfigurationModel;

		[Inject]
		[NonSerialized]
		public INotificationDataFactory _notificationDataFactory;

		[Inject]
		[NonSerialized]
		public IGameSessionModel _gameSessionModel;

		[Inject]
		[NonSerialized]
		public IActionsModel _actionsModel;

		[InjectSystem]
		[NonSerialized]
		public BaseBoardSystem _boardSystem;

		[InjectSystem]
		[NonSerialized]
		public OperationTrackingSystem _operationTrackingSystem;

		[Inject]
		[NonSerialized]
		public IBoosterService _boosterService;

		[Inject]
		[NonSerialized]
		public IBoosterActivator _boosterActivator;

		[NonSerialized]
		public List<string> _pendingBoosterDeactivationList;

		public override void InitializeSystem()
		{
		}

		public override void DisposeSystem()
		{
		}

		public override void OnGameStarted()
		{
		}

		public void BoosterEntityCreated(BoosterEntityCreatedSignal signal)
		{
		}

		public void BoosterProgressChanged(BoosterProgressUpdatedSignal signal)
		{
		}

		public void OnIsInMetagameChanged(bool isInMetagame)
		{
		}

		public void TryAnimateSurpriseBoosterOnBoard()
		{
		}

		public void UnlockBoosterOnBoardIfExist(string boosterUniqueId, string uuid)
		{
		}

		public void UnlockBoosterOnBoard(IBoosterItem booster, MergeItemBoosterComponent mergeItemBoosterComponent)
		{
		}

		public void SetTimeLockText(IBoardItemView lockedBoardItem, double timeLockDuration)
		{
		}

		public void PrepareBoosterPayload(PrepareBoosterActivationPayloadSignal signal)
		{
		}

		public void UnlockAnimationFinished(OrderSurpriseBoxUnlockAnimationFinishedSignal signal)
		{
		}

		public void SendMergeItemRemoveOperation(Entity entity, IBoosterItem boosterItem)
		{
		}
	}
}
