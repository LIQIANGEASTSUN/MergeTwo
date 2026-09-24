using System;
using DG.Tweening;
using FAT.Merge;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace FAT
{
	public class MBItemCharge : MonoBehaviour
	{
		[Serializable]
		public class TimeWithLock
		{
			public GameObject goRoot;

			public GameObject goLock;

			public TextMeshProUGUI txtTime;
		}

		[SerializeField]
		public Transform tapCostRoot;

		[SerializeField]
		public GameObject progressBar;

		[SerializeField]
		public Image progressFill;

		[SerializeField]
		public GameObject progressBarMini;

		[SerializeField]
		public Image progressFillMini;

		[SerializeField]
		public TimeWithLock fixedTimeLock;

		[SerializeField]
		public TimeWithLock countdownLock;

		[SerializeField]
		public Transform mixProgressRoot;

		[NonSerialized]
		public MBItemView mView;

		[NonSerialized]
		public ItemClickSourceComponent clickSourceComp;

		[NonSerialized]
		public ItemMixSourceComponent mixSourceComp;

		[NonSerialized]
		public ItemAutoSourceComponent autoSourceComp;

		[NonSerialized]
		public ItemChestComponent chestComp;

		[NonSerialized]
		public ItemEatSourceComponent eaterComp;

		[NonSerialized]
		public ItemToolSourceComponent toolSourceComp;

		[NonSerialized]
		public ItemSkillComponent skillComp;

		[NonSerialized]
		public ItemJumpCDComponent jumpCDComp;

		[NonSerialized]
		public ItemBonusCompoent bonusComp;

		[NonSerialized]
		public ItemBubbleComponent bubbleFrozenComp;

		[NonSerialized]
		public ItemTokenMultiComponent tokenMultiComp;

		[NonSerialized]
		public ItemSpecialBoxComponent specialBoxComp;

		[NonSerialized]
		public bool mIsCostEnergy;

		[NonSerialized]
		public bool mIsShowCd;

		[NonSerialized]
		public bool mIsShowOutput;

		[NonSerialized]
		public bool mIsShowEnergy;

		[NonSerialized]
		public bool mIsShowBoostEnergy;

		[NonSerialized]
		public bool mIsShowTapCost;

		[NonSerialized]
		public bool mIsShowLightbulb;

		[NonSerialized]
		public float mTapCostSwitchInterval;

		[NonSerialized]
		public float mTapCostSwitchTimer;

		[NonSerialized]
		public int id;

		[NonSerialized]
		public int tid;

		[NonSerialized]
		public Sequence mTapCostSwitchSeq;

		[NonSerialized]
		public int mMixProgress;

		public Transform tapCostComp => null;

		public void SetData(MBItemView view)
		{
		}

		public void ClearData()
		{
		}

		public void UpdateEx()
		{
		}

		public float _CalcProgress(long totalMilli, long curMilli)
		{
			return 0f;
		}

		public void _RefreshChest()
		{
		}

		public void _RefreshEater()
		{
		}

		public void _RefreshTapSource()
		{
		}

		public void _RefreshMixSource()
		{
		}

		public void _RefreshAutoSource()
		{
		}

		public void _RefreshToolSource()
		{
		}

		public bool NeedHideToolSourceOutputEffect()
		{
			return false;
		}

		public void _RefreshSkillCountdownMini()
		{
		}

		public void _RefreshCD(bool b)
		{
		}

		public void _RefreshOutput(bool b)
		{
		}

		public void _RefreshEnergy(bool b)
		{
		}

		public void _RefreshLightbulb(bool b)
		{
		}

		public void _RefreshBoostEnergy(bool b)
		{
		}

		public void _RefreshBoxSource()
		{
		}

		public void _RefreshOrderBox()
		{
		}

		public void _RefreshJumpCD()
		{
		}

		public void _RefreshTokenMulti()
		{
		}

		public void _RefreshTapCost(bool b)
		{
		}

		public void _TryShowNextTapCost()
		{
		}

		public void _TryRefreshBonus(bool show)
		{
		}

		public void _TryRefreshChest(bool cd)
		{
		}

		public void _TryRefreshAutoSource(bool cd)
		{
		}

		public void _TryRefreshTapSource(bool cd)
		{
		}

		public void _RefreshMixProgressShow(bool show)
		{
		}

		public void _RefreshMixProgress(int p, int total)
		{
		}

		public void _RefreshFrozenItemTime()
		{
		}

		public void _RefreshSpecialBox()
		{
		}
	}
}
