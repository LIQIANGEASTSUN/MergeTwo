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
using fat.rawdata;

namespace FAT
{
	public class MBBoardOrderV2 : UIGenericItemBase<IOrderData>
	{
		[Serializable]
		public class ScoreItem
		{
			public GameObject root;

			public UIImageRes icon;

			public TextMeshProUGUI txtScore;

			public bool isActive;

			public int activityId;
		}

		public class CommonRewardItem
		{
			public MBBoardOrderRewardItemV2 component;

			public AttachmentType attachmentType;

			public bool isActive;
		}

		public enum AttachmentType
		{
			Rate = 0,
			OrderBonus = 1,
			ClawOrder = 2,
			MysteryBag = 3,
			OrderExtra = 4,
			ThiefOrder = 5,
			ColorOrder = 6
		}

		[CompilerGenerated]
		public sealed class _003C_003Ec__DisplayClass36_0
		{
			public MBBoardOrderV2 _003C_003E4__this;

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
		public sealed class _003C_CoClaimRewards_003Ed__36 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public object _003C_003E2__current;

			public MBBoardOrderV2 _003C_003E4__this;

			[NonSerialized]
			public _003C_003Ec__DisplayClass36_0 _003C_003E8__1;

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
			public _003C_CoClaimRewards_003Ed__36(int _003C_003E1__state)
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
		public sealed class _003C_TryClaimMagicOrderReward_003Ed__188 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public object _003C_003E2__current;

			public MBBoardOrderV2 _003C_003E4__this;

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
			public _003C_TryClaimMagicOrderReward_003Ed__188(int _003C_003E1__state)
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

		[Header("Base")]
		[Tooltip("根节点")]
		[SerializeField]
		public RectTransform container;

		[Tooltip("标准尺寸")]
		[SerializeField]
		public float sizeNormal;

		[Tooltip("加长尺寸 需求超过2项时使用")]
		[SerializeField]
		public float sizePlus;

		[Tooltip("间隔 需要叠加到元素尺寸上")]
		[SerializeField]
		public float space;

		[Tooltip("订单消失动画的延迟")]
		[SerializeField]
		public float orderDieDelay;

		[Tooltip("礼盒从棋盘消失需要的时间")]
		[SerializeField]
		public float effOrderBoxDieDelay;

		[Tooltip("礼盒图标变成奖励需要的时间")]
		[SerializeField]
		public float effOrderBoxConvertRewardDelay;

		[Header("BG / Head")]
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

		[Header("Commit Button")]
		[NonSerialized]
		public MBBoardOrder.ICommitButton commitButton;

		[Header("左上角布局配置")]
		[SerializeField]
		public VerticalLayoutGroup topLeftLayout;

		[SerializeField]
		[Tooltip("4个及以上附件时的底部边距")]
		public int topLeft4Bottom;

		[SerializeField]
		[Tooltip("少于4个附件时的底部边距")]
		public int topLeftNormalBottom;

		[Header("Bottom Right - Countdown")]
		[SerializeField]
		public Transform bottomRightRoot;

		[SerializeField]
		public TextMeshProUGUI txtFlashCountdown;

		[Header("Top Left - OrderBox")]
		[SerializeField]
		public MBBoardOrderBoxV2 orderBox;

		[Header("Top Left - RewardCommonItem")]
		[Tooltip("通用奖励展示组件模板（会被复制，支持多个活动同时展示）")]
		[SerializeField]
		public MBBoardOrderRewardItemV2 rewardCommonItemTemplate;

		[Header("Top Left - Counting")]
		[SerializeField]
		public Transform countingGroupRoot;

		[SerializeField]
		public TextMeshProUGUI txtCounting;

		[SerializeField]
		public RectTransform countingProgress;

		[Header("Top Left - Attachments")]
		[SerializeField]
		public Transform topLeftAttachmentRoot;

		[Header("Bottom Left - Scores")]
		[Tooltip("积分容器根节点（左下角），包含所有积分活动")]
		[SerializeField]
		public Transform scoreListRoot;

		[Tooltip("积分项模板（需在 txtScore 上挂 UITextState，index=0 为默认样式）")]
		[SerializeField]
		public GameObject scoreItemTemplate;

		[NonSerialized]
		public Transform finishFeedbackEffectRoot;

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
		public Item magicHourRewardItem;

		[NonSerialized]
		public IOrderData magicHourTargetOrder;

		[NonSerialized]
		public readonly MBBoardOrderAttachment att_orderLike;

		[NonSerialized]
		public readonly MBBoardOrderAttachment att_orderRate;

		[NonSerialized]
		public readonly MBBoardOrderAttachment att_orderBonus;

		[NonSerialized]
		public readonly MBBoardOrderAttachment att_clawOrder;

		[NonSerialized]
		public readonly MBBoardOrderAttachment att_mysteryBagOrder;

		[NonSerialized]
		public readonly MBBoardOrderAttachment att_thiefOrder;

		[NonSerialized]
		public readonly MBBoardOrderAttachment att_colorOrder;

		[NonSerialized]
		public readonly MBBoardOrderAttachment att_foodVanOrder;

		[NonSerialized]
		public readonly MBBoardOrderAttachment att_multiOrder;

		[NonSerialized]
		public readonly MBBoardOrderAttachment att_spinOrder;

		[NonSerialized]
		public readonly MBBoardOrderAttachment att_piggyOrder;

		[NonSerialized]
		public readonly MBBoardOrderAttachment att_cdOrder;

		[NonSerialized]
		public List<CommonRewardItem> commonRewardItems;

		[NonSerialized]
		public List<CommonRewardItem> commonRewardPool;

		[NonSerialized]
		public List<ScoreItem> scoreItems;

		[NonSerialized]
		public List<ScoreItem> scoreItemPool;

		[NonSerialized]
		public float _lastUpdateTime;

		[NonSerialized]
		public bool needSortTopLeftAttachments;

		public Button btnCommit => null;

		public string poolKey { get; set; }

		public int sortGroupPrev { get; set; }

		public int sortGroup { get; set; }

		public int sortWeight { get; set; }

		public Transform containerTrans => null;

		public Transform autoGuide => null;

		public Transform orderLikeAttachmentTrans => null;

		public Transform orderRateAttachmentTrans => null;

		public Transform spinOrderAttachmentTrans => null;

		public bool IsTweenPlaying => false;

		public void _RefreshBottomLeft()
		{
		}

		public void _RefreshScores()
		{
		}

		public void _RefreshAllScoreActivities()
		{
		}

		public int _GetScoreForActivity(ActivityLike activity)
		{
			return 0;
		}

		public ActivityLike _LookupScoreActivity(int eventId)
		{
			return null;
		}

		public void _AddScoreItem(object activity, int score, ref int displayedCount)
		{
		}

		public void _RefreshScoreItem(ScoreItem item, int score, int eventId, object act)
		{
		}

		public void _RefreshScoreMic(ScoreItem item, ActivityScoreMic activityScoreMic, int score)
		{
		}

		public void _HideAllScores()
		{
		}

		public void _TryClaimScores()
		{
		}

		public int _TryClaimScore()
		{
			return 0;
		}

		public void _ApplyBottomLeftScoreSort()
		{
		}

		public fat.rawdata.EventType _GetActivityEventType(object activity)
		{
			return default(fat.rawdata.EventType);
		}

		public int _GetSortWeightForScore(fat.rawdata.EventType eventType)
		{
			return 0;
		}

		public void _RefreshBottomRight()
		{
		}

		public void _RefreshCountdownBR()
		{
		}

		public void _SetBottomRightState(bool show)
		{
		}

		public void _RefreshSize()
		{
		}

		public void _RefreshLocked()
		{
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

		public void _ClearAnim()
		{
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

		public void _RefreshReward()
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

		public int _FindExtraSlotRewardIndex()
		{
			return 0;
		}

		public void _RefreshReward_NormalSlot(Transform rewardRoot)
		{
		}

		public void _RefreshRequire()
		{
		}

		public void _RefreshClaim()
		{
		}

		public void _OnBtnFinish(bool needConfirm)
		{
		}

		[IteratorStateMachine(typeof(_003C_CoClaimRewards_003Ed__36))]
		public IEnumerator _CoClaimRewards()
		{
			return null;
		}

		public bool _IsFinished()
		{
			return false;
		}

		public bool _IsInCommitProcess()
		{
			return false;
		}

		public bool _HasMagicHourReward()
		{
			return false;
		}

		public bool _HasNormalRewardsToCommit()
		{
			return false;
		}

		public bool _HasOrderBoxRewardsToCommit()
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

		public bool _TryClaimCDOrder(RewardCommitData reward)
		{
			return false;
		}

		public void _TryClaimOrderBoxRewards()
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

		public bool _IsAllRequiredItemConsumed(int requireCount)
		{
			return false;
		}

		public void _ForceCommitRewards()
		{
		}

		public void _ReleaseRewardsContainer()
		{
		}

		public Vector3 GetHideScoreFromPos()
		{
			return default(Vector3);
		}

		public bool _TryClaimHideScore()
		{
			return false;
		}

		public bool _CheckShouldCommitHideScore()
		{
			return false;
		}

		public void _RefreshCounting()
		{
		}

		public void _SetCountingState(bool show)
		{
		}

		public override void InitComponents()
		{
		}

		public void _InitializeScoreItems()
		{
		}

		public ScoreItem _GetScoreItem()
		{
			return null;
		}

		public void _RecycleScoreItem(ScoreItem item)
		{
		}

		public void _RecycleAllScoreItems()
		{
		}

		public override void UpdateOnDataChange()
		{
		}

		public override void UpdateOnDataClear()
		{
		}

		public void Update()
		{
		}

		public void _OnSecondPass()
		{
		}

		public string GetItemThemeKey()
		{
			return null;
		}

		public void _RefreshTheme()
		{
		}

		public void _Refresh()
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

		public void _ReleaseRoleSpine()
		{
		}

		public void _TryResolveScrollRequest()
		{
		}

		public void _RegisterCoreMessages()
		{
		}

		public void _UnRegisterCoreMessages()
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

		public void _OnMessageMagicHourRewardBegin((IOrderData order, IOrderData targetOrder, Item item) data)
		{
		}

		public void _OnMessageBonusShowEnd()
		{
		}

		public void _OnMessageClearBonus(int activityId)
		{
		}

		public void _OnMessageBonusPhaseChange()
		{
		}

		public MBBoardOrderRewardItemV2.LayoutType _GetRewardLayoutType(AttachmentType type)
		{
			return default(MBBoardOrderRewardItemV2.LayoutType);
		}

		public void _OnMessageTokenMultiBegin(Item item)
		{
		}

		public void _OnMessageTokenMultiEnd()
		{
		}

		public void _OnMessageRaceRoundStart(bool start)
		{
		}

		public ScoreItem _FindActiveScoreMicItem()
		{
			return null;
		}

		public void _SetRoleSpineSkin()
		{
		}

		[IteratorStateMachine(typeof(_003C_TryClaimMagicOrderReward_003Ed__188))]
		public IEnumerator _TryClaimMagicOrderReward()
		{
			return null;
		}

		public void OnRoleClick()
		{
		}

		public void _RefreshTopLeft()
		{
		}

		public void _ApplyTopLeftAttachmentSort()
		{
		}

		public int _GetSortWeight(fat.rawdata.EventType eventType)
		{
			return 0;
		}

		public void _RefreshOrderLike()
		{
		}

		public bool _TryClaimOrderLike()
		{
			return false;
		}

		public void _RefreshPuzzle()
		{
		}

		public void _RefreshOrderExtra()
		{
		}

		public bool _TryClaimOrderExtra()
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

		public bool _CanUseOrderBox()
		{
			return false;
		}

		public void _RefreshOrderBonus()
		{
		}

		public bool _TryClaimOrderBonus()
		{
			return false;
		}

		public void _RefreshClawOrder()
		{
		}

		public void _TryClaimClawOrder()
		{
		}

		public void _RefreshMysteryBagOrder()
		{
		}

		public void _TryClaimMysteryBagOrder()
		{
		}

		public void _RefreshThiefOrder()
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

		public void _RefreshMultiOrder()
		{
		}

		public void _RefreshFoodVanOrder()
		{
		}

		public void _TryClaimFoodVanOrder()
		{
		}

		public void _RefreshSpinOrder()
		{
		}

		public void _TryClaimSpinOrder()
		{
		}

		public void _RefreshPiggyOrder()
		{
		}

		public void _TryClaimPiggyOrder()
		{
		}

		public void _RefreshSlotReward(GameObject obj, OrderAttachmentUtility.Slot slot, MBBoardOrderRewardItemV2.LayoutType layoutType = MBBoardOrderRewardItemV2.LayoutType.Short, UIItemUtility.CountStringStyle style = UIItemUtility.CountStringStyle.SmartPlus)
		{
		}

		public OrderAttachmentUtility.Slot _MigrateToTopLeftSlot()
		{
			return null;
		}

		public void _RefreshCDOrder()
		{
		}

		public void _RefreshCommonReward(AttachmentType type, OrderAttachmentUtility.Slot slot)
		{
		}

		public void _ClearCommonReward(AttachmentType type)
		{
		}

		public void _ClearAllCommonRewards()
		{
		}

		public CommonRewardItem _GetCommonRewardItem(AttachmentType type)
		{
			return null;
		}

		public void _RecycleCommonRewardItem(CommonRewardItem item)
		{
		}

		public void _RecycleAllCommonRewards()
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
