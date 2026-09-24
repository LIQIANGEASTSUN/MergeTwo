using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using DG.Tweening;
using TLF;
using UniRx.Async;
using UniRx.Async.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

[PrefabPath("TreasureCraftingMergeView_sands")]
public class TreasureCraftingMergeViewLogic_Sands : IndependentMergeViewBaseLogic
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CPlayExpAnimation_003Ed__42 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public float delay;

		public TreasureCraftingMergeViewLogic_Sands _003C_003E4__this;

		private IndependentShowData _003CshowData_003E5__2;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_0083: Unknown result type (might be due to invalid IL or missing references)
			//IL_0088: Unknown result type (might be due to invalid IL or missing references)
			//IL_008f: Unknown result type (might be due to invalid IL or missing references)
			//IL_004a: Unknown result type (might be due to invalid IL or missing references)
			//IL_004f: Unknown result type (might be due to invalid IL or missing references)
			//IL_0053: Unknown result type (might be due to invalid IL or missing references)
			//IL_0058: Unknown result type (might be due to invalid IL or missing references)
			//IL_006c: Unknown result type (might be due to invalid IL or missing references)
			//IL_006d: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			TreasureCraftingMergeViewLogic_Sands treasureCraftingMergeViewLogic_Sands = _003C_003E4__this;
			try
			{
				Awaiter val2;
				if (num != 0)
				{
					_003CshowData_003E5__2 = ObjectManager.GetInstance().treasureCraftingModel.GetShowData();
					if (!(delay > 0f))
					{
						goto IL_00a5;
					}
					UniTask val = UniTask.Delay(TimeSpan.FromSeconds(delay), false, (PlayerLoopTiming)4, default(CancellationToken));
					val2 = val.GetAwaiter();
					if (!val2.IsCompleted)
					{
						num = (_003C_003E1__state = 0);
						_003C_003Eu__1 = val2;
						_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CPlayExpAnimation_003Ed__42>(ref val2, ref this);
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
				goto IL_00a5;
				IL_00a5:
				if ((Object)(object)treasureCraftingMergeViewLogic_Sands.PassEnterLogic != (Object)null)
				{
					treasureCraftingMergeViewLogic_Sands.PassEnterLogic.DoProgress(_003CshowData_003E5__2);
				}
			}
			catch (Exception exception)
			{
				_003C_003E1__state = -2;
				_003CshowData_003E5__2 = null;
				_003C_003Et__builder.SetException(exception);
				return;
			}
			_003C_003E1__state = -2;
			_003CshowData_003E5__2 = null;
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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CPlayMapMoveAnimation_003Ed__34 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public int depth;

		public TreasureCraftingMergeViewLogic_Sands _003C_003E4__this;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_009d: Unknown result type (might be due to invalid IL or missing references)
			//IL_00a2: Unknown result type (might be due to invalid IL or missing references)
			//IL_00a9: Unknown result type (might be due to invalid IL or missing references)
			//IL_0061: Unknown result type (might be due to invalid IL or missing references)
			//IL_0066: Unknown result type (might be due to invalid IL or missing references)
			//IL_006a: Unknown result type (might be due to invalid IL or missing references)
			//IL_006f: Unknown result type (might be due to invalid IL or missing references)
			//IL_0083: Unknown result type (might be due to invalid IL or missing references)
			//IL_0084: Unknown result type (might be due to invalid IL or missing references)
			//IL_01f6: Unknown result type (might be due to invalid IL or missing references)
			//IL_0238: Unknown result type (might be due to invalid IL or missing references)
			//IL_0242: Expected Obj, but got Unknown
			int num = _003C_003E1__state;
			TreasureCraftingMergeViewLogic_Sands CS_0024_003C_003E8__locals36 = _003C_003E4__this;
			try
			{
				Awaiter val2;
				if (num != 0)
				{
					CommonMaskViewLogic.Show((float)depth + 1f);
					CS_0024_003C_003E8__locals36.CanShowHint = false;
					CS_0024_003C_003E8__locals36.RemoveMergeHint();
					MonoSingleton<GuideWeakManager>.Instance.ShowIndependentAutoConversion_Consume();
					MonoSingleton<GuideWeakManager>.Instance.ShowIndependentMaxGoods_Consume();
					UniTask val = UniTask.Delay(TimeSpan.FromSeconds(0.7200000286102295), false, (PlayerLoopTiming)4, default(CancellationToken));
					val2 = val.GetAwaiter();
					if (!val2.IsCompleted)
					{
						num = (_003C_003E1__state = 0);
						_003C_003Eu__1 = val2;
						_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CPlayMapMoveAnimation_003Ed__34>(ref val2, ref this);
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
				CS_0024_003C_003E8__locals36.ResetGameMap();
				if (depth > 0 && CS_0024_003C_003E8__locals36.mAnimationMapDic != null)
				{
					CS_0024_003C_003E8__locals36.LevelNode.SetSelfActive<RectTransform>(false);
					CS_0024_003C_003E8__locals36.LevelNodeAnim.SetSelfActive<RectTransform>(true);
					CS_0024_003C_003E8__locals36.RecoveryAnimationGrid();
					Dictionary<int, IndependentGameGoodsVo> independentMap = IndependentDefine.GetIndependentMap(CS_0024_003C_003E8__locals36.ViewLevelType);
					for (int i = CS_0024_003C_003E8__locals36.Rows - depth + 1; i <= CS_0024_003C_003E8__locals36.Rows; i++)
					{
						for (int j = 1; j <= CS_0024_003C_003E8__locals36.Columns; j++)
						{
							int key = i * 10 + j;
							int key2 = (i + depth) * 10 + j;
							if (independentMap.TryGetValue(key, out var value))
							{
								CS_0024_003C_003E8__locals36.mAnimationMapDic[key2] = value;
							}
						}
					}
					CS_0024_003C_003E8__locals36.CreateAnimationGrid(CS_0024_003C_003E8__locals36.mAnimationMapDic, depth, playCollectAnim: true);
					if ((Object)(object)CS_0024_003C_003E8__locals36.LevelNodeAnimation != (Object)null)
					{
						CS_0024_003C_003E8__locals36.LevelNodeAnimation.Stop();
						CS_0024_003C_003E8__locals36.LevelNodeAnimation.Play("수끳玍甙啑3Ò发수끟璚椙牕4Ö叕숃끝徏猄湑%\u0082厁숙끔榽瀚慫#ª厩녡孮㉐\0這\ud974");
					}
					CS_0024_003C_003E8__locals36.CreateGameObject(string.Format("숙끒澼愚捇0Â叁숇끞斆弈牛$\u009a厙숏끜徿笐敗&\u0082厁⑤அ", depth), CS_0024_003C_003E8__locals36.MoveEffectParent);
					AudioManager.Instance.PlayEffect("숋끈犼攌瑇'Î反수끙榸渙归&ª厩숂끥玺戃村!Ò发숎끛澫瘏潫?Â叁뻹");
					float num2 = ((Transform)CS_0024_003C_003E8__locals36.LevelNodeAnim).localPosition.y + (float)(depth * IndependentMergeViewBaseLogic.GridHeight);
					TweenSettingsExtensions.OnComplete<Tweener>(TweenSettingsExtensions.SetAutoKill<Tweener>(TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOLocalMoveY((Transform)(object)CS_0024_003C_003E8__locals36.LevelNodeAnim, num2, (float)depth, false), (Ease)1), true), (TweenCallback)(() =>
					{
						//IL_0022: Unknown result type (might be due to invalid IL or missing references)
						ShortcutExtensions.DOKill((Component)(object)CS_0024_003C_003E8__locals36.LevelNodeAnim, false);
						((Transform)CS_0024_003C_003E8__locals36.LevelNodeAnim).localPosition = new Vector3(0f, -166f, 0f);
						CS_0024_003C_003E8__locals36.LevelNodeAnim.SetSelfActive<RectTransform>(false);
						if ((Object)(object)CS_0024_003C_003E8__locals36.TemporaryLogic != (Object)null)
						{
							CS_0024_003C_003E8__locals36.TemporaryLogic.UpdateTempprary();
						}
						string item2 = (ObjectManager.GetInstance().treasureCraftingModel.CurrentDepth * 100).ToString();
						LocalizedLang.SetUITextLocalization(CS_0024_003C_003E8__locals36.DepthText, "숙끟斸弚卝6\u009a厙숄끛新瀅䵫\u0016\u009a厙堨佰", new List<string> { item2 });
						ObjectManager.GetInstance().treasureCraftingModel.ShowDepthTipView();
						CS_0024_003C_003E8__locals36.RecoveryAnimationGrid();
						CS_0024_003C_003E8__locals36.LevelNode.SetSelfActive<RectTransform>(true);
						CS_0024_003C_003E8__locals36.CanShowHint = true;
					}));
				}
				else
				{
					CS_0024_003C_003E8__locals36.LevelNode.SetSelfActive<RectTransform>(true);
					CS_0024_003C_003E8__locals36.LevelNodeAnim.SetSelfActive<RectTransform>(false);
					if ((Object)(object)CS_0024_003C_003E8__locals36.TemporaryLogic != (Object)null)
					{
						CS_0024_003C_003E8__locals36.TemporaryLogic.UpdateTempprary();
					}
					string item = (ObjectManager.GetInstance().treasureCraftingModel.CurrentDepth * 100).ToString();
					LocalizedLang.SetUITextLocalization(CS_0024_003C_003E8__locals36.DepthText, "숙끟斸弚卝6\u009a厙숄끛新瀅䵫\u0016\u009a厙堨佰", new List<string> { item });
					ObjectManager.GetInstance().treasureCraftingModel.ShowDepthTipView();
					CS_0024_003C_003E8__locals36.CanShowHint = true;
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

	private List<IndependentGrid> mAnimationGridGo;

	private List<IndependentGridBg> mAnimationGridBgGo;

	private bool isShowInfo;

	private bool isAutoOpen;

	private Dictionary<int, IndependentGameGoodsVo> mAnimationMapDic;

	private GameObject TemparyFankuiPrefab;

	public RectTransform Content;

	public Text GiftTimeDownText;

	public GameObject GiftButtonGo;

	public Image TokenIcon;

	public Text TokenNum;

	public Text DepthText;

	[Header("等级通行证逻辑")]
	public TreasureCraftingPassEnterLogic PassEnterLogic;

	[Header("道具详情逻辑")]
	public IndependentGoodsInfoViewLogic goodsLogic;

	[Header("合成详情入口逻辑")]
	public TreasureCraftingDetailEnterLogic detailEnterLogic;

	public Image FlyImg;

	public RectTransform illuTrans;

	[Header("棋盘移动动画相关")]
	public RectTransform LevelNode;

	public RectTransform LevelNodeAnim;

	public RectTransform ContentBgAnim;

	public RectTransform GridParentAnim;

	public RectTransform GridBgParentAnim;

	public Animation LevelNodeAnimation;

	public Transform MoveEffectParent;

	public override int Columns => mIndependentColumns;

	public override int Rows => mIndependentRows;

	public override IndependentType ViewLevelType => IndependentType.DiggingTreasure;

	public override void OnEnter()
	{
		Data = (viewData as IndependentMergeViewBaseData) ?? new IndependentMergeViewBaseData();
		isAutoOpen = (bool)viewData;
		if (isAutoOpen)
		{
			AutoPopsup_open();
		}
		GameManager.GetInstance().SetMultiTouchEnabled(enable: false);
		GameLayoutFit();
		InitView();
		InitActivityGift();
		CreateMapBg();
		CreateGameGrid();
		CreateAnimationGridBg();
		AddListener();
		CheckShowFullTip();
		TriggerGuide();
		ObjectManager.GetInstance().treasureCraftingModel.AddOpenMergeViewTimes();
		ObjectManager.GetInstance().treasureCraftingModel.PlayerActionAnalytic(isOpen: true);
		IsEnter = true;
	}

	public override void OnExit()
	{
		ObjectManager.GetInstance().treasureCraftingModel.PlayerActionAnalytic(isOpen: false);
		GameManager.GetInstance().SetMultiTouchEnabled(enable: true);
		mCurrentSelect = null;
		RemoveMergeHint();
		RecoveryGrid();
		RecoveryGridBg();
		RecoveryAnimationGrid();
		RecoveryAnimationGridBg();
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
		EventManager.GetInstance().AddEventListener<int>(203037, UnlockGoods);
		EventManager.GetInstance().AddEventListener(202017, OnGiftSwitch);
		EventManager.GetInstance().AddEventListener(202018, OnGiftBuySuccess);
		EventManager.GetInstance().AddEventListener<Action<Transform>>(203035, OnCollectAnim);
		EventManager.GetInstance().AddEventListener<int, long, int>(100015, OnItemChange);
		EventManager.GetInstance().AddEventListener(203038, TriggerGuide);
		EventManager.GetInstance().AddEventListener<int>(100101, OnGuideStart);
		EventManager.GetInstance().AddEventListener<int>(100102, OnGuideFinish);
	}

	protected override void RemoveListener()
	{
		EventManager.GetInstance().RemoveEventListener<int>(203037, UnlockGoods);
		EventManager.GetInstance().RemoveEventListener(202017, OnGiftSwitch);
		EventManager.GetInstance().RemoveEventListener(202018, OnGiftBuySuccess);
		EventManager.GetInstance().RemoveEventListener<Action<Transform>>(203035, OnCollectAnim);
		EventManager.GetInstance().RemoveEventListener<int, long, int>(100015, OnItemChange);
		EventManager.GetInstance().RemoveEventListener(203038, TriggerGuide);
		EventManager.GetInstance().RemoveEventListener<int>(100101, OnGuideStart);
		EventManager.GetInstance().RemoveEventListener<int>(100102, OnGuideFinish);
		if ((Object)(object)PassEnterLogic != (Object)null)
		{
			PassEnterLogic.Clear();
		}
		MonoSingleton<GuideWeakManager>.Instance.ShowIndependentAutoConversion_Consume();
		MonoSingleton<GuideWeakManager>.Instance.ShowIndependentMaxGoods_Consume();
	}

	protected override void GameLayoutFit()
	{
		//IL_0054: Unknown result type (might be due to invalid IL or missing references)
		//IL_007e: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a8: Unknown result type (might be due to invalid IL or missing references)
		//IL_00da: Unknown result type (might be due to invalid IL or missing references)
		//IL_0104: Unknown result type (might be due to invalid IL or missing references)
		//IL_012e: Unknown result type (might be due to invalid IL or missing references)
		//IL_01d3: Unknown result type (might be due to invalid IL or missing references)
		//IL_016b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0171: Unknown result type (might be due to invalid IL or missing references)
		//IL_0235: Unknown result type (might be due to invalid IL or missing references)
		//IL_023f: Unknown result type (might be due to invalid IL or missing references)
		//IL_024f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0255: Unknown result type (might be due to invalid IL or missing references)
		//IL_01eb: Unknown result type (might be due to invalid IL or missing references)
		//IL_01fe: Unknown result type (might be due to invalid IL or missing references)
		//IL_0205: Unknown result type (might be due to invalid IL or missing references)
		//IL_020b: Unknown result type (might be due to invalid IL or missing references)
		//IL_01ad: Unknown result type (might be due to invalid IL or missing references)
		ITreasureCraftingTheme independentMergeTheme = ObjectManager.GetInstance().treasureCraftingModel.GetIndependentMergeTheme();
		if (independentMergeTheme != null)
		{
			mIndependentColumns = independentMergeTheme.column;
			mIndependentRows = independentMergeTheme.row;
			ContentBg.sizeDelta = new Vector2((float)(mIndependentColumns * IndependentMergeViewBaseLogic.GridWidth + 14), (float)(mIndependentRows * IndependentMergeViewBaseLogic.GridHeight + 14));
			GridParent.sizeDelta = new Vector2((float)(mIndependentColumns * IndependentMergeViewBaseLogic.GridWidth), (float)(mIndependentRows * IndependentMergeViewBaseLogic.GridHeight));
			GridBgParent.sizeDelta = new Vector2((float)(mIndependentColumns * IndependentMergeViewBaseLogic.GridWidth), (float)(mIndependentRows * IndependentMergeViewBaseLogic.GridHeight));
			ContentBgAnim.sizeDelta = new Vector2((float)(mIndependentColumns * IndependentMergeViewBaseLogic.GridWidth + 14), (float)((mIndependentRows + 8) * IndependentMergeViewBaseLogic.GridHeight + 14));
			GridParentAnim.sizeDelta = new Vector2((float)(mIndependentColumns * IndependentMergeViewBaseLogic.GridWidth), (float)(mIndependentRows * IndependentMergeViewBaseLogic.GridHeight));
			GridBgParentAnim.sizeDelta = new Vector2((float)(mIndependentColumns * IndependentMergeViewBaseLogic.GridWidth), (float)(mIndependentRows * IndependentMergeViewBaseLogic.GridHeight));
		}
		float num = 1f;
		if (Display.DesignScreenHeight < 1236)
		{
			float num2 = (float)Display.DesignScreenHeight / 1236f;
			if (num2 < 0.95f)
			{
				num2 = 0.95f;
			}
			((Transform)Content).localScale = Vector3.one * num2;
			float num3 = (1236f - (float)Display.DesignScreenHeight) / 2f;
			if (num3 > 35f)
			{
				num3 = 35f;
			}
			((Transform)Content).localPosition = new Vector3(0f, num3, 0f);
			num = num2;
		}
		if ((Object)(object)TopBg != (Object)null && (float)Display.DesignScreenWidth > TopBg.sizeDelta.x)
		{
			float num4 = (float)Display.DesignScreenWidth / TopBg.sizeDelta.x;
			((Transform)TopBg).localScale = Vector3.one * num4 / num;
		}
		if ((Object)(object)TopLine != (Object)null)
		{
			TopLine.sizeDelta = new Vector2((float)Display.DesignScreenWidth, TopLine.sizeDelta.y);
			((Transform)TopLine).localScale = Vector3.one / num;
		}
	}

	protected override void InitView()
	{
		if ((Object)(object)TemporaryLogic != (Object)null)
		{
			TemporaryLogic.Init(this, ViewLevelType);
		}
		if ((Object)(object)PassEnterLogic != (Object)null)
		{
			PassEnterLogic.Init();
		}
		RefreshTimeDown();
		InitToken();
		((Component)TemporaryLogic).transform.SetSelfActive<Transform>(true);
		((Component)goodsLogic).transform.SetSelfActive<Transform>(false);
		LevelNode.SetSelfActive<RectTransform>(true);
		LevelNodeAnim.SetSelfActive<RectTransform>(false);
		detailEnterLogic.Init(resLoader);
		detailEnterLogic.UpdateDetailEntrance();
	}

	private void InitToken()
	{
		IItemVO tokenItemVo = ObjectManager.GetInstance().treasureCraftingModel.GetTokenItemVo();
		if (tokenItemVo != null)
		{
			TokenIcon.sprite = ((BaseViewLogic)this).Load<Sprite>(tokenItemVo.icon);
			((Graphic)TokenIcon).SetNativeSize();
			TokenNum.text = ObjectManager.GetInstance().treasureCraftingModel.GetTokenNumber().ToString();
		}
	}

	private void OnItemChange(int itemID, long changeNum, int eventFrom)
	{
		int tokenItemID = ObjectManager.GetInstance().treasureCraftingModel.GetTokenItemID();
		if (itemID == tokenItemID)
		{
			TokenNum.text = ObjectManager.GetInstance().treasureCraftingModel.GetTokenNumber().ToString();
			if (eventFrom == 28)
			{
				ObjectManager.GetInstance().treasureCraftingModel.TokenRecord += (int)changeNum;
				ObjectManager.GetInstance().treasureCraftingModel.DropAnalytic((int)changeNum, "숉끏玫攊灜3Ò发");
			}
		}
	}

	private void OnCollectAnim(Action<Transform> action)
	{
		action?.Invoke(((Component)PassEnterLogic.LevelText).transform);
	}

	public override void SetLocalization(int tag = 0, object data = null)
	{
		LocalizedLang.SetUITextLocalization(TitleText, "숙끟斸弚卝6\u009a厙숄끛榰琅䵫\u0006ª厩恀䝽");
		LocalizedLang.SetUITextLocalization(DescText, "숙끟斸弚卝6\u009a厙숄끛新猅䵫\u0016\u009a厙뻿");
		string item = (ObjectManager.GetInstance().treasureCraftingModel.CurrentDepth * 100).ToString();
		LocalizedLang.SetUITextLocalization(DepthText, "숙끟斸弚卝6\u009a厙숄끛新瀅䵫\u0016\u009a厙堨佰", new List<string> { item });
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
		if (ObjectManager.GetInstance().treasureCraftingModel.GetGiftOpenState)
		{
			ObjectManager.GetInstance().treasureCraftingModel.CheckCloseGift();
			ObjectManager.GetInstance().treasureCraftingModel.CheckPopGiftView();
		}
		else
		{
			ObjectManager.GetInstance().treasureCraftingModel.CheckOpenGift();
		}
		OnGiftSwitch();
		RefreshGiftTimeDown();
	}

	private void OnGiftSwitch()
	{
		GiftButtonGo.SetSelfActive(ObjectManager.GetInstance().treasureCraftingModel.GetGiftOpenState);
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
		if (!ObjectManager.GetInstance().treasureCraftingModel.GetGiftOpenState)
		{
			GiftTimeDownText.text = TimeManager.GetInstance().GetTimeDownBySecond(0);
			return;
		}
		int giftTimedown = ObjectManager.GetInstance().treasureCraftingModel.GetGiftTimedown();
		if (giftTimedown > 0)
		{
			GiftTimeDownText.text = TimeManager.GetInstance().GetTimeDownBySecond(giftTimedown);
			return;
		}
		GiftTimeDownText.text = TimeManager.GetInstance().GetTimeDownBySecond(0);
		ObjectManager.GetInstance().treasureCraftingModel.CheckCloseGift();
	}

	private void UnlockGoods(int goodsID)
	{
		detailEnterLogic.UpdateDetailEntrance();
	}

	protected override void FlyToIllutrate(IIndependentGoodsBaseVo goodsBaseVo, Transform startTrans)
	{
		//IL_0087: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ae: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c5: Unknown result type (might be due to invalid IL or missing references)
		//IL_00cf: Expected Obj, but got Unknown
		if (goodsBaseVo == null || (Object)(object)startTrans == (Object)null || ObjectManager.GetInstance().treasureCraftingModel.GetGoodsUnlockState(goodsBaseVo) != 0 || !ObjectManager.GetInstance().treasureCraftingModel.IsContainsSeries(goodsBaseVo.series))
		{
			return;
		}
		FlyImg.sprite = ((BaseViewLogic)this).Load<Sprite>(goodsBaseVo.GetIcon());
		((Graphic)FlyImg).SetNativeSize();
		((Component)FlyImg).transform.setScale(0.65f, 0.65f, 0.5f);
		((Component)FlyImg).transform.position = startTrans.position;
		FlyImg.SetSelfActive<Image>(true);
		TweenSettingsExtensions.OnComplete<Tweener>(ShortcutExtensions.DOMove(((Component)FlyImg).transform, ((Transform)illuTrans).position, 0.75f, false), (TweenCallback)(() =>
		{
			if ((Object)(object)FlyImg != (Object)null)
			{
				FlyImg.SetSelfActive<Image>(false);
				Animation component = ((Component)illuTrans).GetComponent<Animation>();
				if (component != null)
				{
					component.Play("숋끈犼攌呇'Î反숌끈溸服䍀;¾厽숟끖憵琠楇 \u008a厉녥孤㉐\0這\ud974");
				}
			}
		}));
	}

	public override void CheckUnlock(IIndependentGoodsBaseVo vo)
	{
		if (ObjectManager.GetInstance().treasureCraftingModel.ThemeID == 2 && vo != null && vo.series == 1100 && ObjectManager.GetInstance().treasureCraftingModel.GetGoodsUnlockState(vo) == 0)
		{
			ObjectManager.GetInstance().treasureCraftingModel.RefreshIllustratedUnlockState(vo.series, vo.goodsID, 1);
			UnlockGoods(0);
		}
	}

	public override void DeleteGridGoods(IndependentGrid targetGrid)
	{
		if (!((Object)(object)targetGrid == (Object)null))
		{
			CheckMoveMapDepth();
		}
	}

	private void CheckMoveMapDepth()
	{
		//IL_00c4: Unknown result type (might be due to invalid IL or missing references)
		//IL_008e: Unknown result type (might be due to invalid IL or missing references)
		ITreasureCraftingTheme independentMergeTheme = ObjectManager.GetInstance().treasureCraftingModel.GetIndependentMergeTheme();
		if (independentMergeTheme == null || ObjectManager.GetInstance().treasureCraftingModel.IsAchieveMaxDepth)
		{
			return;
		}
		int num = independentMergeTheme.row - 2;
		int topSandsGridID = ObjectManager.GetInstance().treasureCraftingModel.GetTopSandsGridID();
		if (topSandsGridID == -1)
		{
			return;
		}
		if (topSandsGridID > 0)
		{
			int num2 = topSandsGridID / 10;
			if (num2 > num)
			{
				int moveDepth = 2;
				if (num2 == num + 2)
				{
					moveDepth = 3;
				}
				Dictionary<int, IndependentGameGoodsVo> independentMap = IndependentDefine.GetIndependentMap(ViewLevelType);
				mAnimationMapDic = new Dictionary<int, IndependentGameGoodsVo>(independentMap);
				int depth = ObjectManager.GetInstance().treasureCraftingModel.MoveMapDepth(moveDepth);
				PlayMapMoveAnimation(depth);
			}
		}
		else
		{
			Dictionary<int, IndependentGameGoodsVo> independentMap2 = IndependentDefine.GetIndependentMap(ViewLevelType);
			mAnimationMapDic = new Dictionary<int, IndependentGameGoodsVo>(independentMap2);
			int depth2 = ObjectManager.GetInstance().treasureCraftingModel.MoveMapDepth(4);
			PlayMapMoveAnimation(depth2);
		}
	}

	[AsyncStateMachine(typeof(_003CPlayMapMoveAnimation_003Ed__34))]
	private UniTask PlayMapMoveAnimation(int depth)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0039: Unknown result type (might be due to invalid IL or missing references)
		_003CPlayMapMoveAnimation_003Ed__34 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj.depth = depth;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CPlayMapMoveAnimation_003Ed__34>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	private void CreateAnimationGrid(Dictionary<int, IndependentGameGoodsVo> tempMapDic, int depth, bool playCollectAnim = false)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_00af: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ba: Unknown result type (might be due to invalid IL or missing references)
		//IL_013b: Unknown result type (might be due to invalid IL or missing references)
		IndependentGrid independentGrid = null;
		Vector2 zero = Vector2.zero;
		int num = 0;
		float num2 = 0f;
		if (depth >= 2)
		{
			num2 = 1f;
		}
		mAnimationGridGo = new List<IndependentGrid>();
		for (int i = 1; i <= Rows + depth; i++)
		{
			for (int j = 1; j <= Columns; j++)
			{
				int num3 = i * 10 + j;
				independentGrid = Singleton<ResCacheManager>.Instance.GetRes<IndependentGrid>();
				if ((Object)(object)independentGrid == (Object)null)
				{
					Log.E("숤끕\u20f9䘥䑛&\u0085厄쉊끔撽敋楽<\u0096厕숎끟璷䜏灑<Ö叕刕枟\ud9daĕ");
					continue;
				}
				((Object)independentGrid).name = "參橲ā讑酟" + num3;
				((Component)independentGrid).transform.SetParent((Transform)(object)GridParentAnim);
				independentGrid.LocalIdentity<IndependentGrid>();
				zero = new Vector2((float)((j - 1) * IndependentMergeViewBaseLogic.GridWidth), (float)(-(i - 1) * IndependentMergeViewBaseLogic.GridHeight));
				((Component)independentGrid).GetComponent<RectTransform>().anchoredPosition = zero;
				independentGrid.SetGridType(ViewLevelType);
				independentGrid.SetGridCanSave(canSave: false);
				IndGoodsBase goodsBase = null;
				IndependentGameGoodsVo independentGameGoodsVo = null;
				if (tempMapDic != null && tempMapDic.ContainsKey(num3))
				{
					independentGameGoodsVo = tempMapDic[num3];
					if (independentGameGoodsVo != null)
					{
						goodsBase = IndependentDefine.GetIndGameBaseById(ViewLevelType, independentGameGoodsVo.goodsID, independentGrid, independentGameGoodsVo);
					}
				}
				independentGrid.Init(num3, goodsBase, this, num, null);
				mAnimationGridGo.Add(independentGrid);
				if (playCollectAnim && i <= depth)
				{
					float delay = num2 * (float)(i - 1);
					independentGrid.CollectGoodsToTempary(delay);
				}
				num++;
			}
		}
	}

	public override void GoodsToTempary(IIndependentGoodsBaseVo goodsBaseVo, Transform startTrans)
	{
		//IL_0021: Unknown result type (might be due to invalid IL or missing references)
		//IL_002b: Expected Obj, but got Unknown
		//IL_0085: Unknown result type (might be due to invalid IL or missing references)
		//IL_009b: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c0: Unknown result type (might be due to invalid IL or missing references)
		//IL_00e9: Unknown result type (might be due to invalid IL or missing references)
		//IL_00f3: Expected Obj, but got Unknown
		//IL_00f3: Unknown result type (might be due to invalid IL or missing references)
		//IL_00fd: Expected Obj, but got Unknown
		if ((Object)(object)TemporaryLogic == (Object)null || goodsBaseVo == null)
		{
			return;
		}
		GameObject flyTransform = new GameObject();
		Image val = flyTransform.AddComponent<Image>();
		val.sprite = ((BaseViewLogic)this).Load<Sprite>(goodsBaseVo.GetIcon());
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

	private void CreateAnimationGridBg()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_00aa: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b5: Unknown result type (might be due to invalid IL or missing references)
		IndependentGridBg independentGridBg = null;
		Vector2 zero = Vector2.zero;
		mAnimationGridBgGo = new List<IndependentGridBg>();
		for (int i = 1; i <= Rows + 4; i++)
		{
			for (int j = 1; j <= Columns; j++)
			{
				int gridID = i * 10 + j;
				independentGridBg = Singleton<ResCacheManager>.Instance.GetRes<IndependentGridBg>();
				if ((Object)(object)independentGridBg == (Object)null)
				{
					Log.E("숤끕\u20f9䘥䑛&\u0085厄쉊끔撽敋楽<\u0096厕숎끟璷䜏灑<Ö叕녲呩ᄦ\0郑\ud925");
					continue;
				}
				((Object)independentGridBg).name = "숏끔溽搐䥄7¾厽숵끔榭搶敳 ª厩刘樳\ud9f7ū" + gridID;
				((Component)independentGridBg).transform.SetParent((Transform)(object)GridBgParentAnim);
				independentGridBg.LocalIdentity<IndependentGridBg>();
				independentGridBg.Init(this, ViewLevelType);
				independentGridBg.ShowGridBg(gridID);
				zero = new Vector2((float)((j - 1) * IndependentMergeViewBaseLogic.GridWidth), (float)(-(i - 1) * IndependentMergeViewBaseLogic.GridHeight));
				((Component)independentGridBg).GetComponent<RectTransform>().anchoredPosition = zero;
				mAnimationGridBgGo.Add(independentGridBg);
			}
		}
	}

	public void RecoveryAnimationGrid()
	{
		if (mAnimationGridGo == null)
		{
			return;
		}
		for (int i = 0; i < mAnimationGridGo.Count; i++)
		{
			if ((Object)(object)mAnimationGridGo[i] != (Object)null)
			{
				mAnimationGridGo[i].Recovery();
			}
		}
		mAnimationGridGo.Clear();
	}

	public void RecoveryAnimationGridBg()
	{
		if (mAnimationGridBgGo == null)
		{
			return;
		}
		for (int i = 0; i < mAnimationGridBgGo.Count; i++)
		{
			if ((Object)(object)mAnimationGridBgGo[i] != (Object)null)
			{
				mAnimationGridBgGo[i].Recovery();
			}
		}
		mAnimationGridBgGo.Clear();
	}

	public override void CheckCanUnlockAroundGrid(IndependentGrid targetGrid)
	{
		if (!((Object)(object)targetGrid == (Object)null) && targetGrid.GetGoodsBaseVo() != null && (targetGrid.GetGoodsBaseVo().type == 4 || targetGrid.GetGoodsBaseVo().type == 5 || targetGrid.GetGoodsBaseVo().type == 7 || targetGrid.GetGoodsBaseVo().type == 9))
		{
			UnlockAroundGrid(targetGrid);
		}
	}

	[AsyncStateMachine(typeof(_003CPlayExpAnimation_003Ed__42))]
	public override UniTask PlayExpAnimation(int changeExp, float delay)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0039: Unknown result type (might be due to invalid IL or missing references)
		_003CPlayExpAnimation_003Ed__42 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj.delay = delay;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CPlayExpAnimation_003Ed__42>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	public override void OnOpenHelpView()
	{
		CommonMaskViewLogic.Show(0.1f);
		ObjectManager.GetInstance().treasureCraftingModel.OpenIndependentHelpView();
	}

	public override void OnOpenGiftView()
	{
		ObjectManager.GetInstance().treasureCraftingModel.OpenActivityGiftView();
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
		//IL_00a7: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b2: Expected Obj, but got Unknown
		//IL_0054: Unknown result type (might be due to invalid IL or missing references)
		//IL_005f: Expected Obj, but got Unknown
		CommonMaskViewLogic.Show(0.3f);
		TweenCallback val3 = default;
		if (isShow)
		{
			isShowInfo = true;
			CanvasGroup canvasGroup_goods = ((Component)((Component)goodsLogic).transform).GetComponent<CanvasGroup>();
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
						((Component)goodsLogic).transform.SetSelfActive<Transform>(true);
					};
					TweenCallback val5 = val4;
					val3 = val4;
					val2 = val5;
				}
				TweenSettingsExtensions.OnComplete<Tweener>(val, val2);
			}), true);
			return;
		}
		isShowInfo = false;
		CanvasGroup canvasGroup_pool = ((Component)((Component)goodsLogic).transform).GetComponent<CanvasGroup>();
		canvasGroup_pool.alpha = 1f;
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
					((Component)goodsLogic).transform.SetSelfActive<Transform>(false);
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
			ObjectManager.GetInstance().treasureCraftingModel.MapErrorAnalytic(isFull: true);
		}
		else
		{
			ObjectManager.GetInstance().treasureCraftingModel.MapErrorAnalytic(isFull: false);
		}
	}

	private void TriggerGuide()
	{
		if (MonoSingleton<GuideManager>.Instance.IsInGuide() || !MonoSingleton<GuideManager>.Instance.IsFinishByID(ObjectManager.GetInstance().treasureCraftingModel.GuideId_1()))
		{
			return;
		}
		int num = ObjectManager.GetInstance().treasureCraftingModel.GuideId_2();
		if (MonoSingleton<GuideManager>.Instance.IsFinishByID(num))
		{
			return;
		}
		IndependentGrid independentGrid = null;
		foreach (KeyValuePair<int, IndependentGrid> item in mGridObjectDic)
		{
			if (!((Object)(object)item.Value == (Object)null) && item.Value.GetGoodsBaseVo() != null && item.Value.GetGoodsBaseVo().type == 8)
			{
				independentGrid = item.Value;
				break;
			}
		}
		if ((Object)(object)independentGrid != (Object)null)
		{
			((Object)((Component)independentGrid).gameObject).name = "숋끈犼攌呇'Î反숌끛溫服䍀;¾厽숎끏環攏䝑\u001bÖ叕뻱";
			EventManager.GetInstance().DispatchEvent(100133, num, 0.1f);
		}
	}

	private void OnGuideStart(int guideId)
	{
		if (!MonoSingleton<GuideManager>.Instance.IsInGuide())
		{
			return;
		}
		int num = ObjectManager.GetInstance().treasureCraftingModel.GuideId_3();
		int num2 = ObjectManager.GetInstance().treasureCraftingModel.GuideId_4();
		if (guideId != num && guideId != num2)
		{
			return;
		}
		if (guideId == num)
		{
			IIndependentGoodsBaseVo independentGoodsBaseVo = null;
			IndependentGameGoodsVo independentGameGoodsVo = null;
			{
				foreach (KeyValuePair<int, IndependentGrid> item in mGridObjectDic)
				{
					if ((Object)(object)item.Value == (Object)null || ((Object)item.Value).name != "숏끔溽搐䥄7¾厽숭끔播攮敁;\u0096厕刖棫\ud9e1ř")
					{
						continue;
					}
					independentGoodsBaseVo = item.Value.GetGoodsBaseVo();
					independentGameGoodsVo = item.Value.GetGameGoodsVo();
					if (independentGoodsBaseVo != null && independentGameGoodsVo != null && !IIndependentGoodsBaseVo.CannotDrag(independentGameGoodsVo.GoodsState) && independentGoodsBaseVo.type == 2 && IndependentDefine.GetGoodsConfigBySeriesAndLevel(ViewLevelType, independentGoodsBaseVo.series, independentGoodsBaseVo.level + 1) == null)
					{
						IIndependentGoodsCollectVo collectConfigById = IndependentDefine.GetCollectConfigById(ViewLevelType, independentGoodsBaseVo.goodsID);
						if (collectConfigById != null && collectConfigById.itemId == 1053)
						{
							item.Value.SelectCurrentGrid();
							break;
						}
					}
				}
				return;
			}
		}
		if (guideId != num2)
		{
			return;
		}
		IIndependentGoodsBaseVo independentGoodsBaseVo2 = null;
		IndependentGameGoodsVo independentGameGoodsVo2 = null;
		foreach (KeyValuePair<int, IndependentGrid> item2 in mGridObjectDic)
		{
			if (!((Object)(object)item2.Value == (Object)null) && !(((Object)item2.Value).name != "숏끔溽搐䥄7¾厽숭끔播攮敁;\u0096厕숇끎澼砈䥫\u0010Â叁"))
			{
				independentGoodsBaseVo2 = item2.Value.GetGoodsBaseVo();
				independentGameGoodsVo2 = item2.Value.GetGameGoodsVo();
				if (independentGoodsBaseVo2 != null && independentGameGoodsVo2 != null && !IIndependentGoodsBaseVo.CannotDrag(independentGameGoodsVo2.GoodsState) && independentGoodsBaseVo2.type == 4)
				{
					item2.Value.SelectCurrentGrid();
					break;
				}
			}
		}
	}

	private void OnGuideFinish(int guideId)
	{
		if (guideId != ObjectManager.GetInstance().treasureCraftingModel.GuideId_1())
		{
			return;
		}
		int guideID = ObjectManager.GetInstance().treasureCraftingModel.GuideId_2();
		if (!MonoSingleton<GuideManager>.Instance.IsFinishByID(guideID))
		{
			string viewName = "숋끈犼攌呇'Î反숌끈溸服䍀;¾厽숚끟斵眛䡢;\u009a厙" + ObjectManager.GetInstance().treasureCraftingModel.GetConfigSuffix();
			if (!((Object)(object)ViewManager.GetInstance().GetView(viewName) != (Object)null))
			{
				TriggerGuide();
			}
		}
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

	public override bool ShowPriorityGuideWeak()
	{
		IndependentGrid guideWeakMaxGoods = GetGuideWeakMaxGoods();
		if ((Object)(object)guideWeakMaxGoods != (Object)null)
		{
			MonoSingleton<GuideWeakManager>.Instance.ShowIndependentMaxGoods(guideWeakMaxGoods.GameItemParent, DragItemParent);
			return true;
		}
		return false;
	}

	public IndependentGrid GetGuideWeakMaxGoods()
	{
		IIndependentGoodsBaseVo independentGoodsBaseVo = null;
		IndependentGameGoodsVo independentGameGoodsVo = null;
		foreach (KeyValuePair<int, IndependentGrid> item in mGridObjectDic)
		{
			if ((Object)(object)item.Value == (Object)null)
			{
				continue;
			}
			independentGoodsBaseVo = item.Value.GetGoodsBaseVo();
			independentGameGoodsVo = item.Value.GetGameGoodsVo();
			if (independentGoodsBaseVo != null && independentGameGoodsVo != null && !IIndependentGoodsBaseVo.CannotDrag(independentGameGoodsVo.GoodsState) && independentGoodsBaseVo.type == 2 && IndependentDefine.GetGoodsConfigBySeriesAndLevel(ViewLevelType, independentGoodsBaseVo.series, independentGoodsBaseVo.level + 1) == null)
			{
				IIndependentGoodsCollectVo collectConfigById = IndependentDefine.GetCollectConfigById(ViewLevelType, independentGoodsBaseVo.goodsID);
				if (collectConfigById != null && collectConfigById.itemId == 1053)
				{
					return item.Value;
				}
			}
		}
		return null;
	}

	public override void ShowSpecialHintAnim()
	{
		foreach (KeyValuePair<int, IndependentGrid> item in mGridObjectDic)
		{
			if (!((Object)(object)item.Value == (Object)null) && item.Value.GetGoodsBaseVo() != null && IIndependentGoodsBaseVo.IsBatchProduce(item.Value.GetGoodsBaseVo().type))
			{
				item.Value.ShowSpecialHint("숋끈犼攌呇'Î反숌끈溸服䍀;¾厽숄끛暰琅䵳;\u009e厝숄끙梶愅䥫1¦厥숵끀澰眶湓>Â叁");
			}
		}
	}

	public override void HideSpecialHintAnim()
	{
		foreach (KeyValuePair<int, IndependentGrid> item in mGridObjectDic)
		{
			if (!((Object)(object)item.Value == (Object)null) && item.Value.GetGoodsBaseVo() != null && IIndependentGoodsBaseVo.IsBatchProduce(item.Value.GetGoodsBaseVo().type))
			{
				item.Value.HideSpecialHint();
			}
		}
	}

	public void OnClickMainLineDetail()
	{
		ObjectManager.GetInstance().treasureCraftingModel.OpenMainLineDetailView();
	}

	public void OnClickCloseBtn()
	{
		CloseViewAin();
		if (IndependentGrid.PlayCardAnim > 0)
		{
			IndependentGrid.PlayCardAnim = 0;
			EventManager.GetInstance().DispatchEvent(100130, arg: false);
		}
	}

	private GameObject CreateGameObject(string resName, Transform parent)
	{
		GameObject val = resLoader.LoadSync<GameObject>(resName);
		if ((Object)(object)val == (Object)null)
		{
			return null;
		}
		GameObject val2 = Object.Instantiate<GameObject>(val);
		val2.transform.SetParent(parent);
		val2.transform.LocalIdentity<Transform>();
		val2.SetSelfActive(active: true);
		return val2;
	}
}
