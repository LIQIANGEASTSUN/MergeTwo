using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using DG.Tweening;
using Framework.Core.View;
using Framework.Util.Pooling;
using Framework.View.Component;
using MergeEngine.Data;
using MergeEngine.ECS.Components.Items;
using Merger.Game.Views.BoardItem;
using Merger.Game.Views.BoardItem.ViewBehaviours;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Merger.Game.Views
{
	public abstract class BoardItemViewBase : ViewComponent, IDragHandler, IEventSystemHandler, IEndDragHandler, IPointerClickHandler, IPointerDownHandler, IPointerUpHandler, IPoolable, IBoardItemView
	{
		[SerializeField]
		public EmptyGraphic _clickableArea;

		[NonSerialized]
		public IVisualComponent _visualComponent;

		[NonSerialized]
		public Action<IBoardItemView, PointerEventData> _dragging;

		[NonSerialized]
		public ILockedComponent _lockedComponent;

		public abstract int SelectorSiblingIndex { get; }

		public bool IsFlyingToBoard { get; set; }

		public Tween SlideItemTween { get; set; }

		public BoardItemPosition Position { get; set; }

		public IVisualComponent VisualComponent => null;

		public ILockedComponent LockedComponent => null;

		public bool IsDragging { get; set; }

		public EmptyGraphic ClickableArea => null;

		public bool IsTweened
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public bool IsLockedByFlyingAnimation
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		GameObject IBoardItemView.gameObject => null;

		public virtual event Action<IBoardItemView> Tapped
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

		public virtual event Action<IBoardItemView, PointerEventData> Dragging
		{
			add
			{
			}
			remove
			{
			}
		}

		public virtual event Action<IBoardItemView, PointerEventData> DragEnded
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

		public virtual event Action<IBoardItemView> DragCancelled
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

		public abstract void Initialise(IVisualComponent visualComponent, IReadOnlyDictionary<string, BehaviourPrefabData> behaviourConfigs, string poolIdStringFormat = null);

		public virtual void OnEnable()
		{
		}

		public virtual void PointerClicked()
		{
		}

		void IPointerDownHandler.OnPointerDown(PointerEventData eventData)
		{
		}

		void IPointerUpHandler.OnPointerUp(PointerEventData eventData)
		{
		}

		void IPointerClickHandler.OnPointerClick(PointerEventData eventData)
		{
		}

		void IDragHandler.OnDrag(PointerEventData eventData)
		{
		}

		void IEndDragHandler.OnEndDrag(PointerEventData eventData)
		{
		}

		void IPoolable.Initialize()
		{
		}

		void IPoolable.Deactivated()
		{
		}

		public void InvokeTapped()
		{
		}

		public abstract TViewBehaviour GetBehaviour<TViewBehaviour>() where TViewBehaviour : class, IBoardItemViewBehaviour;

		public abstract TViewBehaviour GetOrAttachBehaviour<TViewBehaviour>() where TViewBehaviour : class, IBoardItemViewBehaviour;

		public void CancelDrag()
		{
		}

		public BoardItemViewBase()
		{
		}
	}
}
