using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using DG.Tweening;
using TLF;
using TLF.SkinSystem;
using TMPro;
using UniRx.Async;
using UniRx.Async.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

[PrefabPath("IndependentStage_Template_MergeView")]
public class IndependentStageTemplateMergeViewLogic : IndependentMergeViewBaseLogic, IBaseViewAnimation
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CHideTransferGate_003Ed__42 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public IndependentStageTemplateMergeViewLogic _003C_003E4__this;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_0066: Unknown result type (might be due to invalid IL or missing references)
			//IL_006b: Unknown result type (might be due to invalid IL or missing references)
			//IL_0072: Unknown result type (might be due to invalid IL or missing references)
			//IL_002a: Unknown result type (might be due to invalid IL or missing references)
			//IL_002f: Unknown result type (might be due to invalid IL or missing references)
			//IL_0033: Unknown result type (might be due to invalid IL or missing references)
			//IL_0038: Unknown result type (might be due to invalid IL or missing references)
			//IL_004c: Unknown result type (might be due to invalid IL or missing references)
			//IL_004d: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			IndependentStageTemplateMergeViewLogic independentStageTemplateMergeViewLogic = _003C_003E4__this;
			try
			{
				Awaiter val2;
				if (num != 0)
				{
					UniTask val = UniTask.Delay(TimeSpan.FromSeconds(0.30000001192092896), false, (PlayerLoopTiming)4, default(CancellationToken));
					val2 = val.GetAwaiter();
					if (!val2.IsCompleted)
					{
						num = (_003C_003E1__state = 0);
						_003C_003Eu__1 = val2;
						_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CHideTransferGate_003Ed__42>(ref val2, ref this);
						return;
					}
				}
				else
				{
					val2 = _003C_003Eu__1;
					_003C_003Eu__1 = default;
					num = (_003C_003E1__state = -1);
				}
				val2.GetResult();
				if (independentStageTemplateMergeViewLogic.mShowTransferGates != null && independentStageTemplateMergeViewLogic.mShowTransferGates.Count != 0)
				{
					for (int i = 0; i < independentStageTemplateMergeViewLogic.mShowTransferGates.Count; i++)
					{
						independentStageTemplateMergeViewLogic.mShowTransferGates[i].GridBg.SetSelfActive<Image>(false);
						((Component)independentStageTemplateMergeViewLogic.mShowTransferGates[i]).transform.SetParent((Transform)(object)independentStageTemplateMergeViewLogic.GridParent);
					}
					independentStageTemplateMergeViewLogic.mShowTransferGates.Clear();
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

	private int mIndependentColumns = 5;

	private int mIndependentRows = 5;

	private IIndStageStageConfigVO mStageConfig;

	private long enterTime;

	private GameObject TemparyFankuiPrefab;

	private List<IndependentGrid> mShowTransferGates;

	private GameObject NextStageEffectGo;

	private List<IndependentGrid> mShowStageGoods;

	private Transform originParent;

	private bool PlayAnimation;

	private bool isShowInfo;

	public TextMeshProUGUI GiftTimeDownText;

	public GameObject GiftButtonGo;

	public RectTransform gridTitleNode;

	public TextMeshProUGUI gridTitleTxt;

	public IndependentStageTemplateProgressView IndependentProgress;

	public TextMeshProUGUI IllustratedProcessTxt;

	public RectTransform illuRedPointTrans;

	public RectTransform illuTrans;

	public Transform MaskNode;

	public Animation MaskNodeAnimation;

	public RectTransform GrayBg;

	public RectTransform BgNode;

	public Text tag_info;

	public Image FlyImg;

	[Header("道具详情逻辑")]
	public IndependentGoodsInfoViewLogic goodsLogic;

	[Header("TMP")]
	public TextMeshProUGUI titleTmp;

	public TextMeshProUGUI descTmp;

	public TextMeshProUGUI actTimeDownText;

	[Header("通行证图标逻辑")]
	public IndependentPassMergeIconView IndependentPassIcon;

	public override int Columns => mIndependentColumns;

	public override int Rows => mIndependentRows;

	public override IndependentType ViewLevelType => IndependentType.IndStageMerge;

	private IndStageModel model => ObjectManager.GetInstance().idnStageModel;

	public override void OnEnter()
	{
		Data = (viewData as IndependentMergeViewBaseData) ?? new IndependentMergeViewBaseData();
		GameManager.GetInstance().SetMultiTouchEnabled(enable: false);
		mStageConfig = model.GetStageConfig();
		Transform val = ((TMP_Text)IllustratedProcessTxt).transform.parent.Find("删犷\ud9c1Ś");
		if ((Object)(object)val != (Object)null)
		{
			((Graphic)((Component)val).GetComponent<Image>()).raycastTarget = false;
		}
		GameLayoutFit();
		InitView();
		InitActivityGift();
		CreateMapBg();
		CreateGameGrid();
		AddListener();
		CheckCompleteTarget();
		TriggerGuide();
		IsEnter = true;
		InitIllustrationBtnState();
		InitDebug();
		FlyImg.SetSelfActive<Image>(false);
		ApplySkinAsync();
		model.EnterMainGameView();
		model.EnterViewAnalytic("刖棻\ud9c7Ś", 0L);
		model.UserActionAnalytic("숄끙澼瀅獑\rÂ叁欷㹶");
		enterTime = ServerTimeManager.CurrentServerTime3();
		IndependentDefine.PlayEffectAudio(ViewLevelType, IndependentAudioType.OpenViewAudio);
		IndependentDefine.PlayEffectAudio(ViewLevelType, IndependentAudioType.AmbientSound);
		IndependentDefine.PlayBackgroundAudioV2(ViewLevelType, IndependentAudioType.Background);
	}

	public override void OnExit()
	{
		GameManager.GetInstance().SetMultiTouchEnabled(enable: true);
		mCurrentSelect = null;
		PlayAnimation = false;
		RemoveMergeHint();
		RecoveryGrid();
		RecoveryGridBg();
		RemoveListener();
		IndependentPassIcon.OnClose();
		model.EnterViewAnalytic("匧橬ā词靥", ServerTimeManager.CurrentServerTime3() - enterTime);
		model.UserActionAnalytic("숄끙掼氅獑\r\u0092厑뛦÷赴");
		IndependentDefine.StopEffectAudio(ViewLevelType, IndependentAudioType.AmbientSound);
		IndependentDefine.PlayEffectAudio(ViewLevelType, IndependentAudioType.CloseViewAudio);
		IndependentDefine.StopBackgroundAudio(ViewLevelType, IndependentAudioType.Background);
	}

	public override void OnReset(object data)
	{
		CommonMaskViewLogic.Show(0.2f);
		Data = new IndependentMergeViewBaseData();
		GameManager.GetInstance().SetMultiTouchEnabled(enable: false);
		mStageConfig = model.GetStageConfig();
		GameLayoutFit();
		if ((Object)(object)mCurrentSelect != (Object)null)
		{
			mCurrentSelect.SetSelectState(select: false);
			mCurrentSelect = null;
		}
		CheckCompleteTarget();
		TriggerGuide();
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
		PlayAnimation = false;
		RemoveMergeHint();
		TimeManager.GetInstance().ClearSchedule(this);
		IndependentDefine.StopEffectAudio(ViewLevelType, IndependentAudioType.AmbientSound);
		IndependentDefine.PlayEffectAudio(ViewLevelType, IndependentAudioType.CloseViewAudio);
		IndependentDefine.StopBackgroundAudio(ViewLevelType, IndependentAudioType.Background);
	}

	protected override void AddListener()
	{
		EventManager.GetInstance().AddEventListener<int>(203201, UnlockGoods);
		EventManager.GetInstance().AddEventListener(203206, OnGiftSwitch);
		EventManager.GetInstance().AddEventListener(202018, OnGiftBuySuccess);
		EventManager.GetInstance().AddEventListener(203202, OpenNextStage);
		EventManager.GetInstance().AddEventListener(203205, RefreshRedState);
		EventManager.GetInstance().AddEventListener(203119, OnClaimPassRewardSuccess);
	}

	protected override void RemoveListener()
	{
		EventManager.GetInstance().RemoveEventListener<int>(203201, UnlockGoods);
		EventManager.GetInstance().RemoveEventListener(203206, OnGiftSwitch);
		EventManager.GetInstance().RemoveEventListener(202018, OnGiftBuySuccess);
		EventManager.GetInstance().RemoveEventListener(203202, OpenNextStage);
		EventManager.GetInstance().RemoveEventListener(203205, RefreshRedState);
		MonoSingleton<GuideWeakManager>.Instance.ShowIndependentTransferGate_Consume();
		EventManager.GetInstance().RemoveEventListener(203119, OnClaimPassRewardSuccess);
	}

	protected override void GameLayoutFit()
	{
		//IL_0053: Unknown result type (might be due to invalid IL or missing references)
		//IL_007d: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a7: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b7: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c7: Unknown result type (might be due to invalid IL or missing references)
		//IL_00de: Unknown result type (might be due to invalid IL or missing references)
		if (mStageConfig != null)
		{
			mIndependentColumns = mStageConfig.column;
			mIndependentRows = mStageConfig.row;
			ContentBg.sizeDelta = new Vector2((float)(mIndependentColumns * IndependentMergeViewBaseLogic.GridWidth + 12), (float)(mIndependentRows * IndependentMergeViewBaseLogic.GridHeight + 12));
			GridParent.sizeDelta = new Vector2((float)(mIndependentColumns * IndependentMergeViewBaseLogic.GridWidth), (float)(mIndependentRows * IndependentMergeViewBaseLogic.GridHeight));
			GridBgParent.sizeDelta = new Vector2((float)(mIndependentColumns * IndependentMergeViewBaseLogic.GridWidth), (float)(mIndependentRows * IndependentMergeViewBaseLogic.GridHeight));
			float y = ((Transform)ContentBg).localPosition.y + ContentBg.sizeDelta.y / 2f + gridTitleNode.sizeDelta.y / 2f - 5f;
			((Transform)(object)gridTitleNode).setLocalPosition(0f, y);
		}
	}

	protected override void InitView()
	{
		if ((Object)(object)TemporaryLogic != (Object)null)
		{
			TemporaryLogic.Init(this, ViewLevelType);
			TemporaryLogic.RefreshLockNodeState();
		}
		IIndStageTheme independentMergeTheme = model.GetIndependentMergeTheme();
		if (independentMergeTheme != null && (Object)(object)IndependentProgress != (Object)null)
		{
			IndependentProgress.Init(independentMergeTheme.themeSeriesID, this);
		}
		RefreshStageTitle();
		RefreshTimeDown();
		((Component)goodsLogic).transform.SetSelfActive<Transform>(false);
		IndependentPassIcon.Init(this, ((Component)TemporaryLogic).transform);
	}

	protected override void FlyToIllutrate(IIndependentGoodsBaseVo goodsBaseVo, Transform startTrans)
	{
		//IL_00a1: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c8: Unknown result type (might be due to invalid IL or missing references)
		//IL_00df: Unknown result type (might be due to invalid IL or missing references)
		//IL_00e9: Expected Obj, but got Unknown
		if (goodsBaseVo == null || (Object)(object)startTrans == (Object)null || model.GetGoodsUnlockState(goodsBaseVo) != 0 || (model.GetIndependentMergeTheme().themeSeriesID != goodsBaseVo.series && model.GetIndependentMergeTheme().branchSeriesID != goodsBaseVo.series))
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
				if (Object.op_Implicit((Object)(object)component))
				{
					component.Play();
					AudioManager.GetInstance().PlayEffect("숵끏碽弶慇4æ句숙끒㖸㜚灑6Ù变숆끙掶琇彘7\u0092厑냫\u0087赴");
				}
			}
		}));
	}

	public override void CheckUnlock(IIndependentGoodsBaseVo vo)
	{
		if (vo != null && vo.series == 1003 && model.GetGoodsUnlockState(vo) == 0)
		{
			model.RefreshIllustratedUnlockState(vo.series, vo.goodsID, 1);
			RefreshRedState();
		}
	}

	public override void RefreshTimeDown()
	{
		if (!((Object)(object)actTimeDownText == (Object)null))
		{
			int activityTimedown = IndependentDefine.GetActivityTimedown(ViewLevelType);
			if (activityTimedown > 0)
			{
				((TMP_Text)actTimeDownText).text = TimeManager.GetInstance().GetTimeDownBySecond(activityTimedown);
			}
			else
			{
				LocalizedLang.SetUITextLocalization(actTimeDownText, "숃끙璭礄慂;Ö叕숄끜械攅彝!¦厥뻸");
			}
		}
	}

	private void RefreshStageTitle()
	{
		IIndStageTheme independentMergeTheme = model.GetIndependentMergeTheme();
		if (independentMergeTheme != null && mStageConfig != null)
		{
			LocalizedLang.SetUITextLocalization(gridTitleTxt, model.GetUILanguageKey("숍끟皫椎浑\rÞ叝숙끍枆攚敀3¢厡医橤ā词鵣"), new List<string>
			{
				mStageConfig.stage.ToString(),
				independentMergeTheme.totalStage.ToString()
			});
		}
		else
		{
			LocalizedLang.SetUITextLocalization(gridTitleTxt, model.GetUILanguageKey("숍끟皫椎浑\rÞ叝숙끍枆攚敀3¢厡医橤ā词鵣"), new List<string> { "뺭", "뺭" });
		}
	}

	public override void SetLocalization(int tag = 0, object data = null)
	{
		//IL_007f: Unknown result type (might be due to invalid IL or missing references)
		if ((Object)(object)titleTmp != (Object)null)
		{
			LocalizedLang.SetUITextLocalization(titleTmp, model.GetUILanguageKey("숍끟皫椎浑\rÞ叝숞끍沆攟敝&¶厵"));
		}
		else
		{
			LocalizedLang.SetUITextLocalization(TitleText, model.GetUILanguageKey("숍끟皫椎浑\rÞ叝숞끍沆攟敝&¶厵"));
		}
		LocalizedLang.SetLocalizationFontSize(actTimeDownText);
		LocalizedLang.SetLocalizationFontSize(GiftTimeDownText);
		if ((Object)(object)actTimeDownText != (Object)null)
		{
			((Component)actTimeDownText).GetComponent<Transform>().SetSize<Transform>(new Vector2(95f, 30f));
			((TMP_Text)actTimeDownText).fontSizeMin = 5f;
			((TMP_Text)actTimeDownText).fontSizeMax = 24f;
		}
	}

	private void InitActivityGift()
	{
		if (MonoSingleton<GuideManager>.Instance.IsInGuide())
		{
			GiftButtonGo.SetSelfActive(model.GetGiftOpenState);
			return;
		}
		if (model.GetGiftOpenState)
		{
			model.CheckCloseGift();
			model.CheckPopGiftView();
		}
		else
		{
			model.CheckOpenGift();
		}
		GiftButtonGo.SetSelfActive(model.GetGiftOpenState);
		RefreshGiftTimeDown();
	}

	private void OnGiftSwitch()
	{
		GiftButtonGo.SetSelfActive(model.GetGiftOpenState);
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
		if (model.GetGiftOpenState)
		{
			int giftTimedown = model.GetGiftTimedown();
			if (giftTimedown > 0)
			{
				((TMP_Text)GiftTimeDownText).text = TimeManager.GetInstance().GetTimeDownBySecond(giftTimedown);
				return;
			}
			((TMP_Text)GiftTimeDownText).text = TimeManager.GetInstance().GetTimeDownBySecond(0);
			model.CheckCloseGift();
		}
	}

	private void UnlockGoods(int goodsID)
	{
		IIndependentGoodsBaseVo goodsConfigById = model.GetGoodsConfigById(goodsID);
		IIndStageTheme independentMergeTheme = model.GetIndependentMergeTheme();
		if (independentMergeTheme != null && goodsConfigById != null && (Object)(object)IndependentProgress != (Object)null && goodsConfigById.series == independentMergeTheme.themeSeriesID)
		{
			IndependentProgress.UpdateIcon(goodsID, CheckCompleteTarget);
		}
	}

	private void InitIllustrationBtnState()
	{
		RedPoint.RedpointAni((Transform)(object)illuRedPointTrans);
		illuRedPointTrans.SetSelfActive<RectTransform>(model.IsIllustratedWaitingReward());
		((TMP_Text)IllustratedProcessTxt).text = string.Format(string.Format("类04뀯}ﱣ哕", model.GetUnlockIllsustratedCount(), model.GetAllIllsustratedCount()), Array.Empty<object>());
	}

	private void RefreshRedState()
	{
		illuRedPointTrans.SetSelfActive<RectTransform>(model.IsIllustratedWaitingReward());
		((TMP_Text)IllustratedProcessTxt).text = string.Format(string.Format("类04뀯}ﱣ哕", model.GetUnlockIllsustratedCount(), model.GetAllIllsustratedCount()), Array.Empty<object>());
	}

	public override void GoodsToTempary(IIndependentGoodsBaseVo goodsBaseVo, Transform startTrans)
	{
		//IL_0021: Unknown result type (might be due to invalid IL or missing references)
		//IL_002b: Expected Obj, but got Unknown
		//IL_008a: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a0: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c5: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ee: Unknown result type (might be due to invalid IL or missing references)
		//IL_00f8: Expected Obj, but got Unknown
		//IL_00f8: Unknown result type (might be due to invalid IL or missing references)
		//IL_0102: Expected Obj, but got Unknown
		if ((Object)(object)TemporaryLogic == (Object)null || goodsBaseVo == null)
		{
			return;
		}
		GameObject flyTransform = new GameObject();
		Image val = flyTransform.AddComponent<Image>();
		val.sprite = ((BaseViewLogic)this).Load<Sprite>(goodsBaseVo.GetIcon(ViewLevelType));
		((Graphic)val).SetNativeSize();
		val.LocalIdentity<Image>();
		flyTransform.transform.SetParent(((Component)this).transform);
		flyTransform.transform.localScale = new Vector3(0.565f, 0.565f, 1f);
		flyTransform.transform.position = startTrans.position;
		Tweener val2 = TweenSettingsExtensions.SetAutoKill<Tweener>(TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOMove(flyTransform.transform, ((Component)TemporaryLogic.ItemIcon).transform.position, 0.4f, false), (Ease)7), true);
		((Tween)val2).onComplete = (TweenCallback)Delegate.Combine((Delegate?)(object)((Tween)val2).onComplete, (Delegate?)(TweenCallback)(() =>
		{
			if ((Object)(object)TemparyFankuiPrefab == (Object)null)
			{
				TemparyFankuiPrefab = ((BaseViewLogic)this).Load<GameObject>("숏끜徿猐敗&\u0082厁숀끕暬愁桝\r\u009e厝숃끑斬眄湫<\u009a厙");
			}
			GameObject val3 = Object.Instantiate<GameObject>(TemparyFankuiPrefab);
			val3.transform.LocalIdentity<Transform>();
			val3.transform.SetParent(TemporaryLogic.IconParentGo.transform, false);
			flyTransform.DestroySelf<GameObject>();
		}));
	}

	public override void OnOpenHelpView()
	{
		model.OpenIndependentHelpView();
	}

	public override void OnOpenGiftView()
	{
		model.OpenActivityGiftView();
	}

	public void OnOpenIllustrationView()
	{
		model.OpenActivityIllustrationView();
	}

	private void CheckCompleteTarget()
	{
		if (!model.IsCompleteCurrentStage())
		{
			return;
		}
		TemporaryLogic.RefreshLockNodeState();
		if (model.IsPlayKeyAnimtion || (Object)(object)IndependentProgress == (Object)null)
		{
			return;
		}
		PlayAnimation = true;
		ShowMaskNode();
		ShowTransferGate();
		foreach (KeyValuePair<int, IndependentGrid> item in mGridObjectDic)
		{
			if (!((Object)(object)item.Value == (Object)null) && item.Value.GetGoodsBaseVo() != null && item.Value.GetGoodsBaseVo().type == 10)
			{
				IndependentProgress.OpenTransferGateAnim(item.Value, UpdateTransferGate);
				break;
			}
		}
	}

	private void UpdateTransferGate()
	{
		//IL_0077: Unknown result type (might be due to invalid IL or missing references)
		foreach (KeyValuePair<int, IndependentGrid> item in mGridObjectDic)
		{
			if (!((Object)(object)item.Value == (Object)null) && item.Value.GetGoodsBaseVo() != null && item.Value.GetGoodsBaseVo().type == 10)
			{
				item.Value.UpdateGameLevelItem();
				break;
			}
		}
		HideMaskNode();
		HideTransferGate();
		TriggerGuide();
		PlayAnimation = false;
	}

	private void ShowTransferGate()
	{
		if (mShowTransferGates == null)
		{
			mShowTransferGates = new List<IndependentGrid>();
		}
		mShowTransferGates.Clear();
		mGridObjectDic.Values.ToList();
		foreach (KeyValuePair<int, IndependentGrid> item in mGridObjectDic)
		{
			IndependentGrid value = item.Value;
			if (!((Object)(object)value == (Object)null) && value.GetGoodsBaseVo() != null && value.GetGoodsBaseVo().type == 10)
			{
				mShowTransferGates.Add(value);
				((Component)value).transform.SetParent(DragItemParent);
				((Component)value).transform.SetSiblingIndex(0);
				break;
			}
		}
	}

	[AsyncStateMachine(typeof(_003CHideTransferGate_003Ed__42))]
	private UniTask HideTransferGate()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0031: Unknown result type (might be due to invalid IL or missing references)
		_003CHideTransferGate_003Ed__42 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CHideTransferGate_003Ed__42>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	private async void ShowMaskNode()
	{
	}

	private async void HideMaskNode(bool playAnim = true)
	{
	}

	private void OpenNextStage()
	{
		PlayNextStageAnim();
	}

	private async void PlayNextStageAnim()
	{
		IndependentGrid independentGrid = null;
		foreach (KeyValuePair<int, IndependentGrid> item in mGridObjectDic)
		{
			if (!((Object)(object)item.Value == (Object)null) && item.Value.GetGoodsBaseVo() != null && item.Value.GetGoodsBaseVo().type == 10)
			{
				independentGrid = item.Value;
				break;
			}
		}
		if ((Object)(object)independentGrid == (Object)null)
		{
			return;
		}
		MonoSingleton<GuideWeakManager>.Instance.ShowIndependentTransferGate_Consume();
		CommonMaskViewLogic.Show(2.7f);
		PlayAnimation = true;
		independentGrid.GetGameLevelItem().SetSelfActive<IndependentItem>(false);
		string configSuffix = model.GetConfigSuffix();
		GameObject val = ((BaseViewLogic)this).Load<GameObject>("숵끜憡朶癧&\u008a厉숏끥沍愐教\"¶厵숥끟溆弦瑄7¾厽匷橴ā讝饥" + configSuffix);
		NextStageEffectGo = Object.Instantiate<GameObject>(val);
		NextStageEffectGo.transform.SetParent(DragItemParent, false);
		NextStageEffectGo.transform.LocalIdentity<Transform>();
		NextStageEffectGo.transform.position = independentGrid.GameItemParent.position;
		string audioName = ObjectManager.GetInstance().idnStageModel.GetAudioName(IndependentAudioType.StagePortalOpenAudio);
		if (!string.IsNullOrEmpty(audioName))
		{
			AudioManager.GetInstance().PlayEffect(audioName);
		}
		else
		{
			AudioManager.GetInstance().PlayEffect("숍끎涸攎獑\rº厹숵끝犼琶牄=Î反숚끖憶琛慑 \u008a厉냫\u0087赴");
		}
		ShowMaskNode();
		ShowStageGoods(independentGrid);
		SetBottomEntranceLayer(isChange: true);
		DOTweenTools.UIDOCanvasGroup((Transform)(object)gridTitleNode, 0f, 0.5f, (Ease)1);
		TimeManager.GetInstance().Schedule(this, (float dt) =>
		{
			SetBottomEntranceLayer(isChange: false);
			DOTweenTools.UIDOCanvasGroup((Transform)(object)gridTitleNode, 1f, 0f, (Ease)1);
		}, 2.2f, 1, 0f);
		await UniTask.Delay(TimeSpan.FromSeconds(0.30000001192092896), false, (PlayerLoopTiming)4, default(CancellationToken));
		Tweener val2 = TweenSettingsExtensions.SetAutoKill<Tweener>(TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOMove(NextStageEffectGo.transform, DragItemParent.position, 0.366f, false), (Ease)1), true);
		((Tween)val2).onComplete = (TweenCallback)Delegate.Combine((Delegate?)(object)((Tween)val2).onComplete, (Delegate?)(TweenCallback)(() =>
		{
			NextStageEffectGo.transform.LocalIdentity<Transform>();
		}));
		await UniTask.Delay(TimeSpan.FromSeconds(0.6700000166893005), false, (PlayerLoopTiming)4, default(CancellationToken));
		if (mShowStageGoods != null && mShowStageGoods.Count > 0)
		{
			for (int num = 0; num < mShowStageGoods.Count; num++)
			{
				if (!((Object)(object)mShowStageGoods[num] == (Object)null))
				{
					mShowStageGoods[num].CollectGoodsToTarget(DragItemParent.position);
				}
			}
		}
		await UniTask.Delay(TimeSpan.FromSeconds(1.2999999523162842), false, (PlayerLoopTiming)4, default(CancellationToken));
		HideMaskNode(playAnim: false);
		HideStageGoods();
		mStageConfig = model.GetStageConfig();
		GameLayoutFit();
		RefreshStageTitle();
		if ((Object)(object)IndependentProgress != (Object)null)
		{
			IndependentProgress.OnResetView();
		}
		ResetGameMapBg();
		ResetGameMap();
		if ((Object)(object)TemporaryLogic != (Object)null)
		{
			TemporaryLogic.RefreshLockNodeState();
			TemporaryLogic.UpdateTempprary();
		}
		string name = "숵끜憡朶癧&\u008a厉숏끥沍愐教\"¶厵숥끟溆弦瑄7¾厽숍끎䖸明卑\r\u001a匙刔暯\ud9ceŀ" + model.GetIndependentMergeTheme().skinSuffix;
		GameObject val3 = Object.Instantiate<GameObject>(((BaseViewLogic)this).Load<GameObject>(name));
		val3.transform.SetParent(((Component)this).transform, false);
		val3.transform.LocalIdentity<Transform>();
		await UniTask.Delay(TimeSpan.FromSeconds(0.44999998807907104), false, (PlayerLoopTiming)4, default(CancellationToken));
		NextStageEffectGo.DestroySelf<GameObject>();
		PlayAnimation = false;
		CheckCompleteTarget();
	}

	private void ShowStageGoods(IndependentGrid transferGateGrid)
	{
		int num = 10;
		int num2 = 1;
		int num3 = 10;
		int num4 = 1;
		int num5 = mIndependentRows / 2;
		if ((Object)(object)transferGateGrid != (Object)null)
		{
			int gridId = transferGateGrid.GetGridId();
			int num6 = gridId / 10;
			int num7 = gridId % 10;
			num4 = ((num7 - 1 <= 1) ? 1 : (num7 - 1));
			num3 = num7 + 1;
			num2 = num6;
			num = num6 + num5;
		}
		if (mShowStageGoods == null)
		{
			mShowStageGoods = new List<IndependentGrid>();
		}
		mShowStageGoods.Clear();
		mGridObjectDic.Values.ToList();
		foreach (KeyValuePair<int, IndependentGrid> item in mGridObjectDic)
		{
			IndependentGrid value = item.Value;
			if ((Object)(object)value == (Object)null || value.GetGoodsBaseVo() == null || value.GetGoodsBaseVo().type == 10)
			{
				continue;
			}
			int num8 = value.GetGridId() / 10;
			int num9 = value.GetGridId() % 10;
			if (num8 >= num2 && num8 <= num && num9 >= num4 && num9 <= num3)
			{
				if ((Object)(object)value.GetGameLevelItem() != (Object)null)
				{
					value.GetGameLevelItem().ShowGoodsIcon();
				}
				mShowStageGoods.Add(value);
				((Component)value).transform.SetParent(DragItemParent);
				((Component)value).transform.SetSiblingIndex(0);
			}
			else
			{
				if ((Object)(object)value.GetGameLevelItem() != (Object)null)
				{
					value.GetGameLevelItem().ShowGoodsIcon();
				}
				mShowStageGoods.Add(value);
				((Component)value).transform.SetParent(DragItemParent);
			}
		}
	}

	private async void HideStageGoods()
	{
		await UniTask.Delay(TimeSpan.FromSeconds(0.30000001192092896), false, (PlayerLoopTiming)4, default(CancellationToken));
		if (mShowStageGoods != null && mShowStageGoods.Count != 0)
		{
			for (int i = 0; i < mShowStageGoods.Count; i++)
			{
				mShowStageGoods[i].GridBg.SetSelfActive<Image>(false);
				((Component)mShowStageGoods[i]).transform.SetParent((Transform)(object)GridParent);
			}
			mShowStageGoods.Clear();
		}
	}

	private void SetBottomEntranceLayer(bool isChange)
	{
		if ((Object)(object)originParent == (Object)null)
		{
			originParent = GiftButtonGo.transform.parent;
		}
		if (isChange)
		{
			((Component)IndependentPassIcon).transform.SetParent((Transform)(object)BgNode);
			((Component)TemporaryLogic).transform.SetParent((Transform)(object)BgNode);
			((Component)illuTrans).transform.SetParent((Transform)(object)BgNode);
			return;
		}
		((Component)TemporaryLogic).transform.SetParent(originParent);
		((Component)IndependentPassIcon).transform.SetParent(originParent);
		((Component)illuTrans).transform.SetParent(originParent);
		((Component)illuTrans).transform.SetSiblingIndex(4);
		((Component)IndependentPassIcon).transform.SetSiblingIndex(4);
		((Component)TemporaryLogic).transform.SetSiblingIndex(4);
	}

	private void TriggerGuide()
	{
		if (MonoSingleton<GuideManager>.Instance.IsInGuide())
		{
			return;
		}
		int num = model.GuideId_2();
		if (MonoSingleton<GuideManager>.Instance.IsFinishByID(num) || !model.IsCompleteCurrentStage() || !model.IsPlayKeyAnimtion)
		{
			return;
		}
		IndependentGrid independentGrid = null;
		foreach (KeyValuePair<int, IndependentGrid> item in mGridObjectDic)
		{
			if (!((Object)(object)item.Value == (Object)null) && item.Value.GetGoodsBaseVo() != null && item.Value.GetGoodsBaseVo().type == 10)
			{
				independentGrid = item.Value;
				break;
			}
		}
		if ((Object)(object)independentGrid != (Object)null)
		{
			((Object)((Component)independentGrid).gameObject).name = "숏끔溽搐䥄7¾厽숹끔枭攺敀3¢厡숄끈斸爅呇4\u009a厙參橵ā讑酥";
			EventManager.GetInstance().DispatchEvent(100133, num, 0.2f);
		}
	}

	public override bool ShowPriorityGuideWeak()
	{
		IndependentGrid guideWeakTransferGate = GetGuideWeakTransferGate();
		if ((Object)(object)guideWeakTransferGate != (Object)null)
		{
			MonoSingleton<GuideWeakManager>.Instance.ShowIndependentTransferGate(guideWeakTransferGate.GameItemParent, DragItemParent);
			return true;
		}
		return false;
	}

	public IndependentGrid GetGuideWeakTransferGate()
	{
		if (DragGoods)
		{
			return null;
		}
		if (PlayAnimation)
		{
			return null;
		}
		if (!model.IsCompleteCurrentStage())
		{
			return null;
		}
		if (!model.IsPlayKeyAnimtion)
		{
			return null;
		}
		foreach (KeyValuePair<int, IndependentGrid> item in mGridObjectDic)
		{
			if (!((Object)(object)item.Value == (Object)null) && item.Value.GetGoodsBaseVo() != null && item.Value.GetGoodsBaseVo().type == 10)
			{
				return item.Value;
			}
		}
		return null;
	}

	private void InitDebug()
	{
		tag_info.SetSelfActive<Text>(false);
	}

	public override bool OnBackPressed()
	{
		if (DragGoods)
		{
			return true;
		}
		if (PlayAnimation)
		{
			return true;
		}
		OnCloseView();
		return true;
	}

	public void EnterAnimation(Action onComplete)
	{
		DOTweenUITools.DoEnterPopUIAnimation((Transform)(object)BgNode, (Transform)(object)GrayBg, null, onComplete);
	}

	public void ExitAnimation(Action onComplete)
	{
		DOTweenUITools.DoExitPopUIAnimation((Transform)(object)BgNode, (Transform)(object)GrayBg, onComplete, isPlayAlpha: true, "숎끓德挏睛%\u0082厁判皇\ud9c4ő");
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
		if (goodsConfigById.type == 10)
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

	public async void ApplySkinAsync()
	{
		SkinApplier component = ((Component)this).GetComponent<SkinApplier>();
		if ((Object)(object)component != (Object)null)
		{
			ESkinPackageId skinPackageID = ObjectManager.Instance.idnStageModel.GetSkinPackageID();
			if (skinPackageID != ESkinPackageId.None)
			{
				await component.ApplySkinAsync(skinPackageID);
			}
		}
	}
}
