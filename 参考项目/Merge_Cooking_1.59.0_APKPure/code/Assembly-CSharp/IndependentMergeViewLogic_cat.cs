using System;
using System.Collections.Generic;
using System.Linq;
using DG.Tweening;
using TLF;
using UnityEngine;
using UnityEngine.UI;

[PrefabPath("IndependentMergeView_cat")]
public class IndependentMergeViewLogic_cat : IndependentMergeViewLogic
{
	[Header("道具详情逻辑")]
	public IndependentGoodsInfoViewLogic goodsLogic;

	public Text IllustratedProcessTxt;

	public RectTransform illuRedPointTrans;

	public RectTransform illuTrans;

	public Image FlyImg;

	public Text tag_info;

	private bool isShowInfo;

	public override void OnEnter()
	{
		base.OnEnter();
		InitIllustrationBtnState();
		FlyImg.SetSelfActive<Image>(false);
		ObjectManager.Instance.independentMergeModel.AddOpenMergeViewTimes();
		ObjectManager.Instance.independentMergeModel.PlayerActionAnalytic(isOpen: true);
		CheckShowFullTip();
		InitDebug();
	}

	public override void OnExit()
	{
		base.OnExit();
		ObjectManager.Instance.independentMergeModel.PlayerActionAnalytic(isOpen: false);
	}

	protected override void AddListener()
	{
		base.AddListener();
		EventManager.GetInstance().AddEventListener(203061, RefreshRedState);
	}

	protected override void RemoveListener()
	{
		EventManager.GetInstance().RemoveEventListener(203061, RefreshRedState);
		base.RemoveListener();
	}

	public override void SetLocalization(int tag = 0, object data = null)
	{
		LocalizedLang.SetUITextLocalization(TitleText, "숫끛徭䴬䍆&\u0082厁숵끓璷氶慠;Ö叕뻹");
		LocalizedLang.SetUITextLocalization(DescText, "숫끛徭䴬䍆&\u0082厁숵끓玷挶慰7Ò发");
		LocalizedLang.SetLocalizationFontSize(TimeDownText);
		LocalizedLang.SetLocalizationFontSize(GiftTimeDownText);
	}

	protected override void InitView()
	{
		base.InitView();
		((Component)goodsLogic).transform.SetSelfActive<Transform>(false);
	}

	private void InitDebug()
	{
		if (!((Object)(object)tag_info == (Object)null))
		{
			if (GameConst.GAME_MODE == GameConstMode.DEBUG)
			{
				tag_info.text = ObjectManager.GetInstance().independentMergeModel.DebugGetTagInfo();
			}
			else
			{
				tag_info.SetSelfActive<Text>(false);
			}
		}
	}

	private void InitIllustrationBtnState()
	{
		RedPoint.RedpointAni((Transform)(object)illuRedPointTrans);
		IndependentMergeModel independentMergeModel = ObjectManager.GetInstance().independentMergeModel;
		illuRedPointTrans.SetSelfActive<RectTransform>(independentMergeModel.IsIllustratedWaitingReward());
		IllustratedProcessTxt.text = string.Format(string.Format("类04뀯}ﱣ哕", independentMergeModel.GetUnlockIllsustratedCount(), independentMergeModel.GetAllIllsustratedCount()), Array.Empty<object>());
	}

	private void RefreshRedState()
	{
		IndependentMergeModel independentMergeModel = ObjectManager.GetInstance().independentMergeModel;
		illuRedPointTrans.SetSelfActive<RectTransform>(independentMergeModel.IsIllustratedWaitingReward());
		IllustratedProcessTxt.text = string.Format(string.Format("类04뀯}ﱣ哕", independentMergeModel.GetUnlockIllsustratedCount(), independentMergeModel.GetAllIllsustratedCount()), Array.Empty<object>());
	}

	protected override void FlyToIllutrate(IIndependentGoodsBaseVo goodsBaseVo, Transform startTrans)
	{
		//IL_00ad: Unknown result type (might be due to invalid IL or missing references)
		//IL_00d4: Unknown result type (might be due to invalid IL or missing references)
		//IL_00eb: Unknown result type (might be due to invalid IL or missing references)
		//IL_00f5: Expected Obj, but got Unknown
		if (goodsBaseVo == null || (Object)(object)startTrans == (Object)null || ObjectManager.GetInstance().independentMergeModel.GetGoodsUnlockState(goodsBaseVo) != 0 || (ObjectManager.GetInstance().independentMergeModel.GetIndependentMergeTheme().themeSeriesID != goodsBaseVo.series && ObjectManager.GetInstance().independentMergeModel.GetIndependentMergeTheme().branchSeriesID != goodsBaseVo.series))
		{
			return;
		}
		FlyImg.sprite = ((BaseViewLogic)this).Load<Sprite>(goodsBaseVo.GetIcon(ViewLevelType));
		((Graphic)FlyImg).SetNativeSize();
		((Component)FlyImg).transform.setScale(0.65f, 0.65f, 0.5f);
		((Component)FlyImg).transform.position = startTrans.position;
		FlyImg.SetSelfActive<Image>(true);
		TweenSettingsExtensions.OnComplete<Tweener>(ShortcutExtensions.DOLocalMove(((Component)FlyImg).transform, ((Transform)illuTrans).localPosition, 0.75f, false), (TweenCallback)(() =>
		{
			if ((Object)(object)FlyImg != (Object)null)
			{
				FlyImg.SetSelfActive<Image>(false);
				Animation component = ((Component)illuTrans).GetComponent<Animation>();
				if (component != null)
				{
					component.Play("숏끔溽搐䥄7¾厽숣끔疭猤敘>Ú叙숏끛掭愐牐\r\u0092厑숚끥徶愛瑑<\u0082厁显䥱");
				}
			}
		}));
	}

	public void OnOpenIllustrationView()
	{
		ObjectManager.GetInstance().independentMergeModel.OpenActivityIllustrationView();
	}

	public override void OnOpenGoodInfoView()
	{
		if (CheckMapIsFull())
		{
			if ((Object)(object)CurrentSelectGrid != (Object)null && CheckGoodsCanDelete(CurrentSelectGrid.GetGameGoodsVo()))
			{
				UpdateSelectGoodsInfo();
				if (!isShowInfo)
				{
					PlayGoodsInfoAndHidePoolAni();
				}
			}
			else if (isShowInfo)
			{
				PlayGoodsInfoAndHidePoolAni(isShow: false);
			}
		}
		else if (isShowInfo)
		{
			PlayGoodsInfoAndHidePoolAni(isShow: false);
		}
	}

	public void UpdateSelectGoodsInfo()
	{
		if ((Object)(object)goodsLogic != (Object)null)
		{
			goodsLogic.SetParentLogic(this);
			if ((Object)(object)CurrentSelectGrid != (Object)null)
			{
				goodsLogic.UpdateInfo(CurrentSelectGrid, CurrentSelectGrid.GetGameGoodsVo(), CurrentSelectGrid.GetGoodsBaseVo());
			}
			else
			{
				goodsLogic.UpdateInfo(null, null, null);
			}
		}
	}

	public override void PlayGoodsInfoAndHidePoolAni(bool isShow = true)
	{
		//IL_00a3: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ae: Expected Obj, but got Unknown
		//IL_00dc: Unknown result type (might be due to invalid IL or missing references)
		//IL_00e7: Expected Obj, but got Unknown
		CommonMaskViewLogic.Show(0.3f);
		Transform trans1 = null;
		Transform trans2 = null;
		if (isShow)
		{
			trans1 = ((Component)TemporaryLogic).transform;
			trans2 = ((Component)goodsLogic).transform;
			isShowInfo = true;
		}
		else
		{
			trans1 = ((Component)goodsLogic).transform;
			trans2 = ((Component)TemporaryLogic).transform;
			isShowInfo = false;
		}
		CanvasGroup canvasGroup_pool = ((Component)trans1).GetComponent<CanvasGroup>();
		canvasGroup_pool.alpha = 1f;
		TweenCallback val3 = default;
		DOVirtual.DelayedCall(0.03f, (TweenCallback)(() =>
		{
			//IL_002d: Unknown result type (might be due to invalid IL or missing references)
			//IL_0032: Unknown result type (might be due to invalid IL or missing references)
			//IL_0034: Expected Obj, but got Unknown
			//IL_0039: Expected Obj, but got Unknown
			Tweener val = TweenSettingsExtensions.SetEase<Tweener>(DOTweenModuleUI.DOFade(canvasGroup_pool, 0f, 0.03f), (Ease)1);
			TweenCallback val2 = val3;
			if (val2 == null)
			{
				TweenCallback val4 = () =>
				{
					canvasGroup_pool.alpha = 0f;
					trans1.SetSelfActive<Transform>(false);
				};
				TweenCallback val5 = val4;
				val3 = val4;
				val2 = val5;
			}
			TweenSettingsExtensions.OnComplete<Tweener>(val, val2);
		}), true);
		CanvasGroup canvasGroup_goods = ((Component)trans2).GetComponent<CanvasGroup>();
		canvasGroup_goods.alpha = 0f;
		DOVirtual.DelayedCall(0.06f, (TweenCallback)(() =>
		{
			//IL_0033: Unknown result type (might be due to invalid IL or missing references)
			//IL_0038: Unknown result type (might be due to invalid IL or missing references)
			//IL_003a: Expected Obj, but got Unknown
			//IL_003f: Expected Obj, but got Unknown
			DOTween.Sequence();
			Tweener val = TweenSettingsExtensions.SetEase<Tweener>(DOTweenModuleUI.DOFade(canvasGroup_goods, 1f, 0.03f), (Ease)1);
			TweenCallback val2 = val3;
			if (val2 == null)
			{
				TweenCallback val4 = () =>
				{
					canvasGroup_goods.alpha = 1f;
					trans2.SetSelfActive<Transform>(true);
				};
				TweenCallback val5 = val4;
				val3 = val4;
				val2 = val5;
			}
			TweenSettingsExtensions.OnComplete<Tweener>(val, val2);
		}), true);
	}

	private void CheckShowFullTip()
	{
		if (CheckMapIsFull())
		{
			ShowMapEnoughTip(null);
		}
	}

	public override bool CheckGoodsCanDelete(IndependentGameGoodsVo gameGoodsVo)
	{
		if (gameGoodsVo == null)
		{
			return false;
		}
		if (IIndependentGoodsBaseVo.CannotDrag(gameGoodsVo.GoodsState))
		{
			return false;
		}
		IIndependentGoodsBaseVo goodsConfigById = IndependentDefine.GetGoodsConfigById(ViewLevelType, gameGoodsVo.goodsID);
		if (goodsConfigById == null)
		{
			return false;
		}
		if (goodsConfigById.type == 2)
		{
			return false;
		}
		if (goodsConfigById.type == 3)
		{
			return false;
		}
		if (goodsConfigById.type == 5)
		{
			return false;
		}
		if (goodsConfigById.type == 7)
		{
			return false;
		}
		if (goodsConfigById.type == 4)
		{
			IIndependentProduceVo produceConfigById = IndependentDefine.GetProduceConfigById(ViewLevelType, gameGoodsVo.goodsID);
			if (produceConfigById != null && produceConfigById.GetConversions().Count > 0)
			{
				return false;
			}
		}
		return true;
	}

	public override void ShowGuideWeak()
	{
		var (independentGrid, independentGrid2) = GetGuideWeakAutoConversion();
		if ((Object)(object)independentGrid != (Object)null && (Object)(object)independentGrid2 != (Object)null)
		{
			MonoSingleton<GuideWeakManager>.Instance.ShowIndependentAutoConversion(independentGrid.GameItemParent, independentGrid2.GameItemParent, DragItemParent);
		}
	}

	public (IndependentGrid, IndependentGrid) GetGuideWeakAutoConversion()
	{
		List<IndependentGrid> list = new List<IndependentGrid>();
		List<IndependentGrid> list2 = new List<IndependentGrid>();
		List<IndependentGrid> list3 = mGridObjectDic.Values.ToList();
		IIndependentGoodsBaseVo independentGoodsBaseVo = null;
		IndependentGameGoodsVo independentGameGoodsVo = null;
		for (int num = list3.Count - 1; num >= 0; num--)
		{
			IndependentGrid independentGrid = list3[num];
			if (!((Object)(object)independentGrid == (Object)null) && independentGrid.GetGoodsBaseVo() != null)
			{
				independentGoodsBaseVo = independentGrid.GetGoodsBaseVo();
				independentGameGoodsVo = independentGrid.GetGameGoodsVo();
				if (independentGoodsBaseVo != null && independentGameGoodsVo != null && !IIndependentGoodsBaseVo.CannotDrag(independentGameGoodsVo.GoodsState))
				{
					if (independentGoodsBaseVo.type == 6)
					{
						list.Add(list3[num]);
					}
					else if (independentGoodsBaseVo.type == 5 || independentGoodsBaseVo.type == 7)
					{
						list2.Add(list3[num]);
					}
				}
			}
		}
		if (list.Count > 0 && list2.Count > 0)
		{
			for (int i = 0; i < list2.Count; i++)
			{
				for (int j = 0; j < list.Count; j++)
				{
					if (CanPutinMaterial(list[j], list2[i]))
					{
						return (list[j], list2[i]);
					}
				}
			}
		}
		return (null, null);
	}
}
