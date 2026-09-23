using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using Framework.Core.Services.Storage;
using Framework.Core.View;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Data;
using MergeEngine.ECS.Components.Board;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Systems.Tutorials;
using MergeEngine.ECS.Util;
using MergeEngine.Model;
using MergeEngine.Model.Configuration;
using Merger.BubbleSale.Services;
using Merger.Game.Data;
using Merger.Game.Model;
using Merger.Game.Views;
using Merger.LiveOps.Events.ECS.Component;
using Merger.LiveOps.Events.ECS.System;
using Merger.PowerBoost;
using Merger.Services.Backend.WebSocket;
using Merger.Services.Backend.WebSocket.NotificationFactory;
using Merger.Services.User;
using Zenject;

namespace MergeEngine.ECS.Systems.Board
{
	public class BoardSystem : BaseBoardSystem
	{
		[Inject]
		[NonSerialized]
		public new IEntityFactory _entityFactory;

		[Inject]
		[NonSerialized]
		public IRandomNumberModel _randomNumberModel;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IGameConfigurationModel _gameConfigurationModel;

		[Inject]
		[NonSerialized]
		public IViewRegistryModel _viewRegistryModel;

		[Inject]
		[NonSerialized]
		public INotificationDataFactory _notificationDataFactory;

		[InjectSystem]
		[NonSerialized]
		public OperationTrackingSystem _operationTrackingSystem;

		[InjectSystem]
		[NonSerialized]
		public PowerBoostSystem _powerBoostSystem;

		[InjectComponent]
		[NonSerialized]
		public BoardComponent _boardComponent;

		[InjectComponent]
		[NonSerialized]
		public BoardItemCountComponent _boardCountComponent;

		[InjectComponent]
		[NonSerialized]
		public LiveOpsEventComponent _liveOpsEventComponent;

		[InjectSystem]
		[NonSerialized]
		public TutorialSystem _tutorialSystem;

		[InjectSystem]
		[NonSerialized]
		public LiveOpsEventSystem _liveOpsEventSystem;

		[Inject]
		[NonSerialized]
		public IPersistentStorageService _persistentStorageService;

		[Inject]
		[NonSerialized]
		public IGameSessionModel _gameSessionModel;

		[Inject]
		[NonSerialized]
		public IUserProfileService _userProfileService;

		[Inject]
		[NonSerialized]
		public IBubbleSaleService _bubbleSaleService;

		[Inject]
		[NonSerialized]
		public IGameSessionModel _sessionModel;

		[NonSerialized]
		public IBoardView _boardView;

		public override IBoardView BoardView => null;

		public IBoardUIView BoardUIView { get; set; }

		public bool IsFull => false;

		public int NumEmptyPositions => 0;

		public ReadOnlyCollection<BoardItemPosition> EmptyPositions => null;

		public string CurrentEventId => null;

		public ReadOnlyCollection<PositionComponent> BoardItems => null;

		public float MergeAnimationSpeed { get; set; }

		public float ProduceAnimationSpeed { get; set; }

		public void TryLockBoardItems(CurrentBoardType boardType)
		{
		}

		public void BoardViewChanged(IViewComponent boardView)
		{
		}

		public override void InitializeSystem()
		{
		}

		public void OnBoardSwitchComplete()
		{
		}

		public override void OnGameStarted()
		{
		}

		public void MoveDuplicatePositionedItemsToItemQueue(IEnumerable<PositionComponent> duplicatePositionedItems)
		{
		}

		public void CreateBoardDistanceLookup()
		{
		}

		public new void OnAllSystemsInitialized()
		{
		}

		public void CreateBoard()
		{
		}

		public void LockBoardItemsBeforeFirstTutorial()
		{
		}

		public BoardItemPosition GetRandomAvailablePosition()
		{
			return default(BoardItemPosition);
		}

		public BoardItemPosition GetClosestAvailablePositionTo(BoardItemPosition boardItemPosition, BoardItemPosition[] ignorePositions = null)
		{
			return default(BoardItemPosition);
		}

		public override void EntityCreated(Entity entity)
		{
		}

		public void AddBoardItem(PositionComponent positionComponent)
		{
		}

		public void AddItem(PositionComponent positionComponent)
		{
		}

		public void TryCreateItemsOnBoard(PositionComponent positionComponent, IdComponent idComponent, VisualComponent visualComponent, IMergeItem mergeItem, LockedComponent lockedComponent)
		{
		}

		public int GetProduceCost(bool isBoostable, InteractionComponent interactionComponent)
		{
			return 0;
		}

		public void OnPowerBoostToggleChanged()
		{
		}

		public void SetProduceCost()
		{
		}

		public void TryDispatchBoardIsFull()
		{
		}

		public void FireItemCreatedSignal(ItemOrigin itemOrigin)
		{
		}

		public override void RemoveItem(PositionComponent positionComponent, string source, bool killEntity = true, bool removeItemCount = true)
		{
		}

		public List<BoardItemPosition> GetAdjascentPositions(BoardItemPosition position, bool includeDiagonal, Func<BoardItemPosition, bool> includePredicate = null)
		{
			return null;
		}

		public void SwapItems(BoardItemPosition firstItemPosition, BoardItemPosition secondItemPosition)
		{
		}

		public void MoveItemWithOperation(BoardItemPosition oldPosition, BoardItemPosition newPosition, PositionComponent itemToMove)
		{
		}

		public void MoveItem(BoardItemPosition oldPosition, BoardItemPosition newPosition, PositionComponent itemToMove)
		{
		}

		public void TrackMoveItemNotificationData(PositionComponent itemToMove)
		{
		}

		public PositionComponent GetItem(BoardItemPosition position)
		{
			return null;
		}

		public bool IsPositionEmpty(BoardItemPosition position)
		{
			return false;
		}

		public bool IsUnlockedItemOnBoard(string itemId)
		{
			return false;
		}

		public PositionComponent GetUnlockedItemById(string uniqueId)
		{
			return null;
		}

		public int GetUnlockedItemCountById(string itemId)
		{
			return 0;
		}

		public override void DisposeSystem()
		{
		}

		public void KillEntity(PositionComponent positionComponent, string source)
		{
		}

		public bool IsItemInDrag()
		{
			return false;
		}
	}
}
