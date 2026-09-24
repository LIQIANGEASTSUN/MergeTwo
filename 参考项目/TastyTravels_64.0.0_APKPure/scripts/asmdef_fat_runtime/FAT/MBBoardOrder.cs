using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Coffee.UIExtensions;
using DG.Tweening;
using FAT.Merge;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace FAT
{
	public class MBBoardOrder : UIGenericItemBase<IOrderData>
	{
		public interface ICommitButton
		{
			Button BtnCommit { get; }

			void OnDataChange(IOrderData data);

			void OnDataClear();

			void Refresh();

			void RefreshOffset(bool isExtraReward);
		}

		[Serializable]
		public class Counting
		{
			public GameObject root;

			public RectTransform progress;

			public TextMeshProUGUI txtCounting;
		}

		[Serializable]
		public class Score
		{
			public GameObject root;

			public UIImageRes icon;

			public TextMeshProUGUI txtScore;
		}

		[CompilerGenerated]
		public sealed class _003C_003Ec__DisplayClass138_0
		{
			public MBBoardOrder _003C_003E4__this;

			public int count;

			public float preEffTime;

			public float delay;

			public bool _003C_CoClaimRewards_003Eb__0()
			{
				return false;
			}

			public bool _003C_CoClaimRewards_003Eb__1()
			{
				return false;
			}
		}

		[CompilerGenerated]
		public sealed class _003C_CoClaimRewards_003Ed__138 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public object _003C_003E2__current;

			public MBBoardOrder _003C_003E4__this;

			[NonSerialized]
			public _003C_003Ec__DisplayClass138_0 _003C_003E8__1;

			object IEnumerator<object>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003C_CoClaimRewards_003Ed__138(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}
		}

		[CompilerGenerated]
		public sealed class _003C_TryClaimMagicOrderReward_003Ed__137 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public object _003C_003E2__current;

			public MBBoardOrder _003C_003E4__this;

			object IEnumerator<object>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003C_TryClaimMagicOrderReward_003Ed__137(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}
		}

		[Tooltip("根节点")]
		[SerializeField]
		public RectTransform container;

		[Tooltip("标准尺寸")]
		[SerializeField]
		public float sizeNormal;

		[Tooltip("加长尺寸 需求超过2项时使用")]
		[SerializeField]
		public float sizePlus;

		[Tooltip("间隔 需要叠加到元素尺寸上 | 为了无缝入场/退场 布局上的元素间隔设置为0")]
		[SerializeField]
		public float space;

		[Tooltip("礼盒图标变成奖励需要的时间")]
		[SerializeField]
		public float effOrderBoxConvertRewardDelay;

		[Tooltip("礼盒从棋盘消失需要的时间")]
		[SerializeField]
		public float effOrderBoxDieDelay;

		[SerializeField]
		public GameObject goBgLock;

		[SerializeField]
		public GameObject goBgSimple;

		[SerializeField]
		public GameObject goBgMultiReward;

		[SerializeField]
		public Transform requireRoot;

		[SerializeField]
		public TextMeshProUGUI txtUnlockLevel;

		[SerializeField]
		public Transform roleRoot;

		[SerializeField]
		[Tooltip("新订单生成时：延迟播放 Play_EnterCompleted / Play_EnterNotCompleted（单位：秒）。\n注意：PlayAnim_Born（订单缩放入场）不受此参数影响")]
		public float appearSpineDelay;

		[NonSerialized]
		public MBRoleStateAnimCtrl roleStateAnimCtrl;

		[NonSerialized]
		public bool _prevFinished;

		[NonSerialized]
		public bool _shouldPlayEnter;

		[SerializeField]
		public RectTransform bgRect;

		[SerializeField]
		public MBBoardOrderBox orderBox;

		[Tooltip("订单消失动画的延迟")]
		[SerializeField]
		public float orderDieDelay;

		[SerializeField]
		public TextMeshProUGUI txtFlashCountdown;

		[SerializeField]
		public Transform extraRewardRoot;

		[SerializeField]
		public Counting countingGroup;

		[SerializeField]
		public Score scoreGroup;

		[SerializeField]
		public Score scoreGroupBR;

		[SerializeField]
		public Transform orderLikeRoot;

		[NonSerialized]
		public Tween mTween;

		[NonSerialized]
		public int orderBoxBindingVersion;

		[NonSerialized]
		public Sequence orderBoxTrailSequence;

		[NonSerialized]
		public List<UIParticle> orderBoxTrailParticles;

		[NonSerialized]
		public Tween mTweenCollectIcon;

		[NonSerialized]
		public MBBoardOrderAttachment att_extraRewardMini;

		[NonSerialized]
		public MBBoardOrderAttachment att_orderLike;

		[NonSerialized]
		public MBBoardOrderAttachment att_orderRate;

		[NonSerialized]
		public MBBoardOrderAttachment att_orderBonus;

		[NonSerialized]
		public MBBoardOrderAttachment att_clawOrder;

		[NonSerialized]
		public MBBoardOrderAttachment att_mysteryBagOrder;

		[NonSerialized]
		public MBBoardOrderAttachment att_thiefOrder;

		[NonSerialized]
		public MBBoardOrderAttachment att_colorOrder;

		[NonSerialized]
		public MBBoardOrderAttachment att_foodVanOrder;

		[NonSerialized]
		public MBBoardOrderAttachment att_multiOrder;

		[NonSerialized]
		public MBBoardOrderAttachment att_spinOrder;

		[NonSerialized]
		public MBBoardOrderAttachment att_piggyOrder;

		[NonSerialized]
		public MBBoardOrderAttachment att_cdOrder;

		[NonSerialized]
		public List<RewardCommitData> orderBoxRewardsToCommit;

		[NonSerialized]
		public List<RewardCommitData> normalRewardsToCommit;

		[NonSerialized]
		public bool isCommitting;

		[NonSerialized]
		public int consumeIdx;

		[NonSerialized]
		public float commitFlyDelay;

		[NonSerialized]
		public ICommitButton commitButton;

		[NonSerialized]
		public Transform finishFeedbackEffectRoot;

		[NonSerialized]
		public Item magicHourRewardItem;

		[NonSerialized]
		public IOrderData magicHourTargetOrder;

		public string poolKey { get; set; }

		public int sortGroupPrev { get; set; }

		public int sortGroup { get; set; }

		public int sortWeight { get; set; }

		public Button btnCommit => null;

		public Transform containerTrans => null;

		public Transform autoGuide => null;

		public bool IsTweenPlaying => false;

		public string GetItemThemeKey()
		{
			return null;
		}

		public void PlayAnim_Born(float bornDelayForApi)
		{
		}

		public void PlayAnim_Die()
		{
		}

		public void PlayAnim_AddOrderBox()
		{
		}

		public Transform FindFinishButton()
		{
			return null;
		}

		public bool _HasMagicHourReward()
		{
			return false;
		}

		public bool _HasNormalRewardsToCommit()
		{
			return false;
		}

		public bool _IsInCommitProcess()
		{
			return false;
		}

		public bool _HasOrderBoxRewardsToCommit()
		{
			return false;
		}

		public void _OnBornDelayComplete()
		{
		}

		public void _OnAnimating()
		{
		}

		public void _OnAnimComplete_Born()
		{
		}

		public void _OnAnimComplete_Die()
		{
		}

		public void _ClearAnim()
		{
		}

		public override void InitComponents()
		{
		}

		public override void UpdateOnDataChange()
		{
		}

		public override void UpdateOnDataClear()
		{
		}

		public void _Register()
		{
		}

		public void _UnRegister()
		{
		}

		public void _Refresh()
		{
		}

		public void _TryResolveScrollRequest()
		{
		}

		public void _RefreshTheme()
		{
		}

		public void _RefreshSize()
		{
		}

		public void _InitRoleStateAnimCtrl()
		{
		}

		public void _RefreshRole(bool locked)
		{
		}

		public void _RefreshRoleStateByOrder(bool locked)
		{
		}

		public void _SetRoleSpineSkin()
		{
		}

		public void _ReleaseRoleSpine()
		{
		}

		public void _RefreshLocked()
		{
		}

		public void _RefreshReward()
		{
		}

		public int _FindExtraSlotRewardIndex()
		{
			return 0;
		}

		public void _RefreshReward_NormalSlot(Transform rewardRoot)
		{
		}

		public void _RefreshReward_ExtraSlot()
		{
		}

		public void _RefreshScore()
		{
		}

		public void _RefreshScoreBR()
		{
		}

		public void _RefreshCounting()
		{
		}

		public void _RefreshDurationOrder()
		{
		}

		public void _SetCountdownState(bool show)
		{
		}

		public void _SetCountingState(bool show)
		{
		}

		public void _SetScoreState(bool show)
		{
		}

		public void _SetScoreBRState(bool show)
		{
		}

		public GameObject _GetRewardBg()
		{
			return null;
		}

		public Transform _GetRewardRoot(Transform rewardBg)
		{
			return null;
		}

		public void _RefreshRequire()
		{
		}

		public bool _IsFinished()
		{
			return false;
		}

		public void _RefreshClaim()
		{
		}

		public void _RefreshClaimOffset()
		{
		}

		public void _RefreshMultiOrder()
		{
		}

		public void _OnBtnFinish(bool needConfirm)
		{
		}

		public bool _IsAllRequiredItemConsumed(int requireCount)
		{
			return false;
		}

		public bool _TryClaimScore()
		{
			return false;
		}

		public bool _TryClaimHideScore()
		{
			return false;
		}

		public bool _CheckShouldCommitHideScore()
		{
			return false;
		}

		public Vector3 GetHideScoreFromPos()
		{
			return default(Vector3);
		}

		public bool _CheckShouldCommitScore()
		{
			return false;
		}

		public bool _TryClaimScoreBR()
		{
			return false;
		}

		public bool _CheckShouldCommitScoreBR()
		{
			return false;
		}

		public float _TryClaimMagicHourRewards()
		{
			return 0f;
		}

		public void _TryClaimNormalRewards()
		{
		}

		public void _TryClaimOrderBoxRewards()
		{
		}

		[IteratorStateMachine(typeof(_003C_TryClaimMagicOrderReward_003Ed__137))]
		public IEnumerator _TryClaimMagicOrderReward()
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003C_CoClaimRewards_003Ed__138))]
		public IEnumerator _CoClaimRewards()
		{
			return null;
		}

		public bool _CanUseOrderBox()
		{
			return false;
		}

		public void _OnSecondPass()
		{
		}

		public void _OnMessageOrderChange(List<IOrderData> changedOrders, List<IOrderData> newlyAddedOrders)
		{
		}

		public void _OnMessageOrderRefresh(IOrderData order)
		{
		}

		public void _OnMessageTryFinishOrderFromUI(IOrderData order, bool needConfirm)
		{
		}

		public void _OnMessageShopItemInfoChange()
		{
		}

		public void _OnMessageDragItemEnd(Vector2 screenPos, Item item)
		{
		}

		public void _OnMessageOrderCommitItem(int tid, Vector3 worldPos)
		{
		}

		public void _CoDelayCollectBoardItem(int tid, Vector3 worldPos, float waitTime, int consumeIdx)
		{
		}

		public void _TweenCollectBoardItem(int tid, Vector3 worldPos, float waitTime, int consumeIdx)
		{
		}

		public int _GetRequiredItemNum()
		{
			return 0;
		}

		public Vector3 _GetFlyTargetByRequireIdx(int idx)
		{
			return default(Vector3);
		}

		public void _OnOrderItemFlyEnd(IOrderData orderInst, int idx)
		{
		}

		public void _ForceCommitRewards()
		{
		}

		public void _ReleaseRewardsContainer()
		{
		}

		public void _RefreshOrderLike()
		{
		}

		public bool _TryClaimTopLeftRewards()
		{
			return false;
		}

		public void _RefreshOrderRate()
		{
		}

		public bool _TryClaimOrderRate()
		{
			return false;
		}

		public void ClearBonus(int id)
		{
		}

		public void _RefreshOrderBonus()
		{
		}

		public bool _TryClaimOrderBonus()
		{
			return false;
		}

		public void WhenBonusShowEnd()
		{
		}

		public void _RefreshCDOrder()
		{
		}

		public void _RefreshMysteryBagOrder()
		{
		}

		public void _TryClaimMysteryBagOrder()
		{
		}

		public void _RefreshClawOrder()
		{
		}

		public void _TryClaimClawOrder()
		{
		}

		public void _RefreshFoodVanOrder()
		{
		}

		public void _TryClaimFoodVanOrder()
		{
		}

		public void _RefreshPiggyOrder()
		{
		}

		public void _TryClaimPiggyOrder()
		{
		}

		public void _RefreshThiefOrder()
		{
		}

		public void _RefreshSlotNoReward(GameObject obj, OrderAttachmentUtility.Slot slot)
		{
		}

		public void _TryClaimThiefOrder()
		{
		}

		public void _RefreshColorOrder()
		{
		}

		public void _TryClaimColorOrder()
		{
		}

		public void _RefreshSpinOrder()
		{
		}

		public void _TryClaimSpinOrder()
		{
		}

		public void _RefreshSlotReward(GameObject obj, OrderAttachmentUtility.Slot slot, UIItemUtility.CountStringStyle style = UIItemUtility.CountStringStyle.SmartPlus)
		{
		}

		public void _RefreshOrderBox()
		{
		}

		public void _TryAddOrderBox(Item item)
		{
		}

		public void _PlayOrderBoxTrailSequence(Vector3 to, float delay, GameObject eff, PoolItemType itemType, IOrderData expectedOrder, int expectedBindingVersion)
		{
		}

		public void _KillOrderBoxTrailSequence()
		{
		}

		public void _ClearOrderBoxTrailParticles(GameObject eff)
		{
		}

		public void _PlayOrderBoxTrailParticles()
		{
		}

		public void _OnMessageOrderBoxBegin(Item item)
		{
		}

		public void _OnMessageOrderBoxEnd()
		{
		}

		public void _OnMessageMagicHourRewardBegin((IOrderData order, IOrderData targetOrder, Item item) data)
		{
		}

		public void _OnMessageTokenMultiBegin(Item item)
		{
		}

		public void _OnMessageTokenMultiEnd()
		{
		}

		public void _RefreshScoreMic(ActivityScoreMic activityScoreMic, int score)
		{
		}

		public void OnRoleClick()
		{
		}

		public void _OnMessageRaceRoundStart(bool start)
		{
		}

		public void _OnBtnDebug()
		{
		}

		public void _003C_003EiFixBaseProxy_InitComponents()
		{
		}

		public void _003C_003EiFixBaseProxy_UpdateOnDataChange()
		{
		}

		public void _003C_003EiFixBaseProxy_UpdateOnDataClear()
		{
		}
	}
}
