using Config;
using IFix.Core;
using UnityEngine;

namespace FAT
{
	public class MBBoardOrderRewardItem : MonoBehaviour
	{
		[SerializeField]
		public MBCommonItem item;

		[IDTag(1)]
		public void SetData(RewardConfig reward)
		{
		}

		[IDTag(0)]
		public void SetData(int id, int count)
		{
		}
	}
}
