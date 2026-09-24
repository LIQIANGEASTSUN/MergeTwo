using Config;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace FAT
{
	public class MBCommonItem : MonoBehaviour
	{
		[SerializeField]
		public UIImageRes iconRes;

		[SerializeField]
		public Text textNum;

		[SerializeField]
		public TMP_Text tmpNum;

		[SerializeField]
		public Button btnInfo;

		public void ShowRewardCommitData(RewardCommitData reward)
		{
		}

		public void ShowRewardConfig(RewardConfig reward)
		{
		}

		public void ShowItemFromRes(AssetConfig res, int id, int count)
		{
		}

		public void ShowItemNormal(int id, int count)
		{
		}

		public void ShowItemReward(int id, int count)
		{
		}
	}
}
