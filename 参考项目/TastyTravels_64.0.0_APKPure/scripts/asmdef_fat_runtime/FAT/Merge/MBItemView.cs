using System;
using System.Collections.Generic;
using UnityEngine;

namespace FAT.Merge
{
	public class MBItemView : MonoBehaviour
	{
		[SerializeField]
		public UIImageRes iconRes;

		[SerializeField]
		public MBItemContent contentCtrl;

		[SerializeField]
		public MBItemCharge chargeCtrl;

		[SerializeField]
		public MBItemAnimation animCtrl;

		[SerializeField]
		public MBItemEffect effectCtrl;

		[SerializeField]
		public MBItemIndicator indicatorCtrl;

		[SerializeField]
		public MBItemActivityToken activityTokenCtrl;

		[NonSerialized]
		public Dictionary<ItemLifecycle, MergeItemBaseState> mStates;

		[NonSerialized]
		public string debugName;

		[NonSerialized]
		public int combo;

		public ItemLifecycle currentStateType { get; set; }

		public Item data { get; set; }

		public ItemSpawnContext spawnContext { get; set; }

		public ItemInteractContext interactContext { get; set; }

		public ItemStateChangeContext stateChangeContext { get; set; }

		public Transform tapCostComp => null;

		public bool isInBox => false;

		public bool hasNewTip => false;

		public bool hasFlag => false;

		public int Combo()
		{
			return 0;
		}

		public void SetData(Item data)
		{
		}

		public void ClearData()
		{
		}

		public void RefreshOnComponentChange()
		{
		}

		public void RefreshJumpCdState()
		{
		}

		public void RefreshTokenMultiState()
		{
		}

		public void AddTokenMultiEffect()
		{
		}

		public void RefreshActivityTokenState()
		{
		}

		public MBItemActivityToken GetActivityTokenCtrl()
		{
			return null;
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

		public void TryConsumeGirdReward()
		{
		}

		public void TryClickGirdReward()
		{
		}

		public bool IsDragging()
		{
			return false;
		}

		public bool IsViewIdle()
		{
			return false;
		}

		public bool IsViewDraggable()
		{
			return false;
		}

		public bool IsViewCantSwap()
		{
			return false;
		}

		public void LateUpdate()
		{
		}

		public void TryResolveNewItemTip(float popTipDelay = 0f)
		{
		}

		public void PlayTap()
		{
		}

		public void PlayTapDelayHigh()
		{
		}

		public void PlaySpawn()
		{
		}

		public void PlayDropToGround()
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

		public void AddHintForLightbulb()
		{
		}

		public void RemoveHintForLightbulb()
		{
		}

		public void AddHintForReadyToMerge()
		{
		}

		public void RemoveHintForReadyToMerge()
		{
		}

		public void AddHintForReadyToUse()
		{
		}

		public void RemoveHintForReadyToUse()
		{
		}

		public void AddOnBoardEffect()
		{
		}

		public void AddOnBoardEffect4X()
		{
		}

		public void AddOnBoardEffectForBubble()
		{
		}

		public void AddOutOfInventoryEffect()
		{
		}

		public void SetSelect()
		{
		}

		public void SetDeselect()
		{
		}

		public void RefreshChestTip()
		{
		}

		public void SetOrderTipDirty()
		{
		}

		public void RefreshActivityIndicator()
		{
		}

		public Vector3 GetCurrentShadowPosition()
		{
			return default(Vector3);
		}

		public void SetBorn()
		{
		}

		public void SetDrag()
		{
		}

		public void SetMixOutput()
		{
		}

		public void SetIdle()
		{
		}

		public void SetMove()
		{
		}

		public void SetRewardListPop()
		{
		}

		public void SetSpawnFromInventory()
		{
		}

		public void ResolveSpawnWait()
		{
		}

		public void SetSpawn(ItemSpawnContext context)
		{
		}

		public void SetDelayUnlock(ItemStateChangeContext context)
		{
		}

		public void SetMerge(ItemInteractContext context)
		{
		}

		public void SetConsume(ItemInteractContext context)
		{
		}

		public void SetDead()
		{
		}

		public void SetEmpty()
		{
		}

		public void SetResAction(Action<GameObject> act)
		{
		}

		public void SetFeedStateChange()
		{
		}

		public void SetMoveToRewardBox()
		{
		}

		public void TryApplyFilter()
		{
		}

		public void RemoveFilter()
		{
		}

		public void _UpdateLifecycle()
		{
		}

		public void _ChangeState(ItemLifecycle type)
		{
		}

		public void _EnsureState(ItemLifecycle type)
		{
		}

		public MergeItemBaseState _CreateState(ItemLifecycle type)
		{
			return null;
		}

		public void OnDrawGizmos()
		{
		}

		public MBResHolderBase GetResHolder()
		{
			return null;
		}

		public void TweenSetAlpha(float a)
		{
		}

		public float GetCurIconAlpha()
		{
			return 0f;
		}
	}
}
