using System;
using UnityEngine;
using UnityEngine.EventSystems;

public class MBDrag : MonoBehaviour, IBeginDragHandler, IEventSystemHandler, IEndDragHandler, IDragHandler
{
	public RectTransform target;

	public Action<bool> onDragEnd;

	public Action<bool> onEnterExitTarget;

	public Transform screenOrigin;

	[NonSerialized]
	public Vector3 _originPosition;

	[NonSerialized]
	public bool _isDragging;

	[NonSerialized]
	public bool _isInTarget;

	public void OnBeginDrag(PointerEventData eventData)
	{
	}

	public void OnEndDrag(PointerEventData eventData)
	{
	}

	public void OnDrag(PointerEventData eventData)
	{
	}

	public bool isInTarget()
	{
		return false;
	}

	public void backToOriginPosition()
	{
	}
}
