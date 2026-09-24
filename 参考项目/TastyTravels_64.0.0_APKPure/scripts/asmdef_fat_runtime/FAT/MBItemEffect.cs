using System;
using System.Collections.Generic;
using FAT.Merge;
using UnityEngine;

namespace FAT
{
	public class MBItemEffect : MonoBehaviour
	{
		[SerializeField]
		public Transform backRoot;

		[SerializeField]
		public Transform frontRoot;

		[SerializeField]
		public Transform filterRoot;

		[NonSerialized]
		public MBItemView mView;

		[NonSerialized]
		public Dictionary<ItemEffectType, GameObject> mEffectDict;

		[NonSerialized]
		public bool mIsShowTeslaBuff;

		[NonSerialized]
		public bool mCanAffectedByTimeScale;

		[NonSerialized]
		public bool mIsOrderFlagDirty;

		public void SetData(MBItemView view)
		{
		}

		public void ClearData()
		{
		}

		public void UpdateEx()
		{
		}

		public void TryAddFilterEffect()
		{
		}

		public void RemoveFilterEffect()
		{
		}

		public void AddHintForOrderCanFinish()
		{
		}

		public void RemoveHintForOrderCanFinish()
		{
		}

		public void AddHintForConsumeEnergy()
		{
		}

		public void RemoveHintForConsumeEnergy()
		{
		}

		public void AddHintForConsumeBoostEnergy()
		{
		}

		public void RemoveHintForConsumeBoostEnergy()
		{
		}

		public void AddHintForLightbulb()
		{
		}

		public void RemoveHintForLightbulb()
		{
		}

		public void AddReadyToUseEffect()
		{
		}

		public void RemoveReadyToUseEffect()
		{
		}

		public void AddTopLevelEffect()
		{
		}

		public void AddSelectOutlineEffect()
		{
		}

		public void RemoveSelectOutlineEffect()
		{
		}

		public void AddShadowEffect()
		{
		}

		public void RemoveShadowEffect()
		{
		}

		public void TryRefreshJumpCDState()
		{
		}

		public void TryRefreshTokenMultiState()
		{
		}

		public void TryAddGirdRewardPrefab()
		{
		}

		public void TrySetGirdRewardLocalPos(Vector3 originWorldPos)
		{
		}

		public void TryPlayGirdRewardTween(float duration, Transform tweenRoot)
		{
		}

		public void TryRemoveGirdRewardPrefab()
		{
		}

		public void TryConsumeGirdReward()
		{
		}

		public void TryClickGirdReward()
		{
		}

		public void TryRefreshOpenChestTip()
		{
		}

		public void SetOrderTipDirty()
		{
		}

		public void TryRefreshOrderTip()
		{
		}

		public void _RefreshTimeScaleBuffUsability()
		{
		}

		public void _SetTimeScaleBuffUsable(bool b)
		{
		}

		public void _TryRefreshTimeScaleSourceEffect()
		{
		}

		public void _TryRefreshTimeScaleBuffEffect()
		{
		}

		public bool _ShouldShowTeslaBuff()
		{
			return false;
		}

		public void AddOnBoardEffect(float duration = 1f)
		{
		}

		public void AddOnBoardEffect4X(float duration = 1f)
		{
		}

		public void AddOnBoardEffectForBubble()
		{
		}

		public void AddOutOfInventoryEffect()
		{
		}

		public void AddTokenMultiEffect()
		{
		}

		public bool _IsTapGuideFinished()
		{
			return false;
		}

		public bool NeedShowToolFragmentTopEffect()
		{
			return false;
		}

		public bool NeedShowToolSourceTopEffect()
		{
			return false;
		}

		public void _AddEffect(ItemEffectType type)
		{
		}

		public void _RemoveEffect(ItemEffectType type)
		{
		}

		public GameObject _CreateEffect(ItemEffectType type)
		{
			return null;
		}

		public void _ReleaseEffect(ItemEffectType type, GameObject obj)
		{
		}

		public void _ClearAllEffect()
		{
		}

		public void _ApplyFilter()
		{
		}

		public void _RemoveFilter()
		{
		}
	}
}
