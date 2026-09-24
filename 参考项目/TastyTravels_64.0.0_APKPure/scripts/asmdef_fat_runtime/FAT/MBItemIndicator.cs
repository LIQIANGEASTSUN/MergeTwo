using System;
using FAT.Merge;
using UnityEngine;

namespace FAT
{
	public class MBItemIndicator : MonoBehaviour
	{
		[SerializeField]
		public UIImageRes flagRT;

		[NonSerialized]
		public MBItemView mView;

		public bool HasFlag => false;

		public void SetData(MBItemView view)
		{
		}

		public void ClearData()
		{
		}

		public void UpdateEx()
		{
		}

		public void OnSelect()
		{
		}

		public void OnDeselect()
		{
		}

		public void TryRefreshChestTip()
		{
		}

		public void TryRefreshFeedProgress()
		{
		}

		public void RefreshActivityIndicator()
		{
		}

		public void _Reset()
		{
		}
	}
}
