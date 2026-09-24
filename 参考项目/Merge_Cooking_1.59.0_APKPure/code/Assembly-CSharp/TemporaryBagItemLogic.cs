using System;
using DG.Tweening;
using TLF;
using UnityEngine;
using UnityEngine.UI;

public class TemporaryBagItemLogic : MonoBehaviour
{
	public Image ItemIcon;

	public Image ItemBg1;

	public Image ItemBg2;

	public Image Arrow;

	public Text TemporaryNum;

	public RectTransform NumBgTrans;

	public RectTransform BubbleStartTrans;

	protected GameGoodsVo itemVo;

	protected GameLevelViewLogic parentLogic;

	private ResLoader mResloader;

	private Tween mHintQuence;

	public virtual void AddEventListener()
	{
		EventManager.GetInstance().AddEventListener<Action<Transform>>(100147, OnCollectAnim);
	}

	public virtual void RemoveEventListener()
	{
		EventManager.GetInstance().RemoveEventListener<Action<Transform>>(100147, OnCollectAnim);
	}

	public virtual void Init(GameGoodsVo vo, GameLevelViewLogic parent, float x)
	{
		//IL_0012: Unknown result type (might be due to invalid IL or missing references)
		//IL_0018: Unknown result type (might be due to invalid IL or missing references)
		//IL_006f: Unknown result type (might be due to invalid IL or missing references)
		if (!MonoSingleton<GuideManager>.Instance.InTemporaryGuide())
		{
			((Component)this).transform.localPosition = Vector3.right * x;
		}
		itemVo = vo;
		parentLogic = parent;
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(itemVo.goodsID);
		if (goodsBaseVoById != null)
		{
			Singleton<GameLevelManager>.Instance.SetGoodsIcon(ItemIcon, goodsBaseVoById, parentLogic.resLoader, new Vector3(0.5f, 0.5f, 1f));
		}
		if (GetTemporaryItemNum() > 1)
		{
			ItemBg2.SetSelfActive<Image>(true);
		}
		else
		{
			ItemBg2.SetSelfActive<Image>(false);
		}
		SetTemporaryNum();
	}

	protected void _ClickTemporaryBubbleItem(int goodsId, Transform startTrans)
	{
		if (-1 != goodsId)
		{
			_CreateGoods(goodsId, startTrans);
		}
	}

	protected void _OnBubbleViewClose()
	{
		Arrow.SetSelfActive<Image>(true);
	}

	private void _CreateGoods(int goodsId = -1, Transform startTrans = null)
	{
		if ((Object)(object)this == (Object)null || (Object)(object)parentLogic == (Object)null)
		{
			return;
		}
		Transform val = (((Object)null == (Object)(object)startTrans) ? ((Component)this).transform : startTrans);
		if ((Object)(object)val == (Object)null)
		{
			return;
		}
		GameLevelOrdersViewLogic.ForceItem_SetLockTime_NotAutoForce(0.1f);
		GameGoodsVo gameGoodsVo = ((-1 == goodsId) ? GetTemporaryItem() : _GetTemporaryItem(goodsId));
		if (gameGoodsVo == null)
		{
			return;
		}
		if (parentLogic.CreateNewGoods(gameGoodsVo.goodsID, val))
		{
			if (-1 == goodsId)
			{
				RemoveTemporaryItem();
			}
			else
			{
				_RemoveTemporaryItem(goodsId);
			}
			parentLogic.updateTopPos();
			SetTemporaryNum();
			if (GameLevelDefine.OrderNeedLowLevelGoods.Contains(gameGoodsVo.goodsID) || GameLevelDefine.OrderLowLevelCookGoods.Contains(gameGoodsVo.goodsID))
			{
				GameLevelDefine.ClearOrderNeedLowLevelGoods();
			}
			EventManager.GetInstance().DispatchEvent(203098);
			EventManager.GetInstance().DispatchEvent(202123, VibrateManager.VibrateType.Moderate);
		}
		else
		{
			EventManager.GetInstance().DispatchEvent(202123, VibrateManager.VibrateType.Intense);
			MonoSingleton<PlayerStateManager>.Instance.Trigger(EPlayerStateTrigger.SpaceNotEnough);
		}
	}

	public virtual void OnItemClick()
	{
		if (Temporary.Bubble.OpenSwitch)
		{
			CommonMaskViewLogic.Show(0.5f);
			_OpenBubbleView();
		}
		else
		{
			_CreateGoods();
		}
	}

	public virtual void SetTemporaryNum()
	{
		//IL_003a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0044: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c9: Unknown result type (might be due to invalid IL or missing references)
		//IL_00d3: Unknown result type (might be due to invalid IL or missing references)
		//IL_0084: Unknown result type (might be due to invalid IL or missing references)
		//IL_008e: Unknown result type (might be due to invalid IL or missing references)
		int temporaryItemNum = GetTemporaryItemNum();
		if (temporaryItemNum > 99)
		{
			TemporaryNum.text = "\ue030Þ赴";
			TemporaryNum.fontSize = 24;
			NumBgTrans.sizeDelta = new Vector2(73f, NumBgTrans.sizeDelta.y);
		}
		else if (temporaryItemNum > 9)
		{
			TemporaryNum.text = temporaryItemNum.ToString();
			TemporaryNum.fontSize = 28;
			NumBgTrans.sizeDelta = new Vector2(60f, NumBgTrans.sizeDelta.y);
		}
		else
		{
			TemporaryNum.text = temporaryItemNum.ToString();
			TemporaryNum.fontSize = 28;
			NumBgTrans.sizeDelta = new Vector2(39f, NumBgTrans.sizeDelta.y);
		}
	}

	protected virtual void OnEnable()
	{
		EventManager.GetInstance().AddEventListener<Transform, float, RectTransform>(100170, FlyReward);
		EventManager.GetInstance().AddEventListener<int, Transform>(100021, _ClickTemporaryBubbleItem);
		EventManager.GetInstance().AddEventListener(100023, _OnBubbleViewClose);
	}

	protected virtual void OnDisable()
	{
		EventManager.GetInstance().RemoveEventListener<Transform, float, RectTransform>(100170, FlyReward);
		EventManager.GetInstance().RemoveEventListener<int, Transform>(100021, _ClickTemporaryBubbleItem);
		EventManager.GetInstance().RemoveEventListener(100023, _OnBubbleViewClose);
		Tween val = mHintQuence;
		if (val != null)
		{
			TweenExtensions.Kill(val, false);
		}
	}

	protected virtual void OnCollectAnim(Action<Transform> action)
	{
		Transform transform = ((Component)this).transform;
		action?.Invoke(transform);
	}

	protected virtual void FlyReward(Transform baseReward, float delay, RectTransform commonFlyRect)
	{
		//IL_0016: Unknown result type (might be due to invalid IL or missing references)
		//IL_0021: Unknown result type (might be due to invalid IL or missing references)
		Transform endTrans = ((Component)this).transform;
		if ((Object)(object)commonFlyRect != (Object)null && ((Component)this).transform.position.x < ((Transform)commonFlyRect).position.x)
		{
			endTrans = (Transform)(object)commonFlyRect;
		}
		CommonRewardFlyViewData flyData = new CommonRewardFlyViewData
		{
			rewardVo = new ItemVO
			{
				id = 0,
				num = 1L
			},
			flyTrans = baseReward,
			endIconType = RewardFlyIconType.MergeOrderCommonRewrad,
			endTrans = endTrans,
			durationTime = 0.6f * SDKManager.AniDurationScale,
			singleFlyInterval = 0.05f * SDKManager.AniDurationScale,
			moveDelay = delay,
			maxIconScale = 0.5f,
			callBack = () =>
			{
			}
		};
		ObjectManager.GetInstance().itemDataModel.FlyRewardView(flyData);
	}

	public ResLoader GetResloader()
	{
		if (mResloader == null)
		{
			mResloader = new ResLoader();
		}
		return mResloader;
	}

	protected virtual void OnDestroy()
	{
		RemoveEventListener();
		Tween val = mHintQuence;
		if (val != null)
		{
			TweenExtensions.Kill(val, false);
		}
	}

	protected virtual int GetTemporaryItemNum()
	{
		return ObjectManager.GetInstance().gameLevelModel.GetTemporaryItemNum();
	}

	protected virtual GameGoodsVo GetTemporaryItem()
	{
		return ObjectManager.GetInstance().gameLevelModel.GetTemporaryItem();
	}

	protected virtual void RemoveTemporaryItem()
	{
		ObjectManager.GetInstance().gameLevelModel.RemoveTemporaryItem();
	}

	private GameGoodsVo _GetTemporaryItem(int goodsId)
	{
		if (goodsId == -1)
		{
			return null;
		}
		return ObjectManager.GetInstance().gameLevelModel.GetTemporaryItem(goodsId);
	}

	private void _RemoveTemporaryItem(int goodsId)
	{
		if (goodsId != -1)
		{
			ObjectManager.GetInstance().gameLevelModel.RemoveTemporarySingleItemByGoodsID(goodsId);
		}
	}

	private void _OpenBubbleView()
	{
		if (!((Object)(object)ViewManager.GetInstance().GetFristViewLogic<TemporaryBubbleViewLogic>() != (Object)null))
		{
			Arrow.SetSelfActive<Image>(false);
			TemporaryBubbleViewData data = new TemporaryBubbleViewData
			{
				targetTrans = ((Component)BubbleStartTrans).transform,
				closeByClickThrough = false,
				showCellDatas = Temporary.Bubble.ShowList.GetBubbleShowCellDataList()
			};
			MonoSingleton<GuideWeakManager>.Instance.OnlyRemoveShowingFinger(GuideWeakType.OrderReward_New);
			ViewManager.GetInstance().ShowItem<TemporaryBubbleViewLogic>(data, ((Component)parentLogic.TempBubbleNode).gameObject, parentLogic, animate: true);
		}
	}

	public void PlayHintAnim()
	{
		Tween val = mHintQuence;
		if (val != null)
		{
			TweenExtensions.Kill(val, false);
		}
		mHintQuence = DOTweenUITools.DoHintAnimation(((Component)this).transform);
	}
}
