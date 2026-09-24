using System;
using System.Collections.Generic;
using MergePuzzle;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Paxie
{
	public class Movable : MonoBehaviour, IDragHandler, IEventSystemHandler, IBeginDragHandler, IEndDragHandler, IPointerClickHandler
	{
		public enum Status
		{
			DEFAULT = 0,
			DRAGGING = 1,
			LOCKED = 2
		}

		public enum InteractionStatus
		{
			ACTIVE = 0,
			CLICKABLE = 1,
			NONCLICKABLE = 2,
			TUTORIAL_CLICKABLE = 3,
			TUTORIAL_NONCLICKABLE = 4
		}

		public enum BoardActionType
		{
			Merge = 0,
			Spawn = 1,
			Drag = 2,
			Swap = 3,
			AutoSwap = 4,
			Claim = 5,
			Task = 6
		}

		[SerializeField]
		public Status _status;

		[SerializeField]
		public InteractionStatus _interactionStatus;

		[NonSerialized]
		public readonly HashSet<Collider2D> _currentColliders;

		[NonSerialized]
		public PointerEventData _lastPointerDragEventData;

		public ItemController item;

		[NonSerialized]
		public bool _dragEnded;

		public InteractionStatus GetInteractionStatus => default(InteractionStatus);

		public Status MoveStatus => default(Status);

		public PointerEventData LastPointerDragEventData => null;

		public T GetNearestCollidingComponent<T>()
		{
			return default(T);
		}

		public bool IsColliding<T>()
		{
			return false;
		}

		public List<T> GetNearestCollidingComponents<T>()
		{
			return null;
		}

		public void OnTriggerEnter2D(Collider2D other)
		{
		}

		public void OnTriggerExit2D(Collider2D other)
		{
		}

		public void OnTriggerStay2D(Collider2D other)
		{
		}

		public void LogCurrentColliders()
		{
		}

		public void SetStatus(Status status)
		{
		}

		public void SetInteractionStatus(InteractionStatus interactionStatus)
		{
		}

		public void CancelDragBeforeChangingInteractionStatus(InteractionStatus interactionStatus)
		{
		}

		public void OnBeginDrag(PointerEventData eventData)
		{
		}

		public void OnEndDrag(PointerEventData eventData)
		{
		}

		public void DragEnded()
		{
		}

		public void OnDrag(PointerEventData eventData)
		{
		}

		public void OnPointerClick(PointerEventData eventData)
		{
		}
	}
}
