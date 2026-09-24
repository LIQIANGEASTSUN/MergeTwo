using System;
using Coffee.UIExtensions;
using FAT.Merge;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace FAT
{
	public class MBMergeCompReward : MonoBehaviour
	{
		[SerializeField]
		public Button btnClaim;

		[SerializeField]
		public MBItemView topItem;

		[SerializeField]
		public TMP_Text txtNum;

		[SerializeField]
		public UIParticle disappearEffect;

		[NonSerialized]
		public bool ignoreRefresh;

		public void Setup()
		{
		}

		public void InitOnPreOpen()
		{
		}

		public void CleanupOnPostClose()
		{
		}

		public Transform FirstRewardTrans()
		{
			return null;
		}

		public void _RrefreshNum(int num)
		{
		}

		public void _RrefreshRoot(bool show)
		{
		}

		public void _Refresh()
		{
		}

		public void _OnHandleRewardChange(bool add)
		{
		}

		public void _OnBtnClaim()
		{
		}

		public void _OnMessageLevelChange(int oldLevel)
		{
		}

		public void _OnMessagePreBeginReward(RewardCommitData data)
		{
		}

		public void _OnMessagePostCommitReward(RewardCommitData data)
		{
		}

		public void _ClearIgnoreFlag()
		{
		}

		public void _OnItemEvent(Item item, ItemEventType eventType)
		{
		}
	}
}
