using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using Framework.Core.DataBinding;
using Framework.Core.Services.Backend.Data.Payload;
using MergeEngine.Configuration;
using MergeEngine.ECS.Components;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Systems.Board;
using MergeEngine.ECS.Systems.Player;
using MergeEngine.ECS.Util;
using MergeEngine.Model;
using MergeEngine.Model.Configuration;
using MergeEngine.Signal.Inventory;
using Merger.Boosters.Declarations.Models;
using Merger.Game.Data;
using Merger.Game.Model;
using Merger.Game.Signal;
using Merger.LiveOps.Events.Model;
using Merger.Metagame.Services;
using Merger.Services.Backend.Sync.Data.Payloads.Board;
using Merger.Services.Backend.WebSocket;
using Merger.Services.Backend.WebSocket.NotificationFactory;
using Merger.Services.User;
using Merger.Services.User.Data.Profile.LevelAndMetagame;
using Zenject;

namespace MergeEngine.ECS.Systems
{
	public class InventorySystem : SystemBase
	{
		[NonSerialized]
		public InventoryComponent _inventory;

		[NonSerialized]
		public ProducerInventoryComponent _producerInventoryComponent;

		[NonSerialized]
		public BoardSystem _boardSystem;

		[Inject]
		[NonSerialized]
		public DiContainer _container;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _configurationModel;

		[Inject]
		[NonSerialized]
		public IUserProfileService _userProfileService;

		[Inject]
		[NonSerialized]
		public MetaConfigurationService _metaConfigurationService;

		[InjectSystem]
		[NonSerialized]
		public PlayerLevelSystem _playerLevelSystem;

		[Inject]
		[NonSerialized]
		public IGameSessionModel _gameSessionModel;

		[Inject]
		[NonSerialized]
		public INotificationDataFactory _notificationDataFactory;

		[InjectSystem]
		[NonSerialized]
		public OperationTrackingSystem _operationTrackingSystem;

		[Inject]
		[NonSerialized]
		public IProducerInventoryConfigurationModel _producerInventoryConfigurationModel;

		[Inject]
		[NonSerialized]
		public IBoosterModel _boosterModel;

		[Inject]
		[NonSerialized]
		public ILiveOpsEventModel _liveOpsEventModel;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[InjectSystem]
		[NonSerialized]
		public BoardInteractionSystem _boardInteractionSystem;

		[InjectSystem]
		[NonSerialized]
		public UndoSellAbuseSystem _undoSellAbuseSystem;

		[Inject]
		[NonSerialized]
		public IInventoryModel _inventoryModel;

		[NonSerialized]
		public bool _tutorialDisabled;

		[NonSerialized]
		public List<Tuple<IMergeItem, int>> _configuredUnlocks;

		[NonSerialized]
		public Dictionary<IMergeItem, IMergeItem> _recursiveExpendSlotMapping;

		[NonSerialized]
		public List<ProducerInventoryItem> _backendSlots;

		[NonSerialized]
		public ReadOnlyCollection<IMergeItem> _unlockedProducerSlotItems;

		public MutableBindableProperty<bool> ShowProducerNotification;

		[NonSerialized]
		public bool _hasTriggeredSeenNotification;

		[NonSerialized]
		public InventoryWebSocket _webSocket;

		[NonSerialized]
		public List<IMergeItem> _unlockedSlotsSinceLastLevelUp;

		[NonSerialized]
		public InventoryItemCountComponent _inventoryItemCountComponent;

		[NonSerialized]
		public List<VisualComponent> _removedItems;

		public bool Enabled => false;

		public bool ProducerTabEnabled => false;

		public ReadOnlyCollection<IMergeItem> UnlockedProducerSlotItems => null;

		public ReadOnlyCollection<string> NewProducerSlotItemIds => null;

		public IList<InventoryProducerSlotUnlock> ConfiguredSlotUnlocks => null;

		public bool HasReachedProducerUnlockLevel => false;

		public bool NewInventoryAbilities => false;

		public bool IsItemInInventory(string itemId)
		{
			return false;
		}

		public int GetItemCountInInventory(string itemId)
		{
			return 0;
		}

		public override void InitializeSystem()
		{
		}

		public override void DisposeSystem()
		{
		}

		public void UpdateProducerTabEnabled()
		{
		}

		public override void OnGameStarted()
		{
		}

		public void OnLevelUp()
		{
		}

		public void OnGameStateChanged(GameState state)
		{
		}

		public void OnBoardTypeChanged(CurrentBoardType value)
		{
		}

		public void TrySendProducerInventoryNotificationSeenTracking()
		{
		}

		public bool IsProducerTabEnabled()
		{
			return false;
		}

		public void UpdateShowInventoryNotification()
		{
		}

		public void SetupUnlockConfiguration()
		{
		}

		public IList<InventoryProducerSlotUnlock> ValidateSlotUnlockConfig(IList<InventoryProducerSlotUnlock> slotUnlockConfig)
		{
			return null;
		}

		public int CompareSlotUnlockConfigs(InventoryProducerSlotUnlock lhs, InventoryProducerSlotUnlock rhs)
		{
			return 0;
		}

		public int GetBuildingIndexForProducer(string graphName)
		{
			return 0;
		}

		public void AttemptItemRemoveFromInventory(TryRemoveInventoryItemSignal signal)
		{
		}

		public void SlotPurchased()
		{
		}

		public override void EntityCreated(Entity entity)
		{
		}

		public bool IsFull()
		{
			return false;
		}

		public int NumSlots()
		{
			return 0;
		}

		public int NumProducerSlots()
		{
			return 0;
		}

		public int NumFreeSlots()
		{
			return 0;
		}

		public int NumFreeProducerSlots()
		{
			return 0;
		}

		public int NumNewProducerSlots()
		{
			return 0;
		}

		public int GetFirstAvailableIndex()
		{
			return 0;
		}

		public bool TryInsert(PositionComponent positionComponent)
		{
			return false;
		}

		public bool Insert(PositionComponent positionComponent)
		{
			return false;
		}

		public int GetProducerSlotIndex(IMergeItem mergeItem)
		{
			return 0;
		}

		public InventorySlotType EvaluateSlotType(IMergeItem mergeItem)
		{
			return default(InventorySlotType);
		}

		public void EnableInventory()
		{
		}

		public void Retrieve(InventorySlotComponent slotComponent)
		{
		}

		public void SelectAfterRetrieve(PositionComponent positionComponent)
		{
		}

		public void SetEntityEnterAnimation(Entity entity)
		{
		}

		public IEnumerable<BaseNotificationData> SortAndCreateNotificationList()
		{
			return null;
		}

		public ItemNotificationData CreateUpdatedItemNotificationData(Entity entity, int index)
		{
			return null;
		}

		public void SendItemAddedToInventoryEvent(IMergeItem mergeItem, int slotIndex, InventorySlotType slotType, int? indexOnBoard, Entity entity)
		{
		}

		public void SendItemRemovedFromInventoryEvent(IMergeItem mergeItem, int slotIndex, InventorySlotType slotType, int? indexOnBoard, Entity entity)
		{
		}

		public int? GetStackSizeIfStacking(IMergeItem mergeItem, Entity entity)
		{
			return null;
		}

		public void DisableInventoryFromTutorial()
		{
		}

		public void EnableInventoryFromTutorial()
		{
		}

		public void NewProducerSlotsSeen()
		{
		}

		public bool UnlockedInventorySlotAtLevel()
		{
			return false;
		}

		public List<IMergeItem> GetUnlockedSlotsSinceLastLevelup()
		{
			return null;
		}

		public void RemoveInventoryItem(InventorySlotComponent slotComponent)
		{
		}

		public void ReloadProducerInventory(List<ProducerInventoryItem> slots)
		{
		}

		public void SetupProducerInventory()
		{
		}

		public void UpdateSlots(List<ProducerInventoryItem> slots)
		{
		}

		public List<ProducerInventoryItem> ValidateBackendSlots(List<ProducerInventoryItem> slots)
		{
			return null;
		}

		public List<ProducerInventoryItem> SortBackendSlotsToConfig(List<ProducerInventoryItem> slots)
		{
			return null;
		}

		public void UpdateMergeItemList(List<ProducerInventoryItem> slots)
		{
		}

		public string GetSlotId(ProducerInventoryItem slot)
		{
			return null;
		}

		public void RecreateRecursiveExpends()
		{
		}

		public List<IMergeItem> FindCircularExpends(IMergeItem root)
		{
			return null;
		}

		public bool RecursivelyExpendsTo(IMergeItem currentItem, ref List<IMergeItem> items, IMergeItem targetItem)
		{
			return false;
		}

		public void UpdateEntitiesToNewMergeItemList()
		{
		}

		public void TryMoveItemsFromInventoryToProducerInventory()
		{
		}

		public void TryMoveItemFromInventoryToProducerInventory(IMergeItem mergeItem)
		{
		}

		public void TryUnlockSlots()
		{
		}

		public void AddUnlockedSlot(IMergeItem mergeItem)
		{
		}

		public static string GetDestinationForItem(Entity entity)
		{
			return null;
		}

		public void InventoryClosed(InventoryTransitionOutStartedSignal signal)
		{
		}
	}
}
