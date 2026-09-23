using System;
using System.Collections.Generic;
using Framework.Core.Services.Backend.Data.Payload;
using Framework.Core.Services.ServerTime;
using MergeEngine.ECS.Components.Board;
using MergeEngine.ECS.Components.Booster;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Util;
using MergeEngine.Model.Configuration;
using Merger.Boosters.Declarations.Definitions.Interfaces;
using Merger.Boosters.Declarations.Definitions.Interfaces.Services;
using Merger.Boosters.Declarations.Models;
using Merger.Game.Model;
using Merger.Game.Signal.Boosters;
using Merger.Services.Backend.WebSocket;
using Merger.Services.Backend.WebSocket.NotificationFactory;
using Merger.TimeTwister.Signals;
using Zenject;

namespace MergeEngine.ECS.Systems.Booster
{
	public class TimeTwisterSystem : SystemBase
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
		public IServerTimeService _serverTimeService;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public ITimeTwisterAnimationConfigurationModel _timeTwisterAnimationConfigurationModel;

		[InjectSystem]
		[NonSerialized]
		public OperationTrackingSystem _operationTrackingSystem;

		[Inject]
		[NonSerialized]
		public IBoosterService _boosterService;

		[Inject]
		[NonSerialized]
		public IGameSessionModel _gameSessionModel;

		[Inject]
		[NonSerialized]
		public IBoosterActivator _boosterActivator;

		[InjectComponent]
		[NonSerialized]
		public BoardQueueComponent _boardQueueComponent;

		[NonSerialized]
		public bool _animateNextBoosterFlight;

		public override void InitializeSystem()
		{
		}

		public void PrepareBoosterPayload(PrepareBoosterActivationPayloadSignal signal)
		{
		}

		public void AnimateBoosterActivation(AnimateTimeTwisterFlyingTimersSignal signal)
		{
		}

		public void BoardSwitchedFired()
		{
		}

		public void ApplyBoosterCooldown(Entity entity, BoosterIdComponent boosterId, bool isTrickyProducer, double durationLeft)
		{
		}

		public double GetTimeLeft(TimeCycleComponentAnalytics timeCycleComponentAnalytics)
		{
			return 0.0;
		}

		public override void EntityCreated(Entity entity)
		{
		}

		public void CheckIfNewProducerSpawned(Entity entity)
		{
		}

		public List<OperationNotificationData> CheckIfNewBoosterSpawned(Entity entity, bool sendOperations = true)
		{
			return null;
		}

		public OperationNotificationData ProcessValidProducer(BoosterCooldownBlockComponent cooldownBlockComponent, IdComponent boardMergeItem, bool isTrickyProducer, string filters, bool sendOperation = true)
		{
			return null;
		}

		public void AnimateProducerActive(VisualComponent itemVisualComponent, bool isActive, bool isTrickyProducer = false)
		{
		}

		public string SnapshotItemState(IdComponent boardMergeItem)
		{
			return null;
		}

		public override void EntityRemoved(Entity entity)
		{
		}

		public bool IsItemValid(IdComponent boardMergeItem, out bool isTrickyProducer, out string filters)
		{
			isTrickyProducer = default(bool);
			filters = null;
			return false;
		}

		public bool IsItemTrickyProducer(IdComponent boardMergeItem)
		{
			return false;
		}

		public List<IdComponent> GetAllValidProducers()
		{
			return null;
		}

		public override void DisposeSystem()
		{
		}
	}
}
