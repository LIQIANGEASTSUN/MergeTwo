using System;
using FAT.Merge;
using UnityEngine;
using UnityEngine.UI;

namespace FAT
{
	public class UIMixSourceTips : UITipsBase
	{
		[SerializeField]
		public RectTransform panel;

		[SerializeField]
		public Transform itemRoot;

		[SerializeField]
		public Button btnInfo;

		[SerializeField]
		public float widthA;

		[SerializeField]
		public float widthB;

		[NonSerialized]
		public Item _mixSourceItem;

		public override void OnCreate()
		{
		}

		public override void OnParse(params object[] items)
		{
		}

		public override void OnPreOpen()
		{
		}

		public void Refresh()
		{
		}

		public void ShowItem(int idx, int id, bool show)
		{
		}

		public void OnClickItem(int idx)
		{
		}

		public void OnClickInfo()
		{
		}

		public void _003C_003EiFixBaseProxy_OnCreate()
		{
		}

		public void _003C_003EiFixBaseProxy_OnParse(object[] P0)
		{
		}

		public new void _003C_003EiFixBaseProxy_OnPreOpen()
		{
		}
	}
}
