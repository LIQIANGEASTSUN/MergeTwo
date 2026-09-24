using System;
using System.Collections.Generic;
using FAT.Merge;
using UnityEngine;
using UnityEngine.UI;
using fat.rawdata;

namespace FAT
{
	public class UIMixSourceDetail : UIBase
	{
		[SerializeField]
		public Button btnClose;

		[SerializeField]
		public Transform itemRoot;

		[SerializeField]
		public GameObject itemPrefab;

		[NonSerialized]
		public Item _mixSourceItem;

		[NonSerialized]
		public PoolItemType poolItemType;

		public override void OnCreate()
		{
		}

		public override void OnParse(params object[] items)
		{
		}

		public override void OnPreOpen()
		{
		}

		public override void OnPostClose()
		{
		}

		public void Refresh()
		{
		}

		public void ShowMixOutput(int output, MergeMixCost cost, Dictionary<int, int> mixedItems)
		{
		}

		public int FindSetDataBeginIdx(Transform item, int itemCount)
		{
			return 0;
		}

		public Transform CreateMixItem()
		{
			return null;
		}

		public void Clear()
		{
		}

		public void _003C_003EiFixBaseProxy_OnCreate()
		{
		}

		public void _003C_003EiFixBaseProxy_OnParse(object[] P0)
		{
		}

		public void _003C_003EiFixBaseProxy_OnPreOpen()
		{
		}

		public void _003C_003EiFixBaseProxy_OnPostClose()
		{
		}
	}
}
