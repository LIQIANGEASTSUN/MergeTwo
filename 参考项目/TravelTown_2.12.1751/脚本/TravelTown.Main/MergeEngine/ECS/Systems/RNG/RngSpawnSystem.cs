using System;
using MergeEngine.Configuration;
using MergeEngine.Data;
using MergeEngine.ECS.Components.InteractionTracking;
using MergeEngine.ECS.Systems.Board;
using MergeEngine.ECS.Util;
using MergeEngine.Model.Configuration;
using MergeEngine.Model.RemoteSpawning;
using Merger.Game.Model;
using Merger.LiveOps.Events.ECS.System;
using Merger.PowerBoost;
using Merger.Services.Backend.WebSocket;
using Merger.Services.Backend.WebSocket.NotificationFactory;
using Zenject;

namespace MergeEngine.ECS.Systems.RNG
{
	public class RngSpawnSystem : SystemBase
	{
		[Inject]
		[NonSerialized]
		public IGameSessionModel _gameSessionModel;

		[Inject]
		[NonSerialized]
		public INotificationDataFactory _notificationDataFactory;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[InjectSystem]
		[NonSerialized]
		public BoardSystem _boardSystem;

		[InjectSystem]
		[NonSerialized]
		public PowerBoostSystem _powerBoostSystem;

		[InjectSystem]
		[NonSerialized]
		public OperationTrackingSystem _operationTrackingSystem;

		[InjectSystem]
		[NonSerialized]
		public LiveOpsEventSystem _liveOpsEventSystem;

		[InjectComponent]
		[NonSerialized]
		public InteractionTrackingComponent _interactionTrackingComponent;

		[Inject]
		[NonSerialized]
		public IPushedRngItemsModel _pushedRngItemsModel;

		public bool TrySpawnRngItem(Entity sourceEntity, OperationContext operationContext)
		{
			return false;
		}

		public string TryGetRngItem()
		{
			return null;
		}

		public void EnqueueItem(BoardItemPosition sourcePosition, IMergeItem mergeItem, Entity spawnedItemEntity)
		{
		}
	}
}
