using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using DG.Tweening;
using TLF;
using UniRx.Async;
using UniRx.Async.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

[PrefabPath("IndependentMergeView_egypt")]
public class IndependentMergeViewLogic_Egypt : IndependentMergeViewBaseLogic
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CPlayExpAnimation_003Ed__24 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public IndependentMergeViewLogic_Egypt _003C_003E4__this;

		private void MoveNext()
		{
			IndependentMergeViewLogic_Egypt independentMergeViewLogic_Egypt = _003C_003E4__this;
			try
			{
				if ((Object)(object)independentMergeViewLogic_Egypt.IndependentEnterLogic != (Object)null)
				{
					independentMergeViewLogic_Egypt.IndependentEnterLogic.DoProgress(ObjectManager.GetInstance().independentMergeModel.GetShowData());
				}
			}
			catch (Exception exception)
			{
				_003C_003E1__state = -2;
				_003C_003Et__builder.SetException(exception);
				return;
			}
			_003C_003E1__state = -2;
			_003C_003Et__builder.SetResult();
		}

		void IAsyncStateMachine.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			this.MoveNext();
		}

		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
			_003C_003Et__builder.SetStateMachine(stateMachine);
		}

		void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
		{
			//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
			this.SetStateMachine(stateMachine);
		}
	}

	private int mIndependentColumns = 6;

	private int mIndependentRows = 8;

	private bool isShowInfo;

	public Transform Content;

	public Text GiftTimeDownText;

	public GameObject GiftButtonGo;

	[Header("收集进度逻辑")]
	public IndependentProgressView IndependentProgress;

	[Header("等级通行证逻辑")]
	public IndependentLevelEnterLogic IndependentEnterLogic;

	[Header("道具详情逻辑")]
	public IndependentGoodsInfoViewLogic goodsLogic;

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
		CheckShowFullTip();
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
		MonoSingleton<GuideManager>.Instance.SetIndependentView(this);
		EventManager.GetInstance().AddEventListener<int>(202016, UnlockGoods);
		EventManager.GetInstance().AddEventListener(202017, OnGiftSwitch);
		EventManager.GetInstance().AddEventListener(202018, OnGiftBuySuccess);
		EventManager.GetInstance().AddEventListener<Action<Transform>>(202014, OnCollectAnim);
		EventManager.GetInstance().AddEventListener(203080, CheckSendBoardFullEvent);
		if (!MonoSingleton<GuideManager>.Instance.IsInGuide() && !MonoSingleton<GuideManager>.Instance.IsFinishByID(ObjectManager.GetInstance().independentMergeModel.GuideId_3()))
		{
			EventManager.GetInstance().DispatchEvent(100133, ObjectManager.GetInstance().independentMergeModel.GuideId_3(), 0.2f);
		}
	}

	private void OnCollectAnim(Action<Transform> action)
	{
		action?.Invoke(((Component)IndependentEnterLogic.LevelText).transform);
	}

	protected override void RemoveListener()
	{
		EventManager.GetInstance().RemoveEventListener<int>(202016, UnlockGoods);
		EventManager.GetInstance().RemoveEventListener(202017, OnGiftSwitch);
		EventManager.GetInstance().RemoveEventListener(202018, OnGiftBuySuccess);
		EventManager.GetInstance().RemoveEventListener<Action<Transform>>(202014, OnCollectAnim);
		EventManager.GetInstance().RemoveEventListener(203080, CheckSendBoardFullEvent);
		if ((Object)(object)IndependentEnterLogic != (Object)null)
		{
			IndependentEnterLogic.Clear();
		}
		MonoSingleton<GuideWeakManager>.Instance.ShowIndependentAutoConversion_Consume();
	}

	protected override void GameLayoutFit()
	{
		//IL_0054: Unknown result type (might be due to invalid IL or missing references)
		//IL_007e: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a8: Unknown result type (might be due to invalid IL or missing references)
		//IL_00d1: Unknown result type (might be due to invalid IL or missing references)
		//IL_00d7: Unknown result type (might be due to invalid IL or missing references)
		IIndependentMergeTheme independentMergeTheme = ObjectManager.GetInstance().independentMergeModel.GetIndependentMergeTheme();
		if (independentMergeTheme != null)
		{
			mIndependentColumns = independentMergeTheme.column;
			mIndependentRows = independentMergeTheme.row;
			ContentBg.sizeDelta = new Vector2((float)(mIndependentColumns * IndependentMergeViewBaseLogic.GridWidth + 30), (float)(mIndependentRows * IndependentMergeViewBaseLogic.GridHeight + 30));
			GridParent.sizeDelta = new Vector2((float)(mIndependentColumns * IndependentMergeViewBaseLogic.GridWidth), (float)(mIndependentRows * IndependentMergeViewBaseLogic.GridHeight));
			GridBgParent.sizeDelta = new Vector2((float)(mIndependentColumns * IndependentMergeViewBaseLogic.GridWidth), (float)(mIndependentRows * IndependentMergeViewBaseLogic.GridHeight));
		}
		if (Display.DesignScreenHeight < 1236)
		{
			float num = (float)Display.DesignScreenHeight / 1236f;
			Content.localScale = Vector3.one * num;
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
		if ((Object)(object)IndependentEnterLogic != (Object)null)
		{
			IndependentEnterLogic.Init();
		}
		RefreshTimeDown();
		((Component)TemporaryLogic).transform.SetSelfActive<Transform>(true);
		((Component)goodsLogic).transform.SetSelfActive<Transform>(false);
	}

	public override void SetLocalization(int tag = 0, object data = null)
	{
		LocalizedLang.SetUITextLocalization(TitleText, "숵끷禕瀶䥑5ê叩畴_4끩v쩀䷍");
		LocalizedLang.SetUITextLocalization(DescText, "숵끷禕瀶䥑5ê叩숋끥䶾愌瑙7:匹녩剮㝐\0連\ud975");
		LocalizedLang.SetLocalizationFontSize(TimeDownText);
		LocalizedLang.SetLocalizationFontSize(GiftTimeDownText);
	}

	private void InitActivityGift()
	{
		if (MonoSingleton<GuideManager>.Instance.IsInGuide())
		{
			OnGiftSwitch();
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
		OnGiftSwitch();
		RefreshGiftTimeDown();
	}

	private void OnGiftSwitch()
	{
		if (ObjectManager.GetInstance().independentMergeModel.ThemeID == 2)
		{
			IndependentGIftIconLogic component = GiftButtonGo.GetComponent<IndependentGIftIconLogic>();
			if ((Object)(object)component != (Object)null && ObjectManager.GetInstance().independentMergeModel.GetGiftOpenState)
			{
				component.InitIcon(new ResLoader(), "숺끔玼主佘'Ò发숞끓榿渟䝹3ª厩숄끙架礅䥫7¢厡搤䮌");
			}
		}
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
		IndependentGIftIconLogic component = GiftButtonGo.GetComponent<IndependentGIftIconLogic>();
		if ((Object)(object)component != (Object)null && GiftButtonGo.activeSelf)
		{
			component.RefreshRedPointState();
		}
		if (!ObjectManager.GetInstance().independentMergeModel.GetGiftOpenState)
		{
			GiftTimeDownText.text = TimeManager.GetInstance().GetTimeDownBySecond(0);
			return;
		}
		int giftTimedown = ObjectManager.GetInstance().independentMergeModel.GetGiftTimedown();
		if (giftTimedown > 0)
		{
			GiftTimeDownText.text = TimeManager.GetInstance().GetTimeDownBySecond(giftTimedown);
			return;
		}
		GiftTimeDownText.text = TimeManager.GetInstance().GetTimeDownBySecond(0);
		ObjectManager.GetInstance().independentMergeModel.CheckCloseGift();
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

	[AsyncStateMachine(typeof(_003CPlayExpAnimation_003Ed__24))]
	public override UniTask PlayExpAnimation(int changeExp, float delay)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0031: Unknown result type (might be due to invalid IL or missing references)
		_003CPlayExpAnimation_003Ed__24 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CPlayExpAnimation_003Ed__24>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	public override void OnOpenHelpView()
	{
		ObjectManager.GetInstance().independentMergeModel.OpenIndependentHelpView();
	}

	public override void OnOpenGiftView()
	{
		ObjectManager.GetInstance().independentMergeModel.OpenActivityGiftView();
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
