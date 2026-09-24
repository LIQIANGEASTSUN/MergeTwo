using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using DG.Tweening;
using Spine.Unity;
using TLF;
using TLF.SkinSystem;
using UniRx.Async;
using UniRx.Async.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

[PrefabPath("GameLevelView")]
public class GameLevelViewLogic : BaseViewLogic, IBaseViewSkin
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CApplySkinAsync_003Ed__273 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public GameLevelViewLogic _003C_003E4__this;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_0072: Unknown result type (might be due to invalid IL or missing references)
			//IL_0077: Unknown result type (might be due to invalid IL or missing references)
			//IL_007e: Unknown result type (might be due to invalid IL or missing references)
			//IL_003a: Unknown result type (might be due to invalid IL or missing references)
			//IL_003f: Unknown result type (might be due to invalid IL or missing references)
			//IL_0042: Unknown result type (might be due to invalid IL or missing references)
			//IL_0047: Unknown result type (might be due to invalid IL or missing references)
			//IL_0025: Unknown result type (might be due to invalid IL or missing references)
			//IL_005b: Unknown result type (might be due to invalid IL or missing references)
			//IL_005c: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			GameLevelViewLogic gameLevelViewLogic = _003C_003E4__this;
			try
			{
				Awaiter val2;
				if (num != 0)
				{
					if ((Object)(object)gameLevelViewLogic.m_ordersViewLogic != (Object)null)
					{
						UniTaskExtensions.Forget(gameLevelViewLogic.m_ordersViewLogic.ApplySkinAsync());
					}
					UniTask val = ViewSkinManager.GetInstance().ApplySysViewSkin(((Component)gameLevelViewLogic).GetComponent<SkinApplier>());
					val2 = val.GetAwaiter();
					if (!val2.IsCompleted)
					{
						num = (_003C_003E1__state = 0);
						_003C_003Eu__1 = val2;
						_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CApplySkinAsync_003Ed__273>(ref val2, ref this);
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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CPlayFeverFlambeEffect_003Ed__265 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public GameLevelViewLogic _003C_003E4__this;

		private void MoveNext()
		{
			GameLevelViewLogic gameLevelViewLogic = _003C_003E4__this;
			try
			{
				if ((ObjectManager.GetInstance().feverFlambeV2Model.IsActiveBuff() || ObjectManager.GetInstance().feverFlambeStageModel.IsActiveBuff() || ObjectManager.GetInstance().feverFlambeV3Model.IsActiveBuff()) && (!ObjectManager.GetInstance().feverFlambeV2Model.IsActiveBuff() || ObjectManager.GetInstance().feverFlambeV2Model.HasActivityRes) && (!ObjectManager.GetInstance().feverFlambeStageModel.IsActiveBuff() || ObjectManager.GetInstance().feverFlambeStageModel.HasActivityRes) && (!ObjectManager.GetInstance().feverFlambeV3Model.IsActiveBuff() || ObjectManager.GetInstance().feverFlambeV3Model.HasActivityRes))
				{
					if ((Object)(object)gameLevelViewLogic.mFeverFlambeEffectGo == (Object)null)
					{
						gameLevelViewLogic.mFeverFlambeEffectGo = GameLevelDefine.CreateGameObjectAsync("숏끟沯愐䙆\u0014¶厵숵끘涼收浳3º厹숏끟榯攐䱘\u0004ª厩숍끥治漎睫5¶厵뻫", gameLevelViewLogic.node_fever);
					}
					if ((Object)(object)gameLevelViewLogic.mFeverFlambeEffectGo != (Object)null)
					{
						gameLevelViewLogic.mFeverFlambeEffectGo.transform.LocalIdentity<Transform>();
						gameLevelViewLogic.mFeverFlambeEffectGo.SetSelfActive(active: true);
					}
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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CPlayFeverRelayEffect_003Ed__267 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public GameLevelViewLogic _003C_003E4__this;

		private void MoveNext()
		{
			GameLevelViewLogic gameLevelViewLogic = _003C_003E4__this;
			try
			{
				if (ObjectManager.GetInstance().feverRelayV2Model.IsActiveBuff() && ObjectManager.GetInstance().feverRelayV2Model.HasActivityRes)
				{
					if ((Object)(object)gameLevelViewLogic.mFeverRelayEffect == (Object)null)
					{
						gameLevelViewLogic.mFeverRelayEffect = GameLevelDefine.CreateGameObjectAsync("숏끟斯氐䙆\0\u009a厙숭끃斆䰮慕?\u009a厙숆끌於眇敢;\u009a厙숵끘澾眶当>Â叁", gameLevelViewLogic.node_fever);
					}
					if ((Object)(object)gameLevelViewLogic.mFeverRelayEffect != (Object)null)
					{
						gameLevelViewLogic.mFeverRelayEffect.transform.LocalIdentity<Transform>();
						gameLevelViewLogic.mFeverRelayEffect.SetSelfActive(active: true);
					}
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

	public static float GridWidth = 86f;

	public static float GridHeight = 86f;

	public static float ItemWidth = 85f;

	public static bool MergeAdsorb = true;

	public static float MergeAdsorbRadius = GridWidth * 0.75f;

	public static float EnterEventDelay = 0f;

	public static float TopUIHeight = 77f;

	public static float OrderViewHeight = 186f;

	public static float OrderScaleMin = 0.94f;

	public static float OrderViewHeightMin = 186f;

	public static float OrderViewHeightMax = 200f;

	public static float OrderHeighChangeY = 0f;

	public static float LevelTopInterval = 18f;

	public static float IntervalScaleMin = 0.72f;

	public static float LevelHeight = 800f;

	public static float LevelScaleMin = 0.98f;

	public static float BottomUIHeight = 115f;

	public static float BottomScaleMin = 0.9f;

	public static List<GameLevelGrid> TakeoutGrids = new List<GameLevelGrid>();

	public static float GoodsInfoScale = 1f;

	public static float GoodsInfoMaxWeight = 624f;

	public static long LastShowBagViewTime = 0L;

	public float distanceB = 0.26f;

	public float move1TimeMin = 0.28f;

	public float move1TimeMax = 0.48f;

	public float move2Time = 0.383f;

	public GameLevelViewData Data;

	[HideInInspector]
	public Dictionary<int, GameLevelGrid> mGridObjectDic = new Dictionary<int, GameLevelGrid>();

	[HideInInspector]
	public Dictionary<int, GameLevelGridBg> mGridBgObjectDic;

	[HideInInspector]
	public List<int> GridKeyList = new List<int>();

	[HideInInspector]
	public GameLevelGrid mCurrentSelect;

	[HideInInspector]
	public GameLevelGrid mSellGrid;

	[HideInInspector]
	public GameGoodsVo mSellGoods;

	public GameLevelOrdersViewLogic m_ordersViewLogic;

	public GameObject GoodsInfoParentNode;

	[HideInInspector]
	public GameGoodsInfoViewLogic GoodsInfoViewLogic;

	[HideInInspector]
	public Dictionary<int, List<Transform>> mLockGridDic;

	[HideInInspector]
	public List<GameObject> mUnlockGo;

	private GameLevelGrid mStackSellGrid;

	private List<GameLevelGridBg> mMapBgGo;

	private bool mIsAddBagGoods;

	private bool mDragGoods;

	public static bool PlayCloudShowAnim = false;

	public static bool ResetGameMap = false;

	[HideInInspector]
	public bool IsEnter;

	[HideInInspector]
	public bool IsGameMapInit;

	[HideInInspector]
	public bool IsInGame;

	private float canvasDuration;

	private bool isPlayingCanvasAni;

	private long lastTouchUpTime;

	private float mDeltaTime;

	private float _mergeRuntime;

	private bool isPlayHintInGameLevel;

	[HideInInspector]
	public GameLevelGrid mMergeHintA;

	[HideInInspector]
	public GameLevelGrid mMergeHintB;

	private Dictionary<int, Queue<Image>> flyImageDic = new Dictionary<int, Queue<Image>>();

	private List<int> mCommitOrderFromGridIds = new List<int>();

	private Sequence mBtnBagScaleSeq;

	private float mGridFullInterval;

	private bool mIsSendAnalytic;

	private GameObject mFeverFlambeEffectGo;

	private GameObject mFeverRelayEffect;

	public RectTransform Background;

	public RectTransform BgNode;

	public RectTransform BgTop;

	public RectTransform BgBottom;

	public Image imgChessboard1;

	public Image imgChessboard2;

	public RectTransform LevelNode;

	public Transform GridParent;

	public Transform GridBgParent;

	public RectTransform TopNode;

	public RectTransform TempBubbleNode;

	public Transform BottomNode;

	public Transform DragItemParent;

	public Button BackButton;

	public RectTransform BackTransform;

	public Button BagButton;

	public RectTransform BagTransform;

	public Transform OrdersParent;

	public Text CapacityText;

	public GameObject UnlockConditionGo;

	public GameObject MaskingNode;

	public InputField GMItemID;

	public GameObject GMButton;

	public GameObject GMgo;

	public InputField GMSpeedTime;

	public InputField GMGridID;

	public InputField GMProduceNum;

	public GameObject GMgo_cc;

	public Transform img_task_redpoint;

	public Transform BagRedpoint;

	public GameObject BagBubbleGo;

	public GameObject BagBubbleIcon;

	public GameObject LimitBagBubbleIcon;

	public GameObject GeneratorBagBubbleIcon;

	public Animation BagBubbleAnim;

	public Text BagTotalText;

	public GameObject BagLimitGo;

	public Text BagCurrentGoodsText;

	public Text BagLimitText;

	public SceneActivityScoreBuffGameIconRootLogic mSceneActivityBuffGameIconRootLogic;

	public FeverActivityGameIconRootLogic mFeverActivityGameIconRootLogic;

	public CardCollectionDoubleGiftIconRootLogic mCCDoubleGiftGameIconRootLogic;

	public OrderPartCommitGameIconRootLogic mOrderPartCommitGameIconRootLogic;

	public Transform CardOpenObj;

	public Transform node_fever;

	public Transform EffectParent;

	public BagButtonAni bagButtonAni;

	public FireHelperGameIconLogic fireHelperIcon;

	public OrderReturnBackBuffGameIconRootLogic mOrderReturnBuffGameIconRootLogic;

	public CookFrenzyBuffGameIconRootLogic mCookFrenzyBuffGameIconRootLogic;

	public static int PixelsPerUnit = 100;

	public static float DownUpX = 0.55f;

	public static float DownUpY = -0.34f;

	public static float UpDownX = 0.2f;

	public static float UpDownY = 0f;

	private List<GameLevelGrid> mShowAdditionalHintList;

	private List<GameLevelGrid> mShowSplitHintList;

	private List<GameLevelGrid> mShowCopyHintList;

	private List<GameLevelGrid> mShowUpgradeHintList;

	private List<GameLevelGrid> mShowAcceleratorHintList;

	private List<GameLevelGrid> mShowAutoConversionHintList;

	private List<CollectAnimationData> mPendingCollectList;

	private Tween mCollectFlushTween;

	private GameObject PlayUnlockGo;

	private GameLevelGrid mLastMachineTipGrid;

	private GameLevelGrid mLastShortTipGrid;

	private GameObject recyclePrefab;

	private GameLevelGrid mLastSpeedBubbleGrid;

	private Sequence mBagHintAnim;

	public static float BottomOffsetY
	{
		get
		{
			float num = (float)Display.DesignScreenWidth / (float)Display.DesignWidth;
			if ((float)Display.DesignScreenHeight / (float)Display.DesignHeight > num)
			{
				if (ABTestSwitchDefine.ChessboardFitSwitch())
				{
					float num2 = (float)Display.DesignScreenHeight - FitScreen.GetTopSafeArea() - TopUIHeight - OrderViewHeight - LevelTopInterval - LevelHeight - BottomUIHeight;
					if (num2 > 0f)
					{
						if (num2 + OrderViewHeight > OrderViewHeightMax)
						{
							num2 -= OrderViewHeightMax - OrderViewHeight;
							OrderViewHeight = OrderViewHeightMax;
							OrderHeighChangeY = (OrderViewHeightMax - OrderViewHeightMin) / 2f;
						}
						else
						{
							OrderViewHeight += num2;
							OrderHeighChangeY = num2 / 2f;
							num2 = 0f;
						}
					}
					float num3 = num2 * 0.2f;
					if (num3 < 0f)
					{
						num3 = 0f;
					}
					return num3;
				}
				float num4 = ((float)Display.DesignHeight * (Display.MaxScale - 1f) - 56.5f) * 0.5f * 0.5f;
				if (num4 < 0f)
				{
					num4 = 0f;
				}
				return num4;
			}
			return 0f;
		}
	}

	public static float BottomOffsetY_V2
	{
		get
		{
			float num = (float)Display.DesignScreenWidth / (float)Display.DesignWidth;
			if ((float)Display.DesignScreenHeight / (float)Display.DesignHeight > num)
			{
				if (ABTestSwitchDefine.ChessboardFitSwitch())
				{
					float num2 = (float)Display.DesignScreenHeight - FitScreen.GetTopSafeArea() - TopUIHeight - OrderViewHeight - LevelTopInterval - LevelHeight - BottomUIHeight;
					if (num2 > 0f)
					{
						if (num2 + OrderViewHeight > OrderViewHeightMax)
						{
							num2 -= OrderViewHeightMax - OrderViewHeight;
							OrderViewHeight = OrderViewHeightMax;
							OrderHeighChangeY = (OrderViewHeightMax - OrderViewHeightMin) / 2f;
						}
						else
						{
							OrderViewHeight += num2;
							OrderHeighChangeY = num2 / 2f;
							num2 = 0f;
						}
					}
					float num3 = num2 * 0.4f;
					if (num3 < 0f)
					{
						num3 = 0f;
					}
					return num3;
				}
				float num4 = ((float)Display.DesignHeight * (Display.MaxScale - 1f) - 56.5f) * 0.5f * 0.5f;
				if (num4 < 0f)
				{
					num4 = 0f;
				}
				return num4;
			}
			return 0f;
		}
	}

	public virtual TopUIInfoType[] TopSub => new TopUIInfoType[5]
	{
		TopUIInfoType.EXP,
		TopUIInfoType.LIGHTING,
		TopUIInfoType.COIN,
		TopUIInfoType.MONEY,
		TopUIInfoType.SHOP
	};

	public virtual int Columns => 7;

	public virtual int Rows => 9;

	public virtual float InitialPositionX => 0f;

	public virtual float InitialPositionY => 0f;

	public Dictionary<int, GameLevelGrid> GridObjectDic => mGridObjectDic;

	public GameLevelGrid CurrentSelectGrid
	{
		get
		{
			return mCurrentSelect;
		}
		set
		{
			mCurrentSelect = value;
			if ((Object)(object)mCurrentSelect == (Object)null)
			{
				AudioManager.Instance.StopInstrumentSound();
			}
			RemoveMergeHint();
			if ((Object)(object)mCurrentSelect != (Object)null)
			{
				mSellGoods = null;
				mSellGrid = null;
				((Component)mCurrentSelect).transform.SetSiblingIndex(((Component)mCurrentSelect).transform.parent.childCount - 1);
				if (GameConst.GAME_MODE != GameConstMode.RELEASE && mCurrentSelect.GetGameGoodsVo() != null)
				{
					_ = mCurrentSelect.GetGameGoodsVo().MergeDropList.Count;
					_ = 0;
				}
			}
			UpdateSelectGoodsInfo();
			if ((Object)(object)mCurrentSelect != (Object)null && !MonoSingleton<GuideManager>.Instance.IsInGuide() && mCurrentSelect.GetGoodsBaseVo() != null && Singleton<GameLevelManager>.Instance.IsGuideSpecialGoods(mCurrentSelect.GetGoodsBaseVo()))
			{
				EventManager.GetInstance().DispatchEvent(100126, mCurrentSelect.GetGoodsBaseVo().goodsID);
				MonoSingleton<GuideWeakManager>.Instance.JudgeNewGoodsDetailGuide(mCurrentSelect.GetGoodsBaseVo().goodsID);
			}
		}
	}

	public GameLevelGrid StackSellGrid
	{
		get
		{
			return mStackSellGrid;
		}
		set
		{
			mStackSellGrid = value;
		}
	}

	public bool DragGoods
	{
		get
		{
			return mDragGoods;
		}
		set
		{
			mDragGoods = value;
		}
	}

	public bool IsPlayhintInGameLevel => isPlayHintInGameLevel;

	public static GameLevelViewLogic GetShowingGameLevelViewLogic
	{
		get
		{
			GameObject val = GameObject.Find("숏끛皴攐䝸7Þ叝숏끬䎰氐汃z\u0012匑刖梃\ud9c7ĝ");
			if ((Object)(object)val != (Object)null)
			{
				return val.GetComponent<GameLevelViewLogic>();
			}
			return null;
		}
	}

	private void Start()
	{
		lastTouchUpTime = TimeManager.GetInstance().GetTimeStamp();
	}

	public override void OnEnter()
	{
		Singleton<GameLevelManager>.Instance.mGameLevelViewLogic = this;
		if ((Object)(object)GoodsInfoParentNode != (Object)null)
		{
			GameObject val = null;
			val = ((!ABTestSwitchDefine.GetGameGoodsInfoSwitch()) ? ViewManager.GetInstance().ShowItem<GameGoodsInfoViewLogic>(null, GoodsInfoParentNode, this) : ViewManager.GetInstance().ShowItem<GameGoodsInfoViewNewLogic>(null, GoodsInfoParentNode, this));
			if ((Object)(object)val != (Object)null)
			{
				((Object)val).name = "숏끛澴搐䝳=Â叁숌끳榷攍獛\u0004ª厩뻫";
				GoodsInfoViewLogic = val.GetComponent<GameGoodsInfoViewLogic>();
			}
		}
		Data = (viewData as GameLevelViewData) ?? new GameLevelViewData();
		MonoSingleton<GuideWeakManager>.Instance.mTimeSecond_ChessBoard = 0;
		MonoSingleton<GuideWeakManager>.Instance.GetGamelevelViewLogic = this;
		PlayCloudShowAnim = false;
		GameManager.GetInstance().Scene = SceneType.LevelView;
		GameManager.GetInstance().StageScene = SceneType.MainLevel;
		GameManager.GetInstance().SetMultiTouchEnabled(enable: false);
		if ((Object)(object)GoodsInfoViewLogic != (Object)null)
		{
			GoodsInfoViewLogic.SetParentLogic(this);
		}
		ObjectManager.GetInstance().dailyChallengeModel.CheckClosePeakMode();
		ObjectManager.GetInstance().gameOrdersModel.RefreshShowingOrders();
		ObjectManager.GetInstance().gameLevelModel.RemoveExpiredGoods();
		ObjectManager.GetInstance().gameLevelModel.CheckGameBagLimitOpenNum();
		MonoSingleton<OrderActivityScoreManager>.Instance.JudgeAddOrRemoveOrderScore();
		GameLevelFit();
		ObjectManager.GetInstance().chessboardBackgroundThemeModel.ReportBoardShowEvent();
		UpdateView();
		CreateMapBg();
		CreateGameGrid();
		UpdateSelectGoodsInfo();
		UpdateLockGrid();
		MonoSingleton<GuideManager>.Instance.SetGameView(this);
		AddEventListener();
		GuideEvent();
		GMButton.SetSelfActive(GameConst.GAME_MODE != GameConstMode.RELEASE);
		GMgo.SetSelfActive(active: false);
		if (!Data.IsPreload)
		{
			AudioManager.GetInstance().PlayMusic("숟끝掴ㄠ扇;\u0092厑");
		}
		if (MonoSingleton<GuideWeakManager>.Instance.IsShowingGuideByID(29))
		{
			CreateGuideForce2Weak(29);
		}
		else if (MonoSingleton<GuideWeakManager>.Instance.IsShowingGuideByID(1))
		{
			CreateGuideForce2Weak(1);
		}
		MonoSingleton<GuideWeakManager>.Instance.ReShowGuideNewGoodsBox();
		MonoSingleton<GuideWeakManager>.Instance.ReShowGuideInstrumentTake();
		MonoSingleton<GuideWeakManager>.Instance.ShowGuideOrderTriggerCreator();
		MonoSingleton<GuideWeakManager>.Instance.AddNewOrderClickInstrument();
		RedPoint.RedpointAni(img_task_redpoint);
		RedPoint.RedpointAni(BagRedpoint);
		ReissueGeneratorAndMachine();
		RefreshSceneActivityScoreBuffGameIcon();
		RefreshFeverActivityGameIcon();
		RefreshFeverActivityBuff();
		UpdateFireHelperIcon();
		RefreshCCDoubleGiftGameIcon();
		RefreshOrderReturnBuffGameIcon();
		RefreshCookFrenzyGameIcon();
		RefreshOrderPartCommitBuffGameIcon();
		IsEnter = true;
		IsInGame = true;
	}

	public override void OnExit()
	{
		Singleton<GameLevelManager>.Instance.mGameLevelViewLogic = null;
		mCurrentSelect = null;
		GameLevelManager.ResetGoodsLockGuide();
		RemoveEventListener();
		RemoveMergeHint();
		RecoveryGrid();
		RecoveryGridBg();
		GoodsInfoViewLogic?.RecoveryMaterialItem();
		GoodsInfoViewLogic?.ClearWorkingSpeedAnim();
		if (mUnlockGo != null && mUnlockGo.Count > 0)
		{
			for (int i = 0; i < mUnlockGo.Count; i++)
			{
				Object.Destroy((Object)(object)mUnlockGo[i]);
			}
			mUnlockGo.Clear();
		}
		TimeManager.GetInstance().ClearSchedule(this);
		GameManager.GetInstance().StageScene = SceneType.MainView;
		AudioManager.Instance.StopInstrumentSound();
		mGridFullInterval = 0f;
		mLastMachineTipGrid = null;
		mLastShortTipGrid = null;
		GameLevelDefine.RecycleGameObject(recyclePrefab);
		GameManager.GetInstance().SetMultiTouchEnabled(enable: true);
		recyclePrefab = null;
		_clearBagNodeLayer();
		ClearCollectFlush();
		IsInGame = false;
	}

	public override void OnReset(object data)
	{
		Singleton<GameLevelManager>.Instance.mGameLevelViewLogic = this;
		CommonMaskViewLogic.Show(0.4f);
		Data = new GameLevelViewData();
		Temporary.Bubble.ShowList.NotifyReorder();
		Temporary.Bubble.TA.SendTA(condition: true);
		MonoSingleton<GuideWeakManager>.Instance.mTimeSecond_ChessBoard = 0;
		MonoSingleton<GuideWeakManager>.Instance.GetGamelevelViewLogic = this;
		ObjectManager.GetInstance().returnUserOrderModel.JudgeOpenNewPeriodActivity();
		PlayCloudShowAnim = false;
		GameManager.GetInstance().Scene = SceneType.LevelView;
		GameManager.GetInstance().StageScene = SceneType.MainLevel;
		GameManager.GetInstance().SetMultiTouchEnabled(enable: false);
		if ((Object)(object)mCurrentSelect != (Object)null)
		{
			mCurrentSelect.SetSelectState(select: false);
			mCurrentSelect = null;
		}
		GameLevelManager.ResetGoodsLockGuide();
		if ((Object)(object)GoodsInfoViewLogic != (Object)null)
		{
			GoodsInfoViewLogic.SetParentLogic(this);
		}
		ObjectManager.GetInstance().dailyChallengeModel.CheckClosePeakMode();
		ObjectManager.GetInstance().gameOrdersModel.RefreshShowingOrders();
		ObjectManager.GetInstance().gameOrdersModel.GetOrders2(onlyShowingOrder: false);
		ObjectManager.GetInstance().gameLevelModel.RemoveExpiredGoods();
		ObjectManager.GetInstance().sceneActivityModel.JudgeHasEntryRes();
		ObjectManager.GetInstance().cookFrenzyModel.ResetNoResState();
		ObjectManager.GetInstance().orderReturnBackModel.SetBlockOrderItemShowAfterDownLoad(showAfterDownLoad: false);
		if (ObjectManager.Instance.orderReturnBackModel.NeedShowOrderAppear())
		{
			ObjectManager.GetInstance().orderReturnBackModel.SetOrderAppear();
		}
		if ((Object)(object)m_ordersViewLogic != (Object)null)
		{
			m_ordersViewLogic.OnReset();
		}
		if (ObjectManager.GetInstance().orderWaveRewardModel.CanClaimWaveReward_Multi() || ObjectManager.GetInstance().orderWaveRewardModel.CanClaimWaveReward_Single())
		{
			ObjectManager.GetInstance().limitTimeOrderModel.CancelActivateAiAndGuide();
		}
		MonoSingleton<OrderActivityScoreManager>.Instance.JudgeAddOrRemoveOrderScore();
		BackgroundFit();
		ObjectManager.GetInstance().chessboardBackgroundThemeModel.ReportBoardShowEvent();
		UpdateView();
		if (Singleton<GameLevelManager>.Instance.IsResetGameMap())
		{
			ResetGameMap = false;
			ResetGameGrid();
		}
		else
		{
			UpdateGameGrid();
		}
		UpdateSelectGoodsInfo();
		MonoSingleton<GuideManager>.Instance.SetGameView(this);
		AddEventListener();
		ShowBagBubble();
		GoodsTakeout();
		GuideEvent();
		GMButton.SetSelfActive(GameConst.GAME_MODE != GameConstMode.RELEASE);
		GMgo.SetSelfActive(active: false);
		AudioManager.GetInstance().PlayMusic("숟끝掴ㄠ扇;\u0092厑");
		if (MonoSingleton<GuideWeakManager>.Instance.IsShowingGuideByID(29))
		{
			CreateGuideForce2Weak(29);
		}
		else if (MonoSingleton<GuideWeakManager>.Instance.IsShowingGuideByID(1))
		{
			CreateGuideForce2Weak(1);
		}
		MonoSingleton<GuideWeakManager>.Instance.ReShowGuideNewGoodsBox();
		MonoSingleton<GuideWeakManager>.Instance.ReShowGuideInstrumentTake();
		MonoSingleton<GuideWeakManager>.Instance.ShowGuideOrderTriggerCreator();
		MonoSingleton<GuideWeakManager>.Instance.AddNewOrderClickInstrument();
		TimeManager.GetInstance().Schedule(this, (float arg0) =>
		{
			if (!ObjectManager.GetInstance().orderWaveRewardModel.PopMultiWaveRewardView() && !ObjectManager.GetInstance().orderWaveRewardModel.PopSingleWaveRewardView() && GameManager.GetInstance().Scene == SceneType.LevelView)
			{
				Singleton<PopupManager>.Instance.ResetShowPopups(EPopupFromScene.S_MergeView);
				ActivityOpenResult.Report();
			}
		}, 0.2f + EnterEventDelay, 1);
		EnterEventDelay = 0f;
		DOTweenUITools.DoEnterPopPlayAudio();
		ReissueGeneratorAndMachine();
		RefreshSceneActivityScoreBuffGameIcon();
		RefreshFeverActivityGameIcon();
		RefreshFeverActivityBuff();
		UpdateFireHelperIcon();
		RefreshCCDoubleGiftGameIcon();
		RefreshOrderReturnBuffGameIcon();
		RefreshCookFrenzyGameIcon();
		RefreshOrderPartCommitBuffGameIcon();
		EventManager.GetInstance().DispatchEvent(203176, EActivityIconChangeScene.Merge);
		IsEnter = true;
		IsInGame = true;
		mDeltaTime = 0f;
		UpdateGridTime();
		OnAnalyticBagEvent();
	}

	public override void OnHideView()
	{
		if ((Object)(object)mCurrentSelect != (Object)null)
		{
			mCurrentSelect.SetSelectState(select: false);
			mCurrentSelect = null;
		}
		GameLevelManager.ResetGoodsLockGuide();
		if ((Object)(object)StackSellGrid != (Object)null)
		{
			StackSellGrid.SetSelectState(select: false);
			StackSellGrid = null;
		}
		RemoveEventListener();
		RemoveMergeHint();
		GoodsInfoViewLogic?.RecoveryMaterialItem();
		GoodsInfoViewLogic?.ClearWorkingSpeedAnim();
		mSellGoods = null;
		mSellGrid = null;
		mLastMachineTipGrid = null;
		mLastShortTipGrid = null;
		TimeManager.GetInstance().ClearSchedule(this);
		GameManager.GetInstance().StageScene = SceneType.MainView;
		AudioManager.Instance.StopInstrumentSound();
		if (!Data.IsPreload)
		{
			DOTweenUITools.DoExitPopPlayAudio();
		}
		GameLevelDefine.ClearOrderNeedLowLevelGoods();
		mGridFullInterval = 0f;
		Temporary.Bubble.TA.SendTA(condition: true);
		GameLevelDefine.RecycleGameObject(recyclePrefab);
		GameManager.GetInstance().SetMultiTouchEnabled(enable: true);
		HideBagHintAnim();
		ClearCollectFlush();
		recyclePrefab = null;
		IsInGame = false;
	}

	public virtual void AddEventListener()
	{
		//IL_0012: Unknown result type (might be due to invalid IL or missing references)
		//IL_001c: Expected Obj, but got Unknown
		//IL_002e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0038: Expected Obj, but got Unknown
		((UnityEvent)BackButton.onClick).AddListener((UnityAction)OnBackBtnClick);
		((UnityEvent)BagButton.onClick).AddListener((UnityAction)OnBagClick);
		if ((Object)(object)m_ordersViewLogic != (Object)null)
		{
			m_ordersViewLogic.AddOtherEvent();
		}
		EventManager.GetInstance().AddEventListener(100018, OnUpdateTopPos);
		EventManager.GetInstance().AddEventListener(100177, OnUpdateTopPos);
		EventManager.GetInstance().AddEventListener<bool>(100175, UpdateOrderZoneOnWaveReward);
		EventManager.GetInstance().AddEventListener<int>(100014, ItemChangeCall);
		EventManager.GetInstance().AddEventListener<bool>(100046, CloseGameView);
		EventManager.GetInstance().AddEventListener<bool, UnityAction>(203140, CloseGameViewNeedCallBack);
		EventManager.GetInstance().AddEventListener(100047, UpdateBagCapacity);
		EventManager.GetInstance().AddEventListener(100052, OnUpgradleSuccess);
		EventManager.GetInstance().AddEventListener(100054, UpdateOrderZone);
		EventManager.GetInstance().AddEventListener<int>(100048, CheckOrderUpdate);
		EventManager.GetInstance().AddEventListener<int>(100044, OnFinishOrder);
		EventManager.GetInstance().AddEventListener<int, int>(100049, updateOrderList);
		EventManager.GetInstance().AddEventListener<int>(100050, NewProduceSeriesMainlineOrder);
		EventManager.GetInstance().AddEventListener<BagEventInfo>(100019, BagGoodsToLevel);
		EventManager.GetInstance().AddEventListener<string>(EventManager.EVENT_CLOSE_VIEW, OnCloseViewEvent);
		EventManager.GetInstance().AddEventListener<int, int>(100059, OnGoodsFly);
		EventManager.GetInstance().AddEventListener(100125, ShowMergeHint);
		EventManager.GetInstance().AddEventListener(203018, ShowMergeHint_NoDelay);
		EventManager.GetInstance().AddEventListener(100132, RemoveMergeHint);
		EventManager.GetInstance().AddEventListener<int>(100102, OnFinishGameGuide);
		EventManager.GetInstance().AddEventListener(100060, OnPlayUnlockGrid);
		EventManager.GetInstance().AddEventListener<int>(100061, OnUpdateSelectGoodsInfo);
		EventManager.GetInstance().AddEventListener<int>(100101, OnGuideStart);
		EventManager.GetInstance().AddEventListener(100065, UpdateRedpoint);
		EventManager.GetInstance().AddEventListener(100064, UpdateRedpoint);
		EventManager.GetInstance().AddEventListener(100066, UpdateRedpoint);
		EventManager.GetInstance().AddEventListener(100077, UpdateRedpoint);
		EventManager.GetInstance().AddEventListener(100198, ShowBagBubble);
		EventManager.GetInstance().AddEventListener(100055, ShowBagBubble);
		EventManager.GetInstance().AddEventListener(202010, ShowBagBubble);
		EventManager.GetInstance().AddEventListener(100139, UpdateRedpoint);
		EventManager.GetInstance().AddEventListener(100140, UpdateRedpoint);
		EventManager.GetInstance().AddEventListener(200011, NewDailyChallengeCanGetReward);
		EventManager.GetInstance().AddEventListener(100201, GoodsTakeout);
		EventManager.GetInstance().AddEventListener<GameLevelGrid, int>(100195, PlayGlobalSpeedup);
		EventManager.GetInstance().AddEventListener<Action<Transform>>(100150, OnCollectAnim);
		EventManager.GetInstance().AddEventListener<int>(100116, OnGuideStart);
		EventManager.GetInstance().AddEventListener(100278, OnBingoGoodsChange);
		EventManager.GetInstance().AddEventListener<int>(100279, OnBingoCommit);
		EventManager.GetInstance().AddEventListener(200005, OnUpdateActivityEnergy);
		EventManager.GetInstance().AddEventListener(200015, UpdateEnergyRate);
		EventManager.GetInstance().AddEventListener(202012, UpdateOrderSurprise);
		EventManager.GetInstance().AddEventListener<bool>(203182, UpdateFireHelperIcon);
		EventManager.GetInstance().AddEventListener(203184, UpdateOrderFirePot);
		EventManager.GetInstance().AddEventListener(202096, UpdateGameGrid);
		EventManager.GetInstance().AddEventListener(202100, ClearUndoGoods);
		if (!Data.IsPreload)
		{
			EventManager.GetInstance().DispatchEvent(100130, arg: false);
		}
		EventManager.GetInstance().AddEventListener<string>(202009, OnReceiveGuideEvent);
		EventManager.GetInstance().AddEventListener(202076, RefreshSceneActivityScoreBuffGameIcon);
		EventManager.GetInstance().AddEventListener(203022, RefreshFeverActivityGameIcon);
		EventManager.GetInstance().AddEventListener(203023, RefreshFeverActivityGameIcon);
		EventManager.GetInstance().AddEventListener(203024, RefreshFeverActivityGameIcon);
		EventManager.GetInstance().AddEventListener(203024, RefreshFeverActivityBuff);
		EventManager.GetInstance().AddEventListener(202076, RefreshFeverActivityGameIcon);
		EventManager.GetInstance().AddEventListener(203213, RefreshOrderPartCommitBuff_ActivitySwitch);
		mSceneActivityBuffGameIconRootLogic?.AddListener();
		if ((Object)(object)mFeverActivityGameIconRootLogic != (Object)null)
		{
			mFeverActivityGameIconRootLogic.AddListener();
		}
		if ((Object)(object)mCCDoubleGiftGameIconRootLogic != (Object)null)
		{
			mCCDoubleGiftGameIconRootLogic.AddListener();
		}
		if ((Object)(object)mCookFrenzyBuffGameIconRootLogic != (Object)null)
		{
			mCookFrenzyBuffGameIconRootLogic.AddListener();
		}
		if ((Object)(object)mOrderReturnBuffGameIconRootLogic != (Object)null)
		{
			mOrderReturnBuffGameIconRootLogic.AddListener();
		}
		EventManager.GetInstance().AddEventListener(203231, RefreshOrderReturnBuffGameIcon);
		EventManager.GetInstance().AddEventListener<bool>(203217, RefreshCookFrenzyGameIcon);
		EventManager.GetInstance().AddEventListener(203178, RefreshCCDoubleGiftGameIcon);
		if ((Object)(object)mOrderPartCommitGameIconRootLogic != (Object)null)
		{
			mOrderPartCommitGameIconRootLogic.AddListener();
		}
		EventManager.GetInstance().AddEventListener<CollectAnimationData>(202101, OnCollectAnimEvent);
		EventManager.GetInstance().AddEventListener<int, int>(202113, UpdateGeneratorNocd);
		EventManager.GetInstance().AddEventListener<int, int>(202114, UpdateInstrumentSpeedUp);
		EventManager.GetInstance().AddEventListener(203042, CheckShowSortcutTip);
		EventManager.GetInstance().AddEventListener(203081, ResetGameView);
		EventManager.GetInstance().AddEventListener(203268, BackgroundFit);
		EventManager.GetInstance().AddEventListener<List<RecycleAnimationData>, List<RecycleAnimationData>, int>(203082, playRecycleAnim);
		EventManager.GetInstance().AddEventListener<GameLevelGrid, int>(203084, PlayUFOSpeedUp);
		EventManager.GetInstance().AddEventListener<int>(203085, GeneratorSuperSpeedup);
		EventManager.GetInstance().AddEventListener(203098, UpdateSelectMachineInfo);
		EventManager.GetInstance().AddEventListener(203099, CheckStartCookingGuide);
		EventManager.GetInstance().AddEventListener(203134, OnCloseOrderDetail);
		EventManager.GetInstance().AddEventListener<float>(100192, ChangeBagNodeLayer);
		EventManager.GetInstance().AddEventListener<Action<Transform>>(203174, OnGetBackBtn);
		EventManager.GetInstance().AddEventListener(203173, PlayFeedBackAni);
		EventManager.GetInstance().AddEventListener(100167, RefreshRightTopIcon);
		EventManager.GetInstance().AddEventListener<int>(203251, OnDetailQuality);
		TopUIViewLogic.PushSub(new TopViewSubCell
		{
			cKey = ((Component)this).gameObject,
			uiList = TopSub
		});
		MainUIViewLogic.PushSub(new MainUIViewSubCell
		{
			cKey = ((Component)this).gameObject,
			visibleType = MainUIInfoType.EMPTY
		});
	}

	private void ChangeBagNodeLayer(float duration)
	{
		canvasDuration = duration;
		Canvas orAddComponent = ((Component)BagButton).gameObject.GetOrAddComponent<Canvas>();
		orAddComponent.overrideSorting = true;
		orAddComponent.Layer<Canvas>(5);
		orAddComponent.sortingOrder = 100;
		PlayCanvasGroupShowAni(((Component)BagButton).transform);
	}

	private void _clearBagNodeLayer()
	{
		Canvas orAddComponent = ((Component)BagButton).gameObject.GetOrAddComponent<Canvas>();
		if ((Object)(object)orAddComponent != (Object)null)
		{
			orAddComponent.DestroySelf<Canvas>();
		}
		PlayCanvasGroupOverAni(((Component)BagButton).transform);
	}

	private void PlayCanvasGroupShowAni(Transform target)
	{
		if (!isPlayingCanvasAni)
		{
			isPlayingCanvasAni = true;
			CanvasGroup orAddComponent = ((Component)target).gameObject.GetOrAddComponent<CanvasGroup>();
			orAddComponent.alpha = 0f;
			DOTweenModuleUI.DOFade(orAddComponent, 1f, 0.1f);
		}
	}

	private void PlayCanvasGroupOverAni(Transform target)
	{
		if (isPlayingCanvasAni)
		{
			isPlayingCanvasAni = false;
			((Component)target).gameObject.GetOrAddComponent<CanvasGroup>().alpha = 1f;
		}
	}

	public virtual void RemoveEventListener()
	{
		//IL_0012: Unknown result type (might be due to invalid IL or missing references)
		//IL_001c: Expected Obj, but got Unknown
		//IL_002e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0038: Expected Obj, but got Unknown
		((UnityEvent)BackButton.onClick).RemoveListener((UnityAction)OnBackBtnClick);
		((UnityEvent)BagButton.onClick).RemoveListener((UnityAction)OnBagClick);
		if ((Object)(object)m_ordersViewLogic != (Object)null)
		{
			m_ordersViewLogic.RemoveOtherEvent();
		}
		EventManager.GetInstance().RemoveEventListener(100018, OnUpdateTopPos);
		EventManager.GetInstance().RemoveEventListener(100177, OnUpdateTopPos);
		EventManager.GetInstance().RemoveEventListener<bool>(100175, UpdateOrderZoneOnWaveReward);
		EventManager.GetInstance().RemoveEventListener<int>(100014, ItemChangeCall);
		EventManager.GetInstance().RemoveEventListener<bool>(100046, CloseGameView);
		EventManager.GetInstance().RemoveEventListener<bool, UnityAction>(203140, CloseGameViewNeedCallBack);
		EventManager.GetInstance().RemoveEventListener(100047, UpdateBagCapacity);
		EventManager.GetInstance().RemoveEventListener(100052, OnUpgradleSuccess);
		EventManager.GetInstance().RemoveEventListener(100054, UpdateOrderZone);
		EventManager.GetInstance().RemoveEventListener<int>(100048, CheckOrderUpdate);
		EventManager.GetInstance().RemoveEventListener<int, int>(100049, updateOrderList);
		EventManager.GetInstance().RemoveEventListener<int>(100050, NewProduceSeriesMainlineOrder);
		EventManager.GetInstance().RemoveEventListener<int>(100044, OnFinishOrder);
		EventManager.GetInstance().RemoveEventListener<BagEventInfo>(100019, BagGoodsToLevel);
		EventManager.GetInstance().RemoveEventListener<string>(EventManager.EVENT_CLOSE_VIEW, OnCloseViewEvent);
		EventManager.GetInstance().RemoveEventListener<int, int>(100059, OnGoodsFly);
		EventManager.GetInstance().RemoveEventListener(100125, ShowMergeHint);
		EventManager.GetInstance().RemoveEventListener(203018, ShowMergeHint_NoDelay);
		EventManager.GetInstance().RemoveEventListener(100132, RemoveMergeHint);
		EventManager.GetInstance().RemoveEventListener<int>(100102, OnFinishGameGuide);
		EventManager.GetInstance().RemoveEventListener(100060, OnPlayUnlockGrid);
		EventManager.GetInstance().RemoveEventListener<int>(100061, OnUpdateSelectGoodsInfo);
		EventManager.GetInstance().RemoveEventListener<int>(100101, OnGuideStart);
		EventManager.GetInstance().RemoveEventListener(100065, UpdateRedpoint);
		EventManager.GetInstance().RemoveEventListener(100064, UpdateRedpoint);
		EventManager.GetInstance().RemoveEventListener(100066, UpdateRedpoint);
		EventManager.GetInstance().RemoveEventListener(100077, UpdateRedpoint);
		EventManager.GetInstance().RemoveEventListener(100139, UpdateRedpoint);
		EventManager.GetInstance().RemoveEventListener(100140, UpdateRedpoint);
		EventManager.GetInstance().RemoveEventListener(200011, NewDailyChallengeCanGetReward);
		EventManager.GetInstance().RemoveEventListener<GameLevelGrid, int>(100195, PlayGlobalSpeedup);
		EventManager.GetInstance().RemoveEventListener(100198, ShowBagBubble);
		EventManager.GetInstance().RemoveEventListener(100055, ShowBagBubble);
		EventManager.GetInstance().RemoveEventListener(202010, ShowBagBubble);
		EventManager.GetInstance().RemoveEventListener(100201, GoodsTakeout);
		EventManager.GetInstance().RemoveEventListener(100278, OnBingoGoodsChange);
		EventManager.GetInstance().RemoveEventListener<int>(100279, OnBingoCommit);
		EventManager.GetInstance().RemoveEventListener<Action<Transform>>(100150, OnCollectAnim);
		EventManager.GetInstance().RemoveEventListener<int>(100116, OnGuideStart);
		EventManager.GetInstance().RemoveEventListener(200005, OnUpdateActivityEnergy);
		EventManager.GetInstance().RemoveEventListener(200015, UpdateEnergyRate);
		EventManager.GetInstance().RemoveEventListener(202012, UpdateOrderSurprise);
		EventManager.GetInstance().RemoveEventListener<bool>(203182, UpdateFireHelperIcon);
		EventManager.GetInstance().RemoveEventListener(203184, UpdateOrderFirePot);
		EventManager.GetInstance().RemoveEventListener<string>(202009, OnReceiveGuideEvent);
		EventManager.GetInstance().RemoveEventListener(202096, UpdateGameGrid);
		EventManager.GetInstance().RemoveEventListener(202100, ClearUndoGoods);
		EventManager.GetInstance().RemoveEventListener(202076, RefreshSceneActivityScoreBuffGameIcon);
		EventManager.GetInstance().RemoveEventListener(203022, RefreshFeverActivityGameIcon);
		EventManager.GetInstance().RemoveEventListener(203023, RefreshFeverActivityGameIcon);
		EventManager.GetInstance().RemoveEventListener(203024, RefreshFeverActivityGameIcon);
		EventManager.GetInstance().RemoveEventListener(202076, RefreshFeverActivityGameIcon);
		EventManager.GetInstance().RemoveEventListener(203213, RefreshOrderPartCommitBuff_ActivitySwitch);
		EventManager.GetInstance().RemoveEventListener(203024, RefreshFeverActivityBuff);
		mSceneActivityBuffGameIconRootLogic?.RemoveListener();
		if ((Object)(object)mFeverActivityGameIconRootLogic != (Object)null)
		{
			mFeverActivityGameIconRootLogic.RemoveListener();
		}
		if ((Object)(object)mCCDoubleGiftGameIconRootLogic != (Object)null)
		{
			mCCDoubleGiftGameIconRootLogic.RemoveListener();
		}
		if ((Object)(object)mCookFrenzyBuffGameIconRootLogic != (Object)null)
		{
			mCookFrenzyBuffGameIconRootLogic.RemoveListener();
		}
		if ((Object)(object)mOrderReturnBuffGameIconRootLogic != (Object)null)
		{
			mOrderReturnBuffGameIconRootLogic.RemoveListener();
		}
		EventManager.GetInstance().RemoveEventListener(203231, RefreshOrderReturnBuffGameIcon);
		EventManager.GetInstance().RemoveEventListener<bool>(203217, RefreshCookFrenzyGameIcon);
		EventManager.GetInstance().RemoveEventListener(203178, RefreshCCDoubleGiftGameIcon);
		if ((Object)(object)mOrderPartCommitGameIconRootLogic != (Object)null)
		{
			mOrderPartCommitGameIconRootLogic.RemoveListener();
		}
		EventManager.GetInstance().RemoveEventListener<CollectAnimationData>(202101, OnCollectAnimEvent);
		EventManager.GetInstance().RemoveEventListener<int, int>(202113, UpdateGeneratorNocd);
		EventManager.GetInstance().RemoveEventListener<int, int>(202114, UpdateInstrumentSpeedUp);
		EventManager.GetInstance().RemoveEventListener(203042, CheckShowSortcutTip);
		EventManager.GetInstance().RemoveEventListener(203081, ResetGameView);
		EventManager.GetInstance().RemoveEventListener(203268, BackgroundFit);
		EventManager.GetInstance().RemoveEventListener<List<RecycleAnimationData>, List<RecycleAnimationData>, int>(203082, playRecycleAnim);
		EventManager.GetInstance().RemoveEventListener<GameLevelGrid, int>(203084, PlayUFOSpeedUp);
		EventManager.GetInstance().RemoveEventListener<int>(203085, GeneratorSuperSpeedup);
		EventManager.GetInstance().RemoveEventListener(203098, UpdateSelectMachineInfo);
		EventManager.GetInstance().RemoveEventListener(203099, CheckStartCookingGuide);
		EventManager.GetInstance().RemoveEventListener(203134, OnCloseOrderDetail);
		EventManager.GetInstance().DispatchEvent(203041);
		EventManager.GetInstance().DispatchEvent(203039);
		EventManager.GetInstance().RemoveEventListener<float>(100192, ChangeBagNodeLayer);
		EventManager.GetInstance().RemoveEventListener<Action<Transform>>(203174, OnGetBackBtn);
		EventManager.GetInstance().RemoveEventListener(203173, PlayFeedBackAni);
		EventManager.GetInstance().RemoveEventListener(100167, RefreshRightTopIcon);
		EventManager.GetInstance().DispatchEvent(203248);
		EventManager.GetInstance().RemoveEventListener<int>(203251, OnDetailQuality);
		TopUIViewLogic.PopSub(((Component)this).gameObject);
		MainUIViewLogic.PopSub(((Component)this).gameObject);
	}

	public void GameLevelFit()
	{
		BackgroundFit();
		if (ABTestSwitchDefine.ChessboardFitSwitch())
		{
			FixBackgroundSizeB();
		}
		else
		{
			FixBackgroundSizeA();
		}
	}

	public virtual void BackgroundFit()
	{
		FixBackgroundImg();
		if (ABTestSwitchDefine.ChessboardFitSwitch())
		{
			FitTopBackgroundSize();
		}
	}

	private void FixBackgroundImg()
	{
		IBackgroundThemeVO backgroundThemeVO = BackgroundThemeLogic.GetBackgroundThemeVO(ServerTimeManager.TodayDateServerNumber);
		BackgroundType(backgroundThemeVO);
	}

	private void BackgroundType(IBackgroundThemeVO backgroundThemeVO)
	{
		Background.SetSelfActive<RectTransform>(false);
		BgNode.SetSelfActive<RectTransform>(true);
		string text = "숍끓斆弎畕?\u009a厙숁끛澺甂打 Â叁숚끞璆弛湕 Ö叕뺭";
		string text2 = "숍끓斆弎畕?\u009a厙숁끛澺甂打 Â叁숚끞璆弛湕 Ö叕뺮";
		if (ABTestSwitchDefine.ChessboardFitSwitch())
		{
			text = "숍끓斆弎畕?\u009a厙숁끛澺甂打 Â叁숚끞璆弛湕 Ö叕\ue8e7G赴";
		}
		Sprite val = null;
		Sprite val2 = null;
		ChessboardBackgroundThemeModel chessboardBackgroundThemeModel = ObjectManager.Instance.chessboardBackgroundThemeModel;
		chessboardBackgroundThemeModel.CanOpenNewPeriodActivity();
		if (UserDefault.GetInstance().IsSceneActivityChessboardOn())
		{
			ChessboardBackgroundThemeSkin chessboardSkin = chessboardBackgroundThemeModel.GetChessboardSkin();
			if (chessboardSkin != null)
			{
				((Component)BgTop).GetComponent<Image>().ResetSpriteName(chessboardSkin.topBg, resLoader);
				((Component)BgBottom).GetComponent<Image>().ResetSpriteName(chessboardSkin.bottomBg, resLoader);
				imgChessboard1.ResetSpriteName(chessboardSkin.chessboard, resLoader);
				imgChessboard2.ResetSpriteName(chessboardSkin.chessboard, resLoader);
				return;
			}
			SceneActivityModel.ChessboardSkin chessboardSkin2 = ObjectManager.Instance.sceneActivityModel.GetChessboardSkin();
			if (chessboardSkin2 != null)
			{
				((Component)BgTop).GetComponent<Image>().ResetSpriteName(chessboardSkin2.orderZoneBg, resLoader);
				((Component)BgBottom).GetComponent<Image>().ResetSpriteName(chessboardSkin2.chessboardBg, resLoader);
				imgChessboard1.ResetSpriteName(chessboardSkin2.chessboard, resLoader);
				imgChessboard2.ResetSpriteName(chessboardSkin2.chessboard, resLoader);
				return;
			}
			if (ObjectManager.GetInstance().peakOrderModel.IsInActivity())
			{
				val = base.Load<Sprite>(ObjectManager.GetInstance().peakOrderModel.PeakOrderOrderBgName);
				val2 = base.Load<Sprite>(ObjectManager.GetInstance().peakOrderModel.PeakOrderMergeBgName);
			}
			else if (MonoSingleton<ResMgr>.Instance.ExistsActivityResourceById(EPackActivityID.backgroundTheme))
			{
				int curTownMapID = ObjectManager.GetInstance().userDataModel.userDataVo.curTownMapID;
				IRestaurantMapVo restaurantVoById = ObjectManager.GetInstance().restaurantLevelModel.GetRestaurantVoById(curTownMapID);
				string name = text;
				if (backgroundThemeVO != null && backgroundThemeVO.mergeTheme.IsNotNullAndEmpty())
				{
					name = ((!ABTestSwitchDefine.ChessboardFitSwitch()) ? backgroundThemeVO.mergeTheme : (backgroundThemeVO.mergeTheme + "焍㡺"));
				}
				else if (restaurantVoById != null && restaurantVoById.mergeTopBg.IsNotNullAndEmpty())
				{
					name = ((!ABTestSwitchDefine.ChessboardFitSwitch()) ? restaurantVoById.mergeTopBg : (restaurantVoById.mergeTopBg + "焍㡺"));
				}
				val = base.Load<Sprite>(name);
				string name2 = text2;
				if (backgroundThemeVO != null && backgroundThemeVO.mergeTheme2.IsNotNullAndEmpty())
				{
					name2 = backgroundThemeVO.mergeTheme2;
				}
				else if (restaurantVoById != null && restaurantVoById.mergeBottomBg.IsNotNullAndEmpty())
				{
					name2 = restaurantVoById.mergeBottomBg;
				}
				val2 = base.Load<Sprite>(name2);
			}
		}
		if ((Object)(object)val == (Object)null)
		{
			val = base.Load<Sprite>(text);
		}
		if ((Object)(object)val2 == (Object)null)
		{
			val2 = base.Load<Sprite>(text2);
		}
		((Component)BgTop).GetComponent<Image>().sprite = val;
		((Graphic)((Component)BgTop).GetComponent<Image>()).SetNativeSize();
		((Component)BgBottom).GetComponent<Image>().sprite = val2;
		((Graphic)((Component)BgBottom).GetComponent<Image>()).SetNativeSize();
		imgChessboard1.ResetSpriteName("숍끓斆弎畕?\u009a厙숍끎抸朎獑\r\u008e厍医橢ā试鑥", resLoader);
		imgChessboard2.ResetSpriteName("숍끓斆弎畕?\u009a厙숍끎抸朎獑\r\u008e厍医橢ā试鑥", resLoader);
	}

	private void FixBackgroundSizeA()
	{
		//IL_00f1: Unknown result type (might be due to invalid IL or missing references)
		//IL_0109: Unknown result type (might be due to invalid IL or missing references)
		//IL_001d: Unknown result type (might be due to invalid IL or missing references)
		//IL_002d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0043: Unknown result type (might be due to invalid IL or missing references)
		//IL_004d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0071: Unknown result type (might be due to invalid IL or missing references)
		//IL_0081: Unknown result type (might be due to invalid IL or missing references)
		//IL_0091: Unknown result type (might be due to invalid IL or missing references)
		//IL_0131: Unknown result type (might be due to invalid IL or missing references)
		//IL_0137: Unknown result type (might be due to invalid IL or missing references)
		//IL_0158: Unknown result type (might be due to invalid IL or missing references)
		//IL_015d: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b5: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c5: Unknown result type (might be due to invalid IL or missing references)
		//IL_00d5: Unknown result type (might be due to invalid IL or missing references)
		//IL_01fb: Unknown result type (might be due to invalid IL or missing references)
		//IL_020d: Unknown result type (might be due to invalid IL or missing references)
		//IL_021d: Unknown result type (might be due to invalid IL or missing references)
		//IL_022e: Unknown result type (might be due to invalid IL or missing references)
		//IL_01af: Unknown result type (might be due to invalid IL or missing references)
		//IL_01c9: Unknown result type (might be due to invalid IL or missing references)
		//IL_0275: Unknown result type (might be due to invalid IL or missing references)
		//IL_027c: Unknown result type (might be due to invalid IL or missing references)
		if ((Object)(object)BottomNode != (Object)null)
		{
			BottomNode.localPosition = new Vector3(BottomNode.localPosition.x, BottomNode.localPosition.y + BottomOffsetY_V2, BottomNode.localPosition.z);
			if ((Object)(object)BackTransform != (Object)null)
			{
				BackTransform.anchoredPosition = new Vector2(BackTransform.anchoredPosition.x, BackTransform.anchoredPosition.y + BottomOffsetY_V2);
			}
			if ((Object)(object)BagTransform != (Object)null)
			{
				BagTransform.anchoredPosition = new Vector2(BagTransform.anchoredPosition.x, BagTransform.anchoredPosition.y + BottomOffsetY_V2);
			}
		}
		float topSafeArea = FitScreen.GetTopSafeArea();
		float num = (float)Display.DesignScreenWidth / Background.sizeDelta.x;
		float num2 = (float)Display.DesignScreenHeight / Background.sizeDelta.y;
		float num3 = num;
		if (num2 > num)
		{
			num3 = num2;
		}
		if (num3 < 1f)
		{
			num3 = 1f;
		}
		((Transform)Background).localScale = Vector3.one * num3;
		Background.anchoredPosition = Vector2.op_Implicit(new Vector3(0f, topSafeArea / 2f, 0f));
		if ((Object)(object)BgNode != (Object)null && (Object)(object)LevelNode != (Object)null && (Object)(object)TopNode != (Object)null && (Object)(object)BgTop != (Object)null)
		{
			BgTop.anchorMin = new Vector2(0.5f, 1f);
			BgTop.anchorMin = new Vector2(0.5f, 1f);
		}
		if ((Object)(object)BgTop != (Object)null && (Object)(object)BgBottom != (Object)null)
		{
			float x = BgTop.sizeDelta.x;
			float num4 = BgTop.sizeDelta.y + BgBottom.sizeDelta.y - ((Transform)BgNode).localPosition.y;
			float num5 = (float)Display.DesignScreenWidth / x;
			float num6 = (float)Display.DesignScreenHeight / num4;
			float num7 = num5;
			if (num6 > num5)
			{
				num7 = num6;
			}
			if (num7 < 1f)
			{
				num7 = 1f;
			}
			((Transform)BgNode).localScale = Vector3.one * num7;
		}
	}

	private void FixBackgroundSizeB()
	{
		//IL_0023: Unknown result type (might be due to invalid IL or missing references)
		//IL_0033: Unknown result type (might be due to invalid IL or missing references)
		//IL_0045: Unknown result type (might be due to invalid IL or missing references)
		//IL_004f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0703: Unknown result type (might be due to invalid IL or missing references)
		//IL_071b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0074: Unknown result type (might be due to invalid IL or missing references)
		//IL_0080: Unknown result type (might be due to invalid IL or missing references)
		//IL_008c: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b1: Unknown result type (might be due to invalid IL or missing references)
		//IL_00bd: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c9: Unknown result type (might be due to invalid IL or missing references)
		//IL_0747: Unknown result type (might be due to invalid IL or missing references)
		//IL_074e: Unknown result type (might be due to invalid IL or missing references)
		//IL_076f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0124: Unknown result type (might be due to invalid IL or missing references)
		//IL_014c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0619: Unknown result type (might be due to invalid IL or missing references)
		//IL_062b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0635: Unknown result type (might be due to invalid IL or missing references)
		//IL_066f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0688: Unknown result type (might be due to invalid IL or missing references)
		//IL_069a: Unknown result type (might be due to invalid IL or missing references)
		//IL_06a4: Unknown result type (might be due to invalid IL or missing references)
		//IL_06ba: Unknown result type (might be due to invalid IL or missing references)
		//IL_06ca: Unknown result type (might be due to invalid IL or missing references)
		//IL_06dd: Unknown result type (might be due to invalid IL or missing references)
		//IL_06e7: Unknown result type (might be due to invalid IL or missing references)
		//IL_02f5: Unknown result type (might be due to invalid IL or missing references)
		//IL_02fc: Unknown result type (might be due to invalid IL or missing references)
		//IL_0327: Unknown result type (might be due to invalid IL or missing references)
		//IL_032e: Unknown result type (might be due to invalid IL or missing references)
		//IL_036e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0375: Unknown result type (might be due to invalid IL or missing references)
		//IL_0393: Unknown result type (might be due to invalid IL or missing references)
		//IL_039a: Unknown result type (might be due to invalid IL or missing references)
		//IL_03aa: Unknown result type (might be due to invalid IL or missing references)
		//IL_03bc: Unknown result type (might be due to invalid IL or missing references)
		//IL_03d5: Unknown result type (might be due to invalid IL or missing references)
		//IL_047e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0490: Unknown result type (might be due to invalid IL or missing references)
		//IL_049a: Unknown result type (might be due to invalid IL or missing references)
		//IL_04dd: Unknown result type (might be due to invalid IL or missing references)
		//IL_0508: Unknown result type (might be due to invalid IL or missing references)
		//IL_051a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0524: Unknown result type (might be due to invalid IL or missing references)
		//IL_053a: Unknown result type (might be due to invalid IL or missing references)
		//IL_054a: Unknown result type (might be due to invalid IL or missing references)
		//IL_055d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0567: Unknown result type (might be due to invalid IL or missing references)
		//IL_03f3: Unknown result type (might be due to invalid IL or missing references)
		//IL_03fa: Unknown result type (might be due to invalid IL or missing references)
		//IL_040a: Unknown result type (might be due to invalid IL or missing references)
		//IL_041c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0435: Unknown result type (might be due to invalid IL or missing references)
		//IL_05a3: Unknown result type (might be due to invalid IL or missing references)
		//IL_05ad: Unknown result type (might be due to invalid IL or missing references)
		//IL_05c6: Unknown result type (might be due to invalid IL or missing references)
		//IL_05d0: Unknown result type (might be due to invalid IL or missing references)
		float bottomOffsetY_V = BottomOffsetY_V2;
		if ((Object)(object)BottomNode != (Object)null)
		{
			BottomNode.localPosition = new Vector3(BottomNode.localPosition.x, BottomNode.localPosition.y + bottomOffsetY_V, BottomNode.localPosition.z);
			RectTransform component = ((Component)BackButton).GetComponent<RectTransform>();
			if ((Object)(object)component != (Object)null)
			{
				component.anchoredPosition = new Vector2(component.anchoredPosition.x, component.anchoredPosition.y + bottomOffsetY_V);
			}
			RectTransform component2 = ((Component)BagButton).GetComponent<RectTransform>();
			if ((Object)(object)component2 != (Object)null)
			{
				component2.anchoredPosition = new Vector2(component2.anchoredPosition.x, component2.anchoredPosition.y + bottomOffsetY_V);
			}
		}
		if ((Object)(object)TopNode != (Object)null && (Object)(object)BgNode != (Object)null && (Object)(object)LevelNode != (Object)null)
		{
			if ((Object)(object)BgTop != (Object)null)
			{
				BgTop.anchorMin = new Vector2(0.5f, 0f);
			}
			if ((Object)(object)BgTop != (Object)null)
			{
				BgTop.anchorMin = new Vector2(0.5f, 0f);
			}
			float num = (float)Display.DesignScreenHeight - FitScreen.GetTopSafeArea() - TopUIHeight;
			if (num / (OrderViewHeight + LevelTopInterval + LevelHeight + BottomUIHeight) < 1f)
			{
				float num2 = (num - OrderViewHeight * OrderScaleMin - LevelTopInterval * IntervalScaleMin - BottomUIHeight * BottomScaleMin) / LevelHeight;
				num2 = ((num2 < LevelScaleMin) ? LevelScaleMin : num2);
				num2 = ((num2 > 1f) ? 1f : num2);
				num -= LevelHeight * num2;
				float num3 = (num - OrderViewHeight * OrderScaleMin - LevelTopInterval * IntervalScaleMin) / BottomUIHeight;
				num3 = ((num3 < BottomScaleMin) ? BottomScaleMin : num3);
				num3 = ((num3 > 1f) ? 1f : num3);
				num -= BottomUIHeight * num3;
				float num4 = (num - OrderViewHeight * OrderScaleMin) / LevelTopInterval;
				num4 = ((num4 < IntervalScaleMin) ? IntervalScaleMin : num4);
				num4 = ((num4 > 1f) ? 1f : num4);
				num -= LevelTopInterval * num4;
				float num5 = num / OrderViewHeight;
				num5 = ((num5 > 1f) ? 1f : num5);
				float num6 = OrderViewHeight;
				float num7 = 0f;
				if (num5 < OrderScaleMin)
				{
					num6 = num5 * OrderViewHeight / OrderScaleMin;
					num7 = (OrderViewHeight - num6) / 2f;
					num5 = OrderScaleMin;
				}
				((Transform)TopNode).localScale = Vector3.one * num5;
				if ((Object)(object)m_ordersViewLogic != (Object)null)
				{
					m_ordersViewLogic.SetOrderViewScale(num5);
				}
				((Transform)LevelNode).localScale = Vector3.one * num2;
				if ((Object)(object)GoodsInfoViewLogic != (Object)null)
				{
					GoodsInfoViewLogic.ResetContenrSize(num2 * 624f, num3);
				}
				GoodsInfoMaxWeight = num2 * 624f;
				BottomNode.localScale = Vector3.one * num3;
				if ((Object)(object)BackTransform != (Object)null)
				{
					((Transform)BackTransform).localScale = Vector3.one * num3;
					float x = BackTransform.anchoredPosition.x;
					float num8 = BackTransform.anchoredPosition.y * num3;
					BackTransform.anchoredPosition = new Vector2(x, num8);
				}
				if ((Object)(object)BagTransform != (Object)null)
				{
					((Transform)BagTransform).localScale = Vector3.one * num3;
					float x2 = BagTransform.anchoredPosition.x;
					float num9 = BagTransform.anchoredPosition.y * num3;
					BagTransform.anchoredPosition = new Vector2(x2, num9);
				}
				GoodsInfoScale = num3;
				float num10 = BottomUIHeight * num3 + LevelHeight * num2 * 0.5f - ((float)Display.DesignScreenHeight - FitScreen.GetTopSafeArea()) / 2f;
				((Transform)LevelNode).localPosition = new Vector3(((Transform)LevelNode).localPosition.x, num10, ((Transform)LevelNode).localPosition.z);
				float num11 = num10 + LevelHeight * num2 * 0.5f + LevelTopInterval * num4 + num6 * num5 * 0.5f + num7 - OrderHeighChangeY;
				float num12 = num11 - ((Transform)TopNode).localPosition.y + num6 * (1f - num5) * 0.5f;
				((Transform)TopNode).localPosition = new Vector3(((Transform)TopNode).localPosition.x, num11, ((Transform)TopNode).localPosition.z);
				((Transform)BgNode).localPosition = new Vector3(((Transform)BgNode).localPosition.x, ((Transform)BgNode).localPosition.y + num12, ((Transform)BgNode).localPosition.z);
				if (num5 < 1f)
				{
					float num13 = (float)Display.DesignScreenWidth * (1f - num5) * 0.5f;
					TopNode.offsetMin = new Vector2(0f - num13, TopNode.offsetMin.y);
					TopNode.offsetMax = new Vector2(0f - num13, TopNode.offsetMax.y);
				}
			}
			else
			{
				float num14 = BottomUIHeight + bottomOffsetY_V * 1.45f + LevelHeight * 0.5f - ((float)Display.DesignScreenHeight - FitScreen.GetTopSafeArea()) / 2f;
				((Transform)LevelNode).localPosition = new Vector3(((Transform)LevelNode).localPosition.x, num14, ((Transform)LevelNode).localPosition.z);
				float num15 = num14 + LevelHeight * 0.5f + LevelTopInterval + OrderViewHeight * 0.5f - OrderHeighChangeY;
				float num16 = num15 - ((Transform)TopNode).localPosition.y;
				((Transform)TopNode).localPosition = new Vector3(((Transform)TopNode).localPosition.x, num15, ((Transform)TopNode).localPosition.z);
				((Transform)BgNode).localPosition = new Vector3(((Transform)BgNode).localPosition.x, ((Transform)BgNode).localPosition.y + num16, ((Transform)BgNode).localPosition.z);
			}
		}
		float topSafeArea = FitScreen.GetTopSafeArea();
		float num17 = (float)Display.DesignScreenWidth / Background.sizeDelta.x;
		float num18 = (float)Display.DesignScreenHeight / Background.sizeDelta.y;
		float num19 = num17;
		if (num18 > num17)
		{
			num19 = num18;
		}
		if (num19 < 1f)
		{
			num19 = 1f;
		}
		((Transform)Background).localScale = Vector3.one * num19;
		((Transform)Background).localPosition = new Vector3(0f, topSafeArea / 2f, 0f);
		FitTopBackgroundSize();
	}

	private void FitTopBackgroundSize()
	{
		//IL_001b: Unknown result type (might be due to invalid IL or missing references)
		//IL_002d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0049: Unknown result type (might be due to invalid IL or missing references)
		//IL_0074: Unknown result type (might be due to invalid IL or missing references)
		//IL_007a: Unknown result type (might be due to invalid IL or missing references)
		if (!((Object)(object)BgTop == (Object)null))
		{
			float num = (float)Display.DesignScreenWidth / BgTop.sizeDelta.x;
			if (Mathf.Approximately(BgTop.sizeDelta.x, 1100f) && Mathf.Approximately(BgTop.sizeDelta.y, 560f))
			{
				num = Mathf.Max(1f, num);
			}
			((Transform)BgTop).localScale = Vector3.one * num;
		}
	}

	protected virtual void GuideEvent()
	{
		if (Data.IsPreload)
		{
			return;
		}
		EventManager.GetInstance().DispatchEvent(100060);
		EventManager.GetInstance().DispatchEvent(100105, -1);
		TimeManager.Instance.Schedule(this, (float dt) =>
		{
			if (!ObjectManager.GetInstance().orderWaveRewardModel.CanClaimWaveReward_Multi() && !ObjectManager.GetInstance().orderWaveRewardModel.CanClaimWaveReward_Single())
			{
				EventManager.GetInstance().DispatchEvent(100104);
			}
		}, 0.1f + EnterEventDelay, 1, 0f);
	}

	private void OnReceiveGuideEvent(string eventName)
	{
		if (eventName.Equals("숙끖憶洚䍑\u0015\u008a厉순끶嚼椝救>^卝欷㺏"))
		{
			CloseGameView(checkPop: false);
		}
		else if (eventName.Equals("숋끕澺渌䱀;Â叁숁끟涸攂偳3º厹删犷\ud9e1Ś"))
		{
			GameLevelOrdersViewLogic.AssignForceItemZone(new OrderZoneForceItemFun_Common
			{
				zone = EOrderZoneForceItemFun.e_PeakOrder
			});
		}
		else if (eventName.Equals("숋끕澺渌䱀;Â叁숾끟憮猿乆7\u008a厉숢끈璼䤣畁<Ö叕뫫\u0087赴"))
		{
			GameLevelOrdersViewLogic.AssignForceItemZone(new OrderZoneForceItemFun_Common
			{
				zone = EOrderZoneForceItemFun.e_newTreasureHunting
			});
		}
	}

	public void CompleteMachineImmidiately(string reason, Action callback)
	{
		List<GameLevelGrid> list = GridObjectDic.Values.ToList();
		for (int i = 0; i < list.Count; i++)
		{
			GameLevelGrid gameLevelGrid = list[i];
			IGoodsBaseVo goodsBaseVo = gameLevelGrid.GetGoodsBaseVo();
			GameGoodsVo gameGoodsVo = gameLevelGrid.GetGameGoodsVo();
			if (gameGoodsVo != null && goodsBaseVo != null && IGoodsBaseVo.IsInstrument(goodsBaseVo.type) && gameGoodsVo.GoodsState == GameGoodsState.Working && Singleton<GameLevelManager>.Instance.GetGoodsCookingVO(gameGoodsVo.MakingGoodsID) != null)
			{
				int makingTimeByGameGoods = Singleton<GameLevelManager>.Instance.GetMakingTimeByGameGoods(gameGoodsVo);
				gameGoodsVo.DoneType = reason;
				gameGoodsVo.MakingStarTime -= makingTimeByGameGoods;
				gameLevelGrid.PlayCdClearAnim = true;
				gameLevelGrid.GetGameGoodsBase().UpdateAttribute();
				gameLevelGrid.SaveGridData();
				if ((Object)(object)GoodsInfoViewLogic != (Object)null)
				{
					GoodsInfoViewLogic.ClearWorkingSpeedAnim();
					GoodsInfoViewLogic.StopWorkingFullAni();
					GoodsInfoViewLogic.UpdateView();
				}
				ObjectManager.GetInstance().SaveToDisk();
			}
		}
		callback.InvokeGracefully();
	}

	public int GetCenterGridID()
	{
		return (Rows / 2 + 1) * 10 + (Columns / 2 + 1);
	}

	public bool GetGameMapInitState()
	{
		return IsGameMapInit;
	}

	public float GetMergeRuntime()
	{
		return _mergeRuntime;
	}

	public virtual void BagGoodsToLevel(BagEventInfo eventInfo)
	{
		if (eventInfo == null || eventInfo.bagGoodsVo == null)
		{
			return;
		}
		GameLevelGrid nearbyEmptyGrid = GetNearbyEmptyGrid(GetCenterGridID(), showEnoughTip: true, eventInfo.TipLocation, eventInfo.bagGoodsVo.goodsID, checkPlayerState: true);
		if ((Object)(object)nearbyEmptyGrid != (Object)null)
		{
			if (eventInfo.fromType == 0)
			{
				GameLevelDefine.PutinOrTakeoutBagGoods(eventInfo.bagGoodsVo, takeout: true);
			}
			nearbyEmptyGrid.ChangeGameGoodsVo(Singleton<GameLevelManager>.Instance.GetGameGoodsBaseById(eventInfo.bagGoodsVo.goodsID, nearbyEmptyGrid, eventInfo.bagGoodsVo), "숞끛斾瘟扛>\u009a厙欷㹴");
			eventInfo.CallBack?.Invoke(obj: true);
			if ((Object)(object)eventInfo.StartTransform != (Object)null)
			{
				nearbyEmptyGrid.GetGameLevelItem()?.PlayItemFly(eventInfo.StartTransform);
			}
			UpdateBagCapacity();
			mIsAddBagGoods = true;
			if (eventInfo.PlayTakeoutEffect)
			{
				TakeoutGrids.Add(nearbyEmptyGrid);
			}
			GameLevelDefine.ChangeUUIDCache(nearbyEmptyGrid.GetGameGoodsVo(), 1);
			ObjectManager.GetInstance().gameLevelModel.RefreshGridNum = true;
			GameLevelDefine.ClearOrderNeedLowLevelGoods();
			if ((Object)(object)CurrentSelectGrid != (Object)null && eventInfo.fromType == 0)
			{
				GoodsInfoViewLogic?.UpdateInfoView();
			}
		}
		else
		{
			eventInfo.CallBack?.Invoke(obj: false);
		}
	}

	protected void ItemChangeCall(int itemID)
	{
		if (itemID == 1002)
		{
			updateTopPos();
		}
	}

	protected void OnUpdateTopPos()
	{
		updateTopPos();
	}

	public virtual void UpdateView()
	{
		if ((Object)(object)m_ordersViewLogic != (Object)null)
		{
			m_ordersViewLogic.parentViewLogic = this;
		}
		AddOrderFunZoneItems();
		updateTopPos();
		updateOrderList();
		UpdateBagCapacity();
		if (ObjectManager.GetInstance().playerLevelModel.GetPlayerLevel() >= 2 && !ObjectManager.GetInstance().userDataModel.BagOpenState)
		{
			ObjectManager.GetInstance().userDataModel.BagOpenState = true;
			BagButton.SetSelfActive<Button>(true);
		}
	}

	protected virtual void OnUpgradleSuccess()
	{
		int playerLevel = ObjectManager.GetInstance().playerLevelModel.GetPlayerLevel();
		if (Singleton<GameLevelManager>.Instance.gridUnlockDic.ContainsKey(playerLevel))
		{
			ResetGameGrid();
		}
		if (ObjectManager.GetInstance().playerLevelModel.GetPlayerLevel() >= 2 && !ObjectManager.GetInstance().userDataModel.BagOpenState)
		{
			ObjectManager.GetInstance().userDataModel.BagOpenState = true;
			BagButton.SetSelfActive<Button>(true);
		}
	}

	private void UpdateOrderZone()
	{
		ObjectManager.GetInstance().gameOrdersModel.RefreshShowingOrders();
		updateOrderList();
		updateTopPos();
		UpdateGameGrid();
	}

	private void UpdateOrderZoneOnWaveReward(bool isMultWave)
	{
		ObjectManager.GetInstance().gameOrdersModel.RefreshShowingOrders();
		if (isMultWave || (!isMultWave && !ObjectManager.GetInstance().orderWaveRewardModel.CanClaimWaveReward_Multi()))
		{
			PrepareWaveFinishAnim();
		}
		if (!ObjectManager.GetInstance().orderWaveRewardModel.CanPopSuperDishPreview())
		{
			OrderWaveRewardModel.IsHidingWaveIconBeforePreview = false;
		}
		updateOrderList();
		updateTopPos();
		if (isMultWave || (!isMultWave && !ObjectManager.GetInstance().orderWaveRewardModel.CanClaimWaveReward_Multi()))
		{
			PlayWaveFinishAnim();
		}
		UpdateGameGrid();
	}

	private void PrepareWaveFinishAnim()
	{
		if (!((Object)(object)m_ordersViewLogic == (Object)null))
		{
			GameLevelOrdersViewLogic ordersViewLogic = m_ordersViewLogic;
			if (!((Object)(object)ordersViewLogic == (Object)null))
			{
				ordersViewLogic.SetWaveFinishAnimState();
			}
		}
	}

	private void PlayWaveFinishAnim()
	{
		if (!((Object)(object)m_ordersViewLogic == (Object)null))
		{
			GameLevelOrdersViewLogic ordersViewLogic = m_ordersViewLogic;
			if (!((Object)(object)ordersViewLogic == (Object)null))
			{
				ordersViewLogic.PlayWaveFinishAnim();
			}
		}
	}

	public void UpdateBagCapacity()
	{
		bool openState = ObjectManager.GetInstance().bagGeneratorStorageModel.OpenState;
		int totalPage = ObjectManager.GetInstance().bagGeneratorStorageModel.GetTotalPage();
		totalPage = (openState ? totalPage : 0);
		(int hasCount, int totalCount) bagGeneratorStorageInfo = ObjectManager.GetInstance().bagGeneratorStorageModel.GetBagGeneratorStorageInfo();
		int item = bagGeneratorStorageInfo.hasCount;
		int item2 = bagGeneratorStorageInfo.totalCount;
		int num = 0;
		int num2 = Singleton<GameLevelManager>.Instance.GetBagGoodsNum();
		int num3 = Singleton<GameLevelManager>.Instance.GetGameBagOpenNum();
		if (!openState || totalPage <= 0)
		{
			num = 0;
		}
		else
		{
			num = item2;
			num2 += item;
			num3 += num;
		}
		bool bagLimitIsShow = ObjectManager.GetInstance().gameLevelModel.GetBagLimitIsShow();
		if (bagLimitIsShow)
		{
			BagLimitGo.SetSelfActive(active: true);
			CapacityText.SetSelfActive<Text>(false);
		}
		else
		{
			BagLimitGo.SetSelfActive(active: false);
			CapacityText.SetSelfActive<Text>(true);
		}
		if (bagLimitIsShow)
		{
			int gameBagLimitOpenNum = Singleton<GameLevelManager>.Instance.GetGameBagLimitOpenNum();
			int num4 = num3 + gameBagLimitOpenNum;
			BagCurrentGoodsText.text = num2 + "뺳";
			BagLimitText.text = num4.ToString();
		}
		else
		{
			CapacityText.text = num2 + "뺳" + num3;
		}
		if (ObjectManager.GetInstance().userDataModel.BagOpenState)
		{
			BagButton.SetSelfActive<Button>(true);
		}
		else
		{
			BagButton.SetSelfActive<Button>(false);
		}
	}

	public void updateTopPos(bool playFinishOrderAnim = false)
	{
		UpdateRedpoint();
		int preNum = 0;
		UpdateOrdersViewPos(preNum, playFinishOrderAnim);
	}

	protected void UpdateRedpoint()
	{
		bool flag = ObjectManager.GetInstance().taskBuildModel.HasTaskCanCompleteTip();
		if (!flag)
		{
			flag = ObjectManager.GetInstance().illustratedDataModel.GetRedpointState();
		}
		if (!flag)
		{
			flag = ObjectManager.GetInstance().taskPassModel.GetRedpointState();
		}
		if (!flag)
		{
			flag = ObjectManager.GetInstance().taskPassModelV2.GetRedpointState();
		}
		if (!flag)
		{
			flag = ObjectManager.GetInstance().taskThemePassModel.GetRedpointState();
		}
		if (!flag)
		{
			flag = ObjectManager.GetInstance().taskThemePassModelV2.GetRedpointState();
		}
		if (!flag)
		{
			flag = ObjectManager.GetInstance().diamondPassModel.GetRedpointState();
		}
		img_task_redpoint.SetSelfActive<Transform>(flag);
	}

	protected virtual void updateOrderList(int trigger = 0, int triggerValue = 0)
	{
		if ((Object)(object)m_ordersViewLogic != (Object)null)
		{
			m_ordersViewLogic.UpdateView(trigger, triggerValue);
		}
	}

	protected void UpdateOrderSurprise()
	{
		if ((Object)(object)m_ordersViewLogic != (Object)null)
		{
			m_ordersViewLogic.UpdateOrderSurprise();
		}
	}

	protected void UpdateOrderFirePot()
	{
		if ((Object)(object)m_ordersViewLogic != (Object)null)
		{
			m_ordersViewLogic.UpdateOrderFirePot();
		}
	}

	protected void UpdateFireHelperIcon(bool isBegin = false)
	{
		bool flag = ObjectManager.GetInstance().fireHelperModel.ICanShowMergeViewActivityEntry();
		fireHelperIcon.SetSelfActive<FireHelperGameIconLogic>(flag);
		((Component)fireHelperIcon).transform.parent.SetSelfActive<Transform>(flag);
		if (flag)
		{
			fireHelperIcon.Init(isBegin);
		}
		if (isBegin & flag)
		{
			fireHelperIcon.FirstOpen();
		}
	}

	protected void AddOrderFunZoneItems()
	{
		if ((Object)(object)m_ordersViewLogic != (Object)null)
		{
			m_ordersViewLogic.InitOrderZoneItems();
		}
	}

	public virtual void CheckOrderUpdate(int id)
	{
		if (CheckInOrderGoods(id) > 0)
		{
			updateOrderList();
			UpdateGameGrid();
		}
		else if (GameLevelDefine.IsOrderLackMaterial(id))
		{
			updateOrderList();
			UpdateGameGrid();
		}
		if (CheckInBingoGoods(id) > 0)
		{
			EventManager.GetInstance().DispatchEvent(100281);
		}
	}

	public void OnlyUpdateOrderList()
	{
		updateOrderList();
	}

	public void MergeSuccessCheckUpdate(int mergeID, int preID)
	{
		if (CheckInOrderGoods(mergeID) > 0 || CheckInOrderGoods(preID) > 0)
		{
			updateOrderList();
			UpdateGameGrid();
		}
		else if (GameLevelDefine.IsOrderLackMaterial(mergeID) || GameLevelDefine.IsOrderLackMaterial(preID))
		{
			updateOrderList();
			UpdateGameGrid();
		}
		if (CheckInBingoGoods(mergeID) > 0)
		{
			EventManager.GetInstance().DispatchEvent(100281);
		}
	}

	public virtual void UpdateOrderBubble(int id)
	{
		if (IsEnter)
		{
			GameOrderMatBubbleLogic.JudgeDispatcherGreenBubble(id);
		}
	}

	public virtual int CheckInOrderGoods(int id)
	{
		if (ObjectManager.GetInstance().gameOrdersModel.CanFinishOrdersGoods != null && ObjectManager.GetInstance().gameOrdersModel.CanFinishOrdersGoods.Contains(id))
		{
			return 2;
		}
		if (ObjectManager.GetInstance().raceWinnerOrderModel.CanFinishOrdersGoods != null && ObjectManager.GetInstance().raceWinnerOrderModel.CanFinishOrdersGoods.Contains(id))
		{
			return 2;
		}
		if (MonoSingleton<OrderActivityCacheManager>.Instance.HasGoodsID_CanCommitOrder(id))
		{
			return 2;
		}
		if (ObjectManager.GetInstance().gameOrdersModel.GameLevelOrdersStillNeedGoodsIDs != null && ObjectManager.GetInstance().gameOrdersModel.GameLevelOrdersStillNeedGoodsIDs.Contains(id))
		{
			return 1;
		}
		if (ObjectManager.GetInstance().raceWinnerOrderModel.GameLevelOrdersStillNeedGoodsIDs != null && ObjectManager.GetInstance().raceWinnerOrderModel.GameLevelOrdersStillNeedGoodsIDs.Contains(id))
		{
			return 1;
		}
		if (MonoSingleton<OrderActivityCacheManager>.Instance.HasGoodsID_TotalOrderMat_StillNeed(id))
		{
			return 1;
		}
		if (GameLevelDefine.LackCookingMats != null && GameLevelDefine.LackCookingMats.TryGetValue(id, out var value))
		{
			for (int i = 0; i < value.Count; i++)
			{
				if (value[i] != null && value[i].isShow)
				{
					return 3;
				}
			}
			return 999;
		}
		return 0;
	}

	public virtual int CheckInBingoGoods(int id)
	{
		if (ObjectManager.GetInstance().bingoModel.BingoSurplusGridGoodsIDList != null && ObjectManager.GetInstance().bingoModel.BingoSurplusGridGoodsIDList.Contains(id))
		{
			return 1;
		}
		return 0;
	}

	protected virtual void OnFinishOrder(int _needFinishOrderId)
	{
		updateOrderList();
		updateTopPos(playFinishOrderAnim: true);
		UpdateGameGrid();
		UpdateBagCapacity();
		EventManager.GetInstance().DispatchEvent(100109);
	}

	protected void UpdateGameGrid()
	{
		if (AirPlaneModel.isForbidUpdateGrid)
		{
			return;
		}
		List<GameLevelGrid> list = mGridObjectDic.Values.ToList();
		for (int i = 0; i < list.Count; i++)
		{
			GameLevelGrid gameLevelGrid = list[i];
			if ((Object)(object)gameLevelGrid == (Object)null || gameLevelGrid.IsLock || gameLevelGrid.GetGameGoodsVo() == null)
			{
				continue;
			}
			GameGoodsVo gameGoodsVo = gameLevelGrid.GetGameGoodsVo();
			if (!IGoodsBaseVo.CannotDrag(gameGoodsVo.GoodsState) && gameGoodsVo.GoodsState != GameGoodsState.Bubble)
			{
				if (gameLevelGrid.GetItemTaskType() > 0 && CheckInOrderGoods(gameGoodsVo.goodsID) <= 0)
				{
					gameLevelGrid.UpdateGameLevelItem(backgroundAnim: false);
				}
				else if (gameLevelGrid.GetItemTaskType() <= 0 && CheckInOrderGoods(gameGoodsVo.goodsID) > 0)
				{
					gameLevelGrid.UpdateGameLevelItem(backgroundAnim: false);
				}
				else if (gameLevelGrid.GetItemTaskType() > 0 && CheckInOrderGoods(gameGoodsVo.goodsID) > 0 && gameLevelGrid.GetItemTaskType() != CheckInOrderGoods(gameGoodsVo.goodsID))
				{
					gameLevelGrid.UpdateGameLevelItem(backgroundAnim: false);
				}
				else if (gameGoodsVo.MakeMaterials != null && gameGoodsVo.MakeMaterials.Count > 0)
				{
					gameLevelGrid.UpdateGameLevelItem(backgroundAnim: false);
				}
			}
		}
	}

	protected void OnBingoCommit(int bingoGridID)
	{
		TimeManager.Instance.Schedule(this, (float dt) =>
		{
			BingoGridVO bingoGridVoByGridID = ObjectManager.GetInstance().bingoModel.GetBingoGridVoByGridID(bingoGridID);
			if (bingoGridVoByGridID != null && CheckInOrderGoods(bingoGridVoByGridID.goodsID) > 0)
			{
				UpdateGameGrid();
			}
		}, 0.1f, 1);
	}

	protected void OnBingoGoodsChange()
	{
		List<GameLevelGrid> list = mGridObjectDic.Values.ToList();
		for (int i = 0; i < list.Count; i++)
		{
			GameLevelGrid gameLevelGrid = list[i];
			if ((Object)(object)gameLevelGrid == (Object)null || gameLevelGrid.IsLock || gameLevelGrid.GetGameGoodsVo() == null)
			{
				continue;
			}
			GameGoodsVo gameGoodsVo = gameLevelGrid.GetGameGoodsVo();
			if (!IGoodsBaseVo.CannotDrag(gameGoodsVo.GoodsState) && gameGoodsVo.GoodsState != GameGoodsState.Bubble)
			{
				if (gameLevelGrid.GetItemBingoType() > 0 && CheckInBingoGoods(gameGoodsVo.goodsID) <= 0)
				{
					gameLevelGrid.UpdateGameLevelItem(backgroundAnim: false);
				}
				else if (gameLevelGrid.GetItemBingoType() <= 0 && CheckInBingoGoods(gameGoodsVo.goodsID) > 0)
				{
					gameLevelGrid.UpdateGameLevelItem(backgroundAnim: false);
				}
			}
		}
	}

	public void ResetGameGrid()
	{
		PlayCloudShowAnim = false;
		mCurrentSelect = null;
		int gridID = GuideWeakFingerChangeGuideTrans_1();
		int guideID = MonoSingleton<GuideWeakManager>.Instance.GuideID;
		RecoveryGrid();
		CreateGameGrid();
		if (guideID > 0 && MonoSingleton<GuideWeakManager>.Instance.GuideID == guideID)
		{
			ChangeGuideWeakGuideTrans(gridID);
		}
		UpdateSelectGoodsInfo();
		UpdateLockGrid();
	}

	private void ResetGameView()
	{
		mCurrentSelect = null;
		RecoveryGrid();
		CreateGameGrid();
		UpdateSelectGoodsInfo();
		UpdateLockGrid();
	}

	private int GuideWeakFingerChangeGuideTrans_1()
	{
		if (MonoSingleton<GuideWeakManager>.Instance.mShowGuideDispactherData != null && (Object)(object)MonoSingleton<GuideWeakManager>.Instance.mShowGuideDispactherData.guideTransParent != (Object)null && (Object)(object)MonoSingleton<GuideWeakManager>.Instance.mShowGuideDispactherData.guideTrans != (Object)null)
		{
			GameLevelItem component = ((Component)MonoSingleton<GuideWeakManager>.Instance.mShowGuideDispactherData.guideTrans).GetComponent<GameLevelItem>();
			if ((Object)(object)component != (Object)null && (Object)(object)component.GetGameLevelGrid() != (Object)null && component.GetGameLevelGrid().GetGridId() > 0)
			{
				return component.GetGameLevelGrid().GetGridId();
			}
		}
		return -1;
	}

	private void ChangeGuideWeakGuideTrans(int gridID)
	{
		if (mGridObjectDic != null && mGridObjectDic.ContainsKey(gridID) && (Object)(object)mGridObjectDic[gridID] != (Object)null && (Object)(object)mGridObjectDic[gridID].GetGameLevelItem() != (Object)null && (Object)(object)MonoSingleton<GuideWeakManager>.Instance.Finger != (Object)null)
		{
			MonoSingleton<GuideWeakManager>.Instance.mShowGuideDispactherData.guideTrans = ((Component)mGridObjectDic[gridID].GetGameLevelItem()).transform;
			MonoSingleton<GuideWeakManager>.Instance.Finger.GuideTrans = ((Component)mGridObjectDic[gridID].GetGameLevelItem()).transform;
		}
	}

	public void CreateMapBg()
	{
		//IL_000d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0012: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c7: Unknown result type (might be due to invalid IL or missing references)
		//IL_00d2: Unknown result type (might be due to invalid IL or missing references)
		mGridBgObjectDic = new Dictionary<int, GameLevelGridBg>();
		GameLevelGridBg gameLevelGridBg = null;
		Vector3 zero = Vector3.zero;
		mMapBgGo = new List<GameLevelGridBg>();
		for (int i = 1; i <= Rows; i++)
		{
			for (int j = 1; j <= Columns; j++)
			{
				int num = i * 10 + j;
				gameLevelGridBg = Singleton<ResCacheManager>.Instance.GetRes<GameLevelGridBg>();
				if ((Object)(object)gameLevelGridBg == (Object)null)
				{
					Log.E("숤끕\u20f9䘥䑛&\u0085厄쉊끔涽敋楳3º厹숏끟犯椐䱘\u0015Î反刘樳\ud9ccĕ");
					continue;
				}
				((Object)gameLevelGridBg).name = "숎끈枰式䝫\u0010¢厡" + num;
				((Component)gameLevelGridBg).transform.SetParent(GridBgParent);
				gameLevelGridBg.LocalIdentity<GameLevelGridBg>();
				gameLevelGridBg.Init(this);
				if (IsHideGridBg(num))
				{
					gameLevelGridBg.HideGridBg();
				}
				zero = new Vector3((float)(j - 1) * GridWidth + InitialPositionX, (float)(-(i - 1)) * GridHeight + InitialPositionY);
				((Component)gameLevelGridBg).transform.localPosition = zero;
				mMapBgGo.Add(gameLevelGridBg);
				if (!mGridBgObjectDic.ContainsKey(num))
				{
					mGridBgObjectDic.Add(num, gameLevelGridBg);
				}
			}
		}
	}

	public virtual void CreateGameGrid()
	{
		//IL_0036: Unknown result type (might be due to invalid IL or missing references)
		//IL_003b: Unknown result type (might be due to invalid IL or missing references)
		//IL_00e3: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ee: Unknown result type (might be due to invalid IL or missing references)
		IsGameMapInit = true;
		GridKeyList.Clear();
		mLockGridDic = new Dictionary<int, List<Transform>>();
		Dictionary<int, GameGoodsVo> levelMap = Singleton<GameLevelManager>.Instance.GetLevelMap(copyData: false);
		mGridObjectDic = new Dictionary<int, GameLevelGrid>();
		GameLevelGrid gameLevelGrid = null;
		Vector3 zero = Vector3.zero;
		int num = 0;
		for (int i = 1; i <= Rows; i++)
		{
			for (int j = 1; j <= Columns; j++)
			{
				int num2 = i * 10 + j;
				GridKeyList.Add(num2);
				gameLevelGrid = Singleton<ResCacheManager>.Instance.GetRes<GameLevelGrid>();
				if ((Object)(object)gameLevelGrid == (Object)null)
				{
					Log.E("숤끕\u20f9䘥䑛&\u0085厄쉊끔涽敋楳3º厹숏끟犯椐䱘\u0015Î反核㼹");
					continue;
				}
				((Object)gameLevelGrid).name = "參橲ā讑酟" + num2;
				((Component)gameLevelGrid).transform.SetParent(GridParent);
				gameLevelGrid.LocalIdentity<GameLevelGrid>();
				zero = new Vector3((float)(j - 1) * GridWidth + InitialPositionX, (float)(-(i - 1)) * GridHeight + InitialPositionY);
				((Component)gameLevelGrid).transform.localPosition = zero;
				GameGoodsBase goodsBase = null;
				GameGoodsVo gameGoodsVo = null;
				if (levelMap != null && levelMap.ContainsKey(num2))
				{
					gameGoodsVo = levelMap[num2];
					if (gameGoodsVo != null)
					{
						goodsBase = Singleton<GameLevelManager>.Instance.GetGameGoodsBaseById(gameGoodsVo.goodsID, gameLevelGrid, gameGoodsVo, 0, 0, 0, excludeZero: false);
					}
				}
				GameLevelGridBg value = null;
				mGridBgObjectDic.TryGetValue(num2, out value);
				gameLevelGrid.Init(num2, goodsBase, this, num, value);
				mGridObjectDic.Add(num2, gameLevelGrid);
				if (!Singleton<GameLevelManager>.Instance.GridUnlock(num2))
				{
					IGameInitVo gameInitVoByID = Singleton<GameLevelManager>.Instance.GetGameInitVoByID(num2);
					if (gameInitVoByID != null && gameInitVoByID.unlockLv > Singleton<GameLevelManager>.Instance.GetGridUnlockCondition())
					{
						if (!mLockGridDic.ContainsKey(gameInitVoByID.unlockLv))
						{
							mLockGridDic.Add(gameInitVoByID.unlockLv, new List<Transform>());
						}
						mLockGridDic[gameInitVoByID.unlockLv].Add(((Component)gameLevelGrid).transform);
					}
					else
					{
						Singleton<GameLevelManager>.Instance.UnlockGridById(num2);
					}
				}
				num++;
			}
		}
		UpdateShapeGrid();
		IsGameMapInit = false;
	}

	private void UpdateShapeGrid()
	{
		List<GameLevelGrid> list = mGridObjectDic.Values.ToList();
		for (int i = 0; i < list.Count; i++)
		{
			if ((Object)(object)list[i] == (Object)null || list[i].GetGameGoodsBase() == null || list[i].GetGoodsBaseVo() == null)
			{
				continue;
			}
			IGoodsShapeVo shapeData = list[i].GetGoodsBaseVo().GetShapeData();
			if (shapeData == null)
			{
				continue;
			}
			List<int> areaGridIdByGridId = shapeData.GetAreaGridIdByGridId(list[i].GetGridId());
			if (areaGridIdByGridId == null || areaGridIdByGridId.Count < 1)
			{
				continue;
			}
			for (int j = 0; j < areaGridIdByGridId.Count; j++)
			{
				if (areaGridIdByGridId[j] != list[i].GetGridId())
				{
					GameLevelGrid value = null;
					if (mGridObjectDic.TryGetValue(areaGridIdByGridId[j], out value))
					{
						value.SetShapeHeadGridId(list[i].GetGridId());
						list[i].AddShapeGridId(areaGridIdByGridId[j]);
					}
				}
			}
			list[i].UpdateTopLayer();
			if (mGridBgObjectDic.TryGetValue(list[i].GetGridId(), out var value2))
			{
				((Component)value2).transform.SetSiblingIndex(((Component)value2).transform.parent.childCount - 1);
			}
		}
	}

	public void UpdateLockGrid()
	{
		if (mUnlockGo != null && mUnlockGo.Count > 0)
		{
			for (int i = 0; i < mUnlockGo.Count; i++)
			{
				Object.Destroy((Object)(object)mUnlockGo[i]);
			}
			mUnlockGo.Clear();
		}
		if (mLockGridDic == null)
		{
			return;
		}
		foreach (KeyValuePair<int, List<Transform>> item in mLockGridDic)
		{
			ShowUnlockCondition(item.Value, item.Key);
		}
	}

	private void ShowUnlockCondition(List<Transform> gridTrans, int unlockLv)
	{
		//IL_0139: Unknown result type (might be due to invalid IL or missing references)
		//IL_005d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0062: Unknown result type (might be due to invalid IL or missing references)
		//IL_0064: Unknown result type (might be due to invalid IL or missing references)
		//IL_0076: Unknown result type (might be due to invalid IL or missing references)
		//IL_006e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0088: Unknown result type (might be due to invalid IL or missing references)
		//IL_0080: Unknown result type (might be due to invalid IL or missing references)
		//IL_009a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0092: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ac: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a4: Unknown result type (might be due to invalid IL or missing references)
		if (gridTrans == null || gridTrans.Count <= 0)
		{
			return;
		}
		float num = float.MinValue;
		float num2 = float.MaxValue;
		float num3 = float.MinValue;
		float num4 = float.MaxValue;
		float num5 = 0f;
		for (int i = 0; i < gridTrans.Count; i++)
		{
			Vector3[] array = new Vector3[4];
			((Component)gridTrans[i]).GetComponent<RectTransform>().GetWorldCorners(array);
			Vector3[] array2 = array;
			foreach (Vector3 val in array2)
			{
				if (val.x > num)
				{
					num = val.x;
				}
				if (val.x < num2)
				{
					num2 = val.x;
				}
				if (val.y > num3)
				{
					num3 = val.y;
				}
				if (val.y < num4)
				{
					num4 = val.y;
				}
				num5 = val.z;
			}
		}
		GameObject val2 = Object.Instantiate<GameObject>(UnlockConditionGo);
		UnlockCondition component = val2.GetComponent<UnlockCondition>();
		if ((Object)(object)component != (Object)null)
		{
			component.Init(unlockLv);
		}
		val2.transform.SetParent(GridParent);
		val2.transform.LocalIdentity<Transform>();
		val2.transform.position = new Vector3((num2 + num) / 2f, (num3 + num4) / 2f, num5);
		if (mUnlockGo == null)
		{
			mUnlockGo = new List<GameObject>();
		}
		mUnlockGo.Add(val2);
	}

	public virtual void MergeSuccess(GameLevelGrid targetGrid, GameLevelGrid dragGrid = null)
	{
		if ((Object)(object)targetGrid == (Object)null)
		{
			return;
		}
		EventManager.GetInstance().DispatchEvent(202123, VibrateManager.VibrateType.Moderate);
		ObjectManager.GetInstance().taskPassModel.SetTaskPassQuestNum(DailyTaskType.MergeGoods, 1);
		ObjectManager.GetInstance().taskPassModelV2.SetTaskPassQuestNum(DailyTaskType.MergeGoods, 1);
		ObjectManager.GetInstance().taskThemePassModel.SetTaskPassQuestNum(DailyTaskType.MergeGoods, 1);
		ObjectManager.GetInstance().taskThemePassModelV2.SetTaskPassQuestNum(DailyTaskType.MergeGoods, 1);
		ObjectManager.GetInstance().dailyChallengeModel.SetChallengeTask(DailyTaskType.MergeGoods, 1);
		ObjectManager.GetInstance().taskSevenDayModel.SetSevenDayTaskChange(SevenDayTaskType.MergeGoods, 1L);
		ObjectManager.GetInstance().userDataModel.UserMergeCount(1);
		RemoveMergeHint();
		GameLevelDefine.ClearOrderNeedLowLevelGoods();
		GameLevelGrid value = null;
		GameGoodsVo gameGoodsVo = null;
		IGoodsBaseVo goodsBaseVo = null;
		bool flag = false;
		if (mGridObjectDic.TryGetValue(targetGrid.GetGridId(), out value))
		{
			gameGoodsVo = value.GetGameGoodsVo();
			goodsBaseVo = value.GetGoodsBaseVo();
			if (gameGoodsVo != null)
			{
				GameLevelDefine.ChangeGeneratorUUIDToDisk(gameGoodsVo, 1);
				EventManager.GetInstance().DispatchEvent(100121, gameGoodsVo.goodsID);
				MonoSingleton<PlayerStateManager>.Instance.Trigger(EPlayerStateTrigger.Merge);
				ObjectManager.GetInstance().taskPassModel.SetTaskPassQuestNum(DailyTaskType.MergeTargetGoods, 1, gameGoodsVo.goodsID);
				ObjectManager.GetInstance().taskPassModelV2.SetTaskPassQuestNum(DailyTaskType.MergeTargetGoods, 1, gameGoodsVo.goodsID);
				ObjectManager.GetInstance().taskThemePassModel.SetTaskPassQuestNum(DailyTaskType.MergeTargetGoods, 1, gameGoodsVo.goodsID);
				ObjectManager.GetInstance().taskThemePassModelV2.SetTaskPassQuestNum(DailyTaskType.MergeTargetGoods, 1, gameGoodsVo.goodsID);
				MonoSingleton<GuideManager>.Instance.CurrentProduceId = gameGoodsVo.goodsID;
			}
			if (goodsBaseVo != null)
			{
				Singleton<GameLevelManager>.Instance.PlayAudio(1, goodsBaseVo.level, IndependentType.None, goodsBaseVo.goodsID);
				if (IGoodsBaseVo.IsCreator(goodsBaseVo.type))
				{
					CheckGeneratorNocdState(value);
				}
			}
			if ((Object)(object)value.GetGameLevelItem() != (Object)null)
			{
				value.GetGameLevelItem().PlayMergeAnim();
			}
			int gridId = value.GetGridId() - 1;
			ChangeGridItemToLock(gridId);
			int gridId2 = value.GetGridId() + 1;
			ChangeGridItemToLock(gridId2);
			int gridId3 = value.GetGridId() - 10;
			ChangeGridItemToLock(gridId3);
			int gridId4 = value.GetGridId() + 10;
			ChangeGridItemToLock(gridId4);
			if (gameGoodsVo != null)
			{
				float num = 30f;
				if (TaskChain.Drop.HandleMergeDrop(value.GameItemParent, gameGoodsVo.goodsID))
				{
					num += 30f;
				}
				if (GauntletTreasure.Drop.HandleMergeDrop(value.GameItemParent, gameGoodsVo.goodsID))
				{
					num += 30f;
				}
				if (BoostRaceTaskChain.Drop.HandleMergeDrop(value.GameItemParent, gameGoodsVo.goodsID))
				{
					num += 30f;
				}
				if (ObjectManager.GetInstance().orderReturnBackModel.IsShowMergeToken(gameGoodsVo.goodsID))
				{
					num += 30f;
				}
				EventManager.GetInstance().DispatchEvent<Transform, int, float>(203236, value.GameItemParent, gameGoodsVo.goodsID, 0f);
				EventManager.GetInstance().DispatchEvent(203244);
				EventManager.GetInstance().DispatchEvent<Transform, int, float>(203218, value.GameItemParent, gameGoodsVo.goodsID, 0f);
				if (Race1v1Code.Drop.HandleMergeDrop(value.GameItemParent, gameGoodsVo.goodsID, num))
				{
					num += 30f;
				}
				MergeGoodsSuccess(gameGoodsVo.goodsID, targetGrid.GameItemParent);
				GetNewGoods(gameGoodsVo.goodsID, value);
				EventManager.GetInstance().DispatchEvent(100105, gameGoodsVo.goodsID);
			}
			AddExtraDrops(value);
			if (gameGoodsVo != null && gameGoodsVo.MergeDropList.Count > 0)
			{
				value.OnUpdateAttribute();
			}
		}
		if (Singleton<GameLevelManager>.Instance.ImmediatelyHintOrderId > 0 && Singleton<GameLevelManager>.Instance.ImmediatelyHintStartOrderId > 0)
		{
			bool flag2 = ObjectManager.GetInstance().gameOrdersModel.IsCompleteOrder(Singleton<GameLevelManager>.Instance.ImmediatelyHintStartOrderId);
			bool flag3 = ObjectManager.GetInstance().gameOrdersModel.IsCompleteOrder(Singleton<GameLevelManager>.Instance.ImmediatelyHintOrderId);
			if (flag2 && !flag3)
			{
				EventManager.GetInstance().DispatchEvent(100125);
			}
		}
		if ((Object)(object)GameObject.Find("숏끛澴搐䝳=Â叁숆끯殷䠇獛1²厱쉂끔澭湃楷>Â叁欷㸱") != (Object)null)
		{
			flag = true;
		}
		if (MonoSingleton<GuideManager>.Instance.IsInGuide())
		{
			flag = true;
		}
		if (!flag && ObjectManager.GetInstance().bingoModel.CanOpenNewSectionActivity())
		{
			flag = ObjectManager.GetInstance().bingoModel.OpenNewSectionActivity();
		}
		if (!flag)
		{
			flag = ObjectManager.GetInstance().adGiftModel.OpenAdGiftByMerge();
		}
	}

	public bool CreateNewGoods(int id, Transform startTrans = null, bool isGMGoods = false, int initUseNum = 0, bool isFindLastestEmptyGrid = false, bool isNeedHideItem = false, bool isFromSpecial = false, float delayShow = 0f)
	{
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(id);
		if (!isGMGoods && goodsBaseVoById != null && goodsBaseVoById.activityType > 0)
		{
			return false;
		}
		GameLevelGrid gameLevelGrid = null;
		gameLevelGrid = ((!isFindLastestEmptyGrid) ? GetNearbyEmptyGrid(GetCenterGridID(), showEnoughTip: true, startTrans, id) : GetLowestEmptyGrid(showEnoughTip: false, startTrans, id));
		if (goodsBaseVoById != null && (Object)(object)gameLevelGrid != (Object)null)
		{
			MonoSingleton<GuideWeakManager>.Instance.GetGuideModel.RecordClaimGoodsReward();
			if (MonoSingleton<GuideWeakManager>.Instance.CanRemoveFingerForClaimRewardsZone())
			{
				MonoSingleton<GuideWeakManager>.Instance.ConsumeClickTimes_GuideType(10);
				MonoSingleton<GuideWeakManager>.Instance.ConsumeClickTimes_GuideType(19);
			}
			GameGoodsVo gameGoodsVo = new GameGoodsVo();
			gameGoodsVo.goodsID = goodsBaseVoById.goodsID;
			gameGoodsVo.GoodsState = GameGoodsState.Normal;
			if (isGMGoods && initUseNum > 0)
			{
				gameGoodsVo.GoodsUses = initUseNum;
			}
			GameLevelDefine.SetResidualValue(gameGoodsVo);
			GameGoodsBase gameGoodsBaseById = Singleton<GameLevelManager>.Instance.GetGameGoodsBaseById(gameGoodsVo.goodsID, gameLevelGrid, gameGoodsVo);
			gameLevelGrid.ChangeGameGoodsVo(gameGoodsBaseById, "कₕ", !isFromSpecial, isFromSpecial);
			Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(goodsBaseVoById.goodsID, gameGoodsVo.GoodsUses, gameGoodsBaseById.GameGoods);
			GameLevelDefine.ChangeGeneratorUUIDToDisk(gameGoodsBaseById.GameGoods, 1);
			CheckGeneratorNocdState(gameLevelGrid);
			ProduceNewGoods(goodsBaseVoById.goodsID, !isFromSpecial, gameLevelGrid.GameItemParent, !isFromSpecial);
			GetNewGoods(goodsBaseVoById.goodsID, gameLevelGrid, 0.4f);
			MonoSingleton<GuideManager>.Instance.CurrentProduceId = id;
			AutoSelectGoods(gameLevelGrid);
			EventManager.GetInstance().DispatchEvent(100105, id);
			if (IGoodsBaseVo.IsCreator(goodsBaseVoById.type) || IGoodsBaseVo.IsInstrument(goodsBaseVoById.type))
			{
				Singleton<GameLevelManager>.Instance.ChangeGeneratorOrMachine(gameLevelGrid.GetGameGoodsVo());
				if (IGoodsBaseVo.IsCreator(goodsBaseVoById.type) && ObjectManager.GetInstance().goodsBuffModel.GetBuffRemainTime(GoodsBuffType.Generator_No_CD, goodsBaseVoById.series) > 0 && gameLevelGrid.GetGameGoodsVo() != null)
				{
					gameLevelGrid.GetGameGoodsVo().FillUpProduceNum();
					gameLevelGrid.SaveGridData();
				}
			}
			if (gameGoodsBaseById != null && gameGoodsBaseById.GameGoods != null && gameGoodsBaseById.GoodsBaseVo != null && IGoodsBaseVo.IsTreasureBox(gameGoodsBaseById.GoodsBaseVo.type) && !MonoSingleton<GuideManager>.Instance.IsInGuide())
			{
				IGoodsProduceVo initiativeProduceById = Singleton<GameLevelManager>.Instance.GetInitiativeProduceById(goodsBaseVoById.goodsID);
				if (initiativeProduceById != null)
				{
					if (initiativeProduceById.GetMinCDTime() > 0)
					{
						if (!IsGoodsBoxCDing())
						{
							MonoSingleton<GuideWeakManager>.Instance.ShowGuideNewGoodsBox(((Component)gameLevelGrid.GetGameLevelItem()).transform, ((Component)this).transform, 1);
						}
					}
					else
					{
						MonoSingleton<GuideWeakManager>.Instance.ShowGuideNewGoodsBox(((Component)gameLevelGrid.GetGameLevelItem()).transform, ((Component)this).transform, 2);
					}
				}
			}
			if ((Object)(object)startTrans != (Object)null)
			{
				gameLevelGrid.GetGameLevelItem()?.PlayItemFly(startTrans);
			}
			EventManager.GetInstance().DispatchEvent<Transform, int, float>(203236, gameLevelGrid.GameItemParent, id, isNeedHideItem ? delayShow : 0f);
			EventManager.GetInstance().DispatchEvent(203244);
			EventManager.GetInstance().DispatchEvent<Transform, int, float>(203218, gameLevelGrid.GameItemParent, id, isNeedHideItem ? delayShow : 0f);
			if (isNeedHideItem)
			{
				gameLevelGrid.SetItemShowState(show: false);
			}
			return true;
		}
		return false;
	}

	public void ChangeGridItemToLock(int _gridId)
	{
		if (!Singleton<GameLevelManager>.Instance.GridUnlock(_gridId))
		{
			return;
		}
		GameLevelGrid value = null;
		if (!mGridObjectDic.TryGetValue(_gridId, out value) || value.GetGameGoodsVo() == null)
		{
			return;
		}
		if (value.GetGameGoodsVo().GoodsState == GameGoodsState.Covered)
		{
			value.ChangeGameGoodsState(GameGoodsState.Lock);
			Singleton<GameLevelManager>.Instance.PlayAudio(5);
			value.PlayCoveredBroken();
		}
		else if (value.GetGameGoodsVo().GoodsState == GameGoodsState.FakeCovered)
		{
			Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(value.GetGameGoodsVo().goodsID, 1, value.GetGameGoodsVo());
			GameLevelDefine.ChangeGeneratorUUIDToDisk(value.GetGameGoodsVo(), 1);
			value.ChangeGameGoodsState(GameGoodsState.Normal);
			ProduceNewGoods(value.GetGameGoodsVo().goodsID, showFristUnlock: false, value.GameItemParent);
			GetNewGoods(value.GetGameGoodsVo().goodsID, value);
			value.GetGameGoodsBase().InitializeAttribute();
			CheckGeneratorNocdState(value);
			value.UpdateGameLevelItem();
			value.SaveGridData();
			Singleton<GameLevelManager>.Instance.PlayAudio(5);
			value.PlayCoveredBroken();
			IGoodsBaseVo goodsBaseVo = value.GetGoodsBaseVo();
			if (IGoodsBaseVo.IsCreator(goodsBaseVo.type) || IGoodsBaseVo.IsInstrument(goodsBaseVo.type))
			{
				Singleton<GameLevelManager>.Instance.ChangeGeneratorOrMachine(value.GetGameGoodsVo());
			}
		}
		else if (value.GetGameGoodsVo().GoodsState == GameGoodsState.SpecialCovered)
		{
			value.ChangeGameGoodsState(GameGoodsState.SpecialLock);
			Singleton<GameLevelManager>.Instance.PlayAudio(5);
			value.PlayCoveredBroken();
		}
		EventManager.GetInstance().DispatchEvent(100105, value.GetGameGoodsVo().goodsID);
		ObjectManager.GetInstance().gameLevelModel.RefreshUnlockGridNum = true;
	}

	private GameLevelGrid CreateNearbyGoods(int gridId, int goodsId, GameGoodsState goodsState = GameGoodsState.Normal)
	{
		if (goodsId > 0)
		{
			GameLevelGrid nearbyEmptyGrid = GetNearbyEmptyGrid(gridId, showEnoughTip: false, null, goodsId);
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsId);
			if (goodsBaseVoById != null && (Object)(object)nearbyEmptyGrid != (Object)null)
			{
				GameGoodsVo gameGoodsVo = new GameGoodsVo();
				gameGoodsVo.goodsID = goodsBaseVoById.goodsID;
				gameGoodsVo.GoodsState = goodsState;
				bool flag = false;
				if (goodsState == GameGoodsState.Bubble)
				{
					if (ABTestSwitchDefine.BubbleGoodsSwitch() || Singleton<GameLevelManager>.Instance.BubbleDebug2)
					{
						flag = true;
					}
					if (flag)
					{
						gameGoodsVo.SetBubbleGoodsOpt(1);
						gameGoodsVo.InitiativeCDStarTime = ServerTimeManager.CurrentServerTime3();
					}
					else
					{
						gameGoodsVo.InitiativeCDStarTime = ObjectManager.GetInstance().analyticsModel.analyticsVO.playtime;
					}
					if (ObjectManager.GetInstance().bubbleDiscountModel.IsInDiscount())
					{
						IGoodsPriceVo goodsPriceVoById = Singleton<GameLevelManager>.Instance.GetGoodsPriceVoById(gameGoodsVo.goodsID);
						gameGoodsVo.BubbleDiscount = ObjectManager.GetInstance().bubbleDiscountModel.RandomDiscount(goodsPriceVoById.buy);
					}
				}
				else
				{
					gameGoodsVo.InitiativeCDStarTime = ServerTimeManager.CurrentTime();
				}
				nearbyEmptyGrid.ChangeGameGoodsVo(Singleton<GameLevelManager>.Instance.GetGameGoodsBaseById(gameGoodsVo.goodsID, nearbyEmptyGrid, gameGoodsVo), "匡橸ā诉象");
				if (flag && goodsState == GameGoodsState.Bubble)
				{
					gameGoodsVo.SetBubbleGoodsOpt(1);
				}
				if (goodsState != GameGoodsState.Bubble)
				{
					Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(gameGoodsVo.goodsID, 1, nearbyEmptyGrid.GetGameGoodsVo());
					ProduceNewGoods(gameGoodsVo.goodsID, showFristUnlock: false, nearbyEmptyGrid.GameItemParent);
					GetNewGoods(gameGoodsVo.goodsID, nearbyEmptyGrid, 0.4f);
				}
				GameLevelGrid value = null;
				if (mGridObjectDic.TryGetValue(gridId, out value))
				{
					nearbyEmptyGrid.GetGameLevelItem()?.PlayItemFly(value.GameItemParent);
				}
				EventManager.GetInstance().DispatchEvent(100105, goodsId);
				return nearbyEmptyGrid;
			}
		}
		return null;
	}

	private bool AddExtraDrops(GameLevelGrid _grid)
	{
		bool result = false;
		GameLevelGrid gameLevelGrid = null;
		if ((Object)(object)_grid == (Object)null)
		{
			return result;
		}
		GameGoodsVo gameGoodsVo = _grid.GetGameGoodsVo();
		if (gameGoodsVo == null)
		{
			return result;
		}
		IGoodsMergeVo goodsMergeVoById = Singleton<GameLevelManager>.Instance.GetGoodsMergeVoById(gameGoodsVo.goodsID);
		if (goodsMergeVoById == null)
		{
			return result;
		}
		bool flag = true;
		if (goodsMergeVoById.mergeDropBubble == 1 && GameLevelDefine.CanMustbeDropBubble(gameGoodsVo.goodsID))
		{
			gameLevelGrid = CreateNearbyGoods(_grid.GetGridId(), gameGoodsVo.goodsID, GameGoodsState.Bubble);
			GameLevelDefine.MustbeBubbleList.Add(gameGoodsVo.goodsID);
			flag = false;
			_ = GameConst.GAME_MODE;
		}
		if ((Object)(object)gameLevelGrid == (Object)null && Singleton<GameLevelManager>.Instance.CanDropBubble(gameGoodsVo.goodsID))
		{
			if (ABTestSwitchDefine.BubbleGoodsSwitch())
			{
				if (goodsMergeVoById.IsPossibleDropItem_opt(gameGoodsVo.goodsID))
				{
					gameLevelGrid = CreateNearbyGoods(_grid.GetGridId(), goodsMergeVoById.GetPossibleDropConfig(), GameGoodsState.Bubble);
					if (GameConst.GAME_MODE == GameConstMode.RELEASE)
					{
					}
				}
			}
			else if (goodsMergeVoById.IsPossibleDropItem())
			{
				gameLevelGrid = CreateNearbyGoods(_grid.GetGridId(), goodsMergeVoById.GetPossibleDropConfig(), GameGoodsState.Bubble);
				_ = GameConst.GAME_MODE;
			}
		}
		if (GameConst.GAME_MODE == GameConstMode.DEBUG && (Object)(object)gameLevelGrid == (Object)null && goodsMergeVoById.probability > 0 && Singleton<GameLevelManager>.Instance.BubbleDebug && Singleton<GameLevelManager>.Instance.CanDropBubble(gameGoodsVo.goodsID))
		{
			gameLevelGrid = CreateNearbyGoods(_grid.GetGridId(), goodsMergeVoById.GetPossibleDropConfig(), GameGoodsState.Bubble);
			_ = GameConst.GAME_MODE;
		}
		if ((Object)(object)gameLevelGrid != (Object)null)
		{
			ObjectManager.GetInstance().itemDataModel.ChangeItemNum(1009, -1L, needNotice: true, 0);
			if (flag)
			{
				Singleton<GameLevelManager>.Instance.CurrentBubbleNum++;
			}
			ObjectManager.GetInstance().taskPassModel.SetTaskPassQuestNum(DailyTaskType.DropBubble, 1);
			ObjectManager.GetInstance().taskPassModelV2.SetTaskPassQuestNum(DailyTaskType.DropBubble, 1);
			ObjectManager.GetInstance().dailyChallengeModel.SetChallengeTask(DailyTaskType.DropBubble, 1);
			ObjectManager.GetInstance().taskThemePassModel.SetTaskPassQuestNum(DailyTaskType.DropBubble, 1);
			ObjectManager.GetInstance().taskThemePassModelV2.SetTaskPassQuestNum(DailyTaskType.DropBubble, 1);
			if (gameLevelGrid.GetGameGoodsVo() != null)
			{
				GameLevelDefine.OnEventBubbleGoods("删狳\ud9ccń", gameLevelGrid.GetGameGoodsVo().goodsID, gameGoodsVo);
			}
			result = true;
		}
		return result;
	}

	public void ProduceNewGoods(int goodsID, bool showFristUnlock = false, Transform tipLocation = null, bool updateOrder = true)
	{
		if (showFristUnlock && !Singleton<GameLevelManager>.Instance.CheckGoodsUnlock(goodsID))
		{
			Singleton<GameLevelManager>.Instance.AddGoodsToUnlock(goodsID);
			Singleton<GameLevelManager>.Instance.ShowFristUnlock(goodsID, tipLocation);
		}
		else
		{
			Singleton<GameLevelManager>.Instance.AddGoodsToUnlock(goodsID);
		}
		if (!IsGameMapInit)
		{
			if (updateOrder)
			{
				CheckOrderUpdate(goodsID);
			}
			TimeManager.Instance.Schedule(this, (float arg0) =>
			{
				UpdateOrderBubble(goodsID);
			}, 0.0001f, 1);
			if (Singleton<GameLevelManager>.Instance.ImmediatelyHintOrderId > 0 && Singleton<GameLevelManager>.Instance.ImmediatelyHintStartOrderId > 0)
			{
				bool flag = ObjectManager.GetInstance().gameOrdersModel.IsCompleteOrder(Singleton<GameLevelManager>.Instance.ImmediatelyHintStartOrderId);
				bool flag2 = ObjectManager.GetInstance().gameOrdersModel.IsCompleteOrder(Singleton<GameLevelManager>.Instance.ImmediatelyHintOrderId);
				if (flag && !flag2)
				{
					EventManager.GetInstance().DispatchEvent(100125);
				}
			}
			ObjectManager.GetInstance().bagGeneratorStorageModel.CheckOpenStateByGoodID(goodsID);
		}
		OnGoodsTriggerGuide(goodsID);
		if (IsEnter && IsOrderGoods(goodsID))
		{
			ObjectManager.GetInstance().SaveToDisk();
		}
	}

	private void MergeGoodsSuccess(int goodsID, Transform tipLocation = null)
	{
		if (!Singleton<GameLevelManager>.Instance.CheckGoodsUnlock(goodsID))
		{
			Singleton<GameLevelManager>.Instance.AddGoodsToUnlock(goodsID);
			Singleton<GameLevelManager>.Instance.ShowFristUnlock(goodsID, tipLocation);
		}
		if (Singleton<GameLevelManager>.Instance.ImmediatelyHintOrderId > 0 && Singleton<GameLevelManager>.Instance.ImmediatelyHintStartOrderId > 0)
		{
			bool flag = ObjectManager.GetInstance().gameOrdersModel.IsCompleteOrder(Singleton<GameLevelManager>.Instance.ImmediatelyHintStartOrderId);
			bool flag2 = ObjectManager.GetInstance().gameOrdersModel.IsCompleteOrder(Singleton<GameLevelManager>.Instance.ImmediatelyHintOrderId);
			if (flag && !flag2)
			{
				EventManager.GetInstance().DispatchEvent(100125);
			}
		}
		ObjectManager.GetInstance().bagGeneratorStorageModel.CheckOpenStateByGoodID(goodsID);
		OnGoodsTriggerGuide(goodsID);
		if (IsEnter && IsOrderGoods(goodsID))
		{
			ObjectManager.GetInstance().SaveToDisk();
		}
	}

	private void OnGoodsTriggerGuide(int goodsID)
	{
		if (!MonoSingleton<GuideManager>.Instance.IsFinishByName("숎끏㢰式䝑\rå古뺨") && (!MonoSingleton<GuideManager>.Instance.IsFinishByName("숎끏嚰㈏䝑\r^卝蘓ö赴") || !MonoSingleton<GuideManager>.Instance.IsFinishByName("숎끏嚰㌏䝑\r^卝蘓ö赴")) && !MonoSingleton<GuideManager>.Instance.IsFinishByName("숎끏㢰式䝑\rå古뺩"))
		{
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsID);
			if (goodsBaseVoById != null && goodsBaseVoById.type == 15)
			{
				MonoSingleton<GuideManager>.Instance.AdditionalCardId = goodsID;
			}
		}
		if (!MonoSingleton<GuideManager>.Instance.IsFinishAutoConversionGuide())
		{
			IGoodsBaseVo goodsBaseVoById2 = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsID);
			if (goodsBaseVoById2 != null && (goodsBaseVoById2.type == 26 || goodsBaseVoById2.type == 25))
			{
				MonoSingleton<GuideManager>.Instance.AdditionalCardId = goodsID;
			}
		}
	}

	public void GetNewGoods(int goodsID, GameLevelGrid _grid, float delay = 0f)
	{
		IGoodsMergeVo goodsMergeVoById = Singleton<GameLevelManager>.Instance.GetGoodsMergeVoById(goodsID);
		if (goodsMergeVoById == null || goodsMergeVoById.AdditionalRewards().Count <= 0)
		{
			return;
		}
		List<BaseData3VO> realRewards = ObjectManager.GetInstance().userHeadModel.GetRealRewardList(goodsMergeVoById.AdditionalRewards());
		if (realRewards.Count <= 0)
		{
			return;
		}
		ObjectManager.GetInstance().itemDataModel.AddRewardBaseData3(realRewards, notice: true, 77);
		if ((Object)(object)_grid == (Object)null)
		{
			return;
		}
		if (delay > 0f)
		{
			TimeManager.Instance.Schedule(this, (float dt) =>
			{
				TopUIViewLogic.PlayColloctHeadAnim(_grid.GameItemParent, realRewards);
			}, delay, 1, 0f);
		}
		else
		{
			TopUIViewLogic.PlayColloctHeadAnim(_grid.GameItemParent, realRewards);
		}
	}

	public virtual bool IsOrderGoods(int goodsID)
	{
		if (ObjectManager.GetInstance().gameOrdersModel.GameLevelOrdersGoodsIDs != null && ObjectManager.GetInstance().gameOrdersModel.GameLevelOrdersGoodsIDs.Exists((int need) => need == goodsID))
		{
			return true;
		}
		if (ObjectManager.GetInstance().raceWinnerOrderModel.GameLevelOrdersGoodsIDs != null && ObjectManager.GetInstance().raceWinnerOrderModel.GameLevelOrdersGoodsIDs.Exists((int need) => need == goodsID))
		{
			return true;
		}
		if (MonoSingleton<OrderActivityCacheManager>.Instance.HasGoodsID_TotalOrderMat(goodsID))
		{
			return true;
		}
		return false;
	}

	public virtual bool IsShowMakeBubble(int goodsID)
	{
		if (ABTestSwitchDefine.MakeShortcutSwitch() && !MonoSingleton<GuideManager>.Instance.IsInGuide() && MonoSingleton<ConditionManager>.Instance.IsLegal(178))
		{
			return false;
		}
		if (ObjectManager.GetInstance().gameOrdersModel.UnfinishedCookings != null && ObjectManager.GetInstance().gameOrdersModel.UnfinishedCookings.Contains(goodsID))
		{
			return true;
		}
		if (ObjectManager.GetInstance().raceWinnerOrderModel.UnfinishedCookings != null && ObjectManager.GetInstance().raceWinnerOrderModel.UnfinishedCookings.Contains(goodsID))
		{
			return true;
		}
		if (MonoSingleton<OrderActivityCacheManager>.Instance.HasGoodsID_UnfinishedCookings(goodsID))
		{
			return true;
		}
		return false;
	}

	private void UpdateGridTime()
	{
		Dictionary<int, GameLevelGrid>.Enumerator enumerator = mGridObjectDic.GetEnumerator();
		while (enumerator.MoveNext())
		{
			GameLevelGrid value = enumerator.Current.Value;
			if ((Object)(object)value != (Object)null && value.GetGameGoodsVo() != null)
			{
				GameGoodsVo gameGoodsVo = value.GetGameGoodsVo();
				if (CanUpdateTime(gameGoodsVo))
				{
					value.OnUpdateTime();
				}
			}
		}
	}

	private bool CanUpdateTime(GameGoodsVo tempGameVo)
	{
		if (tempGameVo == null)
		{
			return false;
		}
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(tempGameVo.goodsID);
		if (goodsBaseVoById == null)
		{
			return false;
		}
		if (!IGoodsBaseVo.CanAutoUpdate(tempGameVo.GoodsState) && (tempGameVo.MergeDropList == null || tempGameVo.MergeDropList.Count <= 0) && !tempGameVo.UpdateUncooledState && goodsBaseVoById.type != 29)
		{
			return IGoodsBaseVo.IsPermanentlyInstrument(goodsBaseVoById.type);
		}
		return true;
	}

	private void ShowBagBubble()
	{
		if (ObjectManager.GetInstance().userDataModel.ShowBagTotal > 0 || ObjectManager.GetInstance().userDataModel.ShowLimitBagTotal > 0 || ObjectManager.GetInstance().userDataModel.ShowGeneratorBagTotal > 0)
		{
			BagBubbleGo.SetSelfActive(active: true);
			LocalizedLang.SetLocalizationFontSize(BagTotalText);
			BagBubbleIcon.SetSelfActive(active: false);
			LimitBagBubbleIcon.SetSelfActive(active: false);
			GeneratorBagBubbleIcon.SetSelfActive(active: false);
			if (ObjectManager.GetInstance().userDataModel.ShowBagTotal > 0)
			{
				BagBubbleIcon.SetSelfActive(active: true);
				BagTotalText.text = string.Format("勡㏗\ud9d0ŉ", ObjectManager.GetInstance().userDataModel.ShowBagTotal);
			}
			else if (ObjectManager.GetInstance().userDataModel.ShowLimitBagTotal > 0)
			{
				LimitBagBubbleIcon.SetSelfActive(active: true);
				BagTotalText.text = string.Format("勡㏗\ud9d0ŉ", ObjectManager.GetInstance().userDataModel.ShowLimitBagTotal);
			}
			else if (ObjectManager.GetInstance().userDataModel.ShowGeneratorBagTotal > 0)
			{
				GeneratorBagBubbleIcon.SetSelfActive(active: true);
				BagTotalText.text = string.Format("勡㏗\ud9d0ŉ", ObjectManager.GetInstance().userDataModel.ShowGeneratorBagTotal);
			}
			if ((Object)(object)BagBubbleAnim != (Object)null)
			{
				BagBubbleAnim.Stop();
				BagBubbleAnim.Play("숏끛撴攐䝻 \u0096厕숞끷抸戟牶'\u008e厍숈끟榆渉汑5ª厩刟熿\ud9f7ŝ");
			}
			TimeManager.Instance.Schedule(this, (float dt) =>
			{
				BagBubbleAnim.Stop();
				BagBubbleAnim.Play("숏끛撴攐䝻 \u0096厕숞끷抸戟牶'\u008e厍숅끟犆弆求7Î反룲\u0083赴");
				TimeManager.Instance.Schedule(this, (float num) =>
				{
					BagBubbleGo.SetSelfActive(active: false);
				}, 0.5f, 1, 0f);
			}, 3f, 1, 0f);
			ObjectManager.GetInstance().userDataModel.ShowBagTotal = 0;
			ObjectManager.GetInstance().userDataModel.ShowLimitBagTotal = 0;
			ObjectManager.GetInstance().userDataModel.ShowGeneratorBagTotal = 0;
		}
		else
		{
			BagBubbleGo.SetSelfActive(active: false);
		}
		if (ObjectManager.GetInstance().userDataModel.UnlockBagTotal > 0 || ObjectManager.GetInstance().userDataModel.UnlockLimitBagTotal > 0 || ObjectManager.GetInstance().userDataModel.UnlockGeneratorBagTotal > 0)
		{
			BagRedpoint.SetSelfActive<Transform>(true);
		}
		else
		{
			BagRedpoint.SetSelfActive<Transform>(false);
		}
	}

	protected void GoodsTakeout()
	{
		for (int i = 0; i < TakeoutGrids.Count; i++)
		{
			if ((Object)(object)TakeoutGrids[i] != (Object)null)
			{
				TakeoutGrids[i].PlayGoodsTakeoutNewAni();
			}
		}
		TakeoutGrids.Clear();
	}

	protected void OnCollectAnim(Action<Transform> action)
	{
		if (!((Object)(object)BagButton == (Object)null))
		{
			Transform transform = ((Component)BagButton).transform;
			action?.Invoke(transform);
		}
	}

	protected void OnGetBackBtn(Action<Transform> action)
	{
		if (!((Object)(object)BackButton == (Object)null))
		{
			Transform transform = ((Component)BackButton).transform;
			action?.Invoke(transform);
		}
	}

	private void PlayFeedBackAni()
	{
		//IL_0022: Unknown result type (might be due to invalid IL or missing references)
		//IL_002c: Expected Obj, but got Unknown
		TweenSettingsExtensions.OnComplete<Tweener>(TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale((Transform)(object)BackTransform, 1.15f, 0.033f), (Ease)4), (TweenCallback)(() =>
		{
			//IL_0022: Unknown result type (might be due to invalid IL or missing references)
			//IL_002c: Expected Obj, but got Unknown
			TweenSettingsExtensions.OnComplete<Tweener>(TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale((Transform)(object)BackTransform, 0.92f, 0.133f), (Ease)4), (TweenCallback)(() =>
			{
				//IL_0022: Unknown result type (might be due to invalid IL or missing references)
				//IL_002c: Expected Obj, but got Unknown
				TweenSettingsExtensions.OnComplete<Tweener>(TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale((Transform)(object)BackTransform, 1.02f, 0.1f), (Ease)4), (TweenCallback)(() =>
				{
					TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale((Transform)(object)BackTransform, 1f, 0.1f), (Ease)4);
				}));
			}));
		}));
	}

	public void PlayInstrumentSound(GameLevelGrid selectGrid)
	{
		if ((Object)(object)selectGrid == (Object)null || selectGrid.GetGameGoodsVo() == null || selectGrid.GetGameGoodsVo().GoodsState != GameGoodsState.Working)
		{
			return;
		}
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(selectGrid.GetGameGoodsVo().goodsID);
		if (goodsBaseVoById != null)
		{
			GameLevelItem gameLevelItem = selectGrid.GetGameLevelItem();
			GameButton gameButton = ((gameLevelItem != null) ? ((Component)gameLevelItem).GetComponent<GameButton>() : null);
			if ((Object)(object)gameButton != (Object)null)
			{
				gameButton.SetSkipNextClickSound(skip: true);
			}
			string instrumentSound = Singleton<GameLevelManager>.Instance.GetInstrumentSound(goodsBaseVoById);
			AudioManager.Instance.PlayInstrumentSound(instrumentSound);
		}
	}

	public void ClearCurrentGrid()
	{
		if ((Object)(object)CurrentSelectGrid != (Object)null)
		{
			CurrentSelectGrid.SetSelectState(select: false);
			CurrentSelectGrid = null;
		}
	}

	public void SetUndoGoods(GameLevelGrid grid, GameGoodsVo goodsVo)
	{
		mSellGrid = grid;
		mSellGoods = goodsVo;
	}

	public void ClearUndoGoods()
	{
		if (mSellGoods != null || (Object)(object)mSellGrid != (Object)null)
		{
			mSellGoods = null;
			if ((Object)(object)mSellGrid != (Object)null)
			{
				mSellGrid.SetSelectState(select: false);
			}
			mSellGrid = null;
			UpdateSelectGoodsInfo();
		}
	}

	public void UpdateBubbleTime(GameLevelGrid _grid)
	{
		if ((Object)(object)GoodsInfoViewLogic != (Object)null)
		{
			GoodsInfoViewLogic.UpdateBubbleTime();
		}
	}

	public void UpdateGoodsCDTime(GameLevelGrid levelGrid)
	{
		if (!((Object)(object)GoodsInfoViewLogic == (Object)null) && !((Object)(object)GoodsInfoViewLogic.GetGameLevelGrid() == (Object)null) && GoodsInfoViewLogic.GetGameLevelGrid().GetGridId() == levelGrid.GetGridId())
		{
			GoodsInfoViewLogic.UpdateInfoView();
		}
	}

	public void UpdateGeneratorCdTime(GameLevelGrid levelGrid)
	{
		if (!((Object)(object)GoodsInfoViewLogic == (Object)null) && !((Object)(object)CurrentSelectGrid == (Object)null) && CurrentSelectGrid.GetGridId() == levelGrid.GetGridId())
		{
			GoodsInfoViewLogic.UpdateGeneratorCdTime();
		}
	}

	public void UpdateSelectGoodsInfo()
	{
		if ((Object)(object)GoodsInfoViewLogic != (Object)null)
		{
			if (mSellGoods != null && (Object)(object)mSellGrid != (Object)null)
			{
				GoodsInfoViewLogic.UpdateInfo(mSellGrid, mSellGoods, isUndo: true);
			}
			else if ((Object)(object)CurrentSelectGrid != (Object)null)
			{
				GoodsInfoViewLogic.UpdateInfo(CurrentSelectGrid, CurrentSelectGrid.GetGameGoodsVo());
			}
			else
			{
				GoodsInfoViewLogic.UpdateInfo(null, null);
			}
		}
	}

	private void UpdateSelectMachineInfo()
	{
		if (ObjectManager.GetInstance().machineQuickHintModel.GetMachineQuickHintState() && !((Object)(object)CurrentSelectGrid == (Object)null))
		{
			IGoodsBaseVo goodsBaseVo = CurrentSelectGrid.GetGoodsBaseVo();
			if (goodsBaseVo != null && IGoodsBaseVo.IsInstrument(goodsBaseVo.type))
			{
				GoodsInfoViewLogic.UpdateInfo(CurrentSelectGrid, CurrentSelectGrid.GetGameGoodsVo());
			}
		}
	}

	public void OnBagClick()
	{
		if (!MonoSingleton<GuideManager>.Instance.ButtonTouch)
		{
			AudioManager.Instance.StopInstrumentSound();
			LastShowBagViewTime = ServerTimeManager.CurrentServerTime3();
			if (ObjectManager.GetInstance().bagGeneratorStorageModel.GetBagNewUISwitch())
			{
				ViewManager.GetInstance().ShowView<BagView_NewLogic>(null, ViewManager.ViewLayer.NORMAL, animate: true);
			}
			else
			{
				ViewManager.GetInstance().ShowView<BagViewLogic>(null, ViewManager.ViewLayer.NORMAL, animate: true);
			}
			ClearUndoGoods();
		}
	}

	public void OnBackBtnClick()
	{
		Singleton<SystemThemeManager>.Instance.RecheckCanUseThemeSkinTag();
		GameLevelDefine.InterfaceSwitchAnalytic("刞炇\ud9c0ő", "匩橥ā讝詥", "숏끕疴琐桫0Ú叙귫\u0087赴");
		OnBackClick();
	}

	public void OnBackClick(bool checkPop = true, UnityAction enterMainUIStartCall = null)
	{
		CloseGameLevelView();
		Singleton<TownStateCtrl>.Instance.ChangeState(TownStateType.StayTown);
		GameManager.GetInstance().PlayRestaurantMusic();
		Singleton<TaskManager>.Instance.UpdateCreateDishesBubble();
		MonoSingleton<MiniGameManager>.Instance.UpdateCreateMiniGameBubble();
		ObjectManager.GetInstance().gameLevelModel.AdShowAnalytics();
		EventManager.GetInstance().DispatchEvent(202041);
		Singleton<NpcManager>.Instance.AddNpcToScene(ObjectManager.GetInstance().userDataModel.userDataVo.curTownMapID);
		enterMainUIStartCall.InvokeGracefully();
		if (checkPop)
		{
			Singleton<PopupManager>.Instance.ResetShowPopups(EPopupFromScene.S_MainUIView);
		}
		MonoSingleton<CommonDefaultIconManager>.Instance.TriggerUpdate();
		EventManager.GetInstance().DispatchEvent(203176, EActivityIconChangeScene.MainView);
		Singleton<GameLevelManager>.Instance.IsCloseFromBagView = false;
	}

	protected void CloseGameView(bool checkPop)
	{
		OnBackClick(checkPop);
	}

	protected void CloseGameViewNeedCallBack(bool checkPop, UnityAction callBack)
	{
		OnBackClick(checkPop, callBack);
	}

	private void CloseGameLevelView()
	{
		MonoSingleton<GuideWeakManager>.Instance.ConsumeClickTimes_GuideID(37);
		MonoSingleton<GuideWeakManager>.Instance.ConsumeClickTimes_GuideID(36);
		MonoSingleton<GuideWeakManager>.Instance.ConsumeClickTimes_GuideType(14);
		MonoSingleton<GuideWeakManager>.Instance.ConsumeClickTimes_GuideType(15);
		EventManager.GetInstance().DispatchEvent(202106);
		EventManager.GetInstance().DispatchEvent(203153);
		CloseViewAin();
		EventManager.GetInstance().DispatchEvent(100182);
		CustomerServiceProvider.Get().RequestUnreadMessageNum();
		EventManager.GetInstance().DispatchEvent(203141, -1f);
		_clearBagNodeLayer();
	}

	public bool CheckEmptyGridEnough(int num, bool showEnoughTip = false, bool checkPlayerState = false)
	{
		int num2 = 0;
		for (int i = 0; i < GridKeyList.Count; i++)
		{
			if ((Object)(object)GetEmptyGridByGridId(GridKeyList[i]) != (Object)null)
			{
				num2++;
			}
			if (num2 >= num)
			{
				return true;
			}
		}
		if (showEnoughTip)
		{
			ViewManager.Instance.ShowTip("숅끥澷爆呫?Â叁摥_4끰e섳㳍");
		}
		if (checkPlayerState)
		{
			MonoSingleton<PlayerStateManager>.Instance.Trigger(EPlayerStateTrigger.SpaceNotEnough);
		}
		return false;
	}

	private int MyAbs(int value)
	{
		if (value >= 0)
		{
			return value;
		}
		return -value;
	}

	public GameLevelGrid GetLowestEmptyGrid(bool showEnoughTip = false, Transform enoughTipLocation = null, int goodsID = 0)
	{
		GameLevelGrid gameLevelGrid = null;
		List<int> list = new List<int>();
		for (int i = 0; i < GridKeyList.Count; i++)
		{
			if ((Object)(object)GetEmptyGridByGridId(GridKeyList[i]) != (Object)null)
			{
				list.Add(GridKeyList[i]);
			}
		}
		if (list.Count > 0)
		{
			int hroizontalGridCount = 10;
			list.Sort((int a, int b) => (a / hroizontalGridCount != b / hroizontalGridCount) ? (b / hroizontalGridCount).CompareTo(a / hroizontalGridCount) : (a % hroizontalGridCount).CompareTo(b % hroizontalGridCount));
			gameLevelGrid = GetEmptyGridByGridId(list[0]);
		}
		if (((Object)(object)gameLevelGrid == (Object)null) & showEnoughTip)
		{
			Transform startTransform = null;
			if ((Object)(object)enoughTipLocation != (Object)null)
			{
				startTransform = enoughTipLocation;
			}
			else if ((Object)(object)CurrentSelectGrid != (Object)null)
			{
				startTransform = CurrentSelectGrid.GameItemParent;
			}
			ViewManager.Instance.ShowTip("숅끥澷爆呫?Â叁摥_4끰e섳㳍", null, startTransform);
			GameMapFull();
		}
		else
		{
			TimeManager.Instance.Schedule(this, (float dt) =>
			{
				if (!CheckEmptyGridEnough(1))
				{
					GameMapFull();
				}
			}, 0.2f, 1, 0f);
		}
		return gameLevelGrid;
	}

	public List<GameLevelGrid> GetLowestEmptyGrid(int needNum = 1, bool showEnoughTip = false, Transform enoughTipLocation = null)
	{
		List<GameLevelGrid> list = new List<GameLevelGrid>();
		List<int> list2 = new List<int>();
		for (int i = 0; i < GridKeyList.Count; i++)
		{
			if ((Object)(object)GetEmptyGridByGridId(GridKeyList[i]) != (Object)null)
			{
				list2.Add(GridKeyList[i]);
			}
		}
		if (list2.Count > 0)
		{
			int hroizontalGridCount = 10;
			list2.Sort((int a, int b) => (a / hroizontalGridCount != b / hroizontalGridCount) ? (b / hroizontalGridCount).CompareTo(a / hroizontalGridCount) : (a % hroizontalGridCount).CompareTo(b % hroizontalGridCount));
			for (int num = 0; num < needNum; num++)
			{
				if (list2.Count > num)
				{
					list.Add(GetEmptyGridByGridId(list2[num]));
				}
			}
		}
		if ((list.Count < needNum) & showEnoughTip)
		{
			Transform startTransform = null;
			if ((Object)(object)enoughTipLocation != (Object)null)
			{
				startTransform = enoughTipLocation;
			}
			else if ((Object)(object)CurrentSelectGrid != (Object)null)
			{
				startTransform = CurrentSelectGrid.GameItemParent;
			}
			ViewManager.Instance.ShowTip("숅끥澷爆呫?Â叁摥_4끰e섳㳍", null, startTransform);
			GameMapFull();
		}
		else
		{
			TimeManager.Instance.Schedule(this, (float dt) =>
			{
				if (!CheckEmptyGridEnough(1))
				{
					GameMapFull();
				}
			}, 0.2f, 1, 0f);
		}
		return list;
	}

	public GameLevelGrid GetNearbyEmptyGrid(int gridID, bool showEnoughTip = false, Transform enoughTipLocation = null, int goodsID = 0, bool checkPlayerState = false)
	{
		IGoodsShapeVo goodsShapeVo = null;
		if (goodsID != 0)
		{
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsID);
			if (goodsBaseVoById != null)
			{
				goodsShapeVo = goodsBaseVoById.GetShapeData();
			}
		}
		GameLevelGrid gameLevelGrid = null;
		bool flag = false;
		List<int> list = new List<int>();
		for (int i = 0; i < GridKeyList.Count; i++)
		{
			GameLevelGrid gameLevelGrid2 = null;
			gameLevelGrid2 = ((goodsShapeVo != null) ? GetEmptyGridByGridId(GridKeyList[i], goodsShapeVo) : GetEmptyGridByGridId(GridKeyList[i]));
			if ((Object)(object)gameLevelGrid2 != (Object)null)
			{
				list.Add(GridKeyList[i]);
			}
			else if (goodsID > 0 && !flag && GetCanMergeGridByGridId(GridKeyList[i], goodsID))
			{
				gridID = GridKeyList[i];
				flag = true;
			}
		}
		if (list.Count > 0)
		{
			List<int> list2 = new List<int>();
			List<int> list3 = new List<int>();
			for (int j = 0; j < list.Count; j++)
			{
				int num = list[j];
				int num2 = MyAbs(num / 10 - gridID / 10);
				int num3 = MyAbs(num % 10 - gridID % 10);
				int item = num2 + num3;
				int item2 = ((num2 > num3) ? num2 : num3);
				list2.Add(item);
				list3.Add(item2);
			}
			int index = 0;
			int num4 = 99999;
			int num5 = 99999;
			for (int k = 0; k < list2.Count; k++)
			{
				if (list2[k] < num4 || (list2[k] == num4 && list3[k] < num5))
				{
					index = k;
					num4 = list2[k];
					num5 = list3[k];
				}
			}
			gameLevelGrid = GetEmptyGridByGridId(list[index]);
		}
		if (((Object)(object)gameLevelGrid == (Object)null) & showEnoughTip)
		{
			Transform startTransform = null;
			if ((Object)(object)enoughTipLocation != (Object)null)
			{
				startTransform = enoughTipLocation;
			}
			else if ((Object)(object)CurrentSelectGrid != (Object)null)
			{
				startTransform = CurrentSelectGrid.GameItemParent;
			}
			ViewManager.Instance.ShowTip("숅끥澷爆呫?Â叁摥_4끰e섳㳍", null, startTransform);
			GameMapFull();
		}
		else
		{
			TimeManager.Instance.Schedule(this, (float dt) =>
			{
				if (!CheckEmptyGridEnough(1))
				{
					GameMapFull();
				}
			}, 0.2f, 1, 0f);
		}
		if (((Object)(object)gameLevelGrid == (Object)null) & checkPlayerState)
		{
			MonoSingleton<PlayerStateManager>.Instance.Trigger(EPlayerStateTrigger.SpaceNotEnough);
		}
		return gameLevelGrid;
	}

	public GameLevelGrid GetEmptyGridAroundID(int gridId)
	{
		GameLevelGrid gameLevelGrid = null;
		int gridId2 = gridId - 10;
		gameLevelGrid = GetEmptyGridByGridId(gridId2);
		if ((Object)(object)gameLevelGrid != (Object)null)
		{
			return gameLevelGrid;
		}
		gridId2 = gridId + 10;
		gameLevelGrid = GetEmptyGridByGridId(gridId2);
		if ((Object)(object)gameLevelGrid != (Object)null)
		{
			return gameLevelGrid;
		}
		gridId2 = gridId - 1;
		gameLevelGrid = GetEmptyGridByGridId(gridId2);
		if ((Object)(object)gameLevelGrid != (Object)null)
		{
			return gameLevelGrid;
		}
		gridId2 = gridId + 1;
		gameLevelGrid = GetEmptyGridByGridId(gridId2);
		if ((Object)(object)gameLevelGrid != (Object)null)
		{
			return gameLevelGrid;
		}
		gridId2 = gridId - 10 - 1;
		gameLevelGrid = GetEmptyGridByGridId(gridId2);
		if ((Object)(object)gameLevelGrid != (Object)null)
		{
			return gameLevelGrid;
		}
		gridId2 = gridId - 10 + 1;
		gameLevelGrid = GetEmptyGridByGridId(gridId2);
		if ((Object)(object)gameLevelGrid != (Object)null)
		{
			return gameLevelGrid;
		}
		gridId2 = gridId + 10 - 1;
		gameLevelGrid = GetEmptyGridByGridId(gridId2);
		if ((Object)(object)gameLevelGrid != (Object)null)
		{
			return gameLevelGrid;
		}
		gridId2 = gridId + 10 + 1;
		gameLevelGrid = GetEmptyGridByGridId(gridId2);
		if ((Object)(object)gameLevelGrid != (Object)null)
		{
			return gameLevelGrid;
		}
		return null;
	}

	private GameLevelGrid GetEmptyGridByGridId(int gridId, IGoodsShapeVo areaInfo)
	{
		GameLevelGrid result = GetEmptyGridByGridId(gridId);
		if (areaInfo == null)
		{
			return result;
		}
		List<int> areaGridIdByGridId = areaInfo.GetAreaGridIdByGridId(gridId);
		for (int i = 0; i < areaGridIdByGridId.Count; i++)
		{
			if ((Object)(object)GetEmptyGridByGridId(areaGridIdByGridId[i]) == (Object)null)
			{
				result = null;
				break;
			}
		}
		return result;
	}

	public GameLevelGrid GetEmptyGridByGridId(int gridId)
	{
		GameLevelGrid value = null;
		if (mGridObjectDic.TryGetValue(gridId, out value) && (Object)(object)value != (Object)null && IsGridEmptyByData(gridId) && Singleton<GameLevelManager>.Instance.GridUnlock(gridId) && value.GetShapeHeadGridId() < 0)
		{
			return value;
		}
		return null;
	}

	private bool IsGridEmptyByData(int gridId)
	{
		Dictionary<int, GameGoodsVo> levelMap = Singleton<GameLevelManager>.Instance.GetLevelMap(copyData: false);
		if (levelMap == null)
		{
			return false;
		}
		if (!levelMap.TryGetValue(gridId, out var value))
		{
			return true;
		}
		if (value != null)
		{
			return value.goodsID <= 0;
		}
		return true;
	}

	private bool GetCanMergeGridByGridId(int gridId, int goodsID)
	{
		GameLevelGrid value = null;
		if (mGridObjectDic.TryGetValue(gridId, out value))
		{
			if ((Object)(object)value == (Object)null)
			{
				return false;
			}
			if (!Singleton<GameLevelManager>.Instance.GridUnlock(gridId))
			{
				return false;
			}
			if ((Object)(object)value.GetGameLevelItem() == (Object)null)
			{
				return false;
			}
			if (value.GetGameGoodsVo() == null)
			{
				return false;
			}
			if (value.GetGameGoodsVo().goodsID != goodsID)
			{
				return false;
			}
			if (value.GetGameGoodsVo().GoodsState == GameGoodsState.Bubble)
			{
				return false;
			}
			if (IGoodsBaseVo.CannotMerge(value.GetGameGoodsVo().GoodsState))
			{
				return false;
			}
			return true;
		}
		return false;
	}

	private void OnCloseViewEvent(string obj)
	{
		if (mIsAddBagGoods)
		{
			mIsAddBagGoods = false;
			EventManager.GetInstance().DispatchEvent(100105, -1);
		}
	}

	public void GameMapFull()
	{
		GameFullAnalytic();
		GameFullNomergeAnalytic();
		if ((!MonoSingleton<GuideManager>.Instance.IsFinishByName("숎끏ㆰ式䝑\rÉ又❣\u0a4a") || !MonoSingleton<GuideManager>.Instance.IsFinishByName("숎끏ㆰ式䝑\rÉ又\u1a62\u0d48")) && !CheckMapCanMerge())
		{
			if (!ObjectManager.GetInstance().userDataModel.BagOpenState && MonoSingleton<GuideManager>.Instance.GetCanOpenBag())
			{
				ObjectManager.GetInstance().userDataModel.BagOpenState = true;
				BagButton.SetSelfActive<Button>(true);
			}
			TimeManager.Instance.Schedule(this, (float dt) =>
			{
				EventManager.GetInstance().DispatchEvent(100114);
			}, 0.1f, 1, 0f);
		}
	}

	public override bool OnBackPressed()
	{
		if (DragGoods)
		{
			return true;
		}
		OnBackBtnClick();
		return true;
	}

	public void RecoveryGrid()
	{
		Dictionary<int, GameLevelGrid>.Enumerator enumerator = mGridObjectDic.GetEnumerator();
		while (enumerator.MoveNext())
		{
			GameLevelGrid value = enumerator.Current.Value;
			if ((Object)(object)value != (Object)null)
			{
				value.Recovery();
			}
		}
	}

	public void RecoveryGridBg()
	{
		if (mMapBgGo == null)
		{
			return;
		}
		for (int i = 0; i < mMapBgGo.Count; i++)
		{
			if ((Object)(object)mMapBgGo[i] != (Object)null)
			{
				mMapBgGo[i].Recovery();
			}
		}
	}

	public void OnPlayUnlockGrid()
	{
		PlayGridUnlockAnim();
		TemporaryAutoLocation();
	}

	protected void OnUpdateSelectGoodsInfo(int gridID)
	{
		GameLevelGrid value;
		if ((Object)(object)CurrentSelectGrid != (Object)null && CurrentSelectGrid.GetGridId() == gridID)
		{
			CurrentSelectGrid.UpdateGameLevelItem();
			UpdateSelectGoodsInfo();
		}
		else if (mGridObjectDic.TryGetValue(gridID, out value))
		{
			value.UpdateGameLevelItem();
		}
		if (mGridObjectDic.TryGetValue(gridID, out var value2) && (Object)(object)value2 != (Object)null && value2.GetGridId() == MonoSingleton<GuideWeakManager>.Instance.GetGuideWeakGridID())
		{
			MonoSingleton<GuideWeakManager>.Instance.JudgeConsumeInstrumentCookingOrderGuide();
		}
	}

	private void OnGuideStart(int guideId)
	{
		//IL_014b: Unknown result type (might be due to invalid IL or missing references)
		if (!MonoSingleton<GuideManager>.Instance.IsInGuide())
		{
			return;
		}
		if (MonoSingleton<GuideManager>.Instance.IsFressExpediteGuide())
		{
			UpdateSelectGoodsInfo();
		}
		if (MonoSingleton<GuideManager>.Instance.IsForceOrderToTop(MonoSingleton<GuideManager>.Instance.CurrentGuideName()))
		{
			if ((Object)(object)m_ordersViewLogic != (Object)null)
			{
				m_ordersViewLogic.ForceItem(0f);
			}
		}
		else if (MonoSingleton<GuideManager>.Instance.IsForceOrderToWaveOrderZone(MonoSingleton<GuideManager>.Instance.CurrentGuideName()))
		{
			if ((Object)(object)m_ordersViewLogic != (Object)null)
			{
				m_ordersViewLogic.ForceItem(m_ordersViewLogic.GetPreWidthByActivityZone(ABTestSwitchDefine.GetWaveRewardUIOptSwitch() ? ((Component)m_ordersViewLogic.OrderWaveRewardItem_New).gameObject : ((Component)m_ordersViewLogic.OrderWaveRewardItem).gameObject, containThisZone: false));
			}
		}
		else if (MonoSingleton<GuideManager>.Instance.IsForceOrderToDailyChallenge(MonoSingleton<GuideManager>.Instance.CurrentGuideName()))
		{
			if ((Object)(object)m_ordersViewLogic != (Object)null)
			{
				m_ordersViewLogic.ForceItem(m_ordersViewLogic.GetPreWidthByActivityZone(((Component)m_ordersViewLogic.DailyChallengeItem).gameObject, containThisZone: false));
			}
		}
		else if (MonoSingleton<GuideManager>.Instance.IsForceDynamicOrderTop(MonoSingleton<GuideManager>.Instance.CurrentGuideName()))
		{
			if ((Object)(object)m_ordersViewLogic != (Object)null)
			{
				m_ordersViewLogic.ForceItem(((Transform)m_ordersViewLogic.OrderParent).localPosition.x);
			}
		}
		else if (MonoSingleton<GuideManager>.Instance.IsForceOrderToIndependentMerge(MonoSingleton<GuideManager>.Instance.CurrentGuideName()))
		{
			if ((Object)(object)m_ordersViewLogic != (Object)null)
			{
				m_ordersViewLogic.ForceItem(m_ordersViewLogic.GetPreWidthByActivityZone(((Component)m_ordersViewLogic.IndependentItem).gameObject, containThisZone: false));
			}
		}
		else if (MonoSingleton<GuideManager>.Instance.IsForceOrderToCardCollection(MonoSingleton<GuideManager>.Instance.CurrentGuideName()))
		{
			if ((Object)(object)m_ordersViewLogic != (Object)null)
			{
				m_ordersViewLogic.ForceItem(m_ordersViewLogic.GetPreWidthByActivityZone(((Component)m_ordersViewLogic.TemporaryItem).gameObject, containThisZone: false));
			}
		}
		else if (MonoSingleton<GuideManager>.Instance.IsForceOrderToTaskThemePass(MonoSingleton<GuideManager>.Instance.CurrentGuideName()))
		{
			if ((Object)(object)m_ordersViewLogic != (Object)null)
			{
				m_ordersViewLogic.ForceItem(m_ordersViewLogic.GetPreWidthByActivityZone(((Component)m_ordersViewLogic.TaskRoot).gameObject, containThisZone: false));
			}
		}
		else if (MonoSingleton<GuideManager>.Instance.IsForceOrderToMergeFishing(MonoSingleton<GuideManager>.Instance.CurrentGuideName()))
		{
			if ((Object)(object)m_ordersViewLogic != (Object)null)
			{
				m_ordersViewLogic.ForceItem(m_ordersViewLogic.GetPreWidthByActivityZone(((Component)m_ordersViewLogic.MergeFishingItem).gameObject, containThisZone: false));
			}
		}
		else if (MonoSingleton<GuideManager>.Instance.IsForceOrderToMergeFishingV2(MonoSingleton<GuideManager>.Instance.CurrentGuideName()))
		{
			if ((Object)(object)m_ordersViewLogic != (Object)null)
			{
				m_ordersViewLogic.ForceItem(m_ordersViewLogic.GetPreWidthByActivityZone(((Component)m_ordersViewLogic.MergeFishingV2Item).gameObject, containThisZone: false));
			}
		}
		else if (MonoSingleton<GuideManager>.Instance.IsForceOrderToLuckyHunt(MonoSingleton<GuideManager>.Instance.CurrentGuideName()))
		{
			if ((Object)(object)m_ordersViewLogic != (Object)null)
			{
				m_ordersViewLogic.ForceItem(m_ordersViewLogic.GetPreWidthByActivityZone(((Component)m_ordersViewLogic.luckyHuntItem).gameObject, containThisZone: false));
			}
		}
		else if (MonoSingleton<GuideManager>.Instance.IsForceOrderToTreasureCrafting(MonoSingleton<GuideManager>.Instance.CurrentGuideName()))
		{
			if ((Object)(object)m_ordersViewLogic != (Object)null)
			{
				m_ordersViewLogic.ForceItem(m_ordersViewLogic.GetPreWidthByActivityZone(((Component)m_ordersViewLogic.treasureCraftingItem).gameObject, containThisZone: false));
			}
		}
		else if (MonoSingleton<GuideManager>.Instance.IsForceOrderToNewMainRace(MonoSingleton<GuideManager>.Instance.CurrentGuideName()))
		{
			if ((Object)(object)m_ordersViewLogic != (Object)null)
			{
				m_ordersViewLogic.ForceItem(m_ordersViewLogic.GetPreWidthByActivityZone(((Component)m_ordersViewLogic.NewMainRaceIcon).gameObject, containThisZone: false));
			}
		}
		else if (MonoSingleton<GuideManager>.Instance.IsForceOrderToStageIndependent(MonoSingleton<GuideManager>.Instance.CurrentGuideName()))
		{
			if ((Object)(object)m_ordersViewLogic != (Object)null)
			{
				m_ordersViewLogic.ForceItem(m_ordersViewLogic.GetPreWidthByActivityZone(((Component)m_ordersViewLogic.StageIndependent).gameObject, containThisZone: false));
			}
		}
		else if (MonoSingleton<GuideManager>.Instance.IsForceOrderToPuzzle(MonoSingleton<GuideManager>.Instance.CurrentGuideName()))
		{
			if ((Object)(object)m_ordersViewLogic != (Object)null)
			{
				m_ordersViewLogic.ForceItem(m_ordersViewLogic.GetPreWidthByActivityZone(((Component)m_ordersViewLogic.PuzzleItem).gameObject, containThisZone: false));
			}
		}
		else if (MonoSingleton<GuideManager>.Instance.IsForceOrderToIndependentBasic(MonoSingleton<GuideManager>.Instance.CurrentGuideName()))
		{
			if ((Object)(object)m_ordersViewLogic != (Object)null)
			{
				m_ordersViewLogic.ForceItem(m_ordersViewLogic.GetPreWidthByActivityZone(((Component)m_ordersViewLogic.IndependentBasicItem).gameObject, containThisZone: false));
			}
		}
		else if (MonoSingleton<GuideManager>.Instance.IsForceOrderToStageBasic(MonoSingleton<GuideManager>.Instance.CurrentGuideName()))
		{
			if ((Object)(object)m_ordersViewLogic != (Object)null)
			{
				m_ordersViewLogic.ForceItem(m_ordersViewLogic.GetPreWidthByActivityZone(((Component)m_ordersViewLogic.StageBasicIdn).gameObject, containThisZone: false));
			}
		}
		else if (MonoSingleton<GuideManager>.Instance.IsForceOrderToIndependentMining(MonoSingleton<GuideManager>.Instance.CurrentGuideName()))
		{
			if ((Object)(object)m_ordersViewLogic != (Object)null)
			{
				m_ordersViewLogic.ForceItem(m_ordersViewLogic.GetPreWidthByActivityZone(((Component)m_ordersViewLogic.IndependentMiningItem).gameObject, containThisZone: false));
			}
		}
		else if (MonoSingleton<GuideManager>.Instance.IsForceOrderToGauntletTreasure(MonoSingleton<GuideManager>.Instance.CurrentGuideName()))
		{
			if ((Object)(object)m_ordersViewLogic != (Object)null)
			{
				m_ordersViewLogic.ForceItem(m_ordersViewLogic.GetPreWidthByActivityZone(((Component)m_ordersViewLogic.GauntletTreasureItem).gameObject, containThisZone: false));
			}
		}
		else if (MonoSingleton<GuideManager>.Instance.IsForceOrderToIndependentFarm(MonoSingleton<GuideManager>.Instance.CurrentGuideName()))
		{
			if ((Object)(object)m_ordersViewLogic != (Object)null)
			{
				m_ordersViewLogic.ForceItem(m_ordersViewLogic.GetPreWidthByActivityZone(((Component)m_ordersViewLogic.IndependentFarmItem).gameObject, containThisZone: false));
			}
		}
		else if (MonoSingleton<GuideManager>.Instance.IsForceOrderToStageTemplate(MonoSingleton<GuideManager>.Instance.CurrentGuideName()))
		{
			if ((Object)(object)m_ordersViewLogic != (Object)null)
			{
				m_ordersViewLogic.ForceItem(m_ordersViewLogic.GetPreWidthByActivityZone(((Component)m_ordersViewLogic.StageTemplateIdn).gameObject, containThisZone: false));
			}
		}
		else if (MonoSingleton<GuideManager>.Instance.IsForceOrderToFiveRace(MonoSingleton<GuideManager>.Instance.CurrentGuideName()) && (Object)(object)m_ordersViewLogic != (Object)null)
		{
			m_ordersViewLogic.ForceItem(m_ordersViewLogic.GetPreWidthByActivityZone(((Component)m_ordersViewLogic.FiveRaceIcon).gameObject, containThisZone: false));
		}
	}

	public void ShowGMPanel()
	{
		if (GameConst.GAME_MODE != GameConstMode.RELEASE && (Object)(object)GMgo != (Object)null)
		{
			GMgo.SetSelfActive(!GMgo.activeSelf);
			if ((Object)(object)GMgo_cc != (Object)null)
			{
				GMgo_cc.SetSelfActive(ObjectManager.GetInstance().cardCollectionV2Model.IsInActivity() || ObjectManager.GetInstance().cardCollectionV3Model.IsInActivity());
			}
		}
	}

	public void AddGmItem()
	{
		if (!((Object)(object)GMItemID == (Object)null))
		{
			int id = GMItemID.text.ToInt();
			int initUseNum = GMProduceNum.text.ToInt();
			CreateNewGoods(id, null, isGMGoods: true, initUseNum);
			EventManager.GetInstance().DispatchEvent(100044, 0);
		}
	}

	public void AddBubbleItem()
	{
		if ((Object)(object)GMItemID == (Object)null)
		{
			return;
		}
		int num = GMItemID.text.ToInt();
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(num);
		GameLevelGrid gameLevelGrid = null;
		gameLevelGrid = GetNearbyEmptyGrid(GetCenterGridID(), showEnoughTip: true);
		if (goodsBaseVoById == null || !((Object)(object)gameLevelGrid != (Object)null))
		{
			return;
		}
		if (Singleton<GameLevelManager>.Instance.CanDropBubble(num))
		{
			GameGoodsVo gameGoodsVo = new GameGoodsVo();
			gameGoodsVo.goodsID = goodsBaseVoById.goodsID;
			gameGoodsVo.GoodsState = GameGoodsState.Bubble;
			bool flag = false;
			if (ABTestSwitchDefine.BubbleGoodsSwitch() || Singleton<GameLevelManager>.Instance.BubbleDebug2)
			{
				flag = true;
			}
			if (flag)
			{
				gameGoodsVo.SetBubbleGoodsOpt(1);
				gameGoodsVo.InitiativeCDStarTime = ServerTimeManager.CurrentServerTime3();
			}
			else
			{
				gameGoodsVo.InitiativeCDStarTime = ObjectManager.GetInstance().analyticsModel.analyticsVO.playtime;
			}
			gameLevelGrid.ChangeGameGoodsVo(Singleton<GameLevelManager>.Instance.GetGameGoodsBaseById(gameGoodsVo.goodsID, gameLevelGrid, gameGoodsVo), "कₕ");
			if (flag)
			{
				gameGoodsVo.SetBubbleGoodsOpt(1);
			}
			ObjectManager.GetInstance().itemDataModel.ChangeItemNum(1009, -1L, needNotice: true, 0);
			EventManager.GetInstance().DispatchEvent(100105, num);
			Singleton<GameLevelManager>.Instance.CurrentBubbleNum++;
		}
		else if (!MonoSingleton<ConditionManager>.Instance.IsLegal(6))
		{
			ViewManager.Instance.ShowTip("ꗰ㾄\udbe9㵿⫕氻넫힖─㕔唨㪅ퟶ");
		}
		else if (Singleton<GameLevelManager>.Instance.CurrentBubbleNum >= Singleton<GameLevelManager>.Instance.BubbleGoodsLimit)
		{
			ViewManager.Instance.ShowTip("鴞ɷ䤒榳匙乆㚌℁ᙰ㿏掓劏\ude66侤");
		}
		else if (ObjectManager.GetInstance().itemDataModel.GetItemNum(1009) <= 0)
		{
			ViewManager.Instance.ShowTip("깎\u1cdb\ue2b0\u0de4ᐉ葳닆ᴨ䄯");
		}
		else
		{
			ViewManager.Instance.ShowTip("꿰ʚ荝⡿ﯕ氻✹Ҥꎢ乕靧᱂则踼梅");
		}
	}

	public void GMGlobalSpeed()
	{
		if (!((Object)(object)GMSpeedTime == (Object)null))
		{
			int time = GMSpeedTime.text.ToInt();
			CreatorSpeedup(time);
		}
	}

	public void GMMakingSpeed()
	{
		if (!((Object)(object)GMSpeedTime == (Object)null))
		{
			int time = GMSpeedTime.text.ToInt();
			CookingSpeedup(time);
		}
	}

	public void GMResetStage()
	{
		AddBubbleItem();
	}

	public void GMClearStage()
	{
		if ((Object)(object)CurrentSelectGrid != (Object)null)
		{
			CurrentSelectGrid = null;
		}
		Dictionary<int, GameLevelGrid>.Enumerator enumerator = mGridObjectDic.GetEnumerator();
		while (enumerator.MoveNext())
		{
			GameLevelGrid value = enumerator.Current.Value;
			if ((Object)(object)value != (Object)null && (Object)(object)value.GetGameLevelItem() != (Object)null && !value.IsLock)
			{
				value.ChangeGameGoodsVo(null, "कₕ");
				value.SetSelectState(select: false);
			}
		}
		EventManager.GetInstance().DispatchEvent(100044, 0);
	}

	public void GMChangeGeneratorProduce()
	{
		if ((Object)(object)GMGridID == (Object)null)
		{
			return;
		}
		int key = GMGridID.text.ToInt();
		if ((Object)(object)GMProduceNum == (Object)null)
		{
			return;
		}
		int num = GMProduceNum.text.ToInt();
		GameLevelGrid value = null;
		if (mGridObjectDic.TryGetValue(key, out value) && value.GetGameGoodsVo() != null && value.GetGoodsBaseVo() != null && IGoodsBaseVo.IsCreator(value.GetGoodsBaseVo().type))
		{
			if (num < 0)
			{
				num = 0;
			}
			value.GetGameGoodsVo().InitiativeSurplusNumber = num;
			value.UpdateGameLevelItem();
		}
	}

	public void GMDeleteGoods()
	{
		if ((Object)(object)GMGridID == (Object)null)
		{
			return;
		}
		int key = GMGridID.text.ToInt();
		GameLevelGrid value = null;
		if (!mGridObjectDic.TryGetValue(key, out value) || !((Object)(object)value != (Object)null) || !((Object)(object)value.GetGameLevelItem() != (Object)null))
		{
			return;
		}
		IGoodsBaseVo goodsBaseVo = value.GetGoodsBaseVo();
		GameGoodsVo gameGoodsVo = value.GetGameGoodsVo();
		if (goodsBaseVo != null && gameGoodsVo != null)
		{
			value.ChangeGameGoodsVo(null, "कₕ");
			value.SetSelectState(select: false);
			EventManager.GetInstance().DispatchEvent(100044, 0);
			Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(goodsBaseVo.goodsID, -1, gameGoodsVo);
			if ((Object)(object)CurrentSelectGrid != (Object)null && CurrentSelectGrid.GetGridId() == value.GetGridId())
			{
				CurrentSelectGrid = null;
			}
			if (goodsBaseVo != null && (IGoodsBaseVo.IsCreator(goodsBaseVo.type) || IGoodsBaseVo.IsInstrument(goodsBaseVo.type)))
			{
				Singleton<GameLevelManager>.Instance.ChangeGeneratorOrMachine(gameGoodsVo, 1);
			}
		}
	}

	public void GMAddCardPack(int CardPackId)
	{
		ObjectManager.GetInstance().cardCollectionTempBagModel.AddTemporaryItem(CardPackId, 1);
	}

	private void Update()
	{
		bool flag = false;
		_mergeRuntime += Time.deltaTime;
		mDeltaTime += Time.deltaTime;
		mGridFullInterval += Time.deltaTime;
		if (mDeltaTime >= 1f)
		{
			mDeltaTime--;
			UpdateGridTime();
			MonoSingleton<GuideWeakManager>.Instance.JudgeOrderMakeTimeLogic();
		}
		if (Input.touchCount > 0)
		{
			flag = true;
		}
		if (flag)
		{
			lastTouchUpTime = TimeManager.GetInstance().GetTimeStamp();
			MonoSingleton<GuideWeakManager>.Instance.SetJudgeOrderMakeDelay();
			MonoSingleton<GuideWeakManager>.Instance.SetJudgeOrderMakeDelay_opt();
		}
		if (TimeManager.GetInstance().GetTimeStamp() - lastTouchUpTime >= Singleton<GameLevelManager>.Instance.MergeHintInterval)
		{
			lastTouchUpTime = TimeManager.GetInstance().GetTimeStamp();
			PlayMergeHintAnim();
		}
		if (canvasDuration > 0f)
		{
			canvasDuration -= Time.deltaTime;
			if (canvasDuration <= 0f)
			{
				_clearBagNodeLayer();
			}
		}
		MonoSingleton<GuideWeakManager>.Instance.GuideOptimizeUpate();
	}

	private void OnFinishGameGuide(int guideId)
	{
		int num = -1;
		switch (guideId)
		{
		case 7:
			num = 1;
			break;
		case 15:
			num = 29;
			break;
		}
		if (num > 0)
		{
			CreateGuideForce2Weak(num);
		}
		if (guideId == 61 || guideId == 62)
		{
			UpdateOrderZone();
		}
	}

	private void CreateGuideForce2Weak(int guideWeakID)
	{
		if (MonoSingleton<GuideWeakManager>.Instance.GetGuideModel.IsCompleteGuide(guideWeakID))
		{
			return;
		}
		IGuideWeakVO guideWeakByID = MonoSingleton<GuideWeakManager>.Instance.GetGuideWeakByID(guideWeakID);
		if (guideWeakByID == null)
		{
			return;
		}
		List<GameLevelGrid> list = mGridObjectDic.Values.ToList();
		for (int i = 0; i < list.Count; i++)
		{
			GameLevelGrid gameLevelGrid = list[i];
			if ((Object)(object)gameLevelGrid != (Object)null && gameLevelGrid.GetGameGoodsVo() != null && gameLevelGrid.GetGameGoodsVo().goodsID.ToString() == guideWeakByID.TriggerParameter)
			{
				if (gameLevelGrid.GetGoodsBaseVo() != null)
				{
					IGoodsBaseVo.IsTreasureBox(gameLevelGrid.GetGoodsBaseVo().type);
				}
				EventManager.GetInstance().DispatchEvent(100163, new GuideWeakCmdData
				{
					guideParam = guideWeakID.ToString(),
					guideTrans = ((Component)gameLevelGrid.GetGameLevelItem()).transform,
					guideTransParent = ((Component)this).transform,
					guideType = GuideWeakType.ForceGuideLink
				});
				break;
			}
		}
	}

	public void RemoveMergeHint()
	{
		if ((Object)(object)mMergeHintA != (Object)null)
		{
			if ((Object)(object)mMergeHintA.GetGameLevelItem() != (Object)null)
			{
				mMergeHintA.GetGameLevelItem().HideMergeHintEffect();
			}
			mMergeHintA = null;
		}
		if ((Object)(object)mMergeHintB != (Object)null)
		{
			if ((Object)(object)mMergeHintB.GetGameLevelItem() != (Object)null)
			{
				mMergeHintB.GetGameLevelItem().HideMergeHintEffect();
			}
			mMergeHintB = null;
		}
		isPlayHintInGameLevel = false;
	}

	protected void ShowMergeHint()
	{
		TimeManager.Instance.Schedule(this, (float dt) =>
		{
			PlayMergeHintAnim();
		}, 0.8f, 1, 0f);
	}

	protected void ShowMergeHint_NoDelay()
	{
		PlayMergeHintAnim(isPlayHint: true);
	}

	private void PlayMergeHintAnim(bool isPlayHint = false)
	{
		if ((MonoSingleton<GuideWeakManager>.Instance.GuideOptimizeSwitch && !isPlayHint) || MonoSingleton<GuideWeakManager>.Instance.IsInWeakGuide() || MonoSingleton<GuideManager>.Instance.IsInGuide() || (Singleton<GameLevelManager>.Instance.ImmediatelyHintStartOrderId > 0 && !ObjectManager.GetInstance().gameOrdersModel.IsCompleteOrder(Singleton<GameLevelManager>.Instance.ImmediatelyHintStartOrderId)) || DragGoods || ((Object)(object)mMergeHintA != (Object)null && (Object)(object)mMergeHintB != (Object)null))
		{
			return;
		}
		List<GameLevelGrid> mergeGridList = MonoSingleton<GuideWeakManager>.Instance.GetMergeGridList();
		if (mergeGridList != null && mergeGridList.Count > 1 && (Object)(object)mergeGridList[0] != (Object)null && (Object)(object)mergeGridList[1] != (Object)null)
		{
			mMergeHintA = mergeGridList[0];
			mMergeHintB = mergeGridList[1];
			if ((Object)(object)mergeGridList[0].GetGameLevelItem() != (Object)null && (Object)(object)mergeGridList[1].GetGameLevelItem() != (Object)null)
			{
				mergeGridList[0].GetGameLevelItem().PlayMergeHintEffect(((Component)mergeGridList[1].GetGameLevelItem()).transform);
				mergeGridList[1].GetGameLevelItem().PlayMergeHintEffect(((Component)mergeGridList[0].GetGameLevelItem()).transform);
				if (isPlayHint)
				{
					isPlayHintInGameLevel = true;
				}
				return;
			}
		}
		List<GameLevelGrid> list = mGridObjectDic.Values.ToList();
		for (int num = list.Count - 1; num >= 0; num--)
		{
			GameLevelGrid gameLevelGrid = list[num];
			if ((Object)(object)gameLevelGrid != (Object)null && gameLevelGrid.GetGoodsBaseVo() != null)
			{
				if (CheckGridGoodsSpecial(gameLevelGrid))
				{
					list.RemoveAt(num);
				}
			}
			else
			{
				list.RemoveAt(num);
			}
		}
		FindCanMergeItem(list);
	}

	private void FindCanMergeItem_opt(List<GameLevelGrid> gameItems)
	{
		List<GameLevelGrid> list = new List<GameLevelGrid>();
		List<int> list2 = new List<int>();
		List<GameLevelGrid> list3 = new List<GameLevelGrid>();
		List<GameLevelGrid> list4 = new List<GameLevelGrid>();
		List<GameLevelGrid> source = new List<GameLevelGrid>();
		List<SingleDynamicOrder> showingOrders = ObjectManager.GetInstance().gameOrdersModel.ShowingOrders;
		Dictionary<int, IGoodsBaseVo> dictionary = new Dictionary<int, IGoodsBaseVo>();
		for (int i = 0; i < showingOrders.Count; i++)
		{
			SingleDynamicOrder singleDynamicOrder = showingOrders[i];
			if (singleDynamicOrder == null || singleDynamicOrder.RecipeGroups() == null || singleDynamicOrder.RecipeGroups().Count <= 0 || singleDynamicOrder.CanRecipe())
			{
				continue;
			}
			List<RecipeGroup> list5 = singleDynamicOrder.RecipeGroups();
			for (int j = 0; j < list5.Count; j++)
			{
				if (list5[j].recipeVo == null || list5[j].recipeVo.GetFirstGoodsID() <= 0 || list5[j].recipeVo.CanRecipe())
				{
					continue;
				}
				if (!list2.Contains(list5[j].recipeVo.GetFirstGoodsID()))
				{
					list2.Add(list5[j].recipeVo.GetFirstGoodsID());
				}
				for (int k = 0; k < list5[j].num; k++)
				{
					foreach (int item in GameLevelDefine.GetSplitGoodsByID(list5[j].recipeVo.GetFirstGoodsID()))
					{
						IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(item);
						if (!dictionary.ContainsKey(item))
						{
							dictionary[item] = goodsBaseVoById;
						}
					}
				}
			}
		}
		for (int l = 0; l < gameItems.Count; l++)
		{
			IGoodsBaseVo goodsBaseVo = gameItems[l].GetGoodsBaseVo();
			gameItems[l].GetGameGoodsVo();
			if (goodsBaseVo == null)
			{
				continue;
			}
			if (dictionary.Count > 0)
			{
				foreach (KeyValuePair<int, IGoodsBaseVo> item2 in dictionary)
				{
					if (goodsBaseVo.goodsID == item2.Value.goodsID)
					{
						list.Add(gameItems[l]);
					}
				}
			}
			if (goodsBaseVo.type != 1 && goodsBaseVo.type != 2 && goodsBaseVo.type != 3 && goodsBaseVo.type != 5 && goodsBaseVo.type != 8 && goodsBaseVo.type != 13)
			{
				list3.Add(gameItems[l]);
			}
			if (Singleton<GameLevelManager>.Instance.IsGeneratorSeriesByGoodsID(goodsBaseVo.goodsID))
			{
				list4.Add(gameItems[l]);
			}
			if (Singleton<GameLevelManager>.Instance.IsPermanentlyInstrumentSeriesByGoodsID(goodsBaseVo.goodsID))
			{
				list4.Add(gameItems[l]);
			}
		}
		list = list.OrderBy((GameLevelGrid grid) => grid.GetGoodsBaseVo().level).ToList();
		list3 = list3.OrderBy((GameLevelGrid grid) => grid.GetGoodsBaseVo().level).ToList();
		list4 = list4.OrderBy((GameLevelGrid grid) => grid.GetGoodsBaseVo().level).ToList();
		source = source.OrderBy((GameLevelGrid grid) => grid.GetGoodsBaseVo().level).ToList();
		if (!CheckSelectGoodsCanMerge_opt(list) && !CheckSelectGoodsCanMerge_opt(list3) && !CheckSelectGoodsCanMerge_opt(list4))
		{
			CheckSelectGoodsCanMerge_opt(source);
		}
	}

	private bool CheckSelectGoodsCanMerge_opt(List<GameLevelGrid> gameItems)
	{
		if (gameItems == null || gameItems.Count == 0)
		{
			return false;
		}
		List<GameLevelGrid> list = new List<GameLevelGrid>();
		GameLevelGrid currentSelectGrid = CurrentSelectGrid;
		foreach (GameLevelGrid gameItem in gameItems)
		{
			if ((Object)(object)gameItem == (Object)null || gameItem.GetGameGoodsVo() == null || gameItem.GetGoodsBaseVo() == null)
			{
				continue;
			}
			if ((Object)(object)currentSelectGrid != (Object)null && !CheckGridGoodsSpecial(currentSelectGrid))
			{
				if (gameItem.GetGridId() == currentSelectGrid.GetGridId())
				{
					continue;
				}
				if (gameItem.GetGoodsBaseVo().goodsID == currentSelectGrid.GetGoodsBaseVo().goodsID)
				{
					bool flag = currentSelectGrid.GetGameGoodsVo().GoodsState == GameGoodsState.Lock;
					bool flag2 = gameItem.GetGameGoodsVo().GoodsState == GameGoodsState.Lock;
					if ((flag && !flag2) || (!flag & flag2))
					{
						if (CanMergeHint(currentSelectGrid, gameItem))
						{
							SetMergeHint(currentSelectGrid, gameItem);
							return true;
						}
					}
					else if (!flag && !flag2 && CanMergeHint(currentSelectGrid, gameItem))
					{
						SetMergeHint(currentSelectGrid, gameItem);
						return true;
					}
				}
			}
			if (gameItem.GetGameGoodsVo().GoodsState == GameGoodsState.Lock)
			{
				list.Add(gameItem);
			}
		}
		if (list.Count > 0)
		{
			foreach (GameLevelGrid gameItem2 in gameItems)
			{
				foreach (GameLevelGrid item in list)
				{
					if (gameItem2.GetGridId() != item.GetGridId() && !((Object)(object)gameItem2 == (Object)null) && gameItem2.GetGameGoodsVo() != null && gameItem2.GetGoodsBaseVo() != null && item.GetGoodsBaseVo().goodsID == gameItem2.GetGoodsBaseVo().goodsID && gameItem2.GetGameGoodsVo().GoodsState != GameGoodsState.Lock && CanMergeHint(item, gameItem2))
					{
						SetMergeHint(item, gameItem2);
						return true;
					}
				}
			}
		}
		for (int i = 0; i < gameItems.Count; i++)
		{
			if ((Object)(object)gameItems[i] == (Object)null || gameItems[i].GetGameGoodsVo() == null || gameItems[i].GetGoodsBaseVo() == null)
			{
				continue;
			}
			for (int j = i + 1; j < gameItems.Count; j++)
			{
				if (!((Object)(object)gameItems[j] == (Object)null) && gameItems[j].GetGameGoodsVo() != null && gameItems[j].GetGoodsBaseVo() != null && gameItems[i].GetGoodsBaseVo().goodsID == gameItems[j].GetGoodsBaseVo().goodsID && CanMergeHint(gameItems[i], gameItems[j]))
				{
					SetMergeHint(gameItems[i], gameItems[j]);
					return true;
				}
			}
		}
		return false;
	}

	private void SetMergeHint(GameLevelGrid gridA, GameLevelGrid gridB)
	{
		mMergeHintA = gridA;
		mMergeHintB = gridB;
		mMergeHintA.GetGameLevelItem().PlayMergeHintEffect(((Component)mMergeHintB.GetGameLevelItem()).transform);
		mMergeHintB.GetGameLevelItem().PlayMergeHintEffect(((Component)mMergeHintA.GetGameLevelItem()).transform);
	}

	private void FindCanMergeItem(List<GameLevelGrid> gameItems)
	{
		int num = -1;
		int num2 = -1;
		Dictionary<int, int> dictionary = new Dictionary<int, int>();
		List<GameLevelGrid> list = new List<GameLevelGrid>();
		List<GameLevelGrid> list2 = new List<GameLevelGrid>();
		List<GameLevelGrid> list3 = new List<GameLevelGrid>();
		List<GameLevelGrid> list4 = new List<GameLevelGrid>();
		Dictionary<int, int> dictionary2 = new Dictionary<int, int>();
		for (int i = 0; i < gameItems.Count; i++)
		{
			GameLevelGrid gameLevelGrid = gameItems[i];
			if (gameLevelGrid.GetGameGoodsVo() == null || gameLevelGrid.GetGoodsBaseVo() == null)
			{
				continue;
			}
			if (gameLevelGrid.GetGameGoodsVo().GoodsState == GameGoodsState.Lock)
			{
				if (!dictionary.ContainsKey(gameLevelGrid.GetGoodsBaseVo().goodsID))
				{
					dictionary.Add(gameLevelGrid.GetGoodsBaseVo().goodsID, i);
				}
				if ((Object)(object)CurrentSelectGrid != (Object)null && CurrentSelectGrid.GetGoodsBaseVo() != null && CurrentSelectGrid.GetGoodsBaseVo().goodsID == gameLevelGrid.GetGoodsBaseVo().goodsID && num == -1 && CurrentSelectGrid.GetGridId() != gameLevelGrid.GetGridId())
				{
					num = i;
				}
				continue;
			}
			switch (gameLevelGrid.GetGoodsBaseVo().type)
			{
			case 2:
			case 4:
			case 5:
				list.Add(gameItems[i]);
				break;
			case 7:
			case 8:
			case 12:
			case 13:
				list2.Add(gameItems[i]);
				break;
			case 25:
				list4.Add(gameItems[i]);
				break;
			case 26:
				if (!dictionary2.ContainsKey(gameLevelGrid.GetGoodsBaseVo().goodsID))
				{
					dictionary2[gameLevelGrid.GetGoodsBaseVo().goodsID] = i;
				}
				break;
			default:
				list3.Add(gameItems[i]);
				break;
			}
			if ((Object)(object)CurrentSelectGrid != (Object)null && CurrentSelectGrid.GetGoodsBaseVo() != null && CurrentSelectGrid.GetGoodsBaseVo().goodsID == gameLevelGrid.GetGoodsBaseVo().goodsID && num2 == -1 && CurrentSelectGrid.GetGridId() != gameLevelGrid.GetGridId())
			{
				num2 = i;
			}
		}
		list.Sort((GameLevelGrid gridA, GameLevelGrid gridB) => gridB.GetGoodsBaseVo().level - gridA.GetGoodsBaseVo().level);
		list2.Sort((GameLevelGrid gridA, GameLevelGrid gridB) => gridB.GetGoodsBaseVo().level - gridA.GetGoodsBaseVo().level);
		list3.Sort((GameLevelGrid gridA, GameLevelGrid gridB) => gridB.GetGoodsBaseVo().level - gridA.GetGoodsBaseVo().level);
		if (!CanDragToAutoConversion(gameItems, list4, dictionary2) && !CheckSelectGoodsCanMerge(gameItems, num, num2) && !CheckCanMerge(gameItems, list, dictionary) && !CheckCanMerge(gameItems, list2, dictionary))
		{
			CheckCanMerge(gameItems, list3, dictionary);
		}
	}

	private bool CheckCanMerge(List<GameLevelGrid> allItems, List<GameLevelGrid> classifyItems, Dictionary<int, int> lockInfos)
	{
		for (int i = 0; i < classifyItems.Count; i++)
		{
			GameLevelGrid gameLevelGrid = classifyItems[i];
			if (lockInfos.ContainsKey(gameLevelGrid.GetGoodsBaseVo().goodsID))
			{
				int index = lockInfos[gameLevelGrid.GetGoodsBaseVo().goodsID];
				if (CanMergeHint(gameLevelGrid, allItems[index]))
				{
					mMergeHintA = gameLevelGrid;
					mMergeHintB = allItems[index];
					gameLevelGrid.GetGameLevelItem().PlayMergeHintEffect(((Component)allItems[index].GetGameLevelItem()).transform);
					allItems[index].GetGameLevelItem().PlayMergeHintEffect(((Component)gameLevelGrid.GetGameLevelItem()).transform);
					return true;
				}
			}
		}
		Dictionary<int, int> dictionary = new Dictionary<int, int>();
		for (int j = 0; j < classifyItems.Count; j++)
		{
			GameLevelGrid gameLevelGrid2 = classifyItems[j];
			if (!dictionary.ContainsKey(gameLevelGrid2.GetGoodsBaseVo().goodsID))
			{
				dictionary.Add(gameLevelGrid2.GetGoodsBaseVo().goodsID, j);
				continue;
			}
			int index2 = dictionary[gameLevelGrid2.GetGoodsBaseVo().goodsID];
			if ((gameLevelGrid2.GetGameGoodsVo().GoodsState != GameGoodsState.Lock || classifyItems[index2].GetGameGoodsVo().GoodsState != GameGoodsState.Lock) && CanMergeHint(gameLevelGrid2, classifyItems[index2]))
			{
				mMergeHintA = gameLevelGrid2;
				mMergeHintB = classifyItems[index2];
				gameLevelGrid2.GetGameLevelItem().PlayMergeHintEffect(((Component)classifyItems[index2].GetGameLevelItem()).transform);
				classifyItems[index2].GetGameLevelItem().PlayMergeHintEffect(((Component)gameLevelGrid2.GetGameLevelItem()).transform);
				return true;
			}
		}
		return false;
	}

	private bool CanMergeHint(GameLevelGrid gridA, GameLevelGrid gridB, bool isAutoConversion = false)
	{
		if ((Object)(object)gridA == (Object)null || (Object)(object)gridB == (Object)null)
		{
			return false;
		}
		if ((Object)(object)gridA.GetGameLevelItem() == (Object)null || (Object)(object)gridB.GetGameLevelItem() == (Object)null)
		{
			return false;
		}
		if (gridA.GetGameLevelItem().PlayFlyAnim)
		{
			return false;
		}
		if (gridB.GetGameLevelItem().PlayFlyAnim)
		{
			return false;
		}
		if (gridA.GetGameGoodsVo().GoodsState == GameGoodsState.Lock && gridB.GetGameGoodsVo().GoodsState == GameGoodsState.Lock)
		{
			return false;
		}
		if (!isAutoConversion)
		{
			IGoodsBaseVo goodsBaseVoBySeriesAndLevel = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoBySeriesAndLevel(gridA.GetGoodsBaseVo().series, gridA.GetGoodsBaseVo().level + 1);
			IGoodsBaseVo goodsBaseVoBySeriesAndLevel2 = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoBySeriesAndLevel(gridB.GetGoodsBaseVo().series, gridB.GetGoodsBaseVo().level + 1);
			if (goodsBaseVoBySeriesAndLevel == null || goodsBaseVoBySeriesAndLevel2 == null)
			{
				return false;
			}
		}
		return true;
	}

	private bool CheckGridGoodsSpecial(GameLevelGrid grid)
	{
		IGoodsBaseVo goodsBaseVo = grid.GetGoodsBaseVo();
		GameGoodsVo gameGoodsVo = grid.GetGameGoodsVo();
		if (goodsBaseVo == null || gameGoodsVo == null)
		{
			return true;
		}
		if (Singleton<GameLevelManager>.Instance.GetGoodsBaseVoBySeriesAndLevel(goodsBaseVo.series, goodsBaseVo.level + 1) == null && goodsBaseVo.type != 25 && goodsBaseVo.type != 26)
		{
			return true;
		}
		if (gameGoodsVo.GoodsState == GameGoodsState.Bubble || IGoodsBaseVo.CannotMerge(gameGoodsVo.GoodsState) || gameGoodsVo.GoodsState == GameGoodsState.Working || grid.IsLock)
		{
			return true;
		}
		if (IGoodsBaseVo.IsInstrument(goodsBaseVo.type))
		{
			if (gameGoodsVo.GoodsState == GameGoodsState.InitiativeProduce)
			{
				return true;
			}
			if (gameGoodsVo.MakeMaterials.Count > 0)
			{
				return true;
			}
		}
		if (CheckInOrderGoods(goodsBaseVo.goodsID) > 0)
		{
			return true;
		}
		if (IGoodsBaseVo.IsTreasureBox(goodsBaseVo.type) && gameGoodsVo.InitiativeUseTotal > 0)
		{
			return true;
		}
		return false;
	}

	private bool FindCanMergeRemoveItem(List<GameLevelGrid> gameItems)
	{
		Dictionary<int, int> dictionary = new Dictionary<int, int>();
		List<GameLevelGrid> list = new List<GameLevelGrid>();
		for (int i = 0; i < gameItems.Count; i++)
		{
			GameLevelGrid gameLevelGrid = gameItems[i];
			if (gameLevelGrid.GetGameGoodsVo().GoodsState == GameGoodsState.AwaitRemove)
			{
				if (!dictionary.ContainsKey(gameLevelGrid.GetGoodsBaseVo().goodsID))
				{
					dictionary.Add(gameLevelGrid.GetGoodsBaseVo().goodsID, i);
				}
			}
			else
			{
				list.Add(gameItems[i]);
			}
		}
		if (CheckCanMerge(gameItems, list, dictionary))
		{
			return true;
		}
		return false;
	}

	private bool CheckSelectGoodsCanMerge(List<GameLevelGrid> gameItems, int lockIndex, int normalIndex)
	{
		if ((Object)(object)CurrentSelectGrid == (Object)null)
		{
			return false;
		}
		if (lockIndex == -1 && normalIndex == -1)
		{
			return false;
		}
		if (CheckGridGoodsSpecial(CurrentSelectGrid))
		{
			return false;
		}
		if (lockIndex > -1)
		{
			if (gameItems.Count <= lockIndex)
			{
				return false;
			}
			if (CanMergeHint(CurrentSelectGrid, gameItems[lockIndex]))
			{
				mMergeHintA = CurrentSelectGrid;
				mMergeHintB = gameItems[lockIndex];
				mMergeHintA.GetGameLevelItem().PlayMergeHintEffect(((Component)mMergeHintB.GetGameLevelItem()).transform);
				mMergeHintB.GetGameLevelItem().PlayMergeHintEffect(((Component)mMergeHintA.GetGameLevelItem()).transform);
				return true;
			}
		}
		if (normalIndex > -1)
		{
			if (gameItems.Count <= normalIndex)
			{
				return false;
			}
			if (CanMergeHint(CurrentSelectGrid, gameItems[normalIndex]))
			{
				mMergeHintA = CurrentSelectGrid;
				mMergeHintB = gameItems[normalIndex];
				mMergeHintA.GetGameLevelItem().PlayMergeHintEffect(((Component)mMergeHintB.GetGameLevelItem()).transform);
				mMergeHintB.GetGameLevelItem().PlayMergeHintEffect(((Component)mMergeHintA.GetGameLevelItem()).transform);
				return true;
			}
		}
		return false;
	}

	private bool CanDragToAutoConversion(List<GameLevelGrid> allItems, List<GameLevelGrid> classifyItems, Dictionary<int, int> matIndexDic)
	{
		if (classifyItems.Count == 0)
		{
			return false;
		}
		if (matIndexDic.Count == 0)
		{
			return false;
		}
		for (int i = 0; i < classifyItems.Count; i++)
		{
			List<IGoodsAutoConversionVO> autoConversionVoByID = GameLevelDefine.GetAutoConversionVoByID(classifyItems[i].GetGoodsBaseVo().goodsID);
			if (autoConversionVoByID == null || autoConversionVoByID.Count == 0)
			{
				continue;
			}
			List<int> list = new List<int>();
			for (int j = 0; j < autoConversionVoByID.Count; j++)
			{
				list.AddRange(autoConversionVoByID[j].GetMaterialIDs());
			}
			for (int k = 0; k < list.Count; k++)
			{
				if (matIndexDic.ContainsKey(list[k]))
				{
					int index = matIndexDic[list[k]];
					if (CanMergeHint(classifyItems[i], allItems[index], isAutoConversion: true))
					{
						mMergeHintA = classifyItems[i];
						mMergeHintB = allItems[index];
						classifyItems[i].GetGameLevelItem().PlayMergeHintEffect(((Component)allItems[index].GetGameLevelItem()).transform);
						allItems[index].GetGameLevelItem().PlayMergeHintEffect(((Component)classifyItems[i].GetGameLevelItem()).transform);
						return true;
					}
				}
			}
		}
		return false;
	}

	protected virtual void UpdateOrdersViewPos(int preNum, bool playFinishOrderAnim = false)
	{
		if (!((Object)(object)m_ordersViewLogic == (Object)null))
		{
			if (playFinishOrderAnim)
			{
				m_ordersViewLogic.UpdateItemPos_OrderFinish();
			}
			else
			{
				m_ordersViewLogic.UpdateItemPos();
			}
		}
	}

	protected void OnGoodsFly(int gridId, int goodsId)
	{
		//IL_009a: Unknown result type (might be due to invalid IL or missing references)
		//IL_004b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0051: Expected Obj, but got Unknown
		//IL_01b6: Unknown result type (might be due to invalid IL or missing references)
		//IL_0202: Unknown result type (might be due to invalid IL or missing references)
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsId);
		if (goodsBaseVoById == null)
		{
			return;
		}
		GameLevelGrid value = null;
		if (mGridObjectDic.TryGetValue(gridId, out value) && (Object)(object)value != (Object)null)
		{
			GameObject val = GameLevelDefine.CreateGameObjectSync("숇끕䞴漈䍛<\"匡畯d4끉v윷䷅", ((Component)this).transform);
			if ((Object)(object)val == (Object)null)
			{
				val = new GameObject();
				((Object)val).name = "숇끕䞴漈䍛<\"匡畯d4끉v윷䷅";
			}
			Image orAddComponent = val.GetOrAddComponent<Image>();
			((Component)orAddComponent).transform.SetParent(((Component)this).transform);
			orAddComponent.LocalIdentity<Image>();
			Singleton<GameLevelManager>.Instance.SetGoodsIcon(orAddComponent, goodsBaseVoById, resLoader);
			((Component)orAddComponent).transform.position = value.GameItemParent.position;
			orAddComponent.SetSelfActive<Image>(false);
			if (!flyImageDic.ContainsKey(goodsId))
			{
				flyImageDic.Add(goodsId, new Queue<Image>());
			}
			flyImageDic[goodsId].Enqueue(orAddComponent);
			if (value.GetGoodsBaseVo() != null)
			{
				if (value.GetGoodsBaseVo().goodsID == goodsId)
				{
					if ((Object)(object)CurrentSelectGrid != (Object)null && CurrentSelectGrid.GetGridId() == value.GetGridId())
					{
						CurrentSelectGrid.SetSelectState(select: false);
						CurrentSelectGrid = null;
					}
					value.ChangeGameGoodsVo(null, "숇끏澻爈獝&Â叁뷗\u00af赴");
				}
				else if ((Object)(object)CurrentSelectGrid != (Object)null && CurrentSelectGrid.GetGridId() == value.GetGridId())
				{
					EventManager.GetInstance().DispatchEvent(203039);
					EventManager.GetInstance().DispatchEvent(203041);
					EventManager.GetInstance().DispatchEvent(203248);
				}
			}
		}
		if (gridId == -1 && (Object)(object)BagButton != (Object)null && (Object)(object)((Component)BagButton).transform != (Object)null)
		{
			Image val2 = new GameObject().AddComponent<Image>();
			((Component)val2).transform.SetParent(((Component)this).transform);
			val2.LocalIdentity<Image>();
			Singleton<GameLevelManager>.Instance.SetGoodsIcon(val2, goodsBaseVoById, resLoader);
			((Component)val2).transform.position = ((Component)BagButton).transform.position;
			val2.SetSelfActive<Image>(false);
			if (!flyImageDic.ContainsKey(goodsId))
			{
				flyImageDic.Add(goodsId, new Queue<Image>());
			}
			flyImageDic[goodsId].Enqueue(val2);
		}
		PlayCommitOrderFromScaleAni_SetGridID(gridId);
		TimeManager.GetInstance().Schedule(this, (float arg0) =>
		{
			PlayCommitOrderFromScaleAni();
		}, 0.001f, 1);
	}

	public void PlayCommitOrderFromScaleAni_SetGridID(int gridId)
	{
		if (mCommitOrderFromGridIds == null)
		{
			mCommitOrderFromGridIds = new List<int>();
		}
		mCommitOrderFromGridIds.Add(gridId);
	}

	public void PlayCommitOrderFromScaleAni()
	{
		if (mCommitOrderFromGridIds == null || mCommitOrderFromGridIds.Count == 0)
		{
			return;
		}
		mCommitOrderFromGridIds.DeleteRepeat();
		int num = 0;
		GameLevelGrid value = null;
		IGoodsBaseVo goodsBaseVo = null;
		for (int i = 0; i < mCommitOrderFromGridIds.Count; i++)
		{
			num = mCommitOrderFromGridIds[i];
			if (num == -1)
			{
				PlayGoodsFromBagBtnFlyHint();
			}
			else if (mGridObjectDic.TryGetValue(num, out value) && (Object)(object)value != (Object)null && (Object)(object)value.GetGameLevelItem() != (Object)null)
			{
				goodsBaseVo = value.GetGoodsBaseVo();
				if (goodsBaseVo != null && IGoodsBaseVo.IsInstrument(goodsBaseVo.type))
				{
					value.GetGameLevelItem().PlayGoodsFromFlyHint(GetPlayCommitOrderGoodsFromFlyHint);
				}
			}
		}
		mCommitOrderFromGridIds.Clear();
	}

	public void PlayGoodsFromBagBtnFlyHint()
	{
		_killBtnBagScaleSeq();
		if ((Object)(object)BagButton != (Object)null && (Object)(object)((Component)BagButton).transform != (Object)null)
		{
			mBtnBagScaleSeq = GetPlayCommitOrderGoodsFromFlyHint(((Component)BagButton).transform);
		}
	}

	public void _killBtnBagScaleSeq()
	{
		//IL_0047: Unknown result type (might be due to invalid IL or missing references)
		if (mBtnBagScaleSeq != null)
		{
			TweenExtensions.Kill((Tween)(object)mBtnBagScaleSeq, false);
			mBtnBagScaleSeq = null;
			if ((Object)(object)BagButton != (Object)null && (Object)(object)((Component)BagButton).transform != (Object)null)
			{
				((Component)BagButton).transform.localScale = Vector3.one;
			}
		}
	}

	private Sequence GetPlayCommitOrderGoodsFromFlyHint(Transform trans)
	{
		//IL_0022: Unknown result type (might be due to invalid IL or missing references)
		//IL_004e: Unknown result type (might be due to invalid IL or missing references)
		//IL_007a: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a6: Unknown result type (might be due to invalid IL or missing references)
		if ((Object)(object)trans != (Object)null)
		{
			Sequence val = DOTween.Sequence();
			TweenSettingsExtensions.Append(val, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(trans, new Vector3(1.3f, 1.3f, 1f), 0.07f), (Ease)4));
			TweenSettingsExtensions.Append(val, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(trans, new Vector3(1f, 1f, 1f), 0.23f), (Ease)4));
			TweenSettingsExtensions.Append(val, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(trans, new Vector3(1.05f, 1.05f, 1f), 0.23f), (Ease)4));
			TweenSettingsExtensions.Append(val, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(trans, new Vector3(1f, 1f, 1f), 0.27f), (Ease)4));
			TweenExtensions.Play<Sequence>(TweenSettingsExtensions.SetAutoKill<Sequence>(val, true));
			return val;
		}
		return null;
	}

	public void PlayOrderFinishFly(Transform targetTrans, int goodsId, Action completeAction = null)
	{
		if (flyImageDic == null || !flyImageDic.ContainsKey(goodsId) || flyImageDic[goodsId].Count <= 0)
		{
			return;
		}
		int count = flyImageDic[goodsId].Count;
		for (int i = 0; i < count; i++)
		{
			if (i == 0)
			{
				PlayOrderFinishFly_Single(targetTrans, goodsId, completeAction);
			}
			else
			{
				PlayOrderFinishFly_Single(targetTrans, goodsId);
			}
		}
	}

	private void PlayOrderFinishFly_Single(Transform targetTrans, int goodsId, Action completeAction = null)
	{
		//IL_00e3: Unknown result type (might be due to invalid IL or missing references)
		//IL_00f5: Unknown result type (might be due to invalid IL or missing references)
		//IL_00fa: Unknown result type (might be due to invalid IL or missing references)
		//IL_0172: Unknown result type (might be due to invalid IL or missing references)
		//IL_019a: Unknown result type (might be due to invalid IL or missing references)
		//IL_01a4: Expected Obj, but got Unknown
		//IL_01c9: Unknown result type (might be due to invalid IL or missing references)
		//IL_01d3: Expected Obj, but got Unknown
		if (flyImageDic == null || !flyImageDic.ContainsKey(goodsId) || flyImageDic[goodsId].Count <= 0)
		{
			return;
		}
		Image flyImage = flyImageDic[goodsId].Dequeue();
		if ((Object)(object)flyImage == (Object)null)
		{
			return;
		}
		if ((Object)(object)targetTrans == (Object)null)
		{
			if ((Object)(object)flyImage != (Object)null)
			{
				ObjectPoolManager.Instance.RecycleObject(((Object)((Component)flyImage).gameObject).name, ((Component)flyImage).gameObject);
			}
			return;
		}
		((Component)flyImage).transform.SetParent(((Component)this).transform);
		flyImage.SetSelfActive<Image>(true);
		float num = 0.36f * SDKManager.AniDurationScale;
		float x = ((Component)flyImage).transform.localScale.x;
		Vector3 endPos = targetTrans.position;
		TweenSettingsExtensions.SetAutoKill<Sequence>(TweenSettingsExtensions.Append(TweenSettingsExtensions.Append(DOTween.Sequence(), (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(((Component)flyImage).transform, x * 2f, 0.22f * SDKManager.AniDurationScale), (Ease)3)), (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(((Component)flyImage).transform, x * 1f, 0.14f * SDKManager.AniDurationScale), (Ease)4)), true);
		Tweener mFlyTween = TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOMove(((Component)flyImage).transform, endPos, num, false), GameLevelDefine.Order_Fly_Curve_1);
		TweenSettingsExtensions.OnUpdate<Tweener>(mFlyTween, (TweenCallback)(() =>
		{
			//IL_000f: Unknown result type (might be due to invalid IL or missing references)
			//IL_001a: Unknown result type (might be due to invalid IL or missing references)
			//IL_002d: Unknown result type (might be due to invalid IL or missing references)
			//IL_0032: Unknown result type (might be due to invalid IL or missing references)
			//IL_0043: Unknown result type (might be due to invalid IL or missing references)
			if ((Object)(object)targetTrans != (Object)null && endPos != targetTrans.position)
			{
				endPos = targetTrans.position;
				mFlyTween.ChangeEndValue((object)targetTrans.position, true);
			}
		}));
		TweenSettingsExtensions.SetAutoKill<Tweener>(TweenExtensions.Play<Tweener>(mFlyTween), true);
		TweenSettingsExtensions.SetAutoKill<Sequence>(TweenSettingsExtensions.AppendCallback(TweenSettingsExtensions.AppendInterval(DOTween.Sequence(), num), (TweenCallback)(() =>
		{
			completeAction?.Invoke();
			if ((Object)(object)flyImage != (Object)null)
			{
				ObjectPoolManager.Instance.RecycleObject(((Object)((Component)flyImage).gameObject).name, ((Component)flyImage).gameObject);
			}
		})), true);
	}

	public bool CheckMapCanMerge()
	{
		Dictionary<int, GameGoodsVo> dictionary = new Dictionary<int, GameGoodsVo>();
		List<GameLevelGrid> list = mGridObjectDic.Values.ToList();
		IGoodsBaseVo goodsBaseVo = null;
		GameGoodsVo gameGoodsVo = null;
		for (int num = list.Count - 1; num >= 0; num--)
		{
			GameLevelGrid gameLevelGrid = list[num];
			if (!((Object)(object)gameLevelGrid == (Object)null) && gameLevelGrid.GetGoodsBaseVo() != null && !gameLevelGrid.IsLock)
			{
				goodsBaseVo = gameLevelGrid.GetGoodsBaseVo();
				gameGoodsVo = gameLevelGrid.GetGameGoodsVo();
				if (goodsBaseVo != null && gameGoodsVo != null && Singleton<GameLevelManager>.Instance.GetGoodsBaseVoBySeriesAndLevel(goodsBaseVo.series, goodsBaseVo.level + 1) != null && gameGoodsVo.GoodsState != GameGoodsState.Bubble && !IGoodsBaseVo.CannotMerge(gameGoodsVo.GoodsState) && gameGoodsVo.GoodsState != GameGoodsState.Working && (!IGoodsBaseVo.IsInstrument(goodsBaseVo.type) || (gameGoodsVo.GoodsState != GameGoodsState.InitiativeProduce && gameGoodsVo.MakeMaterials.Count <= 0)) && CheckInOrderGoods(goodsBaseVo.goodsID) <= 0 && (!IGoodsBaseVo.IsTreasureBox(goodsBaseVo.type) || gameGoodsVo.InitiativeUseTotal <= 0))
				{
					if (dictionary.ContainsKey(gameGoodsVo.goodsID))
					{
						if (dictionary[gameGoodsVo.goodsID].GoodsState != GameGoodsState.Lock)
						{
							return true;
						}
						if (gameGoodsVo.GoodsState != GameGoodsState.Lock)
						{
							return true;
						}
					}
					else
					{
						dictionary.Add(gameGoodsVo.goodsID, gameGoodsVo);
					}
				}
			}
		}
		return false;
	}

	public void AutoSelectGoods(GameLevelGrid levelGrid)
	{
		if ((Object)(object)levelGrid == (Object)null || levelGrid.GetGoodsBaseVo() == null || (MonoSingleton<GuideManager>.Instance.IsFinishByName("숎끏㢰式䝑\rå古❣\u0a4a") && MonoSingleton<GuideManager>.Instance.IsFinishByName("숎끏㢰式䝑\rå古❣\u0a48") && MonoSingleton<GuideManager>.Instance.IsFinishByName("숎끏㢰式䝑\rå古❣\u0a49") && MonoSingleton<GuideManager>.Instance.IsFinishByName("숎끏㢰式䝑\rå古❣\u0a40")))
		{
			return;
		}
		bool flag = false;
		if (levelGrid.GetGoodsBaseVo().type == 16 && !MonoSingleton<GuideManager>.Instance.IsFinishByName("숎끏㢰式䝑\rå古❣\u0a49"))
		{
			flag = true;
		}
		if (!flag && levelGrid.GetGoodsBaseVo().type == 27 && !MonoSingleton<GuideManager>.Instance.IsFinishByName("숎끏㢰式䝑\rå古❣\u0a40"))
		{
			flag = true;
		}
		if (!flag)
		{
			IGoodsCollectVo goodsCollectVoById = Singleton<GameLevelManager>.Instance.GetGoodsCollectVoById(levelGrid.GetGoodsBaseVo().goodsID);
			if (goodsCollectVoById != null && goodsCollectVoById.itemId == 1012 && !MonoSingleton<GuideManager>.Instance.IsFinishByName("숎끏㢰式䝑\rå古❣\u0a48"))
			{
				flag = true;
			}
		}
		if (!flag)
		{
			IGoodsCollectVo goodsCollectVoById2 = Singleton<GameLevelManager>.Instance.GetGoodsCollectVoById(levelGrid.GetGoodsBaseVo().goodsID);
			if (goodsCollectVoById2 != null && goodsCollectVoById2.itemId == 1013 && !MonoSingleton<GuideManager>.Instance.IsFinishByName("숎끏㢰式䝑\rå古❣\u0a4a"))
			{
				flag = true;
			}
		}
		if (flag)
		{
			if ((Object)(object)CurrentSelectGrid == (Object)null)
			{
				levelGrid.OnSelectGrid();
			}
			else if (CurrentSelectGrid.GetGridId() != levelGrid.GetGridId())
			{
				levelGrid.OnSelectGrid();
			}
		}
	}

	public bool IsGoodsBoxCDing()
	{
		List<GameLevelGrid> list = GridObjectDic.Values.ToList();
		for (int i = 0; i < list.Count; i++)
		{
			if (list[i].GetGoodsBaseVo() != null && IGoodsBaseVo.IsTreasureBox(list[i].GetGoodsBaseVo().type) && list[i].GetGameGoodsVo() != null && list[i].GetGameGoodsVo().GoodsState == GameGoodsState.CoolDown)
			{
				return true;
			}
		}
		return false;
	}

	public bool GetOrderInTheScreen(int orderId)
	{
		if ((Object)(object)m_ordersViewLogic == (Object)null)
		{
			return false;
		}
		return m_ordersViewLogic.InTheScreenByOrder(orderId);
	}

	public bool GetTemporaryInTheScreen(int type = 1)
	{
		if ((Object)(object)m_ordersViewLogic == (Object)null)
		{
			return false;
		}
		return m_ordersViewLogic.InTheScreenByType(type);
	}

	public virtual bool CanDragToGrid(int targetGridID)
	{
		return true;
	}

	public virtual bool IsHideGridBg(int targetGridID)
	{
		return false;
	}

	private void OnDisable()
	{
		if (!Data.IsPreload)
		{
			EventManager.GetInstance().DispatchEvent(100130, arg: false);
		}
		if (!((Object)(object)EffectParent != (Object)null) || EffectParent.childCount <= 0)
		{
			return;
		}
		for (int i = 0; i < EffectParent.childCount; i++)
		{
			if ((Object)(object)EffectParent.GetChild(i) != (Object)null)
			{
				Object.Destroy((Object)(object)((Component)EffectParent.GetChild(i)).gameObject);
			}
		}
	}

	private void NewProduceSeriesMainlineOrder(int newProduceSeries)
	{
		ObjectManager.GetInstance().gameOrdersModel.RefreshShowingOrders();
		updateOrderList(1, newProduceSeries);
		updateTopPos();
	}

	public void NewDailyChallengeCanGetReward()
	{
		if ((Object)(object)m_ordersViewLogic != (Object)null)
		{
			m_ordersViewLogic.NewDailyChallengeCanGetReward();
		}
	}

	public bool ChessboardHasGenerator()
	{
		foreach (GameLevelGrid value in GridObjectDic.Values)
		{
			if (!((Object)(object)value == (Object)null) && !value.IsLock)
			{
				GameGoodsVo gameGoodsVo = value.GetGameGoodsVo();
				if (gameGoodsVo != null && !IGoodsBaseVo.CannotDrag(gameGoodsVo.GoodsState) && IGoodsBaseVo.IsCreator(Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(gameGoodsVo.goodsID).type))
				{
					return true;
				}
			}
		}
		return false;
	}

	protected void OnUpdateActivityEnergy()
	{
		List<GameLevelGrid> list = mGridObjectDic.Values.ToList();
		for (int i = 0; i < list.Count; i++)
		{
			GameLevelGrid gameLevelGrid = list[i];
			if (!((Object)(object)gameLevelGrid == (Object)null) && !gameLevelGrid.IsLock && gameLevelGrid.GetGameGoodsVo() != null && gameLevelGrid.GetGoodsBaseVo() != null && !IGoodsBaseVo.CannotDrag(gameLevelGrid.GetGameGoodsVo().GoodsState) && gameLevelGrid.GetGameGoodsVo().GoodsState != GameGoodsState.Bubble && gameLevelGrid.GetGoodsBaseVo().type == 19)
			{
				gameLevelGrid.UpdateActivityEnergy(playAnim: true);
			}
		}
	}

	protected void UpdateEnergyRate()
	{
		IGoodsProduceVo goodsProduceVo = null;
		foreach (KeyValuePair<int, GameLevelGrid> item in mGridObjectDic)
		{
			if (!((Object)(object)item.Value == (Object)null) && !item.Value.IsLock && item.Value.GetGameGoodsVo() != null && item.Value.GetGoodsBaseVo() != null && !IGoodsBaseVo.CannotDrag(item.Value.GetGameGoodsVo().GoodsState) && (item.Value.GetGoodsBaseVo().type == 2 || item.Value.GetGoodsBaseVo().type == 3))
			{
				goodsProduceVo = Singleton<GameLevelManager>.Instance.GetProduceById(item.Value.GetGoodsBaseVo().goodsID);
				if (goodsProduceVo != null && goodsProduceVo.doubleConsume != 0)
				{
					item.Value.UpdateGameLevelItem();
				}
			}
		}
	}

	private void GameFullAnalytic()
	{
		if (!(mGridFullInterval < 60f))
		{
			int bagGoodsNum = Singleton<GameLevelManager>.Instance.GetBagGoodsNum();
			int gameBagOpenNum = Singleton<GameLevelManager>.Instance.GetGameBagOpenNum();
			if (bagGoodsNum >= gameBagOpenNum)
			{
				mGridFullInterval = 0f;
				ObjectManager.GetInstance().userDataModel.SetStuckspotNumByType(UserStuckspotType.OutofSpace, 1);
				Dictionary<string, object> dictionary = new Dictionary<string, object>();
				dictionary.Add("숂끥殺攃村1²厱숋끘徶愌牆6\u0082厁匩橯ā讹赴", GetUnlockGridNum());
				dictionary.Add("숋끥憻洌杓\r\u008a厉刟燯\ud9c7ŀ", gameBagOpenNum);
				int stuckspotNumByType = ObjectManager.GetInstance().userDataModel.GetStuckspotNumByType(UserStuckspotType.OutofSpace);
				int stuckspotNumByType2 = ObjectManager.GetInstance().userDataModel.GetStuckspotNumByType(UserStuckspotType.None);
				dictionary.Add("숋끥枺漌杀7¢厡숞끃斆猟牝?\u009a厙", stuckspotNumByType);
				dictionary.Add("숆끥璸椇杘\rÖ叕듘\u00af赴", stuckspotNumByType2);
				AnalyticInit.OnEvent("숟끥暶匠杀\u001d\u009e厝刔暿\ud9d8ő", dictionary);
			}
		}
	}

	private void GameFullNomergeAnalytic()
	{
		if (!mIsSendAnalytic && !CheckMapCanMerge())
		{
			int gameBagOpenNum = Singleton<GameLevelManager>.Instance.GetGameBagOpenNum();
			int bagGoodsNum = Singleton<GameLevelManager>.Instance.GetBagGoodsNum();
			Dictionary<string, object> dictionary = new Dictionary<string, object>();
			dictionary.Add("숋끥疻渌杓\rÚ叙숁끕涺漂汫3º厹곕\u0083赴", gameBagOpenNum);
			dictionary.Add("숋끥疻猌杓\rÚ叙숇끥溸琈敛'¾厽", bagGoodsNum);
			AnalyticInit.OnEvent("숅끥撻弆杕 \u0096厕숆끏澵䴇晫<Â叁刘櫳\ud9cdő", dictionary);
			mIsSendAnalytic = true;
		}
	}

	public void RefreshSendAnalyticState(GameGoodsBase goodsBase)
	{
		if (goodsBase == null)
		{
			mIsSendAnalytic = false;
		}
	}

	public int GetUnlockGridNum()
	{
		if (GridObjectDic == null)
		{
			return 0;
		}
		int num = 0;
		foreach (GameLevelGrid value in GridObjectDic.Values)
		{
			if (!((Object)(object)value == (Object)null) && !value.IsLock)
			{
				num++;
			}
		}
		return num;
	}

	private void RefreshSceneActivityScoreBuffGameIcon()
	{
		mSceneActivityBuffGameIconRootLogic?.RefreshUI(resLoader);
	}

	private void RefreshFeverActivityGameIcon()
	{
		if (!((Object)(object)mFeverActivityGameIconRootLogic == (Object)null))
		{
			mFeverActivityGameIconRootLogic.RefreshUI();
		}
	}

	private void RefreshOrderPartCommitBuffGameIcon()
	{
		if (!((Object)(object)mOrderPartCommitGameIconRootLogic == (Object)null))
		{
			mOrderPartCommitGameIconRootLogic.RefreshUI(resLoader);
		}
	}

	private void RefreshOrderPartCommitBuff_ActivitySwitch()
	{
		RefreshOrderPartCommitBuffGameIcon();
		updateOrderList();
		UpdateGameGrid();
	}

	private void RefreshCCDoubleGiftGameIcon()
	{
		if (!((Object)(object)mCCDoubleGiftGameIconRootLogic == (Object)null))
		{
			mCCDoubleGiftGameIconRootLogic.RefreshUI();
		}
	}

	private void RefreshCookFrenzyGameIcon(bool isBegin = false)
	{
		if (!((Object)(object)mCookFrenzyBuffGameIconRootLogic == (Object)null))
		{
			bool flag = ObjectManager.Instance.cookFrenzyModel.ICanShowMergeViewActivityEntry();
			bool flag2 = ObjectManager.Instance.cookFrenzyModel.IsStartPoped();
			if (flag)
			{
				mCookFrenzyBuffGameIconRootLogic.RefreshUI(resLoader);
			}
			if ((isBegin & flag) || !flag2)
			{
				mCookFrenzyBuffGameIconRootLogic.FirstOpen();
			}
		}
	}

	private void RefreshOrderReturnBuffGameIcon()
	{
		if (!((Object)(object)mOrderReturnBuffGameIconRootLogic == (Object)null))
		{
			mOrderReturnBuffGameIconRootLogic.RefreshUI(resLoader);
		}
	}

	private void ReissueGeneratorAndMachine()
	{
		List<GoodsLostAnalyticVo> list = new List<GoodsLostAnalyticVo>();
		new List<int>();
		Dictionary<string, int> dictionary = ObjectManager.GetInstance().gameLevelModel.VerifyGeneratorAndMachine();
		if (dictionary == null || dictionary.Count == 0)
		{
			return;
		}
		foreach (KeyValuePair<string, int> item in dictionary)
		{
			if (item.Key.IsNullOrEmpty())
			{
				continue;
			}
			string[] array = item.Key.Split('_');
			if (array.Length == 2)
			{
				int id = array[0].ToInt();
				IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(id);
				if (goodsBaseVoById != null && goodsBaseVoById.activityType <= 0)
				{
					list.Add(new GoodsLostAnalyticVo
					{
						id = goodsBaseVoById.goodsID,
						uuid = item.Key
					});
				}
			}
		}
		GameLevelDefine.MainLineLostGoodsAnalytic(list);
	}

	private void CheckGeneratorNocdState(GameLevelGrid grid)
	{
		if (!((Object)(object)grid == (Object)null) && grid.GetGameGoodsVo() != null && grid.GetGoodsBaseVo() != null && grid.GetGameGoodsVo().goodsID > 0 && grid.GetGoodsBaseVo().type == 2 && !IGoodsBaseVo.CannotDrag(grid.GetGameGoodsVo().GoodsState) && grid.GetGameGoodsVo().GoodsState != GameGoodsState.Bubble)
		{
			grid.GetGameGoodsVo().SetUncooledState(state: true);
			grid.SaveGridData();
		}
	}

	private void UpdateGeneratorNocd(int series, int gridId)
	{
		List<GameLevelGrid> list = mGridObjectDic.Values.ToList();
		for (int i = 0; i < list.Count; i++)
		{
			GameLevelGrid gameLevelGrid = list[i];
			if (!((Object)(object)gameLevelGrid == (Object)null) && !gameLevelGrid.IsLock && gameLevelGrid.GetGameGoodsVo() != null && gameLevelGrid.GetGoodsBaseVo() != null && IGoodsBaseVo.IsCreator(gameLevelGrid.GetGoodsBaseVo().type) && (series == 0 || gameLevelGrid.GetGoodsBaseVo().series == series) && (gridId == 0 || gameLevelGrid.GetGridId() == gridId))
			{
				gameLevelGrid.UpdateGameLevelItem();
			}
		}
	}

	private void UpdateInstrumentSpeedUp(int series, int gridId)
	{
		List<GameLevelGrid> list = mGridObjectDic.Values.ToList();
		for (int i = 0; i < list.Count; i++)
		{
			GameLevelGrid gameLevelGrid = list[i];
			if (!((Object)(object)gameLevelGrid == (Object)null) && !gameLevelGrid.IsLock && gameLevelGrid.GetGameGoodsVo() != null && gameLevelGrid.GetGoodsBaseVo() != null && IGoodsBaseVo.IsInstrument(gameLevelGrid.GetGoodsBaseVo().type) && (series == 0 || gameLevelGrid.GetGoodsBaseVo().series == series) && (gridId == 0 || gameLevelGrid.GetGridId() == gridId))
			{
				gameLevelGrid.UpdateGameLevelItem();
			}
		}
	}

	private void RefreshFeverActivityBuff()
	{
		//IL_0067: Unknown result type (might be due to invalid IL or missing references)
		//IL_0098: Unknown result type (might be due to invalid IL or missing references)
		if ((ObjectManager.GetInstance().feverFlambeV2Model.IsActiveBuff() && ObjectManager.GetInstance().feverFlambeV2Model.HasActivityRes) || (ObjectManager.GetInstance().feverFlambeStageModel.IsActiveBuff() && ObjectManager.GetInstance().feverFlambeStageModel.HasActivityRes) || (ObjectManager.GetInstance().feverFlambeV3Model.IsActiveBuff() && ObjectManager.GetInstance().feverFlambeV3Model.HasActivityRes))
		{
			PlayFeverFlambeEffect();
		}
		else
		{
			HideFeverFlambeEffect();
		}
		if (ObjectManager.GetInstance().feverRelayV2Model.IsActiveBuff() && ObjectManager.GetInstance().feverRelayV2Model.HasActivityRes)
		{
			PlayFeverRelayEffect();
		}
		else
		{
			HideFeverRelayEffect();
		}
	}

	[AsyncStateMachine(typeof(_003CPlayFeverFlambeEffect_003Ed__265))]
	public UniTask PlayFeverFlambeEffect()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0031: Unknown result type (might be due to invalid IL or missing references)
		_003CPlayFeverFlambeEffect_003Ed__265 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CPlayFeverFlambeEffect_003Ed__265>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	public void HideFeverFlambeEffect()
	{
		GameLevelDefine.RecycleGameObject(mFeverFlambeEffectGo);
		mFeverFlambeEffectGo = null;
	}

	[AsyncStateMachine(typeof(_003CPlayFeverRelayEffect_003Ed__267))]
	public UniTask PlayFeverRelayEffect()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0031: Unknown result type (might be due to invalid IL or missing references)
		_003CPlayFeverRelayEffect_003Ed__267 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CPlayFeverRelayEffect_003Ed__267>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	public void HideFeverRelayEffect()
	{
		GameLevelDefine.RecycleGameObject(mFeverRelayEffect);
		mFeverRelayEffect = null;
	}

	private void CheckStartCookingGuide()
	{
		if (!MonoSingleton<GuideManager>.Instance.IsInGuide() && !((Object)(object)CurrentSelectGrid == (Object)null) && !((Object)(object)GoodsInfoViewLogic == (Object)null) && !((Object)(object)GoodsInfoViewLogic.ManyMakeBtn == (Object)null))
		{
			IGoodsBaseVo goodsBaseVo = CurrentSelectGrid.GetGoodsBaseVo();
			GameGoodsVo gameGoodsVo = CurrentSelectGrid.GetGameGoodsVo();
			if (goodsBaseVo != null && gameGoodsVo != null && IGoodsBaseVo.IsInstrument(goodsBaseVo.type) && gameGoodsVo.MakingGoodsID > 0 && gameGoodsVo.GoodsState == GameGoodsState.CanWork && Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(gameGoodsVo.MakingGoodsID) != null && GameLevelDefine.IsShowShortcutTip(gameGoodsVo.MakingGoodsID))
			{
				MonoSingleton<GuideWeakManager>.Instance.ShowInstrumentStartCooking(((Component)GoodsInfoViewLogic.ManyMakeBtn).transform, ((Component)GoodsInfoViewLogic.ManyMakeBtn).transform);
			}
		}
	}

	private void RefreshRightTopIcon()
	{
		RefreshSceneActivityScoreBuffGameIcon();
		UpdateFireHelperIcon();
		RefreshCCDoubleGiftGameIcon();
	}

	[AsyncStateMachine(typeof(_003CApplySkinAsync_003Ed__273))]
	public UniTask ApplySkinAsync()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0031: Unknown result type (might be due to invalid IL or missing references)
		_003CApplySkinAsync_003Ed__273 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CApplySkinAsync_003Ed__273>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	public UniTask RefreshSkinAsync()
	{
		//IL_0001: Unknown result type (might be due to invalid IL or missing references)
		return ApplySkinAsync();
	}

	private void OnAnalyticBagEvent()
	{
		if (ViewManager.GetInstance().LastCloseViewName.Contains("橂a4끖k\udd37䋟") && Singleton<GameLevelManager>.Instance.IsCloseFromBagView)
		{
			Singleton<GameLevelManager>.Instance.OnAnalyticBagView("숉끖现琊损\rÒ发숵끈璭甶慆7Ö叕숈끔犆搉牛3Î反");
		}
		Singleton<GameLevelManager>.Instance.IsCloseFromBagView = false;
	}

	public bool CreateNewGoods(int id, int gridID, Transform startTrans = null)
	{
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(id);
		if (goodsBaseVoById != null && goodsBaseVoById.activityType > 0)
		{
			return false;
		}
		GameLevelGrid gameLevelGrid = null;
		gameLevelGrid = GetNearbyEmptyGrid(gridID, showEnoughTip: true, startTrans, id);
		if (goodsBaseVoById != null && (Object)(object)gameLevelGrid != (Object)null)
		{
			GameGoodsVo gameGoodsVo = new GameGoodsVo();
			gameGoodsVo.goodsID = goodsBaseVoById.goodsID;
			gameGoodsVo.GoodsState = GameGoodsState.Normal;
			GameGoodsBase gameGoodsBaseById = Singleton<GameLevelManager>.Instance.GetGameGoodsBaseById(gameGoodsVo.goodsID, gameLevelGrid, gameGoodsVo);
			gameLevelGrid.ChangeGameGoodsVoDebug(gameGoodsBaseById);
			GameLevelDefine.ChangeGeneratorUUIDToDisk(gameGoodsBaseById.GameGoods, 1);
			return true;
		}
		return false;
	}

	public void CreatorSpeedup(int time)
	{
		List<GameLevelGrid> list = mGridObjectDic.Values.ToList();
		for (int i = 0; i < list.Count; i++)
		{
			if (!((Object)(object)list[i] == (Object)null) && !list[i].IsLock && list[i].GetGameGoodsVo() != null && list[i].GetGoodsBaseVo() != null && !IGoodsBaseVo.IsDisabled(list[i].GetGameGoodsVo().GoodsState))
			{
				int type = list[i].GetGoodsBaseVo().type;
				if ((IGoodsBaseVo.IsCreator(type) || IGoodsBaseVo.IsConversion(type)) && list[i].GetGameGoodsBase() != null)
				{
					list[i].GetGameGoodsVo().DoneType = "删狳\ud9d8ń";
					list[i].GetGameGoodsBase().CDSpeedupAttribute(time);
				}
			}
		}
	}

	public void GeneratorSuperSpeedup(int time)
	{
		List<GameLevelGrid> list = mGridObjectDic.Values.ToList();
		for (int i = 0; i < list.Count; i++)
		{
			if (!((Object)(object)list[i] == (Object)null) && !list[i].IsLock && list[i].GetGameGoodsVo() != null && list[i].GetGoodsBaseVo() != null && !IGoodsBaseVo.IsDisabled(list[i].GetGameGoodsVo().GoodsState))
			{
				int type = list[i].GetGoodsBaseVo().type;
				if ((IGoodsBaseVo.IsCreator(type) || IGoodsBaseVo.IsConversion(type)) && list[i].GetGameGoodsBase() != null)
				{
					list[i].GetGameGoodsVo().DoneType = "删狳\ud9d8ń";
					list[i].GetGameGoodsBase().CDSpeedupAttribute(time);
				}
			}
		}
		List<GameGoodsVo> gameBagGoodsList = Singleton<GameLevelManager>.Instance.GetGameBagGoodsList();
		for (int j = 0; j < gameBagGoodsList.Count; j++)
		{
			if (gameBagGoodsList[j] == null)
			{
				continue;
			}
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(gameBagGoodsList[j].goodsID);
			if (goodsBaseVoById != null && IGoodsBaseVo.IsCreator(goodsBaseVoById.type))
			{
				if (gameBagGoodsList[j].InitiativeCDStarTime > 0)
				{
					gameBagGoodsList[j].InitiativeCDStarTime -= time;
				}
				if (gameBagGoodsList[j].PassiveCDStarTime > 0)
				{
					gameBagGoodsList[j].PassiveCDStarTime -= time;
				}
			}
		}
		Dictionary<int, List<GameGoodsVo>> bagGeneratorStorageDic = ObjectManager.GetInstance().bagGeneratorStorageModel.GetBagGeneratorStorageDic();
		List<int> list2 = ((bagGeneratorStorageDic == null) ? new List<int>() : bagGeneratorStorageDic.Keys.ToList());
		for (int k = 0; k < list2.Count; k++)
		{
			if (bagGeneratorStorageDic[list2[k]] == null || bagGeneratorStorageDic[list2[k]].Count <= 0)
			{
				continue;
			}
			List<GameGoodsVo> list3 = bagGeneratorStorageDic[list2[k]];
			for (int l = 0; l < list3.Count; l++)
			{
				IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(list3[l].goodsID);
				if (goodsBaseVoById != null && IGoodsBaseVo.IsCreator(goodsBaseVoById.type))
				{
					if (list3[l].InitiativeCDStarTime > 0)
					{
						list3[l].InitiativeCDStarTime -= time;
					}
					if (list3[l].PassiveCDStarTime > 0)
					{
						list3[l].PassiveCDStarTime -= time;
					}
				}
			}
		}
	}

	public void CookingSpeedup(int time)
	{
		List<GameLevelGrid> list = mGridObjectDic.Values.ToList();
		for (int i = 0; i < list.Count; i++)
		{
			if (!((Object)(object)list[i] == (Object)null) && !list[i].IsLock && list[i].GetGameGoodsVo() != null && list[i].GetGoodsBaseVo() != null && !IGoodsBaseVo.IsDisabled(list[i].GetGameGoodsVo().GoodsState) && IGoodsBaseVo.IsInstrument(list[i].GetGoodsBaseVo().type) && list[i].GetGameGoodsBase() != null)
			{
				list[i].GetGameGoodsVo().DoneType = "숚끈状攛火4Î反뻹";
				list[i].GetGameGoodsBase().MakingSpeedupAttribute(time);
			}
		}
	}

	public bool InstrumentSpeedup(int time, GameLevelGrid startGrid)
	{
		//IL_018d: Unknown result type (might be due to invalid IL or missing references)
		GameLevelGrid selectInstrument = null;
		List<GameLevelGrid> list = mGridObjectDic.Values.ToList();
		for (int i = 0; i < list.Count; i++)
		{
			if ((Object)(object)list[i] == (Object)null || list[i].IsLock || list[i].GetGameGoodsVo() == null || list[i].GetGoodsBaseVo() == null || IGoodsBaseVo.IsDisabled(list[i].GetGameGoodsVo().GoodsState) || !IGoodsBaseVo.IsInstrument(list[i].GetGoodsBaseVo().type) || list[i].GetGameGoodsVo().GoodsState != GameGoodsState.Working || list[i].GetGameGoodsBase() == null)
			{
				continue;
			}
			if ((Object)(object)selectInstrument == (Object)null)
			{
				selectInstrument = list[i];
				continue;
			}
			float makingRemainingTime = Singleton<GameLevelManager>.Instance.GetMakingRemainingTime(selectInstrument.GetGameGoodsVo());
			if (Singleton<GameLevelManager>.Instance.GetMakingRemainingTime(list[i].GetGameGoodsVo()) > makingRemainingTime)
			{
				selectInstrument = list[i];
			}
		}
		if ((Object)(object)selectInstrument != (Object)null)
		{
			CommonMaskViewLogic.Show(2f);
			selectInstrument.GetGameGoodsVo().DoneType = "숚끈憶洛火+\u008a厉뻵";
			selectInstrument.GetGameGoodsBase().MakingSpeedupAttribute(time);
			if ((Object)(object)startGrid != (Object)null)
			{
				startGrid.ItemDisappearAnim();
			}
			TimeManager.Instance.Schedule(this, (float dt) =>
			{
				//IL_002c: Unknown result type (might be due to invalid IL or missing references)
				//IL_0031: Unknown result type (might be due to invalid IL or missing references)
				//IL_009b: Unknown result type (might be due to invalid IL or missing references)
				//IL_00ba: Unknown result type (might be due to invalid IL or missing references)
				//IL_00bf: Unknown result type (might be due to invalid IL or missing references)
				//IL_00d0: Unknown result type (might be due to invalid IL or missing references)
				//IL_00e8: Unknown result type (might be due to invalid IL or missing references)
				//IL_00f2: Expected Obj, but got Unknown
				AudioManager.Instance.PlayEffect("숚끈溶氛火'¾厽숞끗新爟楑<\u009a厙녧她㕐\0逩\ud982");
				Vector3 position = startGrid.GameItemParent.position;
				GameObject val = resLoader.LoadSync<GameObject>("숏끜徿瀐敗&\u0082厁숵끕涩椶牍3º厹初澣\ud9f7ō");
				GameObject flyGo = null;
				if ((Object)(object)val != (Object)null)
				{
					flyGo = Object.Instantiate<GameObject>(val);
					flyGo.transform.SetParent(((Component)this).transform);
					flyGo.transform.LocalIdentity<Transform>();
					flyGo.transform.position = position;
				}
				if ((Object)(object)flyGo != (Object)null)
				{
					Vector3 position2 = selectInstrument.GameItemParent.position;
					TweenSettingsExtensions.SetAutoKill<Sequence>(TweenSettingsExtensions.AppendCallback(TweenSettingsExtensions.Append(DOTween.Sequence(), (Tween)(object)ShortcutExtensions.DOMove(flyGo.transform, position2, 0.67f, false)), (TweenCallback)(() =>
					{
						if ((Object)(object)flyGo != (Object)null)
						{
							Object.Destroy((Object)(object)flyGo);
						}
					})), true);
				}
			}, 0.1f, 1);
			TimeManager.Instance.Schedule(this, (float dt) =>
			{
				selectInstrument.PlayYamiAnim("숏끜徿瀐敗&\u0082厁숵끕涩椶牍3º厹蛰£赴");
				selectInstrument.PlayGlobalSpeedupAnim();
			}, 0.8f, 1);
			return true;
		}
		return false;
	}

	public bool CreatorAddProduceNum(IGoodsBaseVo useGoods, GameLevelGrid startGrid)
	{
		if (useGoods == null)
		{
			return false;
		}
		IGoodsCollectVo goodsCollectVoById = Singleton<GameLevelManager>.Instance.GetGoodsCollectVoById(useGoods.goodsID);
		if (goodsCollectVoById == null)
		{
			return false;
		}
		Dictionary<int, List<GameLevelGrid>> dictionary = new Dictionary<int, List<GameLevelGrid>>();
		List<int> list = new List<int>();
		List<int> list2 = new List<int>();
		List<GameLevelGrid> list3 = mGridObjectDic.Values.ToList();
		ILevelItemEffectVo levelItemEffectVo = null;
		for (int i = 0; i < list3.Count; i++)
		{
			if ((Object)(object)list3[i] == (Object)null || list3[i].IsLock || list3[i].GetGameGoodsVo() == null || list3[i].GetGoodsBaseVo() == null || IGoodsBaseVo.IsDisabled(list3[i].GetGameGoodsVo().GoodsState) || !IGoodsBaseVo.IsCreator(list3[i].GetGoodsBaseVo().type))
			{
				continue;
			}
			levelItemEffectVo = Singleton<GameLevelManager>.Instance.GetLevelItemEffectVoById(list3[i].GetGoodsBaseVo().goodsID);
			if (levelItemEffectVo != null && levelItemEffectVo.fireworksSeriesWeight > 0 && levelItemEffectVo.fireworksLevelWeight > 0)
			{
				int series = list3[i].GetGoodsBaseVo().series;
				if (!list.Contains(series))
				{
					list.Add(series);
					list2.Add(levelItemEffectVo.fireworksSeriesWeight);
				}
				if (dictionary.ContainsKey(series))
				{
					dictionary[series].Add(list3[i]);
					continue;
				}
				dictionary.Add(series, new List<GameLevelGrid> { list3[i] });
			}
		}
		if (dictionary.Count <= 0)
		{
			return false;
		}
		Dictionary<int, int> additionalDic = new Dictionary<int, int>();
		for (int j = 0; j < goodsCollectVoById.amount; j++)
		{
			int randomValue = GameLevelDefine.GetRandomValue(list, list2);
			dictionary.TryGetValue(randomValue, out var value);
			if (value == null || value.Count <= 0)
			{
				continue;
			}
			GameLevelGrid randomGridByList = GetRandomGridByList(value, 1);
			if ((Object)(object)randomGridByList != (Object)null)
			{
				if (additionalDic.ContainsKey(randomGridByList.GetGridId()))
				{
					additionalDic[randomGridByList.GetGridId()]++;
				}
				else
				{
					additionalDic.Add(randomGridByList.GetGridId(), 1);
				}
			}
		}
		foreach (KeyValuePair<int, int> item in additionalDic)
		{
			mGridObjectDic.TryGetValue(item.Key, out var value2);
			if ((Object)(object)value2 != (Object)null)
			{
				value2.GetGameGoodsVo().InitiativeAdditionalNumber += item.Value;
				value2.SaveGridData();
			}
		}
		string animName = "숏끜徿瀐敗&\u0082厁숵끕抩弶牙4\u008e厍뗔\u0087赴";
		string effectFKName = "숏끜徿瀐敗&\u0082厁숵끕抩弶牙4\u008e厍녬卯\u0c00\0逛\ud96e";
		switch (useGoods.level)
		{
		case 1:
			animName = "숏끜徿瀐敗&\u0082厁숵끕抩弶牙4\u008e厍뗔\u0087赴";
			effectFKName = "숏끜徿瀐敗&\u0082厁숵끕抩弶牙4\u008e厍녬卯\u0c00\0逛\ud96e";
			break;
		case 2:
			animName = "숏끜徿瀐敗&\u0082厁숵끕抩弶牙4\u008e厍녭奩㜦\0逕\ud96e";
			effectFKName = "숏끜徿瀐敗&\u0082厁숵끕抩弶牙4\u008e厍숎끓徽昏浘7\u0082厁뻷";
			break;
		case 3:
			animName = "숏끜徿瀐敗&\u0082厁숵끕抩弶牙4\u008e厍刘檟\ud9c0Ŝ";
			effectFKName = "숏끜徿瀐敗&\u0082厁숵끕抩弶牙4\u008e厍恨i4끨a崶㣃";
			break;
		}
		CommonMaskViewLogic.Show(1.6f);
		GameLevelAnimationTools.PlayMagicStickAnim(animName, startGrid.GameItemParent, ((Component)this).transform, resLoader, () =>
		{
			foreach (KeyValuePair<int, int> item2 in additionalDic)
			{
				mGridObjectDic.TryGetValue(item2.Key, out var value3);
				if ((Object)(object)value3 != (Object)null)
				{
					value3.UpdateGameLevelItem();
					value3.PlayPlusAdditional(item2.Value, effectFKName);
				}
			}
		}, 1f);
		return true;
	}

	public bool GoodsRandomUpgrade(IGoodsBaseVo useGoods, GameLevelGrid startGrid)
	{
		if (useGoods == null)
		{
			return false;
		}
		if (Singleton<GameLevelManager>.Instance.GetGoodsCollectVoById(useGoods.goodsID) == null)
		{
			return false;
		}
		Dictionary<int, List<GameLevelGrid>> dictionary = new Dictionary<int, List<GameLevelGrid>>();
		List<int> list = new List<int>();
		List<int> list2 = new List<int>();
		List<GameLevelGrid> list3 = mGridObjectDic.Values.ToList();
		ILevelItemEffectVo levelItemEffectVo = null;
		for (int i = 0; i < list3.Count; i++)
		{
			if ((Object)(object)list3[i] == (Object)null || list3[i].IsLock || list3[i].GetGameGoodsVo() == null || list3[i].GetGoodsBaseVo() == null || IGoodsBaseVo.IsDisabled(list3[i].GetGameGoodsVo().GoodsState))
			{
				continue;
			}
			levelItemEffectVo = Singleton<GameLevelManager>.Instance.GetLevelItemEffectVoById(list3[i].GetGoodsBaseVo().goodsID);
			if (levelItemEffectVo != null && levelItemEffectVo.RocketItemMinLevel > 0 && levelItemEffectVo.RocketItemMinLevel <= useGoods.level && levelItemEffectVo.RocketItemMaxLevel >= useGoods.level && levelItemEffectVo.rocketSeriesWeight > 0 && levelItemEffectVo.rocketLevelWeight > 0)
			{
				int series = list3[i].GetGoodsBaseVo().series;
				if (!list.Contains(series))
				{
					list.Add(series);
					list2.Add(levelItemEffectVo.rocketSeriesWeight);
				}
				if (dictionary.ContainsKey(series))
				{
					dictionary[series].Add(list3[i]);
					continue;
				}
				dictionary.Add(series, new List<GameLevelGrid> { list3[i] });
			}
		}
		if (dictionary.Count <= 0)
		{
			return false;
		}
		int randomValue = GameLevelDefine.GetRandomValue(list, list2);
		dictionary.TryGetValue(randomValue, out var value);
		if (value == null || value.Count <= 0)
		{
			return false;
		}
		GameLevelGrid randomGrid = GetRandomGridByList(value, 2);
		int oldGoodsID = 0;
		if ((Object)(object)randomGrid != (Object)null)
		{
			oldGoodsID = randomGrid.GetGoodsBaseVo().goodsID;
			Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(randomGrid.GetGoodsBaseVo().goodsID, -1, randomGrid.GetGameGoodsVo());
			GameLevelDefine.ChangeGeneratorUUIDToDisk(randomGrid.GetGameGoodsVo(), 1);
			GameLevelDefine.MapGoodsAnalytics(randomGrid.GetGoodsBaseVo().goodsID, 1, 3);
			IGoodsBaseVo goodsBaseVoBySeriesAndLevel = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoBySeriesAndLevel(randomGrid.GetGoodsBaseVo().series, randomGrid.GetGoodsBaseVo().level + 1);
			if (goodsBaseVoBySeriesAndLevel == null)
			{
				return false;
			}
			int num = 0;
			int num2 = 0;
			int num3 = 0;
			List<int> list4 = new List<int>();
			if (randomGrid.GetGameGoodsVo() != null)
			{
				num += randomGrid.GetGameGoodsVo().InitiativeSurplusNumber;
				num2 += randomGrid.GetGameGoodsVo().PassiveSurplusNumber;
				num3 += randomGrid.GetGameGoodsVo().InitiativeAdditionalNumber;
				list4 = list4.Concat(randomGrid.GetGameGoodsVo().MergeDropList).ToList();
			}
			GameGoodsBase goodsBase = Singleton<GameLevelManager>.Instance.GetGameGoodsBaseById(goodsBaseVoBySeriesAndLevel.goodsID, randomGrid, null, num, num2, num3, excludeZero: true, addMergeDrop: true, list4);
			Singleton<GameLevelManager>.Instance.ChangeMapById(randomGrid.GetGridId(), goodsBase.GameGoods);
			Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(goodsBase.GameGoods.goodsID, 1, goodsBase.GameGoods);
			GameLevelDefine.ChangeGeneratorUUIDToDisk(goodsBase.GameGoods, 1);
			GameLevelDefine.MapGoodsAnalytics(goodsBase.GameGoods.goodsID, 1, 1, 80);
			RocketUpgradeGoods(startGrid, randomGrid, useGoods.level, () =>
			{
				string effectName = "숏끜徿瀐敗&\u0082厁숵끕掩欶牆=\u0092厑숆끎徆昇敛%\u0082厁뻷";
				switch (useGoods.level)
				{
				case 1:
					effectName = "숏끜徿瀐敗&\u0082厁숵끕掩欶牆=\u0092厑숆끎徆昇敛%\u0082厁뻷";
					break;
				case 2:
					effectName = "숏끜徿瀐敗&\u0082厁숵끕掩欶牆=\u0092厑숇끎撆氈敝6\u0096厕列楇\ud9cdş";
					break;
				case 3:
					effectName = "숏끜徿瀐敗&\u0082厁숵끕掩欶牆=\u0092厑숂끎梆弃敝5¦厥渶䅳";
					break;
				}
				if ((Object)(object)randomGrid != (Object)null)
				{
					randomGrid.ChangeGameGoodsVo(goodsBase, "扵p4끲c尸㫍");
					if ((Object)(object)randomGrid != (Object)null)
					{
						randomGrid.PlayRocketAnim(effectName, "숏끓犫欐晃=Î反녳屟㰪\0逝\ud979");
					}
					CheckOrderUpdate(oldGoodsID);
				}
			});
			EventManager.GetInstance().DispatchEvent<Transform, int, float>(203236, randomGrid.GameItemParent, goodsBase.GameGoods.goodsID, 1.5f);
			EventManager.GetInstance().DispatchEvent<Transform, int, float>(203218, randomGrid.GameItemParent, goodsBase.GameGoods.goodsID, 1.5f);
			return true;
		}
		return false;
	}

	public GameLevelGrid GetRandomGridByList(List<GameLevelGrid> _gridList, int type)
	{
		if (_gridList == null || _gridList.Count <= 0)
		{
			return null;
		}
		if (_gridList.Count == 1)
		{
			return _gridList[0];
		}
		List<int> list = new List<int>();
		List<int> list2 = new List<int>();
		ILevelItemEffectVo levelItemEffectVo = null;
		for (int i = 0; i < _gridList.Count; i++)
		{
			levelItemEffectVo = Singleton<GameLevelManager>.Instance.GetLevelItemEffectVoById(_gridList[i].GetGoodsBaseVo().goodsID);
			if (levelItemEffectVo != null)
			{
				list.Add(i);
				switch (type)
				{
				case 1:
					list2.Add(levelItemEffectVo.fireworksLevelWeight);
					break;
				case 2:
					list2.Add(levelItemEffectVo.rocketLevelWeight);
					break;
				}
			}
			else
			{
				list.Add(i);
				list2.Add(0);
			}
		}
		int randomValue = GameLevelDefine.GetRandomValue(list, list2);
		if (_gridList.Count > randomValue)
		{
			return _gridList[randomValue];
		}
		return _gridList[0];
	}

	public void ShowAdditionalHint(IGoodsBaseVo additionalCard, int dragGridID)
	{
		if ((MonoSingleton<GuideManager>.Instance.IsInGuide() && MonoSingleton<GuideManager>.Instance.CurrentGuideName() == "숎끏嚰㈏䝑\r^卝蘓ö赴") || (MonoSingleton<GuideManager>.Instance.IsInGuide() && MonoSingleton<GuideManager>.Instance.CurrentGuideName() == "숎끏嚰㌏䝑\r^卝蘓ö赴"))
		{
			return;
		}
		if (mShowAdditionalHintList == null)
		{
			mShowAdditionalHintList = new List<GameLevelGrid>();
		}
		mShowAdditionalHintList.Clear();
		IGoodsCollectVo goodsCollectVoById = Singleton<GameLevelManager>.Instance.GetGoodsCollectVoById(additionalCard.goodsID);
		if (goodsCollectVoById == null)
		{
			return;
		}
		List<GameLevelGrid> list = new List<GameLevelGrid>();
		List<GameLevelGrid> list2 = mGridObjectDic.Values.ToList();
		for (int i = 0; i < list2.Count; i++)
		{
			GameLevelGrid gameLevelGrid = list2[i];
			if ((Object)(object)gameLevelGrid == (Object)null)
			{
				continue;
			}
			if ((Object)(object)gameLevelGrid.GetShapeHeadGrid() != (Object)null)
			{
				gameLevelGrid = gameLevelGrid.GetShapeHeadGrid();
			}
			if (gameLevelGrid.IsLock || gameLevelGrid.GetGameGoodsVo() == null || gameLevelGrid.GetGoodsBaseVo() == null)
			{
				continue;
			}
			GameGoodsVo gameGoodsVo = gameLevelGrid.GetGameGoodsVo();
			IGoodsBaseVo goodsBaseVo = gameLevelGrid.GetGoodsBaseVo();
			if (gameGoodsVo.GoodsState == GameGoodsState.Bubble)
			{
				continue;
			}
			if (IGoodsBaseVo.IsCreator(goodsBaseVo.type))
			{
				if (!IGoodsBaseVo.CannotDrag(gameGoodsVo.GoodsState) && (goodsCollectVoById.itemId == 0 || goodsCollectVoById.itemId == goodsBaseVo.series))
				{
					if (gameLevelGrid.GetGridId() == list2[i].GetGridId())
					{
						list2[i].PlayAdditionalHint();
					}
					mShowAdditionalHintList.Add(list2[i]);
					list2[i].GridBg.SetSelfActive<Image>(true);
					((Component)list2[i]).transform.SetParent(DragItemParent);
					((Component)list2[i]).transform.SetSiblingIndex(0);
				}
			}
			else if (gameGoodsVo.goodsID == additionalCard.goodsID && gameLevelGrid.GetGridId() != dragGridID)
			{
				list.Add(gameLevelGrid);
			}
		}
		if (mShowAdditionalHintList.Count > 0)
		{
			for (int j = 0; j < list.Count; j++)
			{
				mShowAdditionalHintList.Add(list[j]);
				list[j].GridBg.SetSelfActive<Image>(true);
				((Component)list[j]).transform.SetParent(DragItemParent);
				((Component)list[j]).transform.SetSiblingIndex(0);
			}
			MaskingNode.SetSelfActive(active: true);
			AudioManager.GetInstance().PlayLoopSound("숎끈斶式灁1\u009a厙숎끛玫攏捫'Ò发");
		}
	}

	public void HideAdditionalHint()
	{
		if (mShowAdditionalHintList != null && mShowAdditionalHintList.Count != 0)
		{
			for (int i = 0; i < mShowAdditionalHintList.Count; i++)
			{
				mShowAdditionalHintList[i].StopAdditionalHint();
				mShowAdditionalHintList[i].UpdateGameLevelItem();
				mShowAdditionalHintList[i].GridBg.SetSelfActive<Image>(false);
				((Component)mShowAdditionalHintList[i]).transform.SetParent(GridParent);
			}
			mShowAdditionalHintList.Clear();
			MaskingNode.SetSelfActive(active: false);
			AudioManager.GetInstance().StopLoopSound();
		}
	}

	public void ShowSplitHint(GameGoodsVo splitCard, int dragGridID)
	{
		if (splitCard == null)
		{
			return;
		}
		bool flag = false;
		if (splitCard.GoodsUses > 1 && !CheckEmptyGridEnough(1))
		{
			flag = true;
		}
		if (mShowSplitHintList == null)
		{
			mShowSplitHintList = new List<GameLevelGrid>();
		}
		mShowSplitHintList.Clear();
		List<GameLevelGrid> list = mGridObjectDic.Values.ToList();
		List<GameLevelGrid> list2 = new List<GameLevelGrid>();
		for (int i = 0; i < list.Count; i++)
		{
			GameLevelGrid gameLevelGrid = list[i];
			if (!((Object)(object)gameLevelGrid == (Object)null) && !gameLevelGrid.IsLock && gameLevelGrid.GetGameGoodsVo() != null)
			{
				GameGoodsVo gameGoodsVo = gameLevelGrid.GetGameGoodsVo();
				if (Singleton<GameLevelManager>.Instance.GoodsCanSplit(gameGoodsVo) && !flag)
				{
					gameLevelGrid.PlaySplitHint();
					mShowSplitHintList.Add(gameLevelGrid);
					gameLevelGrid.GridBg.SetSelfActive<Image>(true);
					((Component)gameLevelGrid).transform.SetParent(DragItemParent);
					((Component)gameLevelGrid).transform.SetSiblingIndex(0);
				}
				else if (Singleton<GameLevelManager>.Instance.IsMaxLevelGoods(splitCard.goodsID) && gameGoodsVo.goodsID == splitCard.goodsID && gameLevelGrid.GetGridId() != dragGridID)
				{
					list2.Add(gameLevelGrid);
				}
			}
		}
		if ((mShowSplitHintList.Count > 0 || list2.Count > 0) | flag)
		{
			for (int j = 0; j < list2.Count; j++)
			{
				mShowSplitHintList.Add(list2[j]);
				list2[j].GridBg.SetSelfActive<Image>(true);
				((Component)list2[j]).transform.SetParent(DragItemParent);
				((Component)list2[j]).transform.SetSiblingIndex(0);
			}
			MaskingNode.SetSelfActive(active: true);
		}
	}

	public void HideSplitHint()
	{
		MaskingNode.SetSelfActive(active: false);
		if (mShowSplitHintList != null && mShowSplitHintList.Count != 0)
		{
			for (int i = 0; i < mShowSplitHintList.Count; i++)
			{
				mShowSplitHintList[i].StopSplitHint();
				mShowSplitHintList[i].UpdateGameLevelItem(backgroundAnim: false);
				mShowSplitHintList[i].GridBg.SetSelfActive<Image>(false);
				((Component)mShowSplitHintList[i]).transform.SetParent(GridParent);
			}
			mShowSplitHintList.Clear();
		}
	}

	public void ShowCopyHint(IGoodsBaseVo copyCard, int dragGridID)
	{
		if (mShowCopyHintList == null)
		{
			mShowCopyHintList = new List<GameLevelGrid>();
		}
		mShowCopyHintList.Clear();
		List<GameLevelGrid> list = mGridObjectDic.Values.ToList();
		List<GameLevelGrid> list2 = new List<GameLevelGrid>();
		for (int i = 0; i < list.Count; i++)
		{
			GameLevelGrid gameLevelGrid = list[i];
			if (!((Object)(object)gameLevelGrid == (Object)null) && !gameLevelGrid.IsLock && gameLevelGrid.GetGameGoodsVo() != null)
			{
				GameGoodsVo gameGoodsVo = gameLevelGrid.GetGameGoodsVo();
				if (Singleton<GameLevelManager>.Instance.GoodsCanCopy(gameGoodsVo, copyCard))
				{
					gameLevelGrid.PlayCopyHint();
					mShowCopyHintList.Add(gameLevelGrid);
					gameLevelGrid.GridBg.SetSelfActive<Image>(true);
					((Component)gameLevelGrid).transform.SetParent(DragItemParent);
					((Component)gameLevelGrid).transform.SetSiblingIndex(0);
				}
				else if (gameGoodsVo.goodsID == copyCard.goodsID && gameLevelGrid.GetGridId() != dragGridID)
				{
					list2.Add(gameLevelGrid);
				}
			}
		}
		if (mShowCopyHintList.Count > 0)
		{
			for (int j = 0; j < list2.Count; j++)
			{
				mShowCopyHintList.Add(list2[j]);
				list2[j].GridBg.SetSelfActive<Image>(true);
				((Component)list2[j]).transform.SetParent(DragItemParent);
				((Component)list2[j]).transform.SetSiblingIndex(0);
			}
			MaskingNode.SetSelfActive(active: true);
		}
	}

	public void HideCopyHint()
	{
		if (mShowCopyHintList != null && mShowCopyHintList.Count != 0)
		{
			for (int i = 0; i < mShowCopyHintList.Count; i++)
			{
				mShowCopyHintList[i].StopCopyHint();
				mShowCopyHintList[i].UpdateGameLevelItem();
				mShowCopyHintList[i].GridBg.SetSelfActive<Image>(false);
				((Component)mShowCopyHintList[i]).transform.SetParent(GridParent);
			}
			mShowCopyHintList.Clear();
			MaskingNode.SetSelfActive(active: false);
		}
	}

	public void ShowUpgradeHint(IGoodsBaseVo upgradeCard, int dragGridID)
	{
		if (mShowUpgradeHintList == null)
		{
			mShowUpgradeHintList = new List<GameLevelGrid>();
		}
		mShowUpgradeHintList.Clear();
		List<GameLevelGrid> list = mGridObjectDic.Values.ToList();
		List<GameLevelGrid> list2 = new List<GameLevelGrid>();
		for (int i = 0; i < list.Count; i++)
		{
			GameLevelGrid gameLevelGrid = list[i];
			if (!((Object)(object)gameLevelGrid == (Object)null) && !gameLevelGrid.IsLock && gameLevelGrid.GetGameGoodsVo() != null)
			{
				GameGoodsVo gameGoodsVo = gameLevelGrid.GetGameGoodsVo();
				if (Singleton<GameLevelManager>.Instance.GoodsCanUpgrade(gameGoodsVo))
				{
					gameLevelGrid.PlayUpgradeHint();
					mShowUpgradeHintList.Add(gameLevelGrid);
					gameLevelGrid.GridBg.SetSelfActive<Image>(true);
					((Component)gameLevelGrid).transform.SetParent(DragItemParent);
					((Component)gameLevelGrid).transform.SetSiblingIndex(0);
				}
				else if (gameGoodsVo.goodsID == upgradeCard.goodsID && gameLevelGrid.GetGridId() != dragGridID)
				{
					list2.Add(gameLevelGrid);
				}
			}
		}
		if (mShowUpgradeHintList.Count > 0)
		{
			for (int j = 0; j < list2.Count; j++)
			{
				mShowUpgradeHintList.Add(list2[j]);
				list2[j].GridBg.SetSelfActive<Image>(true);
				((Component)list2[j]).transform.SetParent(DragItemParent);
				((Component)list2[j]).transform.SetSiblingIndex(0);
			}
			MaskingNode.SetSelfActive(active: true);
		}
	}

	public void HideUpgradeHint()
	{
		if (mShowUpgradeHintList != null && mShowUpgradeHintList.Count != 0)
		{
			for (int i = 0; i < mShowUpgradeHintList.Count; i++)
			{
				mShowUpgradeHintList[i].StopUpgradeHint();
				mShowUpgradeHintList[i].UpdateGameLevelItem();
				mShowUpgradeHintList[i].GridBg.SetSelfActive<Image>(false);
				((Component)mShowUpgradeHintList[i]).transform.SetParent(GridParent);
			}
			mShowUpgradeHintList.Clear();
			MaskingNode.SetSelfActive(active: false);
		}
	}

	public void ShowGeneratorAcceleratorHint(IGoodsBaseVo additionalCard, int dragGridID)
	{
		if (mShowAcceleratorHintList == null)
		{
			mShowAcceleratorHintList = new List<GameLevelGrid>();
		}
		mShowAcceleratorHintList.Clear();
		List<GameLevelGrid> list = new List<GameLevelGrid>();
		List<GameLevelGrid> list2 = mGridObjectDic.Values.ToList();
		for (int i = 0; i < list2.Count; i++)
		{
			GameLevelGrid gameLevelGrid = list2[i];
			if ((Object)(object)gameLevelGrid == (Object)null)
			{
				continue;
			}
			if ((Object)(object)gameLevelGrid.GetShapeHeadGrid() != (Object)null)
			{
				gameLevelGrid = gameLevelGrid.GetShapeHeadGrid();
			}
			if (gameLevelGrid.IsLock || gameLevelGrid.GetGameGoodsVo() == null || gameLevelGrid.GetGoodsBaseVo() == null)
			{
				continue;
			}
			GameGoodsVo gameGoodsVo = gameLevelGrid.GetGameGoodsVo();
			IGoodsBaseVo goodsBaseVo = gameLevelGrid.GetGoodsBaseVo();
			if (IGoodsBaseVo.IsDisabled(gameGoodsVo.GoodsState))
			{
				continue;
			}
			if (IGoodsBaseVo.IsCreator(goodsBaseVo.type) && gameGoodsVo.GoodsState == GameGoodsState.CoolDown)
			{
				if (gameLevelGrid.GetGridId() == list2[i].GetGridId())
				{
					list2[i].PlayGeneratorAcceleratorHint();
				}
				mShowAcceleratorHintList.Add(list2[i]);
				list2[i].GridBg.SetSelfActive<Image>(true);
				((Component)list2[i]).transform.SetParent(DragItemParent);
				((Component)list2[i]).transform.SetSiblingIndex(0);
			}
			else if (gameGoodsVo.goodsID == additionalCard.goodsID && gameLevelGrid.GetGridId() != dragGridID)
			{
				list.Add(gameLevelGrid);
			}
		}
		if (mShowAcceleratorHintList.Count > 0)
		{
			for (int j = 0; j < list.Count; j++)
			{
				mShowAcceleratorHintList.Add(list[j]);
				list[j].GridBg.SetSelfActive<Image>(true);
				((Component)list[j]).transform.SetParent(DragItemParent);
				((Component)list[j]).transform.SetSiblingIndex(0);
			}
			MaskingNode.SetSelfActive(active: true);
		}
	}

	public void HideGeneratorAcceleratorHint()
	{
		if (mShowAcceleratorHintList != null && mShowAcceleratorHintList.Count != 0)
		{
			for (int i = 0; i < mShowAcceleratorHintList.Count; i++)
			{
				mShowAcceleratorHintList[i].StopGeneratorAcceleratorHint();
				mShowAcceleratorHintList[i].UpdateGameLevelItem();
				mShowAcceleratorHintList[i].GridBg.SetSelfActive<Image>(false);
				((Component)mShowAcceleratorHintList[i]).transform.SetParent(GridParent);
			}
			mShowAcceleratorHintList.Clear();
			MaskingNode.SetSelfActive(active: false);
		}
	}

	public void ShowAutoConversionHint(IGoodsBaseVo material, int dragGridID)
	{
		if (material == null)
		{
			return;
		}
		List<int> autoConversionID = GameLevelDefine.GetAutoConversionID(material.goodsID);
		if (autoConversionID.Count <= 0)
		{
			return;
		}
		if (mShowAutoConversionHintList == null)
		{
			mShowAutoConversionHintList = new List<GameLevelGrid>();
		}
		mShowAutoConversionHintList.Clear();
		List<GameLevelGrid> list = mGridObjectDic.Values.ToList();
		List<GameLevelGrid> list2 = new List<GameLevelGrid>();
		for (int i = 0; i < list.Count; i++)
		{
			GameLevelGrid gameLevelGrid = list[i];
			if (!((Object)(object)gameLevelGrid == (Object)null) && !gameLevelGrid.IsLock && gameLevelGrid.GetGameGoodsVo() != null)
			{
				GameGoodsVo gameGoodsVo = gameLevelGrid.GetGameGoodsVo();
				if (autoConversionID.Contains(gameGoodsVo.goodsID))
				{
					mShowAutoConversionHintList.Add(gameLevelGrid);
					gameLevelGrid.GridBg.SetSelfActive<Image>(true);
					((Component)gameLevelGrid).transform.SetParent(DragItemParent);
					((Component)gameLevelGrid).transform.SetSiblingIndex(0);
				}
				else if (!Singleton<GameLevelManager>.Instance.IsMaxLevelGoods(material.goodsID) && gameGoodsVo.goodsID == material.goodsID && gameLevelGrid.GetGridId() != dragGridID)
				{
					list2.Add(gameLevelGrid);
				}
			}
		}
		if (mShowAutoConversionHintList.Count > 0)
		{
			for (int j = 0; j < list2.Count; j++)
			{
				mShowAutoConversionHintList.Add(list2[j]);
				list2[j].GridBg.SetSelfActive<Image>(true);
				((Component)list2[j]).transform.SetParent(DragItemParent);
				((Component)list2[j]).transform.SetSiblingIndex(0);
			}
			MaskingNode.SetSelfActive(active: true);
		}
	}

	public void HideAutoConversionHint()
	{
		if (mShowAutoConversionHintList != null && mShowAutoConversionHintList.Count != 0)
		{
			for (int i = 0; i < mShowAutoConversionHintList.Count; i++)
			{
				mShowAutoConversionHintList[i].StopCopyHint();
				mShowAutoConversionHintList[i].UpdateGameLevelItem();
				mShowAutoConversionHintList[i].GridBg.SetSelfActive<Image>(false);
				((Component)mShowAutoConversionHintList[i]).transform.SetParent(GridParent);
			}
			mShowAutoConversionHintList.Clear();
			MaskingNode.SetSelfActive(active: false);
		}
	}

	protected void PlayGlobalSpeedup(GameLevelGrid startGrid, int type)
	{
		if (!((Object)(object)startGrid == (Object)null))
		{
			ViewManager.Instance.SetTouchMaskVisible(isVisible: true);
			GameLevelAnimationTools.PlayGlobalSpeedup(type, startGrid.GameItemParent, ((Component)this).transform, resLoader, () =>
			{
				GameItemJump(startGrid, type);
			}, 1.1f);
		}
	}

	protected void PlayUFOSpeedUp(GameLevelGrid startGrid, int type)
	{
		Transform transform = ((Component)m_ordersViewLogic.TemporaryItem.ItemIcon).transform;
		ViewManager.Instance.SetTouchMaskVisible(isVisible: true);
		List<GameLevelGrid> list = new List<GameLevelGrid>();
		List<GameLevelGrid> list2 = mGridObjectDic.Values.ToList();
		for (int i = 0; i < list2.Count; i++)
		{
			if (!((Object)(object)list2[i] == (Object)null) && !list2[i].IsLock && list2[i].GetGameGoodsVo() != null && list2[i].GetGoodsBaseVo() != null && !IGoodsBaseVo.CannotMerge(list2[i].GetGameGoodsVo().GoodsState) && IGoodsBaseVo.IsCreator(list2[i].GetGoodsBaseVo().type))
			{
				list.Add(list2[i]);
			}
		}
		GameLevelAnimationTools.PlayUFOSpeedUp(list, transform, ((Component)this).transform, resLoader, () =>
		{
			GameItemJump(startGrid, type);
		}, 2.1f);
	}

	private void GameItemJump(GameLevelGrid startGrid, int type)
	{
		if ((Object)(object)startGrid == (Object)null)
		{
			int centerGridID = GetCenterGridID();
			if (mGridObjectDic.TryGetValue(centerGridID, out var value))
			{
				startGrid = value;
			}
		}
		if ((Object)(object)startGrid == (Object)null)
		{
			return;
		}
		float num = 0f;
		List<GameLevelGrid> list = mGridObjectDic.Values.ToList();
		for (int i = 0; i < list.Count; i++)
		{
			if (!((Object)(object)list[i] == (Object)null) && list[i].GetGridId() != startGrid.GetGridId() && !list[i].IsLock && list[i].GetGameGoodsVo() != null && list[i].GetGoodsBaseVo() != null && !IGoodsBaseVo.CannotMerge(list[i].GetGameGoodsVo().GoodsState))
			{
				float gridDistance = GetGridDistance(startGrid.GetGridId(), list[i].GetGridId());
				float num2 = 0.1f * gridDistance;
				if (num2 > num)
				{
					num = num2;
				}
				list[i].PlayItemJumpAnim(num2);
			}
		}
		TimeManager.Instance.Schedule(this, (float dt) =>
		{
			PlayGlobalSpeedupAnim(type);
		}, num, 1, 0f);
		TimeManager.Instance.Schedule(this, (float dt) =>
		{
			Singleton<PopupManager>.Instance.ContinueShowPopups();
		}, 1.5f, 1, 0f);
		if (num <= 0f)
		{
			num = 0.1f;
		}
		CommonMaskViewLogic.Show(num);
	}

	private void PlayGlobalSpeedupAnim(int type)
	{
		List<GameLevelGrid> list = mGridObjectDic.Values.ToList();
		for (int i = 0; i < list.Count; i++)
		{
			if ((Object)(object)list[i] == (Object)null || list[i].IsLock || list[i].GetGameGoodsVo() == null || list[i].GetGoodsBaseVo() == null || IGoodsBaseVo.IsDisabled(list[i].GetGameGoodsVo().GoodsState))
			{
				continue;
			}
			int type2 = list[i].GetGoodsBaseVo().type;
			switch (type)
			{
			case 1:
				if (IGoodsBaseVo.IsCreator(type2) || IGoodsBaseVo.IsConversion(type2))
				{
					list[i].PlayGlobalSpeedupAnim();
				}
				break;
			case 3:
				if (IGoodsBaseVo.IsCreator(type2))
				{
					list[i].PlayUFOSpeedupAnim();
				}
				break;
			default:
				if (IGoodsBaseVo.IsInstrument(list[i].GetGoodsBaseVo().type))
				{
					list[i].PlayGlobalSpeedupAnim();
				}
				break;
			}
		}
		TimeManager.Instance.Schedule(this, (float dt) =>
		{
			ViewManager.Instance.SetTouchMaskVisible(isVisible: false);
		}, 1.5f, 1, 0f);
	}

	private float GetGridDistance(int grid1, int grid2)
	{
		int num = MyAbs(grid1 % 10 - grid2 % 10);
		int num2 = MyAbs(grid1 / 10 - grid2 / 10);
		int num3 = num * num + num2 * num2;
		if (num3 > 0)
		{
			return Mathf.Sqrt((float)num3);
		}
		return 0f;
	}

	protected void RocketUpgradeGoods(GameLevelGrid startGrid, GameLevelGrid targetGrid, int useLevel, Action complete)
	{
		//IL_00c2: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c7: Unknown result type (might be due to invalid IL or missing references)
		//IL_00cc: Unknown result type (might be due to invalid IL or missing references)
		//IL_00d8: Unknown result type (might be due to invalid IL or missing references)
		if ((Object)(object)startGrid == (Object)null || (Object)(object)targetGrid == (Object)null)
		{
			complete.InvokeGracefully();
			return;
		}
		string assetName = "숏끜徿瀐敗&\u0082厁숵끕掩欶牆=\u0092厑숆끎徆昇敛%\u0082厁恀䞁";
		switch (useLevel)
		{
		case 1:
			assetName = "숏끜徿瀐敗&\u0082厁숵끕掩欶牆=\u0092厑숆끎徆昇敛%\u0082厁恀䞁";
			break;
		case 2:
			assetName = "숏끜徿瀐敗&\u0082厁숵끕掩欶牆=\u0092厑숇끎撆氈敝6\u0096厕匡機ā讱鹹";
			break;
		case 3:
			assetName = "숏끜徿瀐敗&\u0082厁숵끕掩欶牆=\u0092厑숂끎梆弃敝5¦厥뿢\u008b赴";
			break;
		}
		GameObject val = resLoader.LoadSync<GameObject>(assetName);
		if ((Object)(object)val == (Object)null)
		{
			complete.InvokeGracefully();
			return;
		}
		GameObject rocketGo = Object.Instantiate<GameObject>(val);
		rocketGo.transform.SetParent(((Component)this).transform, false);
		rocketGo.transform.LocalIdentity<Transform>();
		Vector3 localPos = ((Component)this).transform.InverseTransformPoint(startGrid.GameItemParent.position);
		rocketGo.transform.LocalPosition<Transform>(localPos);
		CommonMaskViewLogic.Show(2f);
		SkeletonGraphic skeleton = rocketGo.GetComponentInChildren<SkeletonGraphic>();
		if ((Object)(object)skeleton != (Object)null)
		{
			skeleton.Skeleton.SetToSetupPose();
			skeleton.AnimationState.ClearTracks();
			skeleton.AnimationState.SetAnimation(0, "숏끓梫漐晫!¦厥뻫", false);
			AudioManager.GetInstance().PlayEffect("숏끓犫欐晃=Î反녳䝟㨢\0逕\ud95c");
		}
		GameLevelGrid value = null;
		int centerGridID = GetCenterGridID();
		mGridObjectDic.TryGetValue(centerGridID, out value);
		Vector3[] path = GameLevelAnimationTools.GetRocketMovePath(startGrid.GetGridId(), centerGridID, targetGrid.GetGridId(), startGrid.GameItemParent, value.GameItemParent, targetGrid.GameItemParent);
		TimeManager.Instance.Schedule(this, (float dt) =>
		{
			if ((Object)(object)skeleton != (Object)null)
			{
				skeleton.Skeleton.SetToSetupPose();
				skeleton.AnimationState.ClearTracks();
				skeleton.AnimationState.SetAnimation(0, "숏끓撫氐晫;\u0096厕뻹", false);
			}
			RocketMove rocketMove = rocketGo.AddComponent<RocketMove>();
			rocketMove.Init(100f, path, () =>
			{
				rocketGo.DestroySelf<GameObject>();
				complete.InvokeGracefully();
			});
			rocketMove.PlayMove();
			AudioManager.GetInstance().PlayEffect("숏끓犫欐晃=Î反北機ā讱鹹");
		}, 0.5f, 1);
	}

	private void OnCollectAnimEvent(CollectAnimationData animationData)
	{
		//IL_0034: Unknown result type (might be due to invalid IL or missing references)
		//IL_003f: Expected Obj, but got Unknown
		if (mPendingCollectList == null)
		{
			mPendingCollectList = new List<CollectAnimationData>();
		}
		mPendingCollectList.Add(animationData);
		if (mCollectFlushTween == null)
		{
			mCollectFlushTween = TweenSettingsExtensions.SetAutoKill<Tween>(DOVirtual.DelayedCall(0f, (TweenCallback)FlushCollectAnim, true), true);
		}
	}

	private void FlushCollectAnim()
	{
		mCollectFlushTween = null;
		if (mPendingCollectList != null && mPendingCollectList.Count != 0)
		{
			List<CollectAnimationData> collectList = new List<CollectAnimationData>(mPendingCollectList);
			mPendingCollectList.Clear();
			CollectAnimContainerViewData data = new CollectAnimContainerViewData
			{
				collectList = collectList
			};
			ViewManager.GetInstance().ShowView<CollectAnimContainerViewLogic>(data, ViewManager.ViewLayer.POP);
		}
	}

	private void ClearCollectFlush()
	{
		Tween val = mCollectFlushTween;
		if (val != null)
		{
			TweenExtensions.Kill(val, false);
		}
		mCollectFlushTween = null;
		if (mPendingCollectList != null)
		{
			for (int i = 0; i < mPendingCollectList.Count; i++)
			{
				mPendingCollectList[i].callBack.InvokeGracefully();
			}
			mPendingCollectList.Clear();
		}
		EventManager.GetInstance().DispatchEvent(203279);
	}

	private void PlayGridUnlockAnim()
	{
		if ((Object)(object)PlayUnlockGo != (Object)null)
		{
			Object.Destroy((Object)(object)PlayUnlockGo);
		}
		if (Singleton<GameLevelManager>.Instance.GetChessboardLastLevel() > 0)
		{
			GridUnlockAnimA();
		}
	}

	private void GridUnlockAnimA()
	{
		//IL_00eb: Unknown result type (might be due to invalid IL or missing references)
		//IL_00f0: Unknown result type (might be due to invalid IL or missing references)
		//IL_00f2: Unknown result type (might be due to invalid IL or missing references)
		//IL_01f9: Unknown result type (might be due to invalid IL or missing references)
		//IL_0104: Unknown result type (might be due to invalid IL or missing references)
		//IL_00fc: Unknown result type (might be due to invalid IL or missing references)
		//IL_0116: Unknown result type (might be due to invalid IL or missing references)
		//IL_010e: Unknown result type (might be due to invalid IL or missing references)
		//IL_012a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0121: Unknown result type (might be due to invalid IL or missing references)
		//IL_013e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0135: Unknown result type (might be due to invalid IL or missing references)
		List<GameLevelGrid> list = new List<GameLevelGrid>();
		List<IGameInitVo> gameInitVoList = Singleton<GameLevelManager>.Instance.GetGameInitVoList();
		if (gameInitVoList == null)
		{
			return;
		}
		for (int i = 0; i < gameInitVoList.Count; i++)
		{
			if (gameInitVoList[i] != null && Singleton<GameLevelManager>.Instance.GetChessboardLastLevel() == gameInitVoList[i].unlockLv && gameInitVoList[i].unlockLv > 0)
			{
				GameLevelGrid value = null;
				if (mGridObjectDic.TryGetValue(gameInitVoList[i].gridID, out value))
				{
					list.Add(value);
				}
			}
		}
		if (list.Count <= 0)
		{
			Singleton<GameLevelManager>.Instance.SetChessboardLastLevel(0);
			return;
		}
		float num = float.MinValue;
		float num2 = float.MaxValue;
		float num3 = float.MinValue;
		float num4 = float.MaxValue;
		float num5 = 0f;
		for (int j = 0; j < list.Count; j++)
		{
			Vector3[] array = new Vector3[4];
			((Component)list[j]).GetComponent<RectTransform>().GetWorldCorners(array);
			Vector3[] array2 = array;
			foreach (Vector3 val in array2)
			{
				if (val.x > num)
				{
					num = val.x;
				}
				if (val.x < num2)
				{
					num2 = val.x;
				}
				if (val.y > num3)
				{
					num3 = val.y;
				}
				if (val.y < num4)
				{
					num4 = val.y;
				}
				num5 = val.z;
			}
		}
		PlayUnlockGo = Object.Instantiate<GameObject>(UnlockConditionGo);
		if ((Object)(object)PlayUnlockGo == (Object)null)
		{
			return;
		}
		UnlockCondition component = PlayUnlockGo.GetComponent<UnlockCondition>();
		if ((Object)(object)component != (Object)null)
		{
			component.Init(Singleton<GameLevelManager>.Instance.GetChessboardLastLevel(), playShowAnim: false);
		}
		PlayUnlockGo.transform.SetParent(GridParent);
		PlayUnlockGo.transform.LocalIdentity<Transform>();
		PlayUnlockGo.transform.position = new Vector3((num2 + num) / 2f, (num3 + num4) / 2f, num5);
		if ((Object)(object)component != (Object)null)
		{
			component.HideAnim();
		}
		for (int l = 0; l < list.Count; l++)
		{
			if ((Object)(object)list[l] == (Object)null)
			{
				continue;
			}
			list[l].HideLockAnim();
			if (list[l].GetGameGoodsVo() != null && !IGoodsBaseVo.CannotDrag(list[l].GetGameGoodsVo().GoodsState))
			{
				Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(list[l].GetGameGoodsVo().goodsID, 1, list[l].GetGameGoodsVo());
				if ((list[l].GetGoodsBaseVo() != null && IGoodsBaseVo.IsCreator(list[l].GetGoodsBaseVo().type)) || IGoodsBaseVo.IsInstrument(list[l].GetGoodsBaseVo().type))
				{
					Singleton<GameLevelManager>.Instance.ChangeGeneratorOrMachine(list[l].GetGameGoodsVo());
					GameLevelDefine.ChangeGeneratorUUIDToDisk(list[l].GetGameGoodsVo(), 1);
				}
			}
		}
		Singleton<GameLevelManager>.Instance.SetChessboardLastLevel(0);
	}

	public void ShowMachineBubble(GameLevelGrid grid, int gridID)
	{
		if ((Object)(object)grid == (Object)null)
		{
			return;
		}
		IGoodsBaseVo goodsBaseVo = grid.GetGoodsBaseVo();
		GameGoodsVo gameGoodsVo = grid.GetGameGoodsVo();
		if (goodsBaseVo != null && gameGoodsVo != null && !IGoodsBaseVo.CannotDrag(gameGoodsVo.GoodsState))
		{
			if (IGoodsBaseVo.IsInstrument(goodsBaseVo.type))
			{
				ShowShortcutTip(gameGoodsVo, grid);
			}
			else
			{
				ShowMachineTip(goodsBaseVo, grid, gameGoodsVo);
			}
		}
	}

	private void CheckShowSortcutTip()
	{
		if (!((Object)(object)CurrentSelectGrid == (Object)null))
		{
			ShowMachineBubble(CurrentSelectGrid, CurrentSelectGrid.GetGridId());
		}
	}

	private void ShowMachineTip(IGoodsBaseVo goodsBaseVo, GameLevelGrid grid, GameGoodsVo gameGoodsVo)
	{
		EventManager.GetInstance().DispatchEvent(203041);
		if (gameGoodsVo == null || gameGoodsVo.GoodsState == GameGoodsState.Bubble || !ABTestSwitchDefine.MakeBubbleSwitch() || (Object)(object)grid == (Object)null || GameLevelDefine.LackCookingMats == null || !GameLevelDefine.LackCookingMats.TryGetValue(goodsBaseVo.goodsID, out var value))
		{
			return;
		}
		List<int> list = new List<int>();
		for (int i = 0; i < value.Count; i++)
		{
			list.Add(value[i].makeGoodsID);
		}
		if (list.Count == 0)
		{
			return;
		}
		Dictionary<int, GameLevelGrid> dictionary = new Dictionary<int, GameLevelGrid>();
		Dictionary<int, GameLevelGrid> dictionary2 = new Dictionary<int, GameLevelGrid>();
		int num = 0;
		List<GameLevelGrid> list2 = mGridObjectDic.Values.ToList();
		for (int j = 0; j < list2.Count; j++)
		{
			GameLevelGrid gameLevelGrid = list2[j];
			if ((Object)(object)gameLevelGrid == (Object)null || gameLevelGrid.IsLock)
			{
				continue;
			}
			IGoodsBaseVo goodsBaseVo2 = gameLevelGrid.GetGoodsBaseVo();
			GameGoodsVo gameGoodsVo2 = gameLevelGrid.GetGameGoodsVo();
			if (goodsBaseVo2 == null || gameGoodsVo2 == null || gameGoodsVo2.GoodsState == GameGoodsState.Bubble || IGoodsBaseVo.CannotDrag(gameGoodsVo2.GoodsState) || !IGoodsBaseVo.IsInstrument(goodsBaseVo2.type))
			{
				continue;
			}
			bool flag = false;
			for (int k = 0; k < list.Count; k++)
			{
				IGoodsCookingVO goodsCookingVO = Singleton<GameLevelManager>.Instance.GetGoodsCookingVO(list[k]);
				if (goodsCookingVO != null && goodsCookingVO.instrumentType == goodsBaseVo2.series)
				{
					flag = true;
					if (num == 0)
					{
						num = goodsCookingVO.instrumentType;
					}
					break;
				}
			}
			if (!flag)
			{
				continue;
			}
			if (gameGoodsVo2.GoodsState != GameGoodsState.CanWork)
			{
				dictionary.TryChangeValue(gameLevelGrid.GetGridId(), gameLevelGrid);
				continue;
			}
			bool flag2 = false;
			if (gameGoodsVo2.MakeMaterials.Count > 0)
			{
				IGoodsInstrumentVO goodsInstrumentVO = Singleton<GameLevelManager>.Instance.GetGoodsInstrumentVO(goodsBaseVo2.goodsID);
				if (goodsInstrumentVO != null)
				{
					List<int> list3 = new List<int>();
					for (int l = 0; l < gameGoodsVo2.MakeMaterials.Count; l++)
					{
						list3.Add(gameGoodsVo2.MakeMaterials[l].goodsID);
					}
					list3.Add(goodsBaseVo.goodsID);
					List<int> makingIDsByMaterials = goodsInstrumentVO.GetMakingIDsByMaterials(list3);
					for (int m = 0; m < list.Count; m++)
					{
						if (makingIDsByMaterials.Contains(list[m]))
						{
							flag2 = true;
							break;
						}
					}
				}
			}
			else
			{
				flag2 = true;
			}
			if (flag2)
			{
				dictionary2.TryChangeValue(gameLevelGrid.GetGridId(), gameLevelGrid);
			}
			else
			{
				dictionary.TryChangeValue(gameLevelGrid.GetGridId(), gameLevelGrid);
			}
		}
		if (dictionary2.Count == 0)
		{
			int num2 = 0;
			int num3 = 0;
			if (dictionary.Count > 0)
			{
				foreach (KeyValuePair<int, GameLevelGrid> item in dictionary)
				{
					if ((Object)(object)item.Value != (Object)null && item.Value.GetGoodsBaseVo() != null)
					{
						num3 = 1;
						num2 = item.Value.GetGoodsBaseVo().goodsID;
						break;
					}
				}
			}
			else
			{
				if (num == 0)
				{
					for (int n = 0; n < list.Count; n++)
					{
						IGoodsCookingVO goodsCookingVO = Singleton<GameLevelManager>.Instance.GetGoodsCookingVO(list[n]);
						if (goodsCookingVO != null)
						{
							num = goodsCookingVO.instrumentType;
							break;
						}
					}
				}
				if (num == 0)
				{
					return;
				}
				IGoodsBaseVo maxLvGoodsBySeries = Singleton<GameLevelManager>.Instance.GetMaxLvGoodsBySeries(num, 2);
				if (maxLvGoodsBySeries == null)
				{
					List<int> goodsIdListBySeries = Singleton<GameLevelManager>.Instance.GetGoodsIdListBySeries(num);
					if (goodsIdListBySeries == null)
					{
						return;
					}
					for (int num4 = 0; num4 < goodsIdListBySeries.Count; num4++)
					{
						maxLvGoodsBySeries = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsIdListBySeries[num4]);
						if (maxLvGoodsBySeries != null && IGoodsBaseVo.IsInstrument(maxLvGoodsBySeries.type))
						{
							num3 = 2;
							num2 = maxLvGoodsBySeries.goodsID;
							break;
						}
					}
				}
				else
				{
					num3 = 2;
					num2 = maxLvGoodsBySeries.goodsID;
				}
			}
			if (num2 > 0 && num3 > 0 && ((Component)this).gameObject.activeSelf && !DragGoods && (!((Object)(object)grid != (Object)null) || !((Object)(object)mLastMachineTipGrid != (Object)null) || grid.GetGridId() != mLastMachineTipGrid.GetGridId()))
			{
				EventManager.GetInstance().DispatchEvent(203039);
				mLastMachineTipGrid = grid;
				GameLevelDefine.ShowMakingTip(2, num3, num2, grid.GameItemParent, () =>
				{
					mLastMachineTipGrid = null;
				});
			}
			return;
		}
		Dictionary<int, GameLevelGrid> dictionary3 = new Dictionary<int, GameLevelGrid>();
		Dictionary<int, List<GameLevelGrid>> dictionary4 = new Dictionary<int, List<GameLevelGrid>>();
		for (int num5 = 0; num5 < list.Count; num5++)
		{
			foreach (KeyValuePair<int, GameLevelGrid> item2 in dictionary2)
			{
				if ((Object)(object)item2.Value == (Object)null)
				{
					continue;
				}
				GameGoodsVo gameGoodsVo3 = item2.Value.GetGameGoodsVo();
				if (gameGoodsVo3 == null)
				{
					continue;
				}
				IGoodsInstrumentVO goodsInstrumentVO = Singleton<GameLevelManager>.Instance.GetGoodsInstrumentVO(gameGoodsVo3.goodsID);
				if (goodsInstrumentVO == null)
				{
					continue;
				}
				List<int> list4 = new List<int>();
				for (int num6 = 0; num6 < gameGoodsVo3.MakeMaterials.Count; num6++)
				{
					list4.Add(gameGoodsVo3.MakeMaterials[num6].goodsID);
				}
				list4.Add(goodsBaseVo.goodsID);
				if (goodsInstrumentVO.GetMakingIDsByMaterials(list4).Contains(list[num5]))
				{
					if (!dictionary4.ContainsKey(list[num5]))
					{
						dictionary4.Add(list[num5], new List<GameLevelGrid>());
					}
					dictionary4[list[num5]].Add(item2.Value);
				}
			}
		}
		foreach (KeyValuePair<int, List<GameLevelGrid>> item3 in dictionary4)
		{
			item3.Value.Sort((GameLevelGrid gameLevelGrid3, GameLevelGrid gameLevelGrid2) => gameLevelGrid2.GetGameGoodsVo().MakeMaterials.Count.CompareTo(gameLevelGrid3.GetGameGoodsVo().MakeMaterials.Count));
			if (item3.Value.Count <= 0)
			{
				continue;
			}
			dictionary3.TryChangeValue(item3.Value[0].GetGridId(), item3.Value[0]);
			for (int num7 = 1; num7 < item3.Value.Count; num7++)
			{
				if (item3.Value[num7].GetGameGoodsVo().MakeMaterials.Count == item3.Value[0].GetGameGoodsVo().MakeMaterials.Count)
				{
					dictionary3.TryChangeValue(item3.Value[num7].GetGridId(), item3.Value[num7]);
				}
			}
		}
		if (dictionary3.Count <= 0 || !((Component)this).gameObject.activeSelf || DragGoods || ((Object)(object)grid != (Object)null && (Object)(object)mLastMachineTipGrid != (Object)null && grid.GetGridId() == mLastMachineTipGrid.GetGridId()))
		{
			return;
		}
		EventManager.GetInstance().DispatchEvent(203039);
		mLastMachineTipGrid = grid;
		foreach (KeyValuePair<int, GameLevelGrid> item4 in dictionary3)
		{
			GameLevelDefine.ShowMakingTip(1, 1, goodsBaseVo.goodsID, item4.Value.GameItemParent, () =>
			{
				mLastMachineTipGrid = null;
			});
		}
	}

	private void ShowShortcutTip(GameGoodsVo gameGoodsVo, GameLevelGrid grid)
	{
		EventManager.GetInstance().DispatchEvent(203041);
		if (gameGoodsVo == null || gameGoodsVo.GoodsState == GameGoodsState.Bubble || !ABTestSwitchDefine.MakeShortcutSwitch() || !MonoSingleton<ConditionManager>.Instance.IsLegal(178))
		{
			return;
		}
		bool flag = true;
		if (MonoSingleton<GuideManager>.Instance.IsInGuide())
		{
			flag = false;
		}
		if (gameGoodsVo.MakingGoodsID <= 0)
		{
			flag = false;
		}
		if (gameGoodsVo.GoodsState != GameGoodsState.CanWork)
		{
			flag = false;
		}
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(gameGoodsVo.MakingGoodsID);
		if (goodsBaseVoById == null)
		{
			flag = false;
		}
		if (!GameLevelDefine.IsShowShortcutTip(gameGoodsVo.MakingGoodsID))
		{
			flag = false;
		}
		if (flag)
		{
			if (((Component)this).gameObject.activeSelf && !DragGoods && (!((Object)(object)grid != (Object)null) || !((Object)(object)mLastShortTipGrid != (Object)null) || grid.GetGridId() != mLastShortTipGrid.GetGridId()))
			{
				EventManager.GetInstance().DispatchEvent(203041);
				mLastShortTipGrid = grid;
				MakeShortcutBubbleViewData data = new MakeShortcutBubbleViewData
				{
					iconName = goodsBaseVoById.icon,
					NodeTransform = grid.GameItemParent,
					MakeCallback = () =>
					{
						GoodsInfoViewLogic?.OnMakingGoods();
					},
					ExitCallback = () =>
					{
						mLastShortTipGrid = null;
					}
				};
				ViewManager.GetInstance().ShowView<MakeShortcutBubbleViewLogic>(data, ViewManager.ViewLayer.NORMAL, animate: true);
			}
		}
		else
		{
			EventManager.GetInstance().DispatchEvent(203041);
		}
	}

	private void playRecycleAnim(List<RecycleAnimationData> generators, List<RecycleAnimationData> recycleGoods, int recycleEnergy)
	{
		playGeneratorStorageAnim(generators, recycleGoods.Count == 0);
		float num = 0f;
		if (generators.Count > 0)
		{
			num = 0.8f;
		}
		playGoodsRecycleAnim(recycleGoods, num);
		if (recycleGoods.Count > 0)
		{
			num += 0.8f;
		}
		playEnergyRecycleAnim(recycleEnergy, num);
		CommonMaskViewLogic.Show(num + 0.5f);
	}

	private async void playGeneratorStorageAnim(List<RecycleAnimationData> generators, bool bShowGuide = false)
	{
		if (generators == null || generators.Count == 0)
		{
			return;
		}
		for (int i = 0; i < generators.Count; i++)
		{
			if (mGridObjectDic.TryGetValue(generators[i].gridID, out var value))
			{
				value.PlayItemMoveToTarget(generators[i].goodsID, ((Component)BagButton).transform, 0f, bShowEffect: true);
			}
		}
		if (bShowGuide)
		{
			await UniTask.Delay(TimeSpan.FromSeconds(0.800000011920929), false, (PlayerLoopTiming)4, default(CancellationToken));
			bool openState = ObjectManager.GetInstance().bagGeneratorStorageModel.OpenState;
			bool isNewUser = ObjectManager.GetInstance().bagGeneratorStorageModel.IsNewUser;
			if (openState & isNewUser)
			{
				EventManager.GetInstance().DispatchEvent(100133, 241, 0f);
			}
		}
	}

	private void playGoodsRecycleAnim(List<RecycleAnimationData> recycleGoods, float delay)
	{
		if (recycleGoods == null || recycleGoods.Count == 0)
		{
			return;
		}
		for (int i = 0; i < recycleGoods.Count; i++)
		{
			if (mGridObjectDic.TryGetValue(recycleGoods[i].gridID, out var value))
			{
				float num = ((i % 2 == 0) ? 0.1f : 0f);
				value.PlayItemMoveToTarget(recycleGoods[i].goodsID, DragItemParent, delay + num);
			}
		}
	}

	private async void playEnergyRecycleAnim(int energyRecycle, float delay)
	{
		if (energyRecycle <= 0)
		{
			return;
		}
		if (delay > 0f)
		{
			await UniTask.Delay(TimeSpan.FromSeconds(delay), false, (PlayerLoopTiming)4, default(CancellationToken));
		}
		recyclePrefab = GameLevelDefine.CreateGameObjectAsync("숏끜徿倐敗&\u0082厁숸끕禩挹牑1ê叩刟熟\ud9c4œ", DragItemParent);
		await UniTask.Delay(TimeSpan.FromSeconds(0.15000000596046448), false, (PlayerLoopTiming)4, default(CancellationToken));
		if (energyRecycle > 0)
		{
			RecycleItemTipViewData data = new RecycleItemTipViewData
			{
				rewardData = new BaseData3VO
				{
					type = 1,
					id = 1004,
					num = energyRecycle
				},
				TargetTransform = DragItemParent,
				endCallback = () =>
				{
					bool openState = ObjectManager.GetInstance().bagGeneratorStorageModel.OpenState;
					bool isNewUser = ObjectManager.GetInstance().bagGeneratorStorageModel.IsNewUser;
					if (openState & isNewUser)
					{
						EventManager.GetInstance().DispatchEvent(100133, 241, 0f);
					}
				}
			};
			ViewManager.GetInstance().ShowView<RecycleItemTipViewLogic>(data, ViewManager.ViewLayer.POP);
		}
		await UniTask.Delay(TimeSpan.FromSeconds(0.3700000047683716), false, (PlayerLoopTiming)4, default(CancellationToken));
		GameLevelDefine.RecycleGameObject(recyclePrefab);
		recyclePrefab = null;
	}

	public void PlayGoodsFlyToTarget(int goodsId, GameLevelGrid startGrid, Transform targetTransform, Action complete)
	{
		//IL_008a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0090: Expected Obj, but got Unknown
		//IL_00e7: Unknown result type (might be due to invalid IL or missing references)
		//IL_0108: Unknown result type (might be due to invalid IL or missing references)
		//IL_011b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0120: Unknown result type (might be due to invalid IL or missing references)
		//IL_019a: Unknown result type (might be due to invalid IL or missing references)
		//IL_01c2: Unknown result type (might be due to invalid IL or missing references)
		//IL_01cc: Expected Obj, but got Unknown
		//IL_01f1: Unknown result type (might be due to invalid IL or missing references)
		//IL_01fb: Expected Obj, but got Unknown
		if ((Object)(object)startGrid == (Object)null || (Object)(object)targetTransform == (Object)null)
		{
			complete.InvokeGracefully();
			return;
		}
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsId);
		if (goodsBaseVoById == null)
		{
			complete.InvokeGracefully();
			return;
		}
		if ((Object)(object)CurrentSelectGrid != (Object)null && CurrentSelectGrid.GetGridId() == startGrid.GetGridId())
		{
			CurrentSelectGrid.SetSelectState(select: false);
			CurrentSelectGrid = null;
		}
		GameObject val = new GameObject();
		Image flyImage = val.AddComponent<Image>();
		((Component)flyImage).transform.SetParent(((Component)this).transform);
		flyImage.LocalIdentity<Image>();
		Singleton<GameLevelManager>.Instance.SetGoodsIcon(flyImage, goodsBaseVoById, resLoader);
		((Component)flyImage).transform.position = startGrid.GameItemParent.position;
		float num = 0.36f * SDKManager.AniDurationScale;
		float x = ((Component)flyImage).transform.localScale.x;
		Vector3 endPos = targetTransform.position;
		TweenSettingsExtensions.SetAutoKill<Sequence>(TweenSettingsExtensions.Append(TweenSettingsExtensions.Append(DOTween.Sequence(), (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(((Component)flyImage).transform, x * 2f, 0.22f * SDKManager.AniDurationScale), (Ease)3)), (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(((Component)flyImage).transform, x * 1f, 0.14f * SDKManager.AniDurationScale), (Ease)4)), true);
		Tweener mFlyTween = TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOMove(((Component)flyImage).transform, endPos, num, false), GameLevelDefine.Order_Fly_Curve_1);
		TweenSettingsExtensions.OnUpdate<Tweener>(mFlyTween, (TweenCallback)(() =>
		{
			//IL_000f: Unknown result type (might be due to invalid IL or missing references)
			//IL_001a: Unknown result type (might be due to invalid IL or missing references)
			//IL_002d: Unknown result type (might be due to invalid IL or missing references)
			//IL_0032: Unknown result type (might be due to invalid IL or missing references)
			//IL_0043: Unknown result type (might be due to invalid IL or missing references)
			if ((Object)(object)targetTransform != (Object)null && endPos != targetTransform.position)
			{
				endPos = targetTransform.position;
				mFlyTween.ChangeEndValue((object)targetTransform.position, true);
			}
		}));
		TweenSettingsExtensions.SetAutoKill<Tweener>(TweenExtensions.Play<Tweener>(mFlyTween), true);
		TweenSettingsExtensions.SetAutoKill<Sequence>(TweenSettingsExtensions.AppendCallback(TweenSettingsExtensions.AppendInterval(DOTween.Sequence(), num), (TweenCallback)(() =>
		{
			complete.InvokeGracefully();
			Object.Destroy((Object)(object)((Component)flyImage).gameObject);
			flyImage = null;
		})), true);
	}

	private void OnCloseOrderDetail()
	{
		if (GameLevelDefine.DetailHintGoodsID <= 0)
		{
			return;
		}
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(GameLevelDefine.DetailHintGoodsID);
		if (goodsBaseVoById == null)
		{
			return;
		}
		IGoodsBaseVo goodsBaseVo = null;
		IGoodsBaseVo derivativeBaseVo = Singleton<GameLevelManager>.Instance.GetDerivativeBaseVo(goodsBaseVoById);
		goodsBaseVo = ((derivativeBaseVo == null) ? Singleton<GameLevelManager>.Instance.GetMinGenerator(goodsBaseVoById) : Singleton<GameLevelManager>.Instance.GetMinGenerator(derivativeBaseVo));
		if (goodsBaseVo == null && derivativeBaseVo == null)
		{
			return;
		}
		GameLevelGrid gameLevelGrid = null;
		GameGoodsVo gameGoodsVo = null;
		IGoodsBaseVo goodsBaseVo2 = null;
		GameLevelGrid gameLevelGrid2 = null;
		GameLevelGrid gameLevelGrid3 = null;
		foreach (KeyValuePair<int, GameLevelGrid> item in mGridObjectDic)
		{
			gameLevelGrid = item.Value;
			if ((Object)(object)gameLevelGrid == (Object)null || gameLevelGrid.IsLock)
			{
				continue;
			}
			gameGoodsVo = gameLevelGrid.GetGameGoodsVo();
			goodsBaseVo2 = gameLevelGrid.GetGoodsBaseVo();
			if (gameGoodsVo == null || goodsBaseVo2 == null || IGoodsBaseVo.IsDisabled(gameGoodsVo.GoodsState))
			{
				continue;
			}
			if (IGoodsBaseVo.IsCreator(goodsBaseVo2.type) && goodsBaseVo != null)
			{
				if (goodsBaseVo2.series != goodsBaseVo.series)
				{
					continue;
				}
				if ((Object)(object)gameLevelGrid2 == (Object)null)
				{
					gameLevelGrid2 = gameLevelGrid;
				}
				else if (gameLevelGrid2.GetGameGoodsVo().GoodsState == GameGoodsState.CoolDown)
				{
					if (gameGoodsVo.GoodsState == GameGoodsState.CoolDown)
					{
						if (goodsBaseVo2.level > gameLevelGrid2.GetGoodsBaseVo().level)
						{
							gameLevelGrid2 = gameLevelGrid;
						}
					}
					else
					{
						gameLevelGrid2 = gameLevelGrid;
					}
				}
				else if (gameGoodsVo.GoodsState != GameGoodsState.CoolDown && goodsBaseVo2.level > gameLevelGrid2.GetGoodsBaseVo().level)
				{
					gameLevelGrid2 = gameLevelGrid;
				}
			}
			else if (IGoodsBaseVo.IsConversion(goodsBaseVo2.type) && derivativeBaseVo != null && derivativeBaseVo.goodsID == goodsBaseVo2.goodsID && (Object)(object)gameLevelGrid3 == (Object)null)
			{
				gameLevelGrid3 = gameLevelGrid;
			}
		}
		if ((Object)(object)gameLevelGrid3 != (Object)null)
		{
			gameLevelGrid3.PlayGoodsTakeout();
			gameLevelGrid3.PlayGoodsHintAnim();
		}
		else if ((Object)(object)gameLevelGrid2 != (Object)null)
		{
			gameLevelGrid2.PlayGoodsTakeout();
			gameLevelGrid2.PlayGoodsHintAnim();
		}
	}

	public void ShowQuickConsumption(GameLevelGrid grid)
	{
		if (ABTestSwitchDefine.QuickConsumptionSwitch() && MonoSingleton<ConditionManager>.Instance.IsLegal(122) && (MonoSingleton<GuideManager>.Instance.IsFinishByName("숎끏㖰式䝑\rÙ变뺮") || MonoSingleton<GuideManager>.Instance.IsFinishByName("숎끏嚰㈏䝑\r^卝蘙ö赴") || MonoSingleton<GuideManager>.Instance.IsFinishByName("숎끏嚰㌏䝑\r^卝蘙ö赴")) && !((Object)(object)grid == (Object)null) && (!((Object)(object)mLastSpeedBubbleGrid != (Object)null) || grid.GetGridId() != mLastSpeedBubbleGrid.GetGridId()))
		{
			EventManager.GetInstance().DispatchEvent(203248);
			IGoodsBaseVo goodsBaseVo = grid.GetGoodsBaseVo();
			GameGoodsVo gameGoodsVo = grid.GetGameGoodsVo();
			if (goodsBaseVo != null && gameGoodsVo != null && !IGoodsBaseVo.CannotDrag(gameGoodsVo.GoodsState) && gameGoodsVo.GoodsState == GameGoodsState.Working && IGoodsBaseVo.IsInstrument(goodsBaseVo.type))
			{
				ShowInstrumentSpeedBubble(gameGoodsVo, grid);
			}
		}
	}

	private void ShowInstrumentSpeedBubble(GameGoodsVo gameGoodsVo, GameLevelGrid grid)
	{
		if (MonoSingleton<GuideManager>.Instance.IsInGuide() || !((Component)this).gameObject.activeSelf || DragGoods)
		{
			return;
		}
		(bool useCard, int amount, int itemID) tuple = GameLevelDefine.CalcInstrumentSpeedInfo(gameGoodsVo);
		int item = tuple.amount;
		int item2 = tuple.itemID;
		if (item <= 0 || item2 == 0)
		{
			return;
		}
		mLastSpeedBubbleGrid = grid;
		UseDiamondsBubbleViewData data = new UseDiamondsBubbleViewData
		{
			NodeTransform = grid.GameItemParent,
			HintKey = "숎끕䦶渏䝇\r*匩汦o4끓m\udf3b䓘",
			ItemID = item2,
			CostNum = item,
			MonitorGoodsVo = gameGoodsVo,
			MonitorState = GameGoodsState.Working,
			MakeCallback = () =>
			{
				GameLevelDefine.IsFromQuickBubble = true;
				if ((Object)(object)GoodsInfoViewLogic != (Object)null)
				{
					GoodsInfoViewLogic.OnMakingExpedite();
				}
			},
			ExitCallback = () =>
			{
				GameLevelDefine.IsFromQuickBubble = false;
				mLastSpeedBubbleGrid = null;
			}
		};
		ViewManager.GetInstance().ShowView<UseDiamondsBubbleViewLogic>(data, ViewManager.ViewLayer.NORMAL, animate: true);
	}

	public bool ShowBuyBubbleHint(GameLevelGrid grid)
	{
		if (!ABTestSwitchDefine.QuickConsumptionSwitch())
		{
			return false;
		}
		if (!MonoSingleton<ConditionManager>.Instance.IsLegal(122))
		{
			return false;
		}
		if (!MonoSingleton<GuideManager>.Instance.IsFinishByName("숎끏㊰式䝑\rÍ双뺫") && !MonoSingleton<GuideManager>.Instance.IsFinishByName("숎끏嚰㈏䝑\r^卝蘔ö赴") && !MonoSingleton<GuideManager>.Instance.IsFinishByName("숎끏嚰㌏䝑\r^卝蘔ö赴"))
		{
			return false;
		}
		GameGoodsVo gameGoodsVo = grid.GetGameGoodsVo();
		if (gameGoodsVo == null || gameGoodsVo.GoodsState != GameGoodsState.Bubble)
		{
			return false;
		}
		EventManager.GetInstance().DispatchEvent(203248);
		UseBubbleAlertData data = new UseBubbleAlertData
		{
			gameGoodsVo = gameGoodsVo,
			SureCallback = () =>
			{
				GameLevelDefine.IsFromQuickBubble = true;
				if ((Object)(object)GoodsInfoViewLogic != (Object)null)
				{
					GoodsInfoViewLogic.OnClickBuy();
				}
			},
			CancelCallback = () =>
			{
				GameLevelDefine.IsFromQuickBubble = false;
			}
		};
		ViewManager.GetInstance().ShowView<UseBubbleAlertLogic>(data, ViewManager.ViewLayer.NORMAL, animate: true);
		return true;
	}

	private void OnDetailQuality(int goodsID)
	{
		if (goodsID > 0 && Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsID) != null)
		{
			OnDetailQuality(goodsID, playHintAnim: true);
		}
	}

	private void OnDetailQuality(int goodsID, bool playHintAnim)
	{
		if (goodsID <= 0)
		{
			return;
		}
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsID);
		if (goodsBaseVoById == null)
		{
			return;
		}
		bool flag = ABTestSwitchDefine.GoodsLockSwitch();
		List<GameLevelGrid> list = new List<GameLevelGrid>();
		List<GameLevelGrid> list2 = new List<GameLevelGrid>();
		List<GameLevelGrid> list3 = new List<GameLevelGrid>();
		GameLevelGrid gameLevelGrid = null;
		GameGoodsVo gameGoodsVo = null;
		IGoodsBaseVo goodsBaseVo = null;
		foreach (KeyValuePair<int, GameLevelGrid> item in mGridObjectDic)
		{
			gameLevelGrid = item.Value;
			if ((Object)(object)gameLevelGrid == (Object)null || gameLevelGrid.IsLock)
			{
				continue;
			}
			gameGoodsVo = gameLevelGrid.GetGameGoodsVo();
			goodsBaseVo = gameLevelGrid.GetGoodsBaseVo();
			if (gameGoodsVo == null || goodsBaseVo == null)
			{
				continue;
			}
			if (goodsBaseVo.goodsID == goodsID)
			{
				if (playHintAnim)
				{
					gameLevelGrid.PlayGoodsHintAnim();
				}
				list2.Add(gameLevelGrid);
			}
			else
			{
				if (!IGoodsBaseVo.IsInstrument(goodsBaseVo.type) || gameGoodsVo.GoodsState != GameGoodsState.CanWork || gameGoodsVo.MakeMaterials.Count == 0)
				{
					continue;
				}
				foreach (MakingMaterialVo makeMaterial in gameGoodsVo.MakeMaterials)
				{
					if (makeMaterial.goodsID == goodsID)
					{
						if (playHintAnim)
						{
							gameLevelGrid.PlayGoodsHintAnim();
						}
						if (GameLevelManager.IsTargetInstrumentSeries(goodsBaseVo.series))
						{
							list.Add(gameLevelGrid);
						}
						else
						{
							list3.Add(gameLevelGrid);
						}
						break;
					}
				}
			}
		}
		int goodsNumById = Singleton<GameLevelManager>.Instance.GetGoodsNumById(goodsBaseVoById.goodsID);
		int chessboardGoodsNumById = Singleton<GameLevelManager>.Instance.GetChessboardGoodsNumById(goodsBaseVoById.goodsID);
		if (flag)
		{
			GameLevelGrid gameLevelGrid2 = null;
			string lockObjectType = "";
			if (list.Count > 0)
			{
				gameLevelGrid2 = PickHighestLevelMachineGrid(list);
				lockObjectType = "숍끛徫洎瑑&\u0082厁녡季㨾\0逕\ud970";
			}
			else if (list2.Count > 0)
			{
				gameLevelGrid2 = list2[Random.Range(0, list2.Count)];
				lockObjectType = "수끕榸琙扐\rª厩欷㹵";
			}
			else if (list3.Count > 0)
			{
				gameLevelGrid2 = PickHighestLevelMachineGrid(list3);
				lockObjectType = "숏끎涱愐潆\rº厹匧橨ā讹酥";
			}
			if ((Object)(object)gameLevelGrid2 != (Object)null)
			{
				gameLevelGrid2.OnSelectGrid(isProduce: false, playSelectAnim: false);
				gameLevelGrid2.SetLockFrameState(select: true);
				GameLevelManager.SetGoodsLockTargetGridId(gameLevelGrid2.GetGridId());
				GameLevelManager.GoodsLockGuideAnalytic("숎끏现栏村\rÒ发愽䢏", lockObjectType, gameLevelGrid2.GetGameGoodsVo().goodsID);
			}
			else
			{
				string failReason = ((chessboardGoodsNumById <= 0) ? "숵끖徵戶慝<\u0082厁眳㩿" : "匫橴ā讕遲");
				GameLevelManager.SetGoodsLockTargetGridId(-1);
				GameLevelManager.GoodsLockGuideAnalytic("숎끏暰意村\r\u009e厝漻䉴", "", 0, failReason);
			}
		}
		else
		{
			bool num = list2.Count > 0 || list.Count > 0 || list3.Count > 0;
			GameLevelManager.SetGoodsLockTargetGridId(-1);
			if (num)
			{
				GameLevelManager.GoodsLockGuideAnalytic("숎끏现栏村\rÒ发愽䢏", "수끕榸琙扐\rª厩欷㹵", goodsID);
			}
			else
			{
				string failReason2 = ((chessboardGoodsNumById <= 0) ? "숵끖徵戶慝<\u0082厁眳㩿" : "匫橴ā讕遲");
				GameLevelManager.GoodsLockGuideAnalytic("숎끏暰意村\r\u009e厝漻䉴", "", 0, failReason2);
			}
		}
		if (goodsNumById > chessboardGoodsNumById)
		{
			HideBagHintAnim();
			PlayBagHintAnim();
		}
	}

	private GameLevelGrid PickHighestLevelMachineGrid(List<GameLevelGrid> grids)
	{
		if (grids == null || grids.Count == 0)
		{
			return null;
		}
		if (grids.Count == 1)
		{
			return grids[0];
		}
		int num = int.MinValue;
		for (int i = 0; i < grids.Count; i++)
		{
			IGoodsBaseVo goodsBaseVo = grids[i].GetGoodsBaseVo();
			if (goodsBaseVo != null && goodsBaseVo.level > num)
			{
				num = goodsBaseVo.level;
			}
		}
		List<GameLevelGrid> list = new List<GameLevelGrid>();
		for (int j = 0; j < grids.Count; j++)
		{
			IGoodsBaseVo goodsBaseVo2 = grids[j].GetGoodsBaseVo();
			if (goodsBaseVo2 != null && goodsBaseVo2.level == num)
			{
				list.Add(grids[j]);
			}
		}
		if (list.Count == 0)
		{
			return grids[0];
		}
		return list[Random.Range(0, list.Count)];
	}

	private void PlayBagHintAnim()
	{
		//IL_003a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0075: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b0: Unknown result type (might be due to invalid IL or missing references)
		//IL_00eb: Unknown result type (might be due to invalid IL or missing references)
		//IL_0126: Unknown result type (might be due to invalid IL or missing references)
		//IL_0161: Unknown result type (might be due to invalid IL or missing references)
		if (!((Object)(object)BagButton == (Object)null))
		{
			mBagHintAnim = DOTween.Sequence();
			TweenSettingsExtensions.Append(mBagHintAnim, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(((Component)BagButton).transform, new Vector3(1.15f, 1.15f, 1f), 0.26f), (Ease)6));
			TweenSettingsExtensions.Append(mBagHintAnim, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(((Component)BagButton).transform, new Vector3(0.9f, 0.9f, 1f), 0.2f), (Ease)2));
			TweenSettingsExtensions.Append(mBagHintAnim, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(((Component)BagButton).transform, new Vector3(1.1f, 1.1f, 1f), 0.24f), (Ease)2));
			TweenSettingsExtensions.Append(mBagHintAnim, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(((Component)BagButton).transform, new Vector3(0.95f, 0.95f, 1f), 0.23f), (Ease)2));
			TweenSettingsExtensions.Append(mBagHintAnim, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(((Component)BagButton).transform, new Vector3(1.05f, 1.05f, 1f), 0.27f), (Ease)2));
			TweenSettingsExtensions.Append(mBagHintAnim, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(((Component)BagButton).transform, new Vector3(1f, 1f, 1f), 0.2f), (Ease)2));
			TweenExtensions.Play<Sequence>(TweenSettingsExtensions.SetAutoKill<Sequence>(mBagHintAnim, true));
		}
	}

	private void HideBagHintAnim()
	{
		//IL_0034: Unknown result type (might be due to invalid IL or missing references)
		if (mBagHintAnim != null)
		{
			TweenExtensions.Kill((Tween)(object)mBagHintAnim, false);
			mBagHintAnim = null;
			if ((Object)(object)BagButton != (Object)null)
			{
				((Component)BagButton).transform.localScale = Vector3.one;
			}
		}
	}

	private async void TemporaryAutoLocation()
	{
		if (!GameLevelDefine.HasGoodsToTemporary)
		{
			return;
		}
		GameLevelDefine.HasGoodsToTemporary = false;
		if (!MonoSingleton<GuideManager>.Instance.IsInGuide() && (Object)(object)m_ordersViewLogic != (Object)null && !GameLevelOrdersViewLogic.IsForcingItemZoneAnim())
		{
			if ((Object)(object)m_ordersViewLogic.TemporaryItem != (Object)null && !m_ordersViewLogic.InScreen(((Component)m_ordersViewLogic.TemporaryItem).gameObject))
			{
				GameLevelOrdersViewLogic.AssignForceItemZone(new OrderZoneForceItemFun_Common
				{
					zone = EOrderZoneForceItemFun.e_start,
					focusItemAni = false
				});
			}
			if ((Object)(object)m_ordersViewLogic.TemporaryItem != (Object)null)
			{
				m_ordersViewLogic.TemporaryItem.PlayHintAnim();
			}
			if ((Object)(object)m_ordersViewLogic.TemporaryCardPackItem != (Object)null)
			{
				m_ordersViewLogic.TemporaryCardPackItem.PlayHintAnim();
			}
			if ((Object)(object)m_ordersViewLogic.TemporaryAutoPopItem != (Object)null)
			{
				m_ordersViewLogic.TemporaryAutoPopItem.PlayHintAnim();
			}
		}
	}
}
