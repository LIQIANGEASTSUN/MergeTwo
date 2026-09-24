using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using MergeEngine.Configuration;
using MergeEngine.Data;
using MergeEngine.ECS.Components;
using MergeEngine.ECS.Components.Board;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Components.Tasks;
using MergeEngine.ECS.Systems.Items.Producers;
using MergeEngine.ECS.Systems.Timing;
using MergeEngine.ECS.Util;
using MergeEngine.Model.Configuration;
using MergeEngine.Signal.Board;
using Merger.Game.Data;
using Merger.Game.Model;
using Merger.Game.Views;
using Merger.Services.MergeGraphChain;
using Zenject;

namespace MergeEngine.ECS.Systems.Board
{
	public class BoardIdleHintSystem : TickableSystem<HintComponent>
	{
		[InjectSystem]
		[NonSerialized]
		public BoardSystem _boardSystem;

		[InjectSystem]
		[NonSerialized]
		public BoardInteractionSystem _boardInteractionSystem;

		[InjectSystem]
		[NonSerialized]
		public BoardQueueSystem _boardQueueSystem;

		[InjectSystem]
		[NonSerialized]
		public TimeSystem _timeSystem;

		[InjectSystem]
		[NonSerialized]
		public MergeSystem _mergeSystem;

		[InjectSystem]
		[NonSerialized]
		public ProduceSystem _produceSystem;

		[InjectSystem]
		[NonSerialized]
		public InventorySystem _inventorySystem;

		[InjectSystem]
		[NonSerialized]
		public StackingSystem _stackingSystem;

		[InjectComponent]
		[NonSerialized]
		public BoardItemCountComponent _boardItemCountComponent;

		[InjectComponent]
		[NonSerialized]
		public HintComponent _hintComponent;

		[InjectComponent]
		[NonSerialized]
		public TasksComponent _tasksComponent;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IGameSessionModel _gameSessionModel;

		[Inject]
		[NonSerialized]
		public IMergeGraphChainModel _mergeGraphChainModel;

		[NonSerialized]
		public IdComponent _lastTrackedFirstItem;

		[NonSerialized]
		public IdComponent _lastTrackedSecondItem;

		[NonSerialized]
		public bool _isBlockedByTutorial;

		public override SystemPriorities Priority => default(SystemPriorities);

		public IBoardView _boardView => null;

		public IBoardUIView _boardUIView => null;

		public ReadOnlyCollection<PositionComponent> allBoardItems => null;

		public bool IsStackingEnabled => false;

		public override void InitializeSystem()
		{
		}

		public override void DisposeSystem()
		{
		}

		public void GameStateChanged(GameState gameState)
		{
		}

		public void TaskBeingCompletedFired()
		{
		}

		public void ItemTapped(BoardItemPosition pos)
		{
		}

		public void ItemDragStarted(BoardItemPosition pos)
		{
		}

		public void ItemDragEnded(BoardItemPosition pos1, BoardItemPosition pos2)
		{
		}

		public void ItemMerged(IMergeItem item, BoardItemPosition pos, IMergeItem firstItem, IMergeItem secondItem)
		{
		}

		public void ItemProduced(IMergeItem item)
		{
		}

		public void TaskCompleted()
		{
		}

		public void TaskRewardCollected()
		{
		}

		public void ItemAddedToBoardFromQueue()
		{
		}

		public override void EntityRemoved(Entity entity)
		{
		}

		public void FinishHinting()
		{
		}

		public void CheckStillNeedHinting()
		{
		}

		public override void ProcessComponents(ReadOnlyCollection<HintComponent> components)
		{
		}

		public void ShowBoardItemHint()
		{
		}

		public void SetInventoryButtonHinting(IdComponent hintingItem)
		{
		}

		public void SetDisabledByTutorial(bool isDisable)
		{
		}

		public Tuple<IdComponent, IdComponent> GetFirstMergeableItemTuple()
		{
			return null;
		}

		public List<string> GetExcludedItemIds()
		{
			return null;
		}

		public IdComponent GetOrderObjectiveItem()
		{
			return null;
		}

		public void SetItemsAsHinting(IdComponent itemFrom, IdComponent itemTo = null)
		{
		}

		public void TrySendHintingEvent(IdComponent itemFrom, IdComponent itemTo)
		{
		}

		public void ProcessTime(double seconds)
		{
		}

		public void TryShowProducerHint(ProducerHintSignal signal)
		{
		}

		public PositionComponent GetOriginProducerOnBoard(IMergeItem fromMergeItem)
		{
			return null;
		}

		public PositionComponent GetItemOnBoard(string uniqueId)
		{
			return null;
		}

		public void AnimationCompleted(PositionComponent producer)
		{
		}

		public void PlayItemHintAnimation(ProducerHintSignal signal)
		{
		}
	}
}
