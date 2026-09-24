using System;
using UnityEngine;

public class DraggableItem : MonoBehaviour
{
	[NonSerialized]
	public bool isDragging;

	[NonSerialized]
	public Vector3 offset;

	public void OnMouseDown()
	{
	}

	public void OnMouseDrag()
	{
	}

	public void OnMouseUp()
	{
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
}
