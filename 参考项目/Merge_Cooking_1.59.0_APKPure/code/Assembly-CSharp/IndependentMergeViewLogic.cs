using TLF;
using UnityEngine;
using UnityEngine.UI;

[PrefabPath("IndependentMergeView")]
public class IndependentMergeViewLogic : IndependentMergeViewBaseLogic
{
	private int mIndependentColumns = 5;

	private int mIndependentRows = 5;

	public Text GiftTimeDownText;

	public GameObject GiftButtonGo;

	public IndependentProgressView IndependentProgress;

	public override int Columns => mIndependentColumns;

	public override int Rows => mIndependentRows;

	public override IndependentType ViewLevelType => IndependentType.MergeIndependent;

	public override void OnEnter()
	{
		Data = (viewData as IndependentMergeViewBaseData) ?? new IndependentMergeViewBaseData();
		GameManager.GetInstance().SetMultiTouchEnabled(enable: false);
		ObjectManager.GetInstance().independentMergeModel.UserCompatible();
		GameLayoutFit();
		InitView();
		InitActivityGift();
		CreateMapBg();
		CreateGameGrid();
		AddListener();
		IsEnter = true;
	}

	public override void OnExit()
	{
		GameManager.GetInstance().SetMultiTouchEnabled(enable: true);
		mCurrentSelect = null;
		RemoveMergeHint();
		RecoveryGrid();
		RecoveryGridBg();
		RemoveListener();
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
	}

	protected override void AddListener()
	{
		EventManager.GetInstance().AddEventListener<int>(202016, UnlockGoods);
		EventManager.GetInstance().AddEventListener(202017, OnGiftSwitch);
		EventManager.GetInstance().AddEventListener(202018, OnGiftBuySuccess);
		EventManager.GetInstance().AddEventListener(203080, CheckSendBoardFullEvent);
	}

	protected override void RemoveListener()
	{
		EventManager.GetInstance().RemoveEventListener<int>(202016, UnlockGoods);
		EventManager.GetInstance().RemoveEventListener(202017, OnGiftSwitch);
		EventManager.GetInstance().RemoveEventListener(202018, OnGiftBuySuccess);
		EventManager.GetInstance().RemoveEventListener(203080, CheckSendBoardFullEvent);
	}

	protected override void GameLayoutFit()
	{
		//IL_0070: Unknown result type (might be due to invalid IL or missing references)
		//IL_009a: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c4: Unknown result type (might be due to invalid IL or missing references)
		IIndependentMergeTheme independentMergeTheme = ObjectManager.GetInstance().independentMergeModel.GetIndependentMergeTheme();
		if (independentMergeTheme != null)
		{
			mIndependentColumns = independentMergeTheme.column;
			mIndependentRows = independentMergeTheme.row;
			float num = 22f;
			if (ObjectManager.GetInstance().independentMergeModel.ThemeID == 4)
			{
				num = 44f;
			}
			ContentBg.sizeDelta = new Vector2((float)(mIndependentColumns * IndependentMergeViewBaseLogic.GridWidth) + num, (float)(mIndependentRows * IndependentMergeViewBaseLogic.GridHeight) + num);
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
		IIndependentMergeTheme independentMergeTheme = ObjectManager.GetInstance().independentMergeModel.GetIndependentMergeTheme();
		if (independentMergeTheme != null && (Object)(object)IndependentProgress != (Object)null)
		{
			IndependentProgress.Init(independentMergeTheme.themeSeriesID, this);
		}
		RefreshTimeDown();
	}

	public override void SetLocalization(int tag = 0, object data = null)
	{
		LocalizedLang.SetUITextLocalization(TitleText, "숵끷璕氶䥀;Ö叕뻹");
		LocalizedLang.SetUITextLocalization(DescText, "숵끷涕收䥓3º厹숏끛斾猐偫6\u009a厙");
		LocalizedLang.SetLocalizationFontSize(TimeDownText);
		LocalizedLang.SetLocalizationFontSize(GiftTimeDownText);
	}

	private void InitActivityGift()
	{
		if (MonoSingleton<GuideManager>.Instance.IsInGuide())
		{
			GiftButtonGo.SetSelfActive(ObjectManager.GetInstance().independentMergeModel.GetGiftOpenState);
			return;
		}
		if (ObjectManager.GetInstance().independentMergeModel.GetGiftOpenState)
		{
			ObjectManager.GetInstance().independentMergeModel.CheckCloseGift();
			ObjectManager.GetInstance().independentMergeModel.CheckPopGiftView();
		}
		else
		{
			ObjectManager.GetInstance().independentMergeModel.CheckOpenGift();
		}
		GiftButtonGo.SetSelfActive(ObjectManager.GetInstance().independentMergeModel.GetGiftOpenState);
		RefreshGiftTimeDown();
	}

	private void OnGiftSwitch()
	{
		GiftButtonGo.SetSelfActive(ObjectManager.GetInstance().independentMergeModel.GetGiftOpenState);
	}

	private void OnGiftBuySuccess()
	{
		if ((Object)(object)TemporaryLogic != (Object)null)
		{
			TemporaryLogic.UpdateTempprary();
		}
	}

	protected override void RefreshGiftTimeDown()
	{
		if (ObjectManager.GetInstance().independentMergeModel.GetGiftOpenState)
		{
			int giftTimedown = ObjectManager.GetInstance().independentMergeModel.GetGiftTimedown();
			if (giftTimedown > 0)
			{
				GiftTimeDownText.text = TimeManager.GetInstance().GetTimeDownBySecond(giftTimedown);
				return;
			}
			GiftTimeDownText.text = TimeManager.GetInstance().GetTimeDownBySecond(0);
			ObjectManager.GetInstance().independentMergeModel.CheckCloseGift();
		}
	}

	private void UnlockGoods(int goodsID)
	{
		IIndependentGoodsBaseVo goodsConfigById = ObjectManager.GetInstance().independentMergeModel.GetGoodsConfigById(goodsID);
		IIndependentMergeTheme independentMergeTheme = ObjectManager.GetInstance().independentMergeModel.GetIndependentMergeTheme();
		if (independentMergeTheme != null && goodsConfigById != null && (Object)(object)IndependentProgress != (Object)null && goodsConfigById.series == independentMergeTheme.themeSeriesID)
		{
			IndependentProgress.UpdateIcon(goodsID);
		}
	}

	public override void OnOpenHelpView()
	{
		ObjectManager.GetInstance().independentMergeModel.OpenIndependentHelpView();
	}

	public override void OnOpenGiftView()
	{
		ObjectManager.GetInstance().independentMergeModel.OpenActivityGiftView();
	}
}
