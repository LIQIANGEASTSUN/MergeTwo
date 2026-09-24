using Config;
using IFix.Core;
using TMPro;
using UnityEngine;

namespace FAT
{
	public class MBBoardOrderRewardItemV2 : MonoBehaviour
	{
		public enum LayoutType
		{
			Long = 0,
			Short = 1
		}

		[SerializeField]
		public MBCommonItem item;

		[SerializeField]
		public TMP_Text txtNum;

		[Header("布局配置")]
		[SerializeField]
		[Tooltip("长版布局宽度（显示图标+数量）")]
		public float longWidth;

		[SerializeField]
		[Tooltip("短版布局宽度（仅显示图标）")]
		public float shortWidth;

		[IDTag(1)]
		public void SetData(int rewardId, int rewardNum)
		{
		}

		[IDTag(0)]
		public void SetData(int rewardId, int rewardNum, LayoutType layout)
		{
		}

		[IDTag(3)]
		public void SetData(RewardConfig reward)
		{
		}

		[IDTag(2)]
		public void SetData(RewardConfig reward, LayoutType layout)
		{
		}

		public void Clear()
		{
		}

		public void _ApplyLayout(LayoutType layout)
		{
		}
	}
}
