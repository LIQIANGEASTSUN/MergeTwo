using System;
using System.Collections.Generic;
using ContextualizedECS;
using Framework.Core.MVVM.View;
using Merger.Game.Views;
using Merger.MergeBoard.Logic.CombineValidators;
using Merger.MergeBoard.View.Items;
using Merger.MergeBoard.ViewModel;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Merger.MergeBoard.View.Animations
{
	public class MergeBoardHintView : ViewBase<MergeBoardHintViewModel>
	{
		[SerializeField]
		public MergeBoardItemsContainer _itemsContainer;

		[NonSerialized]
		public bool _isHinting;

		[NonSerialized]
		public double _timer;

		[NonSerialized]
		public bool _isInCooldown;

		[NonSerialized]
		public bool _isHintDisabled;

		public void FinishHinting()
		{
		}

		public void Start()
		{
		}

		public override void OnDestroy()
		{
		}

		public void Update()
		{
		}

		public void SubscribeToViewEvents()
		{
		}

		public void SubscribeToItemEvents(IBoardItemView boardItemView)
		{
		}

		public void UnsubscribeToViewEvents()
		{
		}

		public void UnsubscribeFromItemEvents(IBoardItemView boardItemView)
		{
		}

		public void SubscribeToModelEvents()
		{
		}

		public void UnsubscribeFromModelEvents()
		{
		}

		public void OnItemAdded(IBoardItemView itemView)
		{
		}

		public void OnItemRemoved(IBoardItemView itemView)
		{
		}

		public void BoardItemTapped(IBoardItemView itemView)
		{
		}

		public void BoardItemDragged(IBoardItemView itemView, PointerEventData _)
		{
		}

		public void BoardItemDragEnded(IBoardItemView itemView, PointerEventData _)
		{
		}

		public void BoardItemDragCancelled(IBoardItemView itemView)
		{
		}

		public void TryFinishHinting()
		{
		}

		public void HandleHinting(double deltaTime)
		{
		}

		public (Entity, Entity) GetMergeHint()
		{
			return default((Entity, Entity));
		}

		public (Entity, Entity) GetAnyMergeHint()
		{
			return default((Entity, Entity));
		}

		public (Entity, Entity) GetConsumeHint()
		{
			return default((Entity, Entity));
		}

		public void HintPairItems((Entity, Entity) combinableItems)
		{
		}

		public bool IsConsumer(Entity entity)
		{
			return false;
		}

		public void ResetState()
		{
		}

		public bool IsTimeToHint(double deltaTime)
		{
			return false;
		}

		public bool IsPrioritizeHintingForItem(IBoardItemView item)
		{
			return false;
		}

		public void HintMerge(Entity from, Entity to)
		{
		}

		public void HintSingleItem(Entity entity)
		{
		}

		public void ActivateHint(IBoardItemView boardItemView, Vector2 direction)
		{
		}

		public (Entity, Entity) GetCombinableItems(List<IBoardItemView> boardItems, IItemCombinerValidator validator)
		{
			return default((Entity, Entity));
		}

		public bool GetHighestLevelCollectableItem(out Entity foundEntity)
		{
			foundEntity = null;
			return false;
		}

		public bool IsBoardFull()
		{
			return false;
		}
	}
}
