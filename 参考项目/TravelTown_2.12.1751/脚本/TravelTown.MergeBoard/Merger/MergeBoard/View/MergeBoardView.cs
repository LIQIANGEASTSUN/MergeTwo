using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using ContextualizedECS;
using ContextualizedECS.Context;
using Framework.Core.MVVM.View;
using Merger.Game.Views;
using Merger.Game.Views.Board;
using Merger.Game.Views.Components;
using Merger.Game.Views.Data;
using Merger.MergeBoard.Data;
using Merger.MergeBoard.Logic;
using Merger.MergeBoard.View.Animations;
using Merger.MergeBoard.View.Items;
using Merger.MergeBoard.View.Layout;
using Merger.MergeBoard.ViewModel;
using UnityEngine;
using UnityEngine.EventSystems;
using strange.extensions.promise.api;

namespace Merger.MergeBoard.View
{
	public class MergeBoardView : ViewBase<MergeBoardViewModel>, IBoardControllerPostTickProcessor, IMergeBoardContentController
	{
		[CompilerGenerated]
		public sealed class _003C_003Ec__DisplayClass44_0
		{
			public MergeBoardView _003C_003E4__this;

			public IReadOnlyCollection<Entity> deletedEntities;

			public void _003CHandleBoardResult_003Eb__0()
			{
			}
		}

		[CompilerGenerated]
		public sealed class _003CHandleBoardResult_003Ed__44 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public object _003C_003E2__current;

			public MergeBoardView _003C_003E4__this;

			public TickArgs boardResult;

			[NonSerialized]
			public _003C_003Ec__DisplayClass44_0 _003C_003E8__1;

			[NonSerialized]
			public IPromise _003CanimationPromise_003E5__2;

			object IEnumerator<object>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CHandleBoardResult_003Ed__44(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}
		}

		[SerializeField]
		public MergeBoardLayout _layout;

		[SerializeField]
		public MergeBoardItemsContainer _itemsContainer;

		[SerializeField]
		public MergeBoardHintView _hintView;

		[SerializeField]
		public MergeBoardSelectorView _selector;

		[SerializeField]
		public MergeBoardItemsAnimationsView _itemsAnimationsView;

		[SerializeField]
		public FloatingTextsView _boardFloatingTextView;

		[SerializeField]
		public MergeBoardCombinationVerificationView _combinationVerificationView;

		[SerializeField]
		public MergeBoardContentView _boardContentView;

		public const int DoubleTabThresholdMilliseconds = 300;

		[NonSerialized]
		public Dictionary<int, BoardCellView> _cellViews;

		[NonSerialized]
		public IBoardItemView _draggedItem;

		[NonSerialized]
		public IBoardItemView _overlapItemOnDragAction;

		[NonSerialized]
		public bool _isDragging;

		[NonSerialized]
		public IItemCombinerVisualPresentation _activeItemCombinerVisualPresentation;

		[NonSerialized]
		public double _lastTapTime;

		public double TimeInMilliseconds => 0.0;

		public event Action BeforeBoardPopulated
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

		public event Action BoardPopulated
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

		public void Start()
		{
		}

		public override void OnDestroy()
		{
		}

		public void DestroyBoard()
		{
		}

		public void DisposeBoardItemView(IBoardItemView boardItemView)
		{
		}

		public void OnItemSelectionRemoval()
		{
		}

		public void PopulateBoard()
		{
		}

		public void PopulateCells()
		{
		}

		public bool CreateItemView(Entity entity)
		{
			return false;
		}

		public void CreateItems(IEnumerable<Entity> entities)
		{
		}

		public void UpdateCells(IEnumerable<Entity> entities)
		{
		}

		public IReadOnlyCollection<Entity> GetDeletedEntities(TickArgs boardResult)
		{
			return null;
		}

		public void DeleteItems(IReadOnlyCollection<Entity> removedEntities)
		{
		}

		public void RemoveItem(Entity entity, IBoardItemView boardItemView)
		{
		}

		public void CreateItem(int index, Entity entity)
		{
		}

		void IBoardControllerPostTickProcessor.Process(TickArgs result)
		{
		}

		public void BoardItemDragged(IBoardItemView boardItem, PointerEventData data)
		{
		}

		public void BoardItemDragStarted(IBoardItemView boardItem)
		{
		}

		public void BoardItemDragCancelled(IBoardItemView boardItem)
		{
		}

		public void BoardItemDragEnded(IBoardItemView boardItem, PointerEventData pointerEventData)
		{
		}

		public void ApplyVisualPresentationOnOverlapItems(Vector2 pointInLayoutSpace)
		{
		}

		public void ResetDraggedItem()
		{
		}

		[IteratorStateMachine(typeof(_003CHandleBoardResult_003Ed__44))]
		public IEnumerator HandleBoardResult(TickArgs boardResult)
		{
			return null;
		}

		public void BoardItemTapped(IBoardItemView boardItemView)
		{
		}

		public void TryTriggerFloatingText(IBoardItemView boardItemView, Entity entity)
		{
		}

		public bool RequireDoubleTap(IBoardItemView boardItemView)
		{
			return false;
		}

		public void CheckForDoubleTap(int itemIndex)
		{
		}

		public void OnItemSelected(int itemIndex)
		{
		}

		public void OnItemTapped(int itemPosition)
		{
		}

		public int GetItemIndex(IBoardItemView boardItemView)
		{
			return 0;
		}

		public void ResetItemCombinerVisualPresentation()
		{
		}

		public void SendFloatingTextSignal(RectTransform rectTransform, FloatingTextType floatingType, FloatingTextData data = null, bool useDelay = false)
		{
		}

		public void RemoveSelectorFromDeletedEntities(IReadOnlyCollection<Entity> deletedEntities)
		{
		}

		public void FinishHintingIfEntitiesDeleted(IReadOnlyCollection<Entity> deletedEntities)
		{
		}

		public void ClearAllItems()
		{
		}

		public void ClearBoardLayout()
		{
		}

		public void ResetBoardPosition()
		{
		}

		public void ClearBoardContent()
		{
		}

		public void RepopulateBoardContent()
		{
		}

		public void UpdateBoardTiles()
		{
		}

		public void RemoveInactiveItems(List<int> activeIndices)
		{
		}
	}
}
