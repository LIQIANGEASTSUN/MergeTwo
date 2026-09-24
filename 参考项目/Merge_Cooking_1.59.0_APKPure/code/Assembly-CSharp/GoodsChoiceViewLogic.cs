using System;
using TLF;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

[PrefabPath("GoodsChoiceView")]
public class GoodsChoiceViewLogic : BaseViewLogic, IBaseViewAnimation
{
	public GoodsChoiceViewData Data;

	protected GameLevelGrid mLevelGrid;

	protected GameGoodsVo mGameGoodsVo;

	protected IGoodsBaseVo mGoodsBaseVo;

	protected GoodsChoiceItem mCurrentSelect;

	protected bool mIsComfirm;

	public Transform ContentBg;

	public Transform GrayBg;

	public RectTransform BgRect;

	public Image ItemIcon;

	public RTLTextMeshPro Title;

	public Text NameText;

	public RTLTextMeshPro DescText;

	public RTLTextMeshPro SureText;

	public RTLTextMeshPro NoSureText;

	public GoodsChoiceItem GoodsItem1;

	public GoodsChoiceItem GoodsItem2;

	public GoodsChoiceItem GoodsItem3;

	public GameObject SureButton;

	public GameObject NoSureButton;

	public override void OnEnter()
	{
		Data = (viewData as GoodsChoiceViewData) ?? new GoodsChoiceViewData();
		mLevelGrid = Data.ShowLevelGrid;
		if ((Object)(object)mLevelGrid == (Object)null)
		{
			CloseView();
			return;
		}
		OrderGreenTipTool.RefreshCache();
		mGameGoodsVo = Data.ShowLevelGrid.GetGameGoodsVo();
		mGoodsBaseVo = Data.ShowLevelGrid.GetGoodsBaseVo();
		if (mGameGoodsVo == null || mGoodsBaseVo == null)
		{
			CloseView();
			return;
		}
		InitData();
		SetButtonState();
	}

	public override void OnExit()
	{
	}

	protected virtual void InitData()
	{
		//IL_0012: Unknown result type (might be due to invalid IL or missing references)
		Singleton<GameLevelManager>.Instance.SetGoodsIcon(ItemIcon, mGoodsBaseVo, null, Vector3.one);
		if (mGameGoodsVo.ChoiceRewards.Count > 0)
		{
			GoodsItem1.SetSelfActive<GoodsChoiceItem>(true);
			GoodsItem1.Init(mGameGoodsVo.ChoiceRewards[0], 0, this);
		}
		else
		{
			GoodsItem1.SetSelfActive<GoodsChoiceItem>(false);
		}
		if (mGameGoodsVo.ChoiceRewards.Count > 1)
		{
			GoodsItem2.SetSelfActive<GoodsChoiceItem>(true);
			GoodsItem2.Init(mGameGoodsVo.ChoiceRewards[1], 1, this);
		}
		else
		{
			GoodsItem2.SetSelfActive<GoodsChoiceItem>(false);
		}
		if (mGameGoodsVo.ChoiceRewards.Count > 2)
		{
			GoodsItem3.SetSelfActive<GoodsChoiceItem>(true);
			GoodsItem3.Init(mGameGoodsVo.ChoiceRewards[2], 2, this);
		}
		else
		{
			GoodsItem3.SetSelfActive<GoodsChoiceItem>(false);
		}
	}

	protected virtual void SetButtonState()
	{
		if ((Object)(object)mCurrentSelect != (Object)null)
		{
			SureButton.SetSelfActive(active: true);
			NoSureButton.SetSelfActive(active: false);
		}
		else
		{
			SureButton.SetSelfActive(active: false);
			NoSureButton.SetSelfActive(active: true);
		}
	}

	public override void SetLocalization(int tag = 0, object data = null)
	{
		LocalizedLang.SetUITextLocalization((TextMeshProUGUI)(object)Title, mGoodsBaseVo.name);
		LocalizedLang.SetUITextLocalization((TextMeshProUGUI)(object)DescText, "숃끒徶挄捗7\u0082厁숞끟榪瀟桫&ª厩뻯");
		LocalizedLang.SetUITextLocalization((TextMeshProUGUI)(object)SureText, "숇끕徴伈䍛<\u0082厁뻗");
		LocalizedLang.SetUITextLocalization((TextMeshProUGUI)(object)NoSureText, "숇끕徴伈䍛<\u0082厁뻗");
	}

	public void OnSelectReward(GoodsChoiceItem item)
	{
		if ((Object)(object)mCurrentSelect == (Object)null)
		{
			mCurrentSelect = item;
			mCurrentSelect.SetSelectState(state: true);
		}
		else if (mCurrentSelect.GetIndex() == item.GetIndex())
		{
			mCurrentSelect.SetSelectState(state: false);
			mCurrentSelect = null;
		}
		else
		{
			mCurrentSelect.SetSelectState(state: false);
			mCurrentSelect = item;
			mCurrentSelect.SetSelectState(state: true);
		}
		SetButtonState();
	}

	public void OnSureClick()
	{
		if (mIsComfirm || !((Object)(object)mCurrentSelect != (Object)null) || mCurrentSelect.GetSelectReward() == null)
		{
			return;
		}
		Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(mGameGoodsVo.goodsID, -1, mGameGoodsVo);
		GameLevelDefine.MapGoodsAnalytics(mGameGoodsVo.goodsID, 1, 2);
		BaseData3VO selectReward = mCurrentSelect.GetSelectReward();
		if (selectReward.type == 1)
		{
			mIsComfirm = true;
			ObjectManager.GetInstance().itemDataModel.ChangeItemNum(selectReward.id, selectReward.num, needNotice: false, 18);
			mLevelGrid.CollectFly(selectReward.id, selectReward.num);
			mLevelGrid.EmptyParentSelectGrid();
			mLevelGrid.ChangeGameGoodsVo(null, "녣塨㨰\0逕\ud96d");
		}
		else if (selectReward.type == 2)
		{
			mIsComfirm = true;
			GameGoodsBase gameGoodsBaseById = Singleton<GameLevelManager>.Instance.GetGameGoodsBaseById(selectReward.id, mLevelGrid);
			Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(selectReward.id, 1, gameGoodsBaseById.GameGoods);
			mLevelGrid.EmptyParentSelectGrid();
			mLevelGrid.ChangeGameGoodsVo(gameGoodsBaseById, "녣塨㨰\0逕\ud96d");
			if ((Object)(object)mLevelGrid != (Object)null)
			{
				mLevelGrid.PlayGetGoodsAnim(0.233f);
			}
			EventManager.GetInstance().DispatchEvent<Transform, int, float>(203236, mLevelGrid.GameItemParent, selectReward.id, 0f);
			EventManager.GetInstance().DispatchEvent(203244);
			EventManager.GetInstance().DispatchEvent<Transform, int, float>(203218, mLevelGrid.GameItemParent, selectReward.id, 0f);
			if (ABTestSwitchDefine.IsShopOrderGoodsGreenBgSwitch() && OrderGreenTipTool.IsGreenTipGoods(selectReward.id))
			{
				OrderGreenTipTool.OnFunctionEvent(2, selectReward.id, "숏끒澫砐瑑0Â叁");
			}
		}
		CloseViewAin();
	}

	public void OnCloseClick()
	{
		CloseViewAin();
	}

	public void EnterAnimation(Action onComplete)
	{
		DOTweenUITools.DoEnterPopUIAnimation(ContentBg, GrayBg, null, onComplete);
	}

	public void ExitAnimation(Action onComplete)
	{
		DOTweenUITools.DoExitPopUIAnimation(ContentBg, GrayBg, onComplete, isPlayAlpha: true, "숎끓德挏睛%\u0082厁判皇\ud9c4ő");
	}
}
