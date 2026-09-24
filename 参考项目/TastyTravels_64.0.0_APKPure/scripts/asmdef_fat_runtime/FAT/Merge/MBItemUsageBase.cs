using System;
using UnityEngine;

namespace FAT.Merge
{
	public class MBItemUsageBase : MonoBehaviour
	{
		[NonSerialized]
		public Item mItem;

		public virtual void OnBtnClick()
		{
		}

		public virtual void Initialize()
		{
		}

		public virtual void SetData(Item item)
		{
		}

		public virtual void ClearData()
		{
		}

		public virtual void Refresh()
		{
		}

		public virtual void UpdateContent()
		{
		}

		public void Show()
		{
		}

		public void Hide()
		{
		}
	}
}
