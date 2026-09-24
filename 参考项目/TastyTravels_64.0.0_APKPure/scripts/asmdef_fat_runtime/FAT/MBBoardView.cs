using System;
using System.Collections.Generic;
using FAT.Merge;
using UnityEngine;

namespace FAT
{
	public class MBBoardView : MonoBehaviour
	{
		[SerializeField]
		public float sizeOfCell;

		[SerializeField]
		public RectTransform root;

		[SerializeField]
		public MBBoardBg bgCtrl;

		[SerializeField]
		public MBBoardFg fgCtrl;

		[SerializeField]
		public MBBoardSelector selectorCtrl;

		[SerializeField]
		public MBBoardDrag draggerCtrl;

		[SerializeField]
		public MBBoardItemHolder containerCtrl;

		[SerializeField]
		public MBBoardEffect effectCtrl;

		[SerializeField]
		public MBBoardIndicator indCtrl;

		[SerializeField]
		public RectTransform moveCtrl;

		[SerializeField]
		public RectTransform pairCtrl;

		[SerializeField]
		public RectTransform topEffectCtrl;

		[SerializeField]
		public MBBoardCloud cloudCtrl;

		[SerializeField]
		public BoardRes boardRes;

		[NonSerialized]
		public List<IMergeBoard> mAllCompList;

		public MBBoardBg boardBg => null;

		public MBBoardFg boardFg => null;

		public MBBoardSelector boardSelector => null;

		public MBBoardDrag boardDrag => null;

		public MBBoardItemHolder boardHolder => null;

		public MBBoardEffect boardEffect => null;

		public MBBoardCloud boardCloud => null;

		public MBBoardIndicator boardInd => null;

		public RectTransform boardRoot => null;

		public RectTransform moveRoot => null;

		public RectTransform pairRoot => null;

		public RectTransform topEffectRoot => null;

		public BoardRes BoardRes => null;

		public float cellSize => 0f;

		public void Setup()
		{
		}

		public void OnBoardEnter(MergeWorld world, MergeWorldTracer tracer)
		{
		}

		public void OnBoardLeave()
		{
		}
	}
}
