using System;
using System.Collections.Generic;
using Framework.Core.Services.ServerTime;
using MergeEngine.Configuration.Definitions;
using MergeEngine.ECS;
using MergeEngine.ECS.Components.Booster;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Systems;
using MergeEngine.ECS.Systems.Board;
using MergeEngine.Model.Configuration;
using Merger.Boosters.Declarations.Definitions;
using Merger.Boosters.Declarations.Definitions.Interfaces;
using Merger.Boosters.Declarations.Definitions.Interfaces.Services;
using Merger.Boosters.Declarations.Models;
using Merger.Game.Model;
using Merger.LiveOps.Events.Model;
using Merger.Services.Backend.WebSocket;
using Merger.Services.Backend.WebSocket.NotificationFactory;
using Zenject;

namespace Merger.Boosters.Systems
{
	public class BoosterSystem : SystemBase
	{
		[Inject]
		[NonSerialized]
		public new IEntityFactory _entityFactory;

		[Inject]
		[NonSerialized]
		public new IEntityManager _entityManager;

		[Inject]
		[NonSerialized]
		public IBoosterModel _boosterModel;

		[Inject]
		[NonSerialized]
		public IServerTimeService _serverTimeService;

		[Inject]
		[NonSerialized]
		public ILiveOpsEventModel _liveOpsEventModel;

		[Inject]
		[NonSerialized]
		public IGameSessionModel _gameSessionModel;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public INotificationDataFactory _notificationDataFactory;

		[Inject]
		[NonSerialized]
		public IOperationTrackingService _operationTrackingService;

		[Inject]
		[NonSerialized]
		public IBoosterService _boosterService;

		[Inject]
		[NonSerialized]
		public IBoosterActivator _boosterActivator;

		[NonSerialized]
		public BoardSystem _boardSystem;

		[NonSerialized]
		public HashSet<string> _activationInProgressBoosters;

		public BoardSystem BoardSystem => null;

		public void ApplyActiveBooster(RemoteBoosterData remoteActiveBooster, bool wasSuspended = false)
		{
		}

		public void TryActivateBoosterEntity(IBoosterItem booster, string uuId, string reason, ResourceSource source = ResourceSource.Default)
		{
		}

		public void DestroyMergeItemsOfExpiredBoosters()
		{
		}

		public Entity GetOrCreateBoosterItemEntity(IBoosterItem booster, string uuId, string reason, ResourceSource source, out bool alreadyExisted)
		{
			alreadyExisted = default(bool);
			return null;
		}

		public void AddAnalyticsData(IBoosterItem booster, string reason, ResourceSource source, Entity entity)
		{
		}

		public void BoosterActivatedSendAnalytic(Entity entity)
		{
		}

		public override void EntityCreated(Entity entity)
		{
		}

		public override void EntityRemoved(Entity entity)
		{
		}

		public void DeactivateBooster(BoosterIdComponent boosterId)
		{
		}

		public void ForceDeactivateBooster(BoosterIdComponent boosterId)
		{
		}

		public void TryDeleteBoosterMergeItem(BoosterIdComponent boosterId)
		{
		}

		public void TryDeleteBoosterMergeItem(string boosterUUId)
		{
		}

		public IdComponent GetLinkedMergeItemIdComponent(string uuid)
		{
			return null;
		}

		public void CheckBoosterDeactivatedRemote(BoosterIdComponent boosterId)
		{
		}
	}
}
