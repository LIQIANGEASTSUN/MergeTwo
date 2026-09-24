using System;
using System.Runtime.CompilerServices;
using Framework.Core.Services.Backend;
using Framework.Core.Services.Metrics;
using Framework.Core.Services.ServerTime;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Data;
using MergeEngine.ECS.Components.Board;
using MergeEngine.ECS.Systems.Cards;
using MergeEngine.ECS.Util;
using MergeEngine.Model.Configuration;
using MergeEngine.Signal.Board;
using Merger.Boosters.Declarations.Definitions.Interfaces;
using Merger.Boosters.Declarations.Definitions.Interfaces.Services;
using Merger.Boosters.Declarations.Enums;
using Merger.Boosters.Declarations.Models;
using Merger.Boosters.Systems;
using Merger.Game.Data;
using Merger.Game.Model;
using Merger.Game.Views;
using Merger.Rewards.Interfaces.Datas;
using Merger.Rewards.Signals;
using Merger.Services.Backend.WebSocket;
using Merger.Services.Backend.WebSocket.NotificationFactory;
using Merger.Services.User;
using UnityEngine;
using Zenject;

namespace MergeEngine.ECS.Systems.Board
{
	public class BoardQueueSystem : SystemBase
	{
		public const string UseFlyingRewardsAnimationForDequeueKey = "UseFlyingRewardsAnimationForDequeue";

		public const string ItemToOrderRelationEnabledKey = "ItemToOrderRelationEnabled";

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IBoosterModel _boosterModel;

		[Inject]
		[NonSerialized]
		public INotificationDataFactory _notificationDataFactory;

		[Inject]
		[NonSerialized]
		public ISurpriseBoosterAnimationConfigurationModel _boosterAnimationConfigurationModel;

		[Inject]
		[NonSerialized]
		public ITimeTwisterAnimationConfigurationModel _timeTwisterAnimationConfigurationModel;

		[InjectSystem]
		[NonSerialized]
		public OperationTrackingSystem _operationTrackingSystem;

		[InjectSystem]
		[NonSerialized]
		public BoardSystem _boardSystem;

		[Inject]
		[NonSerialized]
		public IBoosterService _boosterService;

		[InjectComponent]
		[NonSerialized]
		public BoardQueueComponent _boardQueueComponent;

		[InjectSystem]
		[NonSerialized]
		public CardsSystem _cardsSystem;

		[Inject]
		[NonSerialized]
		public IGameSessionModel _gameSessionModel;

		[Inject]
		[NonSerialized]
		public IConnectionCheckService _connectionCheckService;

		[Inject]
		[NonSerialized]
		public IServerTimeService _serverTimeService;

		[Inject]
		[NonSerialized]
		public IMetricsService _metricsService;

		[Inject]
		[NonSerialized]
		public IItemsEntityService _itemsEntityService;

		[InjectSystem]
		[NonSerialized]
		public BoosterBoardSystem _boosterBoardSystem;

		[Inject]
		[NonSerialized]
		public IBoosterPromisesModel _boosterPromisesModel;

		[Inject]
		[NonSerialized]
		public IBoosterActivator _boosterActivator;

		[Inject]
		[NonSerialized]
		public IOperationTrackingService _operationTrackingService;

		[Inject]
		[NonSerialized]
		public IUserProfileService _userProfileService;

		[Inject]
		[NonSerialized]
		public IBoardQueueExclusionModel _boardQueueExclusionModel;

		[NonSerialized]
		public ConnectionServiceStatus _prevConnectionStatus;

		public bool IsAnimatingEnqueueFinished => false;

		public IBoardView BoardView => null;

		public int NumItemsInQueue => 0;

		public event Action ItemAddedToBoard
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public override void InitializeSystem()
		{
		}

		public void EnqueueItem(EnqueueItemSignal signal)
		{
		}

		public void EnqueueBoosterItem(EnqueueBoosterItemSignal signal)
		{
		}

		public void EnqueueUndoSellItem(EnqueueUndoSellItemSignal signal)
		{
		}

		public void DequeueItem(DequeueItemSignal signal)
		{
		}

		public void DequeueCurrentItem()
		{
		}

		public bool TryDequeueItem(Vector2 queuePositionInRoot, Vector2 worldPosition)
		{
			return false;
		}

		public bool TryDequeueItem(QueuedItem queuedItem, Vector2 positionInRoot, bool showBoardFullText, out BoardItemPosition boardItemPosition, string targetOrderId = null, bool useFlyingRewardsAnimation = false, ResourceSource source = ResourceSource.Default, bool withoutSlide = false)
		{
			boardItemPosition = default(BoardItemPosition);
			return false;
		}

		public bool TryDequeueRewardItem(IRewardViewData rewardViewData, Vector2 worldPosition, out BoardItemPosition dequeuedItemPosition, ResourceSource source)
		{
			dequeuedItemPosition = default(BoardItemPosition);
			return false;
		}

		public Entity CreateItemOnBoard(IMergeItem mergeItem, Vector2 queuePositionInRoot, QueuedItem queuedItem, IBoosterItem booster = null, string boosterUuid = null, string reasonStr = null, string targetOrderId = null, bool useFlyingRewardsAnimation = false, ResourceSource source = ResourceSource.Default, bool withoutSlide = false)
		{
			return null;
		}

		public bool TryDequeueBooster(Vector2 queuePositionInRoot)
		{
			return false;
		}

		public bool TryActivateBoosterWithMergeItem(Vector2 queuePositionInRoot, IBoosterItem booster, string boosterUuId, QueuedItem queuedItem)
		{
			return false;
		}

		public Entity GetQueuedItemEntity(BoardItemPosition position, IMergeItem mergeItem, QueuedItem queuedItem)
		{
			return null;
		}

		public void SlideItemFromQueue(Vector2 position, BoardItemPosition boardPosition, bool useFlyingRewardsAnimation = false, ResourceSource source = ResourceSource.Default)
		{
		}

		public void SlideBoosterFromQueue(Vector2 queuePositionInRoot, BoardItemPosition position, BoosterType boosterType)
		{
		}

		public void OnCheatEnqueueItem(CheatEnqueueItemSignal signal)
		{
		}

		public void TriggerEnqueuedItemAnimation(EnqueueItemAnimationSignal signal)
		{
		}

		public QueuedItem EnqueueItemInBoardQueueComponent(BoardItemPosition sourcePosition, IMergeItem mergeItem, Entity entity, BoardQueueOrder boardQueueOrder, ResourceSource source, bool slideBoardItemToQueue)
		{
			return null;
		}

		public QueuedItem EnqueueBoosterItemInBoardQueueComponent(BoardItemPosition sourcePosition, IMergeItem mergeItem, Entity entity, BoardQueueOrder boardQueueOrder, ResourceSource source, bool slideBoardItemToQueue, string boosterUuid)
		{
			return null;
		}

		public void TrackItemDequeueOperation(IMergeItem dequeuedItem, Entity dequeuedEntity, string dequeuedItemUUIDInQueue, IMergeItem createdItem, Entity createdEntity)
		{
		}

		public void TrackBoosterDequeueOperation(IBoosterItem dequeuedBooster, string dequeuedBoosterUUIDInQueue, IMergeItem createdItem = null, Entity createdEntity = null, string boosterUuid = null)
		{
		}

		public void OnFlyAnimationFinished(RewardFlyAnimationFinishedSignal signal)
		{
		}

		public void OnBoardSwitched()
		{
		}

		public void OnGameStateChanged(GameState state)
		{
		}

		public override void DisposeSystem()
		{
		}

		public bool HasItemWithUniqueId(string itemUniqueId)
		{
			return false;
		}

		public void OnConnectionChanged(ConnectionServiceStatus status)
		{
		}
	}
}
