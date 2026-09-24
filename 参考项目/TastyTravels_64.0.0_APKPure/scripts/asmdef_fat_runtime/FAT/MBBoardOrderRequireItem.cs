using System;
using UnityEngine;

namespace FAT
{
	public class MBBoardOrderRequireItem : MonoBehaviour
	{
		[SerializeField]
		public MBCommonItem item;

		[SerializeField]
		public GameObject bgDefault;

		[SerializeField]
		public GameObject bgFinished;

		[SerializeField]
		public GameObject bgOnGoing;

		[SerializeField]
		public GameObject tagShop;

		[SerializeField]
		public GameObject goCheck;

		[SerializeField]
		public GameObject goSweep;

		[NonSerialized]
		public bool mConsumed;

		public int itemId { get; set; }

		public void SetData(int itemId, bool itemFiiled, bool orderFinished)
		{
		}

		public void RefreshTagShop()
		{
		}

		public void SetOrderConsumeState()
		{
		}

		public bool IsInConsumedState()
		{
			return false;
		}

		public void SetChecker(bool b)
		{
		}
	}
}
