using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using Framework.Core.Services.Advertisement;
using Framework.Core.Services.ServerTime;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Data;
using MergeEngine.ECS;
using MergeEngine.ECS.Components.Board;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Systems;
using MergeEngine.ECS.Systems.Board;
using MergeEngine.ECS.Systems.Items;
using MergeEngine.ECS.Systems.Player;
using MergeEngine.ECS.Systems.Timing;
using MergeEngine.ECS.Systems.Tutorials;
using MergeEngine.ECS.Util;
using MergeEngine.Model;
using MergeEngine.Model.Configuration;
using MergeEngine.Util;
using Merger.BubbleBlaster.Ftue;
using Merger.BubbleBlaster.Ftue.Models;
using Merger.BubbleBlaster.Models;
using Merger.BubbleBlaster.Signals;
using Merger.BubbleSale.Services;
using Merger.Bubbles.Model;
using Merger.Bubbles.Model.Data;
using Merger.Game.Model;
using Merger.Game.Signal;
using Merger.Game.Signal.Bubbles;
using Merger.LiveOps.Events.ECS.System;
using Merger.Services.Advertisement;
using Merger.Services.Backend.WebSocket;
using Merger.Services.Backend.WebSocket.NotificationFactory;
using Merger.Services.User;
using Merger.VirtualPurchases.Services;
using Merger.Vouchers.Services;
using Zenject;

namespace Merger.Bubbles.ECS.Systems
{
	public class BubbledItemSystem : BaseItemSystem<LockedComponent>
	{
		public const double SerializationInterval = 2000.0;

		[InjectSystem]
		[NonSerialized]
		public BoardInteractionSystem _boardInteractionSystem;

		[Inject]
		[NonSerialized]
		public IRewardedAdsService _rewardedAdsService;

		[InjectSystem]
		[NonSerialized]
		public LiveOpsEventSystem _liveOpsEventSystem;

		[InjectSystem]
		[NonSerialized]
		public OperationTrackingSystem _operationTrackingSystem;

		[Inject]
		[NonSerialized]
		public IBubbledItemsConfigurationModel _bubbledItemsConfigurationModel;

		[Inject]
		[NonSerialized]
		public IBubbleSaleService _bubbleSaleService;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IRandomNumberModel _randomNumberModel;

		[Inject]
		[NonSerialized]
		public IGameSessionModel _gameSessionModel;

		[Inject]
		[NonSerialized]
		public new IEntityManager _entityManager;

		[Inject]
		[NonSerialized]
		public INotificationDataFactory _notificationDataFactory;

		[Inject]
		[NonSerialized]
		public IUserProfileService _userProfileService;

		[Inject]
		[NonSerialized]
		public IVirtualPurchasesService _virtualPurchasesService;

		[Inject]
		[NonSerialized]
		public IVoucherService _voucherService;

		[Inject]
		[NonSerialized]
		public IServerTimeService _serverTimeService;

		[Inject]
		[NonSerialized]
		public ISmarterBubblesProbabilityModel _smarterBubblesProbabilityModel;

		[Inject]
		[NonSerialized]
		public ISmarterBubblesDataModel _bubblesDataModel;

		[Inject]
		[NonSerialized]
		public ISmarterBubblesStreakModel _smarterBubblesStreakModel;

		[Inject]
		[NonSerialized]
		public ISmarterBubblesAnalyticsModel _smarterBubblesAnalyticsModel;

		[Inject]
		[NonSerialized]
		public IBubbleBlasterInventoryModel _blasterInventoryModel;

		[Inject]
		[NonSerialized]
		public IBubbleBlasterFeatureModel _blasterFeatureModel;

		[Inject]
		[NonSerialized]
		public IBubbleBlasterFtueModel _blasterFtueModel;

		[Inject]
		[NonSerialized]
		public BubbleBlasterFtueBubbleAutoBlastHandler _ftueAutoBlastHandler;

		[Inject]
		[NonSerialized]
		public IOperationTrackingService _operationTrackingService;

		[NonSerialized]
		public double _secondsToProcess;

		[NonSerialized]
		public double _timeSinceLastSerialization;

		[NonSerialized]
		public bool _setDirty;

		[NonSerialized]
		public BoardSystem _boardSystem;

		[NonSerialized]
		public TimeSystem _timeSystem;

		[NonSerialized]
		public ResourcesSystem _resourcesSystem;

		[NonSerialized]
		public PlayerLevelSystem _playerLevelSystem;

		[NonSerialized]
		public PlayerEventLevelSystem _playerEventLevelSystem;

		[NonSerialized]
		public BoardItemCountComponent _boardItemCountComponent;

		[NonSerialized]
		public WeightedItemList<IMergeItem> _expiredBubblesItemsSpawnList;

		[NonSerialized]
		public WeightedItemList<IMergeItem> _compensationForRemovedBubblesItemsSpawnList;

		[NonSerialized]
		public bool _ftueBubbleSpawnedThisSession;

		[NonSerialized]
		public TutorialSystem _tutorialSystem;

		public int MainBoardFreeBubbleBurst { get; set; }

		public bool RemoveBubbleEnabled => false;

		public bool IsBlasterTutorialCompleted => false;

		public override SystemPriorities Priority => default(SystemPriorities);

		public long CurrentServerTimeMS => 0L;

		public bool SmarterBubblesEnabledCore => false;

		public bool SmarterBubblesEnabledEvent => false;

		public bool BubbleCompensationEnabled => false;

		public BoardItemCountComponent BoardItemCountComponent => null;

		public BubbledItemsConfig BubbledItemsConfig => null;

		public NewBubbledItemsConfig NewBubbledItemsConfig => null;

		public List<WeightedItemSpawnable> ExpiredBubbleSpawnedItems => null;

		public List<WeightedItemSpawnable> CompensationForRemovedBubblesItemsSpawnList => null;

		public SmarterBubblesData BubblesData => null;

		public bool SmarterBubblesEnabled => false;

		public void BlastBubbleWithBlaster(PositionComponent posComp, int blasterTier)
		{
		}

		public bool IsRemoveBubbleEnabled()
		{
			return false;
		}

		public override void InitializeSystem()
		{
		}

		public override void DisposeSystem()
		{
		}

		public override void EntityCreated(Entity entity)
		{
		}

		public void TrySettingBubbleExpirationTime(Entity entity)
		{
		}

		public void CreateExpiredItemsSpawningList()
		{
		}

		public bool TryDropBubble(PositionComponent newItem, out Entity bubbledEntity)
		{
			bubbledEntity = null;
			return false;
		}

		public bool ShouldDropBubble(IComponentBase newItem, int playerLevel)
		{
			return false;
		}

		public float GetBubbleProbability(IMergeItem item)
		{
			return 0f;
		}

		public Entity DropBubble(PositionComponent newItem, int blasterableTier = 0)
		{
			return null;
		}

		public void TrySendingBoardBubbleLimitReachedSignal()
		{
		}

		public override IEnumerable<LockedComponent> OnWillProcessComponents(ReadOnlyCollection<LockedComponent> lockedItems)
		{
			return null;
		}

		public override void ProcessComponent(LockedComponent bubbled)
		{
		}

		public bool CanExpireBubble(LockedComponent bubbled, PositionComponent bubblePosition)
		{
			return false;
		}

		public void ToggleBubbleExpireTimer(BoardItemPosition boardItemPosition, bool blocked)
		{
		}

		public void ExpireBubble(PositionComponent bubbledPosition)
		{
		}

		public void BurstBubble(TryBurstBubbleSignal tryBurstBubbleSignal, PositionComponent item, IMergeItem mergeItem, BoardItemPosition boardItemPosition, ResourceMultiple burstPrice, bool isBlasterBurst = false)
		{
		}

		public void TryApplyToAllBubbles()
		{
		}

		public void TryBurstBubble(TryBurstBubbleSignal tryBurstBubbleSignal)
		{
		}

		public void TryRemoveBubble(TryRemoveBubbleSignal signal)
		{
		}

		public void RemoveBubble(PositionComponent bubbledPosition)
		{
		}

		public void ReportRemoveBubble(PositionComponent bubbledPosition, IMergeItem itemLost, Entity spawnedItem)
		{
		}

		public void ReportRemoveBubbleClicked(BoardItemPosition position)
		{
		}

		public void SetBubbleRemoveAnalytics(PositionComponent bubbledPosition, Entity spawnedItem, BubbleRemoveSignalBase bubbledItemRemovedSignal, LockedComponent locked, IMergeItem itemLost)
		{
		}

		public void AddBubbleData(ResourceMultiple burstPrice, Entity bubbledItemEntity)
		{
		}

		public void SetBurstBubbleData(Entity bubbledItemEntity)
		{
		}

		public void OnBoardConfigUpdated()
		{
		}

		public void TryMarkAsBlasterable(Entity bubbledEntity, IMergeItem mergeItem, out bool abortSpawn, out int blasterTier)
		{
			abortSpawn = default(bool);
			blasterTier = default(int);
		}

		public void OnBlasterSelectionPopupOpened(BubbleBlasterOpenSelectionPopupSignal signal)
		{
		}

		public void OnBlasterSelectionPopupClosed(BubbleBlasterSelectionPopupClosedSignal signal)
		{
		}

		public void TryBurstWithBlaster(BubbleBlasterTryBurstWithBlasterSignal signal)
		{
		}

		public void BoardSwitchedFired()
		{
		}

		public ResourceMultiple GetBurstPrice(IMergeItem mergeItem)
		{
			return null;
		}

		public bool HasFreeBursts()
		{
			return false;
		}

		public bool IsOnMainBoard()
		{
			return false;
		}

		public bool IsBurstBubbleWithRewardedAdSupported(IMergeItem mergeItem)
		{
			return false;
		}

		public bool CanBurstBubbleWithRewardedAd(IMergeItem mergeItem)
		{
			return false;
		}

		public RewardedAdPlacementType GetRewardedAdPlacementType()
		{
			return default(RewardedAdPlacementType);
		}

		public BubbledItemsConfig GetDefaultBubbledItemsConfig()
		{
			return null;
		}

		public void UpdateStreakModel(IMergeGraphItem mergeGraphItem)
		{
		}
	}
}
