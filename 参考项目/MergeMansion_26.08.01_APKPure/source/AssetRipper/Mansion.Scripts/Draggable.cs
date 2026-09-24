using System;
using GameLogic.Player.Board;
using UnityEngine;
using UnityEngine.EventSystems;

public class Draggable : MonoBehaviour, IBeginDragHandler, IEventSystemHandler, IDragHandler, IEndDragHandler
{
	public static Action<Coordinate> DragStartedCall;

	public static Action<Coordinate, Coordinate, Coordinate> ItemHoverCall;

	public static Action<bool, Coordinate> InventoryButtonHoverCall;

	public static Action<Coordinate, Coordinate, Coordinate, bool> MergeOrMoveCall;

	[NonSerialized]
	public Coordinate startCoordinate;

	[NonSerialized]
	public Coordinate currentCoordinate;

	[NonSerialized]
	public Coordinate endCoordinate;

	[NonSerialized]
	public Coordinate lastPotentialNearCoordinate;

	[NonSerialized]
	public bool isMovable;

	[NonSerialized]
	public bool dragSafeAreaEnabled;

	public void OnBeginDrag(PointerEventData eventData)
	{
	}

	public void OnDrag(PointerEventData eventData)
	{
	}

	public void OnEndDrag(PointerEventData eventData)
	{
	}

	public static Vector2 CalculateClampedPosition(Vector2 inputPos)
	{
		return default(Vector2);
	}

	public void SetMovable(bool state)
	{
	}

	public void SetStartCoordinate(int x, int y)
	{
	}
}
