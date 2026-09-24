using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Framework.Core.Services.ServerTime;
using Framework.Core.View;
using MergeEngine.Configuration;
using MergeEngine.Data;
using MergeEngine.ECS.Components.Board;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Systems.Orders;
using MergeEngine.Model;
using MergeEngine.Model.Configuration;
using MergeEngine.Signal.Board;
using Merger.Game.Data;
using Merger.Game.Model;
using Merger.Game.Views;
using Merger.PowerBoost;
using Merger.PowerBoost.Signals;
using UnityEngine;
using Zenject;

namespace MergeEngine.ECS.Systems.Board
{
	public class BoardInteractionSystem : SystemBase
	{
		[NonSerialized]
		public BoardSystem _boardSystem;

		[NonSerialized]
		public InventorySystem _inventorySystem;

		[NonSerialized]
		public OrdersSystem _ordersSystem;

		[NonSerialized]
		public BoardComponent _boardComponent;

		[NonSerialized]
		public LockedComponent _draggedItem;

		[NonSerialized]
		public PositionComponent _draggedPosition;

		[NonSerialized]
		public PositionComponent _tappedItem;

		[NonSerialized]
		public PositionComponent _selectedItem;

		public const float GuessCellPercentageThreshold = 0.2f;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public new SignalBus _signalBus;

		[Inject]
		[NonSerialized]
		public IRandomNumberModel _randomNumberModel;

		[Inject]
		[NonSerialized]
		public IGameSessionModel _gameSessionModel;

		[Inject]
		[NonSerialized]
		public IViewRegistryModel _viewRegistryModel;

		[Inject]
		[NonSerialized]
		public IServerTimeService _serverTimeService;

		[NonSerialized]
		public bool _itemFailedToDropOnInventory;

		[NonSerialized]
		public IBoardView _boardView;

		[NonSerialized]
		public List<IItemsCombiner> _itemCombiners;

		[NonSerialized]
		public PowerBoostSystem _powerBoostSystem;

		[NonSerialized]
		public long _lastTapTime;

		public IBoardUIView BoardUIView => null;

		public BoardItemPosition SelectedItemPosition => default(BoardItemPosition);

		public bool IsItemSelected => false;

		public PowerBoostSystem PowerBoostSystem => null;

		public bool ShouldDeselectOnOOE => false;

		public event Action<BoardItemPosition> ItemTapped
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

		public event Action<BoardItemPosition> ItemDragStarted
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

		public event Action<BoardItemPosition, BoardItemPosition> ItemDragEnded
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

		public void SetupItemCombiners()
		{
		}

		public void BoardViewChanged(IViewComponent viewComponent)
		{
		}

		public void BoardViewDestroyed()
		{
		}

		public override void DisposeSystem()
		{
		}

		public void OnOutOfEnergy()
		{
		}

		public override void EntityRemoved(Entity entity)
		{
		}

		public void DeselectItem()
		{
		}

		public void ItemDroppedOnInventory(BoardItemPosition boardItemPosition)
		{
		}

		public void EndDrag(BoardItemPosition atPosition)
		{
		}

		public void PowerBoostToggled(PowerBoostModeSwitchedSignal signal)
		{
		}

		public void TapItemSimulated(SimulateTapSignal signal)
		{
		}

		public void BoardItemTapped(BoardItemPosition boardItemPosition, bool tapSimulated = false)
		{
		}

		public void SelectItem(SelectedBoardItem selectedBoardItem, PositionComponent tappedItem)
		{
		}

		public void SelectItem(BoardItemPosition position)
		{
		}

		public SelectedBoardItem GetSelectedBoardItem(PositionComponent positionComponent)
		{
			return null;
		}

		public SelectorMode GetSelectorMode(LockedComponent lockComponent, IMergeItem mergeItem)
		{
			return default(SelectorMode);
		}

		public void ActOnTappedItem()
		{
		}

		public void BoardItemDragStarted(BoardItemPosition boardItemPosition)
		{
		}

		public void BoardItemBeingDragged(Vector2 pointInBoard)
		{
		}

		public void BoardItemDragEnded(Vector2 pointInBoard, Vector2 screenPoint)
		{
		}

		public void BoardItemDragCancelled()
		{
		}

		public void ResetInteractionAnimation()
		{
		}

		public void SwapOrMoveBackItems(BoardItemPosition oldPosition, BoardItemPosition newPosition, bool itemAtNewPositionLocked, bool itemAtNewPositionDraggingDisabled)
		{
		}

		public void SwapItems(BoardItemPosition oldPosition, BoardItemPosition newPosition)
		{
		}

		public void MoveItem(BoardItemPosition oldPosition, BoardItemPosition newPosition, bool sendOperation = true)
		{
		}

		public bool TryGuess(BoardItemPosition destination)
		{
			return false;
		}

		public bool CanCombineItems(PositionComponent firstItem, PositionComponent secondItem, BoardItemPosition boardItemPosition)
		{
			return false;
		}

		public void ResetGuess()
		{
		}

		public void HandleFireLockedFloatingText(SelectedBoardItem selectedBoardItem)
		{
		}

		public void HideLastDraggedItemParticles()
		{
		}
	}
}
