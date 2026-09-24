using System;
using FAT.Merge;
using UnityEngine;

namespace FAT
{
	public class MBItemActivityToken : MonoBehaviour
	{
		[SerializeField]
		public RectTransform scoreMicRect;

		[SerializeField]
		public UIImageRes scoreMicIcon;

		[NonSerialized]
		public MBItemView mView;

		[NonSerialized]
		public int itemId;

		public void SetData(MBItemView view)
		{
		}

		public void ClearData()
		{
		}

		public void RefreshActivityTokenState()
		{
		}

		public RectTransform GetScoreMicRect()
		{
			return null;
		}

		public void _RefreshRes(Item item)
		{
		}

		public void _RefreshBL(ItemActivityTokenComponent comp, ItemTokenMultiComponent tokenMultiComp)
		{
		}

		public void _ResetUI()
		{
		}
	}
}
