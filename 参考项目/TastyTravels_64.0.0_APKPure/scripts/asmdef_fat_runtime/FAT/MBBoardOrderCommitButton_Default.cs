using System;
using UnityEngine;
using UnityEngine.UI;

namespace FAT
{
	public class MBBoardOrderCommitButton_Default : MonoBehaviour, MBBoardOrder.ICommitButton
	{
		[Tooltip("完成按钮位置 默认y")]
		[SerializeField]
		public float finishButtonY_Default;

		[Tooltip("完成按钮位置 额外奖励y")]
		[SerializeField]
		public float finishButtonY_ExtraReward;

		[SerializeField]
		public Button btnFinish;

		[SerializeField]
		public Button btnFinishOld;

		[NonSerialized]
		public IOrderData order;

		Button MBBoardOrder.ICommitButton.BtnCommit => null;

		public Button btnCommit => null;

		void MBBoardOrder.ICommitButton.OnDataChange(IOrderData data)
		{
		}

		void MBBoardOrder.ICommitButton.OnDataClear()
		{
		}

		void MBBoardOrder.ICommitButton.Refresh()
		{
		}

		void MBBoardOrder.ICommitButton.RefreshOffset(bool isExtraReward)
		{
		}
	}
}
