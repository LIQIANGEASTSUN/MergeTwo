using System;
using System.Collections.Generic;
using Framework.Core.Services;
using Framework.Core.Services.Backend.Remote.Payloads.BoardState;
using Framework.Core.Services.ServerTime;
using MergeEngine.Configuration;
using MergeEngine.ECS.Components.Board;
using MergeEngine.ECS.Components.InteractionTracking;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Systems.Board;
using MergeEngine.ECS.Systems.Player;
using MergeEngine.ECS.Systems.State.Board;
using MergeEngine.ECS.Util;
using MergeEngine.Model.Configuration;
using MergeEngine.Signal.Items;
using Merger.Game.Signal;
using Merger.Game.Signal.Combinations;
using Merger.PowerBoost;
using Merger.Services.Backend.Sync.Data.Payloads.Board;
using Merger.Services.Backend.WebSocket;
using Merger.Services.Backend.WebSocket.NotificationFactory;
using Zenject;

namespace MergeEngine.ECS.Systems
{
	public class CombiningSystem : SystemBase, IItemsCombiner
	{
		[Inject]
		[NonSerialized]
		public INotificationDataFactory _notificationDataFactory;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IJsonService _jsonService;

		[Inject]
		[NonSerialized]
		public IServerTimeService _serverTimeService;

		[InjectSystem]
		[NonSerialized]
		public OperationTrackingSystem _operationTrackingSystem;

		[InjectSystem]
		[NonSerialized]
		public BoardSystem _boardSystem;

		[InjectSystem]
		[NonSerialized]
		public ResourcesSystem _resourcesSystem;

		[InjectSystem]
		[NonSerialized]
		public InteractionSystem _interactionSystem;

		[InjectSystem]
		[NonSerialized]
		public BoardItemsStateSystem<CoreBoardBoardItems> _boardItemsStateSystem;

		[InjectSystem]
		[NonSerialized]
		public PowerBoostSystem _powerBoostSystem;

		[InjectComponent]
		[NonSerialized]
		public InteractionTrackingComponent _interactionTrackingComponent;

		[InjectComponent]
		[NonSerialized]
		public BoardComponent _boardComponent;

		[InjectSystem]
		[NonSerialized]
		public BoardQueueSystem _boardQueueSystem;

		[NonSerialized]
		public CombiningComponent _attemptingToCombineProducer;

		[NonSerialized]
		public readonly float _onItemSlideInDelay;

		public override void InitializeSystem()
		{
		}

		public bool CanCombineItems(PositionComponent firstItem, PositionComponent secondItem)
		{
			return false;
		}

		public override void EntityCreated(Entity entity)
		{
		}

		public override void EntityRemoved(Entity entity)
		{
		}

		public void BeforeEntityRemoved(BeforeEntityRemovedSignal signal)
		{
		}

		public void TryExtractItem(CombiningComponent combiningComponent, ItemPayloadBase consumedItem, PositionComponent positionComponent)
		{
		}

		public void AddItemQueue(ItemPayloadBase consumedItem, PositionComponent positionComponent)
		{
		}

		public void DisableAnimationInteraction(ComponentBase item)
		{
		}

		public static void EnableInteractionAnimation(ComponentBase item)
		{
		}

		public bool TryCombineItems(PositionComponent firstItem, PositionComponent secondItem, IItemsCombiner.OnItemsCombined callback)
		{
			return false;
		}

		public void ResetCombine()
		{
		}

		public void FeedItem(CombiningComponent combiningComponent, PositionComponent item)
		{
		}

		public void OnItemSpawned(ProducerSpawnedItemSignal signal)
		{
		}

		public void OnItemSlidedIn(SlideItemInCompletedSignal signal)
		{
		}

		public void TrackInsertAnalytics(IMergeItem feedingItem, CombiningComponent combiningComponent)
		{
		}

		public void TrackExtractAnalytics(IMergeItem feedingItem, CombiningComponent combiningComponent, string id)
		{
		}

		public void PrepareAnalyticsData(CombiningComponent combiningComponent, out TimeCycleComponentAnalytics analyticParams, out int usesLeft, out string consumedIDs, out IEnumerable<int> energyCost)
		{
			analyticParams = default(TimeCycleComponentAnalytics);
			usesLeft = default(int);
			consumedIDs = null;
			energyCost = null;
		}

		public void OnItemExtractClick(ExtractItemClickedSignal signal)
		{
		}

		public void ExtractItem(CombiningComponent combiningComponent, string itemToExtract, bool showAnimation = true)
		{
		}

		public bool CanFeed(CombiningComponent combiningComponent, PositionComponent item)
		{
			return false;
		}

		public bool IsLocked(PositionComponent firstItem)
		{
			return false;
		}

		public override void DisposeSystem()
		{
		}
	}
}
