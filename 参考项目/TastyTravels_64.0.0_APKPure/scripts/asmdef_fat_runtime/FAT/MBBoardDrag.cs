using System;
using UnityEngine;
using UnityEngine.EventSystems;

namespace FAT
{
	public class MBBoardDrag : MonoBehaviour, IMergeBoard, IPointerClickHandler, IEventSystemHandler, IBeginDragHandler, IDragHandler, IEndDragHandler
	{
		[NonSerialized]
		public int width;

		[NonSerialized]
		public int height;

		[NonSerialized]
		public Vector2Int mTempPos;

		[NonSerialized]
		public Vector2 mBeginDragPos;

		[NonSerialized]
		public bool mIsDrag;

		public bool IsDraging => false;

		public float mScale => 0f;

		public Vector2 mOrigin => default(Vector2);

		void IMergeBoard.Init()
		{
		}

		void IMergeBoard.Setup(int w, int h)
		{
		}

		void IMergeBoard.Cleanup()
		{
		}

		void IBeginDragHandler.OnBeginDrag(PointerEventData eventData)
		{
		}

		void IDragHandler.OnDrag(PointerEventData eventData)
		{
		}

		void IEndDragHandler.OnEndDrag(PointerEventData eventData)
		{
		}

		void IPointerClickHandler.OnPointerClick(PointerEventData eventData)
		{
		}

		public void EndDrag(Vector2 pos)
		{
		}

		public void Update()
		{
		}

		public void _CalcAnchoredCoord(Vector2 pos, ref Vector2Int result)
		{
		}
	}
}
