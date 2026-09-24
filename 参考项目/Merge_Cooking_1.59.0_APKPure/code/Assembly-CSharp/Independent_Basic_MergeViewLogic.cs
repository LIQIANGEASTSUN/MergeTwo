using System;
using System.Collections.Generic;
using System.Linq;
using DG.Tweening;
using TLF;
using TLF.SkinSystem;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

[PrefabPath("Independent_Basic_MergeView")]
public class Independent_Basic_MergeViewLogic : IndependentMergeViewBaseLogic, IBaseViewAnimation
{
	private bool isShowInfo;

	private int mIndependentColumns = 5;

	private int mIndependentRows = 5;

	public Transform GrayTransform;

	public Transform ContentTransform;

	public RTLTextMeshPro TitleTextTMP;

	[Header("道具详情逻辑")]
	public IndependentGoodsInfoViewLogic goodsLogic;

	public RTLTextMeshPro IllustratedProcessTxt;

	public RectTransform illuRedPointTrans;

	public RectTransform illuTrans;

	public Image FlyImg;

	public RTLTextMeshPro GiftTimeDownText;

	public RTLTextMeshPro TimeDownTMP;

	public GameObject GiftButtonGo;

	public Independent_Basic_ProgressViewLogic IndependentProgress;

	[Header("通行证图标逻辑")]
	public IndependentPassMergeIconView IndependentPassIcon;

	public override int Columns => mIndependentColumns;

	public override int Rows => mIndependentRows;

	public override IndependentType ViewLevelType => IndependentType.Independent_Basic;

	public override void OnEnter()
	{
		//IL_00b3: Unknown result type (might be due to invalid IL or missing references)
		Data = (viewData as IndependentMergeViewBaseData) ?? new IndependentMergeViewBaseData();
		GameManager.GetInstance().SetMultiTouchEnabled(enable: false);
		SetTimeDownTextTMP(TimeDownTMP);
		ApplySkin();
		GameLayoutFit();
		InitView();
		InitActivityGift();
		CreateMapBg();
		CreateGameGrid();
		AddListener();
		IsEnter = true;
		InitIllustrationBtnState();
		FlyImg.SetSelfActive<Image>(false);
		ObjectManager.Instance.independentBasicModel.AddOpenMergeViewTimes();
		ObjectManager.Instance.independentBasicModel.PlayerActionAnalytic(isOpen: true);
		CheckShowFullTip();
		if ((Object)(object)TimeDownTMP != (Object)null)
		{
			float x = ((TMP_Text)TimeDownTMP).transform.localPosition.x;
			((TMP_Text)TimeDownTMP).transform.LocalPositionX<Transform>(x + 5f);
		}
		IndependentDefine.PlayEffectAudio(ViewLevelType, IndependentAudioType.OpenViewAudio);
		IndependentDefine.PlayEffectAudio(ViewLevelType, IndependentAudioType.AmbientSound);
		IndependentDefine.PlayBackgroundAudioV2(ViewLevelType, IndependentAudioType.Background);
	}

	private void ApplySkin()
	{
		IndependentBasicModel.ApplySkinByApplier(((Component)this).GetComponent<SkinApplier>());
	}

	public override void OnExit()
	{
		GameManager.GetInstance().SetMultiTouchEnabled(enable: true);
		mCurrentSelect = null;
		RemoveMergeHint();
		RecoveryGrid();
		RecoveryGridBg();
		RemoveListener();
		ObjectManager.Instance.independentBasicModel.PlayerActionAnalytic(isOpen: false);
		IndependentPassIcon.OnClose();
		IndependentDefine.StopEffectAudio(ViewLevelType, IndependentAudioType.AmbientSound);
		IndependentDefine.PlayEffectAudio(ViewLevelType, IndependentAudioType.CloseViewAudio);
		IndependentDefine.StopBackgroundAudio(ViewLevelType, IndependentAudioType.Background);
	}

	public override void OnReset(object data)
	{
		CommonMaskViewLogic.Show(0.2f);
		Data = new IndependentMergeViewBaseData();
		GameManager.GetInstance().SetMultiTouchEnabled(enable: false);
		GameLayoutFit();
		if ((Object)(object)mCurrentSelect != (Object)null)
		{
			mCurrentSelect.SetSelectState(select: false);
			mCurrentSelect = null;
		}
		IndependentDefine.PlayEffectAudio(ViewLevelType, IndependentAudioType.OpenViewAudio);
		IndependentDefine.PlayEffectAudio(ViewLevelType, IndependentAudioType.AmbientSound);
		IndependentDefine.PlayBackgroundAudioV2(ViewLevelType, IndependentAudioType.Background);
		IsEnter = true;
	}

	public override void OnHideView()
	{
		GameManager.GetInstance().SetMultiTouchEnabled(enable: true);
		if ((Object)(object)mCurrentSelect != (Object)null)
		{
			mCurrentSelect.SetSelectState(select: false);
			mCurrentSelect = null;
		}
		RemoveMergeHint();
		TimeManager.GetInstance().ClearSchedule(this);
		IndependentDefine.StopEffectAudio(ViewLevelType, IndependentAudioType.AmbientSound);
		IndependentDefine.PlayEffectAudio(ViewLevelType, IndependentAudioType.CloseViewAudio);
		IndependentDefine.StopBackgroundAudio(ViewLevelType, IndependentAudioType.Background);
	}

	protected override void AddListener()
	{
		EventManager.GetInstance().AddEventListener<int>(203110, UnlockGoods);
		EventManager.GetInstance().AddEventListener(203111, OnGiftSwitch);
		EventManager.GetInstance().AddEventListener(203112, OnGiftBuySuccess);
		EventManager.GetInstance().AddEventListener(203080, CheckSendBoardFullEvent);
		EventManager.GetInstance().AddEventListener(203106, RefreshRedState);
		EventManager.GetInstance().AddEventListener(203119, OnClaimPassRewardSuccess);
	}

	protected override void RemoveListener()
	{
		EventManager.GetInstance().RemoveEventListener<int>(203110, UnlockGoods);
		EventManager.GetInstance().RemoveEventListener(203111, OnGiftSwitch);
		EventManager.GetInstance().RemoveEventListener(203112, OnGiftBuySuccess);
		EventManager.GetInstance().RemoveEventListener(203080, CheckSendBoardFullEvent);
		EventManager.GetInstance().RemoveEventListener(203106, RefreshRedState);
		EventManager.GetInstance().RemoveEventListener(203119, OnClaimPassRewardSuccess);
	}

	protected override void GameLayoutFit()
	{
		//IL_0054: Unknown result type (might be due to invalid IL or missing references)
		//IL_007e: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a8: Unknown result type (might be due to invalid IL or missing references)
		IIndependentMergeTheme independentMergeTheme = ObjectManager.GetInstance().independentBasicModel.GetIndependentMergeTheme();
		if (independentMergeTheme != null)
		{
			mIndependentColumns = independentMergeTheme.column;
			mIndependentRows = independentMergeTheme.row;
			ContentBg.sizeDelta = new Vector2((float)(mIndependentColumns * IndependentMergeViewBaseLogic.GridWidth + 20), (float)(mIndependentRows * IndependentMergeViewBaseLogic.GridHeight + 22));
			GridParent.sizeDelta = new Vector2((float)(mIndependentColumns * IndependentMergeViewBaseLogic.GridWidth), (float)(mIndependentRows * IndependentMergeViewBaseLogic.GridHeight));
			GridBgParent.sizeDelta = new Vector2((float)(mIndependentColumns * IndependentMergeViewBaseLogic.GridWidth), (float)(mIndependentRows * IndependentMergeViewBaseLogic.GridHeight));
		}
	}

	protected override void InitView()
	{
		if ((Object)(object)TemporaryLogic != (Object)null)
		{
			TemporaryLogic.Init(this, ViewLevelType);
		}
		IIndependentMergeTheme independentMergeTheme = ObjectManager.GetInstance().independentBasicModel.GetIndependentMergeTheme();
		if (independentMergeTheme != null && (Object)(object)IndependentProgress != (Object)null)
		{
			IndependentProgress.Init(independentMergeTheme.themeSeriesID, this);
		}
		RefreshTimeDown();
		((Component)goodsLogic).transform.SetSelfActive<Transform>(false);
		IndependentPassIcon.Init(this, ((Component)TemporaryLogic).transform);
	}

	public override void SetLocalization(int tag = 0, object data = null)
	{
		IndependentBasicModel independentBasicModel = ObjectManager.GetInstance().independentBasicModel;
		LocalizedLang.SetUITextLocalization((TextMeshProUGUI)(object)TitleTextTMP, independentBasicModel.GetUILanguageKey("숍끟皫椎浑\rÞ叝숞끍沆攟敝&¶厵"));
		LocalizedLang.SetUITextLocalization(DescText, independentBasicModel.GetUILanguageKey("숍끟皫椎浑\rÞ叝晥w4끤g갡㻋"));
		LocalizedLang.SetLocalizationFontSize(TimeDownText);
		LocalizedLang.SetLocalizationFontSize((TextMeshProUGUI)(object)GiftTimeDownText);
		if ((Object)(object)TemporaryLogic != (Object)null)
		{
			TemporaryLogic.SetLocalization(tag, data);
		}
	}

	private void InitActivityGift()
	{
		if (MonoSingleton<GuideManager>.Instance.IsInGuide())
		{
			GiftButtonGo.SetSelfActive(ObjectManager.GetInstance().independentBasicModel.GetGiftOpenState);
			return;
		}
		if (ObjectManager.GetInstance().independentBasicModel.GetGiftOpenState)
		{
			ObjectManager.GetInstance().independentBasicModel.CheckCloseGift();
			ObjectManager.GetInstance().independentBasicModel.CheckPopGiftView();
		}
		else
		{
			ObjectManager.GetInstance().independentBasicModel.CheckOpenGift();
		}
		GiftButtonGo.SetSelfActive(ObjectManager.GetInstance().independentBasicModel.GetGiftOpenState);
		RefreshGiftTimeDown();
	}

	private void OnGiftSwitch()
	{
		GiftButtonGo.SetSelfActive(ObjectManager.GetInstance().independentBasicModel.GetGiftOpenState);
	}

	private void OnGiftBuySuccess()
	{
		if ((Object)(object)TemporaryLogic != (Object)null)
		{
			TemporaryLogic.UpdateTempprary();
		}
	}

	private void OnClaimPassRewardSuccess()
	{
		if ((Object)(object)TemporaryLogic != (Object)null)
		{
			TemporaryLogic.UpdateTempprary();
		}
	}

	protected override void RefreshGiftTimeDown()
	{
		IndependentPassIcon.UpdateView();
		if (ObjectManager.GetInstance().independentBasicModel.GetGiftOpenState)
		{
			int giftTimedown = ObjectManager.GetInstance().independentBasicModel.GetGiftTimedown();
			if (giftTimedown > 0)
			{
				((TMP_Text)GiftTimeDownText).text = TimeManager.GetInstance().GetTimeDownBySecond(giftTimedown);
				return;
			}
			((TMP_Text)GiftTimeDownText).text = TimeManager.GetInstance().GetTimeDownBySecond(0);
			ObjectManager.GetInstance().independentBasicModel.CheckCloseGift();
		}
	}

	private void UnlockGoods(int goodsID)
	{
		IIndependentGoodsBaseVo goodsConfigById = ObjectManager.GetInstance().independentBasicModel.GetGoodsConfigById(goodsID);
		IIndependentMergeTheme independentMergeTheme = ObjectManager.GetInstance().independentBasicModel.GetIndependentMergeTheme();
		if (independentMergeTheme == null || goodsConfigById == null || !((Object)(object)IndependentProgress != (Object)null) || goodsConfigById.series != independentMergeTheme.themeSeriesID)
		{
			return;
		}
		IndependentProgress.UpdateIcon(goodsID, () =>
		{
			if ((Object)(object)IndependentProgress != (Object)null)
			{
				IndependentProgress.UpdateProgress();
			}
		});
	}

	public override void OnOpenHelpView()
	{
		ObjectManager.GetInstance().independentBasicModel.OpenIndependentHelpView();
	}

	public override void OnOpenGiftView()
	{
		ObjectManager.GetInstance().independentBasicModel.OpenActivityGiftView();
	}

	private void InitIllustrationBtnState()
	{
		RedPoint.RedpointAni((Transform)(object)illuRedPointTrans);
		IndependentBasicModel independentBasicModel = ObjectManager.GetInstance().independentBasicModel;
		illuRedPointTrans.SetSelfActive<RectTransform>(independentBasicModel.IsIllustratedWaitingReward());
		((TMP_Text)IllustratedProcessTxt).text = string.Format(string.Format("类04뀯}ﱣ哕", independentBasicModel.GetUnlockIllsustratedCount(), independentBasicModel.GetAllIllsustratedCount()), Array.Empty<object>());
	}

	private void RefreshRedState()
	{
		IndependentBasicModel independentBasicModel = ObjectManager.GetInstance().independentBasicModel;
		illuRedPointTrans.SetSelfActive<RectTransform>(independentBasicModel.IsIllustratedWaitingReward());
		((TMP_Text)IllustratedProcessTxt).text = string.Format(string.Format("类04뀯}ﱣ哕", independentBasicModel.GetUnlockIllsustratedCount(), independentBasicModel.GetAllIllsustratedCount()), Array.Empty<object>());
	}

	protected override void FlyToIllutrate(IIndependentGoodsBaseVo goodsBaseVo, Transform startTrans)
	{
		//IL_00ba: Unknown result type (might be due to invalid IL or missing references)
		//IL_0104: Unknown result type (might be due to invalid IL or missing references)
		//IL_011b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0125: Expected Obj, but got Unknown
		if (goodsBaseVo == null || (Object)(object)startTrans == (Object)null || ObjectManager.GetInstance().independentBasicModel.GetGoodsUnlockState(goodsBaseVo) != 0 || (ObjectManager.GetInstance().independentBasicModel.GetIndependentMergeTheme().themeSeriesID != goodsBaseVo.series && ObjectManager.GetInstance().independentBasicModel.GetIndependentMergeTheme().branchSeriesID != goodsBaseVo.series))
		{
			return;
		}
		FlyImg.sprite = ((BaseViewLogic)this).Load<Sprite>(goodsBaseVo.GetIcon(ViewLevelType));
		((Graphic)FlyImg).SetNativeSize();
		((Component)FlyImg).transform.setScale(0.65f, 0.65f, 0.5f);
		((Component)FlyImg).transform.position = startTrans.position;
		FlyImg.SetSelfActive<Image>(true);
		string aniFlag = (ObjectManager.GetInstance().independentBasicModel.IsOldSkin() ? "匦橡ā讥譣" : "녢塡㨈\0郢\ud93a");
		TweenSettingsExtensions.OnComplete<Tweener>(ShortcutExtensions.DOLocalMove(((Component)FlyImg).transform, ((Transform)illuTrans).localPosition, 0.75f, false), (TweenCallback)(() =>
		{
			if ((Object)(object)FlyImg != (Object)null)
			{
				FlyImg.SetSelfActive<Image>(false);
				Animation component = ((Component)illuTrans).GetComponent<Animation>();
				if (component != null)
				{
					component.Play("숏끔溽搐䥄7¾厽別瞃\ud9cdū" + aniFlag + "숆끳犵愇彁!Î反숵끟施渶瑛\"\u009a厙刟熿\ud9f7ŝ");
				}
				AudioManager.Instance.PlayEffect("숃끏抽漄慛\r\u008e厍숋끉暭攌硆\r\u009e厝녥塤㈪\0逛\ud973");
			}
		}));
	}

	public void OnOpenIllustrationView()
	{
		ObjectManager.GetInstance().independentBasicModel.OpenActivityIllustrationView();
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

	public void EnterAnimation(Action onComplete)
	{
		SetActiveByName("숏끜徿䈐䕗&\u0082厁匫橴ā讽豭", isActive: false);
		SetActiveByName("숏끜徿吐䕗&\u0082厁愽䢈", isActive: false);
		DOTweenUITools.DoEnterPopUIAnimation(ContentTransform, GrayTransform, null, () =>
		{
			SetActiveByName("숏끜徿䈐䕗&\u0082厁匫橴ā讽豭", isActive: true);
			SetActiveByName("숏끜徿吐䕗&\u0082厁愽䢈", isActive: true);
			onComplete?.Invoke();
		});
	}

	public void ExitAnimation(Action onComplete)
	{
		DOTweenUITools.DoExitPopUIAnimation(ContentTransform, GrayTransform, onComplete, isPlayAlpha: true, "숎끓德挏睛%\u0082厁判皇\ud9c4ő");
		SetActiveByName("숏끜徿䈐䕗&\u0082厁匫橴ā讽豭", isActive: false);
		SetActiveByName("숏끜徿吐䕗&\u0082厁愽䢈", isActive: false);
	}

	private void SetActiveByName(string name, bool isActive)
	{
		Transform val = ((Component)this).transform.Find(name);
		if ((Object)(object)val != (Object)null)
		{
			val.SetSelfActive<Transform>(isActive);
		}
	}
}
