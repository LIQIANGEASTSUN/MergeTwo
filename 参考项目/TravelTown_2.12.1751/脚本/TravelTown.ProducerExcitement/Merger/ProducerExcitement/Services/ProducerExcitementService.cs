using System;
using System.Collections.Generic;
using Framework.Core.DataBinding.Collections;
using Framework.Core.Services;
using Framework.Core.Services.ServerTime;
using MergeEngine.Configuration;
using MergeEngine.Data;
using MergeEngine.ECS;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Systems;
using MergeEngine.ECS.Systems.Board;
using MergeEngine.ECS.Systems.Orders;
using MergeEngine.Model.Configuration;
using Merger.ItemGenerator;
using Merger.ItemGenerator.Backend.Responses.ProducerExcitement;
using Merger.PowerBoost;
using Merger.PowerBoost.Providers;
using Merger.ProducerExcitement.Compatibility;
using Merger.ProducerExcitement.Signals;
using Merger.Services.Backend.WebSocket;
using Merger.Services.Backend.WebSocket.NotificationFactory;
using Merger.Timers.Interfaces;
using Zenject;

namespace Merger.ProducerExcitement.Services
{
	public class ProducerExcitementService : ServiceBase, IProducerExcitementService
	{
		[Inject]
		[NonSerialized]
		public IProducerExcitementModel _producerExcitementModel;

		[Inject]
		[NonSerialized]
		public ISystemManager _systemManager;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IPowerBoostDataProvider _powerBoostDataProvider;

		[Inject]
		[NonSerialized]
		public IServerTimeService _serverTimeService;

		[Inject]
		[NonSerialized]
		public IProducerExcitementDownloadService _producerExcitementDownloadService;

		[Inject]
		[NonSerialized]
		public ITimerService _timerService;

		[Inject]
		[NonSerialized]
		public ItemGeneratorService _itemGeneratorService;

		[Inject]
		[NonSerialized]
		public INotificationDataFactory _notificationDataFactory;

		[Inject]
		[NonSerialized]
		public IEntityFactory _entityFactory;

		[NonSerialized]
		public readonly Dictionary<long, ITimer> _cycleEndTimers;

		[NonSerialized]
		public BoardSystem _boardSystem;

		[NonSerialized]
		public OrdersSystem _ordersSystem;

		[NonSerialized]
		public OperationTrackingSystem _operationTrackingSystem;

		[NonSerialized]
		public PowerBoostSystem _powerBoostSystem;

		public OrdersSystem OrdersSystem => null;

		public BoardSystem BoardSystem => null;

		public OperationTrackingSystem OperationTrackingSystem => null;

		public PowerBoostSystem PowerBoostSystem => null;

		public override void InitializeService()
		{
		}

		public override void DisposeService()
		{
		}

		public bool TryDropExcitementItem(PositionComponent producerPosition, out BoardItemPosition excitementPosition, out ProducerExcitementSpawnData spawnData)
		{
			excitementPosition = default(BoardItemPosition);
			spawnData = null;
			return false;
		}

		public void ApplyVisuals(VisualComponent visualComponent, BoardItemPosition entityPosition)
		{
		}

		public ProducerExcitementItemResponse ConsumeExcitementForProducer(string producerId, out int claimedExcitementId)
		{
			claimedExcitementId = default(int);
			return null;
		}

		public Entity CreateExcitementEntity(string itemId, BoardItemPosition position)
		{
			return null;
		}

		public void ReportGhostModeInteraction(Entity excitementEntity, Entity producerEntity, IMergeItem producerItem, int excitementId)
		{
		}

		public string GetMaxLevelPrimaryProducerIdOnBoard(IMergeItem producerItem)
		{
			return null;
		}

		public bool TryGetExcitementPosition(BoardItemPosition originalItemPosition, out BoardItemPosition excitementPosition)
		{
			excitementPosition = default(BoardItemPosition);
			return false;
		}

		public void OnExcitementStatesChanged(CollectionChangedArgs<ProducerExcitementDataResponse> changedArgs)
		{
		}

		public void RegisterCycleEndTimer(long cycleEndDate)
		{
		}

		public void OnCycleEnded(long cycleEndDate)
		{
		}

		public void UnregisterAllCycleTimers()
		{
		}

		public void RefreshState(ProducerExcitementRefreshStateSignal signal)
		{
		}
	}
}
