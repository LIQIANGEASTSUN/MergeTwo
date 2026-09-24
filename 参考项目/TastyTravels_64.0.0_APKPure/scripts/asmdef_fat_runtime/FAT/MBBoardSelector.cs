using System;
using UnityEngine;

namespace FAT
{
	public class MBBoardSelector : MonoBehaviour, IMergeBoard
	{
		[SerializeField]
		public RectTransform selector;

		[SerializeField]
		public RectTransform selectorMax;

		[NonSerialized]
		public int width;

		[NonSerialized]
		public int height;

		public (int x, int y) lastCoord { get; set; }

		void IMergeBoard.Init()
		{
		}

		void IMergeBoard.Setup(int w, int h)
		{
		}

		void IMergeBoard.Cleanup()
		{
		}

		public void ForceShowSelector(int x, int y)
		{
		}

		public void Show(int x, int y)
		{
		}

		public void Hide()
		{
		}
	}
}
