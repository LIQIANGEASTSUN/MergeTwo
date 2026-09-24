using System;
using TMPro;
using UnityEngine;

namespace FAT.Merge
{
	public class MBBoardOrderBoxV2 : MonoBehaviour
	{
		[SerializeField]
		public Animator animator;

		[SerializeField]
		public UIImageRes boxIcon;

		[SerializeField]
		public UIImageRes rewardIcon;

		[SerializeField]
		public TextMeshProUGUI txtRewardNum;

		[NonSerialized]
		public int mOrderId;

		public void Init()
		{
		}

		public void Setup()
		{
		}

		public void Cleanup()
		{
		}

		public bool TryShowBox(int orderId)
		{
			return false;
		}

		public void ShowReward(RewardCommitData reward)
		{
		}

		public void PlayOpenBoxEffect()
		{
		}

		public void _OnBtnPreview()
		{
		}
	}
}
