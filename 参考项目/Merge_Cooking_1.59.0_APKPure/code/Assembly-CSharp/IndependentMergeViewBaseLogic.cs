using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using TLF;
using TMPro;
using UniRx.Async;
using UniRx.Async.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

public class IndependentMergeViewBaseLogic : BaseViewLogic
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CPlayExpAnimation_003Ed__109 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		private void MoveNext()
		{
			try
			{
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

	public IndependentMergeViewBaseData Data;

	public static int GridWidth = 86;

	public static int GridHeight = 86;

	public static float ItemWidth = 85f;

	private int mColumns = 5;

	private int mRows = 5;

	public static bool MergeAdsorb = true;

	public static float MergeAdsorbRadius = (float)GridWidth * 0.75f;

	public static float EnterEventDelay = 0f;

	[HideInInspector]
	public Dictionary<int, IndependentGrid> mGridObjectDic = new Dictionary<int, IndependentGrid>();

	[HideInInspector]
	public Dictionary<int, IndependentGridBg> mGridBgObjectDic;

	[HideInInspector]
	public List<int> GridKeyList = new List<int>();

	[HideInInspector]
	public IndependentGrid mCurrentSelect;

	private List<IndependentGridBg> mMapBgGo;

	protected List<IndependentGrid> mAwaitUnLockGridList;

	private bool mDragGoods;

	[HideInInspector]
	public bool IsEnter;

	[HideInInspector]
	public bool IsGameMapInit;

	[HideInInspector]
	public float LastClickTime;

	private float minDis = -1f;

	private float maxDis = -1f;

	private long lastTouchUpTime;

	private float mDeltaTime;

	public bool CanShowHint = true;

	[HideInInspector]
	public IndependentGrid mMergeHintA;

	[HideInInspector]
	public IndependentGrid mMergeHintB;

	public RectTransform TopBg;

	public RectTransform TopLine;

	public RectTransform ContentBg;

	public RectTransform GridParent;

	public RectTransform GridBgParent;

	public Text TitleText;

	public Text DescText;

	public Text TimeDownText;

	public IndependentTemporaryBaseLogic TemporaryLogic;

	public Transform DragItemParent;

	private RTLTextMeshPro TimeDownTextTMP;

	public virtual int Columns => mColumns;

	public virtual int Rows => mRows;

	public virtual int GameGridWidth => GridWidth;

	public virtual int GameGridHeight => GridHeight;

	public virtual IndependentType ViewLevelType => IndependentType.None;

	public virtual bool IsOverturn => false;

	public Dictionary<int, IndependentGrid> GridObjectDic => mGridObjectDic;

	public IndependentGrid CurrentSelectGrid
	{
		get
		{
			return mCurrentSelect;
		}
		set
		{
			mCurrentSelect = value;
			RemoveMergeHint();
			if (!((Object)(object)mCurrentSelect != (Object)null))
			{
				return;
			}
			((Component)mCurrentSelect).transform.SetSiblingIndex(((Component)mCurrentSelect).transform.parent.childCount - 1);
			if (GameConst.GAME_MODE != GameConstMode.RELEASE)
			{
				if (mCurrentSelect.GetGameGoodsVo() != null)
				{
					_ = mCurrentSelect.GetGameGoodsVo().MergeDropList.Count;
					_ = 0;
				}
				if (mCurrentSelect.GetGameGoodsVo() != null)
				{
					_ = mCurrentSelect.GetGameGoodsVo().MergeDropItemList.Count;
					_ = 0;
				}
			}
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

	private void Start()
	{
		lastTouchUpTime = TimeManager.GetInstance().GetTimeStamp();
	}

	public override void OnEnter()
	{
		Data = (viewData as IndependentMergeViewBaseData) ?? new IndependentMergeViewBaseData();
		GameManager.GetInstance().SetMultiTouchEnabled(enable: false);
		GameLayoutFit();
		InitView();
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

	protected virtual void AddListener()
	{
	}

	protected virtual void RemoveListener()
	{
	}

	protected virtual void GameLayoutFit()
	{
	}

	public int GetCenterGridID()
	{
		return (Rows / 2 + 1) * 10 + (Columns / 2 + 1);
	}

	protected virtual void InitView()
	{
	}

	public void CreateMapBg(int offsetIndex = 0)
	{
		//IL_000d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0012: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ff: Unknown result type (might be due to invalid IL or missing references)
		//IL_00df: Unknown result type (might be due to invalid IL or missing references)
		//IL_010a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0124: Unknown result type (might be due to invalid IL or missing references)
		mGridBgObjectDic = new Dictionary<int, IndependentGridBg>();
		IndependentGridBg independentGridBg = null;
		Vector2 zero = Vector2.zero;
		mMapBgGo = new List<IndependentGridBg>();
		for (int i = 1; i <= Rows; i++)
		{
			for (int j = 1; j <= Columns; j++)
			{
				int num = i * 10 + j;
				independentGridBg = Singleton<ResCacheManager>.Instance.GetRes<IndependentGridBg>();
				if ((Object)(object)independentGridBg == (Object)null)
				{
					Log.E("숤끕\u20f9䘥䑛&\u0085厄쉊끔撽敋楽<\u0096厕숎끟璷䜏灑<Ö叕녲呩ᄦ\0郑\ud925");
					continue;
				}
				((Object)independentGridBg).name = "숏끔溽搐䥄7¾厽숵끔榭搶敳 ª厩刘樳\ud9f7ū" + num;
				((Component)independentGridBg).transform.SetParent((Transform)(object)GridBgParent);
				independentGridBg.LocalIdentity<IndependentGridBg>();
				independentGridBg.Init(this, ViewLevelType);
				independentGridBg.ShowGridBg(num, offsetIndex);
				if (ViewLevelType == IndependentType.MergeFishing || ViewLevelType == IndependentType.MergeFishingV2)
				{
					independentGridBg.HideGridBg();
				}
				zero = ((!IsOverturn) ? new Vector2((float)((j - 1) * GameGridWidth), (float)(-(i - 1) * GameGridHeight)) : new Vector2((float)((j - 1) * GameGridWidth), (float)(-(Rows - i) * GameGridHeight)));
				((Component)independentGridBg).GetComponent<RectTransform>().anchoredPosition = zero;
				((Component)independentGridBg).GetComponent<RectTransform>().sizeDelta = new Vector2((float)GameGridWidth, (float)GameGridHeight);
				mMapBgGo.Add(independentGridBg);
				if (!mGridBgObjectDic.ContainsKey(num))
				{
					mGridBgObjectDic.Add(num, independentGridBg);
				}
			}
		}
		minDis = -1f;
		maxDis = -1f;
	}

	public virtual void CreateGameGrid()
	{
		//IL_0036: Unknown result type (might be due to invalid IL or missing references)
		//IL_003b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0106: Unknown result type (might be due to invalid IL or missing references)
		//IL_00e4: Unknown result type (might be due to invalid IL or missing references)
		//IL_0111: Unknown result type (might be due to invalid IL or missing references)
		//IL_012b: Unknown result type (might be due to invalid IL or missing references)
		IsGameMapInit = true;
		GridKeyList.Clear();
		Dictionary<int, IndependentGameGoodsVo> independentMap = IndependentDefine.GetIndependentMap(ViewLevelType);
		mGridObjectDic = new Dictionary<int, IndependentGrid>();
		mAwaitUnLockGridList = new List<IndependentGrid>();
		IndependentGrid independentGrid = null;
		Vector2 zero = Vector2.zero;
		int num = 0;
		for (int i = 1; i <= Rows; i++)
		{
			for (int j = 1; j <= Columns; j++)
			{
				int num2 = i * 10 + j;
				GridKeyList.Add(num2);
				independentGrid = Singleton<ResCacheManager>.Instance.GetRes<IndependentGrid>();
				if ((Object)(object)independentGrid == (Object)null)
				{
					Log.E("숤끕\u20f9䘥䑛&\u0085厄쉊끔撽敋楽<\u0096厕숎끟璷䜏灑<Ö叕刕枟\ud9daĕ");
					continue;
				}
				((Object)independentGrid).name = "參橲ā讑酟" + num2;
				((Component)independentGrid).transform.SetParent((Transform)(object)GridParent);
				independentGrid.LocalIdentity<IndependentGrid>();
				zero = ((!IsOverturn) ? new Vector2((float)((j - 1) * GameGridWidth), (float)(-(i - 1) * GameGridHeight)) : new Vector2((float)((j - 1) * GameGridWidth), (float)(-(Rows - i) * GameGridHeight)));
				((Component)independentGrid).GetComponent<RectTransform>().anchoredPosition = zero;
				((Component)independentGrid).GetComponent<RectTransform>().sizeDelta = new Vector2((float)GameGridWidth, (float)GameGridHeight);
				independentGrid.SetGridType(ViewLevelType);
				IndGoodsBase goodsBase = null;
				IndependentGameGoodsVo independentGameGoodsVo = null;
				if (independentMap != null && independentMap.ContainsKey(num2))
				{
					independentGameGoodsVo = independentMap[num2];
					if (independentGameGoodsVo != null)
					{
						goodsBase = IndependentDefine.GetIndGameBaseById(ViewLevelType, independentGameGoodsVo.goodsID, independentGrid, independentGameGoodsVo);
					}
				}
				IndependentGridBg value = null;
				mGridBgObjectDic.TryGetValue(num2, out value);
				independentGrid.Init(num2, goodsBase, this, num, value);
				var (flag, resName, flag2) = GetGridUnlockCondition(independentGameGoodsVo);
				if (flag & flag2)
				{
					mAwaitUnLockGridList.Add(independentGrid);
				}
				independentGrid.ShowLockBg(flag, resName);
				mGridObjectDic.Add(num2, independentGrid);
				num++;
			}
		}
		IsGameMapInit = false;
	}

	public virtual void ResetGameMap()
	{
		CurrentSelectGrid = null;
		RecoveryGrid();
		CreateGameGrid();
	}

	public virtual void ResetGameMapBg(int offsetIndex = 0)
	{
		RecoveryGridBg();
		CreateMapBg(offsetIndex);
	}

	public virtual void MergeSuccess(IndependentGrid targetGrid, IndependentGrid dragGrid = null)
	{
		//IL_0089: Unknown result type (might be due to invalid IL or missing references)
		if ((Object)(object)targetGrid == (Object)null)
		{
			return;
		}
		EventManager.GetInstance().DispatchEvent(202123, VibrateManager.VibrateType.Moderate);
		RemoveMergeHint();
		IndependentGrid value = null;
		if (!mGridObjectDic.TryGetValue(targetGrid.GetGridId(), out value))
		{
			return;
		}
		IIndependentGoodsBaseVo goodsBaseVo = value.GetGoodsBaseVo();
		if (goodsBaseVo != null)
		{
			IndependentDefine.PlayMergeAudio(ViewLevelType, goodsBaseVo.goodsID, goodsBaseVo.level);
			EventManager.GetInstance().DispatchEvent(100121, value.GetGameGoodsVo().goodsID);
		}
		if ((Object)(object)value.GetGameLevelItem() != (Object)null)
		{
			value.GetGameLevelItem().PlayMergeAnim();
		}
		int gridId = value.GetGridId() - 1;
		bool flag = ChangeGridItemToLock(gridId);
		int gridId2 = value.GetGridId() + 1;
		flag = ChangeGridItemToLock(gridId2) | flag;
		int gridId3 = value.GetGridId() - 10;
		flag = ChangeGridItemToLock(gridId3) | flag;
		int gridId4 = value.GetGridId() + 10;
		if (ChangeGridItemToLock(gridId4) | flag)
		{
			Singleton<GameLevelManager>.Instance.PlayAudio(5, 0, ViewLevelType);
		}
		if (IndependentDefine.FlyToIllutrate(ViewLevelType))
		{
			FlyToIllutrate(value.GetGoodsBaseVo(), targetGrid.GameItemParent);
		}
		if (value.GetGameGoodsVo() != null)
		{
			IndependentDefine.UnlockNewGoods(ViewLevelType, value.GetGameGoodsVo().goodsID, value);
		}
		if (value.GetGameGoodsVo() != null && (value.GetGameGoodsVo().MergeDropList.Count > 0 || value.GetGameGoodsVo().MergeDropItemList.Count > 0))
		{
			value.OnUpdateTime();
		}
		if (ViewLevelType == IndependentType.MergeFishing)
		{
			if (value.GetGoodsBaseVo() != null && value.GetGoodsBaseVo().type == 4)
			{
				MergeFishing.TA.GetGoods(value.GetGoodsBaseVo().goodsID);
			}
			if (!MonoSingleton<GuideManager>.Instance.IsFinishByID(185))
			{
				IIndependentProduceVo produceConfigById = IndependentDefine.GetProduceConfigById(ViewLevelType, value.GetGameGoodsVo().goodsID);
				if (IIndependentGoodsBaseVo.IsCreator(value.GetGoodsBaseVo().type) && produceConfigById != null && IndependentDefine.IsActivityGoods(produceConfigById))
				{
					((Object)((Component)value).gameObject).name = "숏끔溽搐䥄7¾厽숭끔播䜮敆;\u0096厕刕枟\ud9ddő";
					EventManager.GetInstance().DispatchEvent(100133, 185, 0f);
				}
			}
		}
		if (ViewLevelType != IndependentType.MergeFishingV2)
		{
			return;
		}
		if (value.GetGoodsBaseVo() != null && value.GetGoodsBaseVo().type == 4)
		{
			MergeFishingV2.TA.GetGoods(value.GetGoodsBaseVo().goodsID);
		}
		int guideId = MergeFishingV2.Guide.useRod.guideId;
		if (!MonoSingleton<GuideManager>.Instance.IsFinishByID(guideId))
		{
			IIndependentProduceVo produceConfigById2 = IndependentDefine.GetProduceConfigById(ViewLevelType, value.GetGameGoodsVo().goodsID);
			if (IIndependentGoodsBaseVo.IsCreator(value.GetGoodsBaseVo().type) && produceConfigById2 != null && IndependentDefine.IsActivityGoods(produceConfigById2))
			{
				((Object)((Component)value).gameObject).name = "숏끔溽搐䥄7¾厽숭끔播䜮敆;\u0096厕刕枟\ud9ddő";
				EventManager.GetInstance().DispatchEvent(100133, guideId, 0f);
			}
		}
	}

	public virtual void UnlockAroundGrid(IndependentGrid targetGrid)
	{
		if (!((Object)(object)targetGrid == (Object)null))
		{
			int gridId = targetGrid.GetGridId() - 1;
			bool flag = ChangeGridItemToLock(gridId);
			int gridId2 = targetGrid.GetGridId() + 1;
			flag = ChangeGridItemToLock(gridId2) | flag;
			int gridId3 = targetGrid.GetGridId() - 10;
			flag = ChangeGridItemToLock(gridId3) | flag;
			int gridId4 = targetGrid.GetGridId() + 10;
			if (ChangeGridItemToLock(gridId4) | flag)
			{
				Singleton<GameLevelManager>.Instance.PlayAudio(5, 0, ViewLevelType);
			}
		}
	}

	public virtual void DeleteGridGoods(IndependentGrid targetGrid)
	{
	}

	public virtual void CheckCanUnlockAroundGrid(IndependentGrid targetGrid)
	{
	}

	public virtual (bool, string, bool) GetGridUnlockCondition(IndependentGameGoodsVo targetGoods)
	{
		return (false, string.Empty, false);
	}

	public bool CreateNewGoods(int id, Transform startTrans = null)
	{
		//IL_009b: Unknown result type (might be due to invalid IL or missing references)
		IIndependentGoodsBaseVo goodsConfigById = IndependentDefine.GetGoodsConfigById(ViewLevelType, id);
		if (goodsConfigById == null)
		{
			return false;
		}
		IndependentGrid independentGrid = null;
		independentGrid = GetNearbyEmptyGrid(GetCenterGridID(), showEnoughTip: true, startTrans, id);
		if (goodsConfigById != null && (Object)(object)independentGrid != (Object)null)
		{
			IndependentGameGoodsVo independentGameGoodsVo = new IndependentGameGoodsVo();
			independentGameGoodsVo.goodsID = goodsConfigById.goodsID;
			independentGameGoodsVo.GoodsState = IndependentGoodsState.Normal;
			IndGoodsBase indGameBaseById = IndependentDefine.GetIndGameBaseById(ViewLevelType, independentGameGoodsVo.goodsID, independentGrid, independentGameGoodsVo);
			independentGrid.ChangeGameGoodsVo(indGameBaseById);
			if ((Object)(object)startTrans != (Object)null)
			{
				independentGrid.GetGameLevelItem()?.PlayItemFly(startTrans, 0.4f, isPlayDownEffect: false, isPlayDoubleUp: false, 0f, isBreakAudio: false, "숏끜徿䤐敗&\u0082厁숚끞撼攛湑<\u0096厕숞끎徐氟湑?\u0082厁刕枇\ud9ddŝ");
			}
			EventManager.GetInstance().DispatchEvent(202123, VibrateManager.VibrateType.Moderate);
			IndependentDefine.UnlockNewGoods(ViewLevelType, goodsConfigById.goodsID, independentGrid);
			if (ViewLevelType == IndependentType.MergeFishing && !MonoSingleton<GuideManager>.Instance.IsFinishByID(184))
			{
				EventManager.GetInstance().DispatchEvent(100133, 184, 0f);
			}
			if (ViewLevelType == IndependentType.MergeFishingV2)
			{
				int guideId = MergeFishingV2.Guide.boardMerge.guideId;
				if (!MonoSingleton<GuideManager>.Instance.IsFinishByID(guideId))
				{
					EventManager.GetInstance().DispatchEvent(100133, guideId, 0f);
				}
			}
			return true;
		}
		EventManager.GetInstance().DispatchEvent(202123, VibrateManager.VibrateType.Intense);
		return false;
	}

	public bool CreateNewGoodsByVo(IndependentGameGoodsVo id, Transform startTrans = null)
	{
		//IL_00ed: Unknown result type (might be due to invalid IL or missing references)
		IIndependentGoodsBaseVo goodsConfigById = IndependentDefine.GetGoodsConfigById(ViewLevelType, id.goodsID);
		if (goodsConfigById == null)
		{
			return false;
		}
		IndependentGrid independentGrid = null;
		independentGrid = GetNearbyEmptyGrid(GetCenterGridID(), showEnoughTip: true, startTrans, id.goodsID);
		if (goodsConfigById != null && (Object)(object)independentGrid != (Object)null)
		{
			IndependentGameGoodsVo independentGameGoodsVo = new IndependentGameGoodsVo();
			independentGameGoodsVo.goodsID = goodsConfigById.goodsID;
			independentGameGoodsVo.GoodsState = IndependentGoodsState.Normal;
			independentGameGoodsVo.MergeDropList = id.MergeDropList;
			independentGameGoodsVo.MergeDropItemList = id.MergeDropItemList;
			independentGameGoodsVo.ProduceTotal = id.ProduceTotal;
			independentGameGoodsVo.ProduceCapacity = id.ProduceCapacity;
			independentGameGoodsVo.InitiativeProduceList = id.InitiativeProduceList;
			independentGameGoodsVo.MakeMaterials = id.MakeMaterials;
			IndGoodsBase indGameBaseById = IndependentDefine.GetIndGameBaseById(ViewLevelType, independentGameGoodsVo.goodsID, independentGrid, independentGameGoodsVo);
			independentGrid.ChangeGameGoodsVo(indGameBaseById);
			if ((Object)(object)startTrans != (Object)null)
			{
				independentGrid.GetGameLevelItem()?.PlayItemFly(startTrans, 0.4f, isPlayDownEffect: false, isPlayDoubleUp: false, 0f, isBreakAudio: false, "숏끜徿䤐敗&\u0082厁숚끞撼攛湑<\u0096厕숞끎徐氟湑?\u0082厁刕枇\ud9ddŝ");
			}
			IndependentDefine.UnlockNewGoods(ViewLevelType, goodsConfigById.goodsID, independentGrid);
			EventManager.GetInstance().DispatchEvent(202123, VibrateManager.VibrateType.Moderate);
			return true;
		}
		EventManager.GetInstance().DispatchEvent(202123, VibrateManager.VibrateType.Intense);
		return false;
	}

	public bool ChangeGridItemToLock(int _gridId)
	{
		IndependentGrid value = null;
		if (mGridObjectDic.TryGetValue(_gridId, out value))
		{
			IndependentGameGoodsVo gameGoodsVo = value.GetGameGoodsVo();
			if (gameGoodsVo != null)
			{
				if (!IndependentDefine.IsUnlockGrid(ViewLevelType, gameGoodsVo))
				{
					return false;
				}
				if (gameGoodsVo.GoodsState == IndependentGoodsState.Covered)
				{
					value.ChangeGameGoodsState(IndependentGoodsState.Lock);
					value.PlayCoveredBroken();
					return true;
				}
				if (gameGoodsVo.GoodsState == IndependentGoodsState.FakeCovered)
				{
					value.ChangeGameGoodsState(IndependentGoodsState.Normal);
					value.GetGameGoodsBase().InitializeAttribute();
					value.UpdateGameLevelItem();
					value.SaveGridData();
					value.PlayCoveredBroken();
					IndependentDefine.UnlockNewGoods(ViewLevelType, gameGoodsVo.goodsID, value);
					CheckCanUnlockAroundGrid(value);
					return true;
				}
			}
		}
		return false;
	}

	private IndependentGrid CreateNearbyGoods(int gridId, int goodsId, IndependentGoodsState goodsState = IndependentGoodsState.Normal)
	{
		//IL_00a6: Unknown result type (might be due to invalid IL or missing references)
		if (goodsId > 0)
		{
			IndependentGrid nearbyEmptyGrid = GetNearbyEmptyGrid(gridId, showEnoughTip: false, null, goodsId);
			IIndependentGoodsBaseVo goodsConfigById = IndependentDefine.GetGoodsConfigById(ViewLevelType, goodsId);
			if (goodsConfigById != null && (Object)(object)nearbyEmptyGrid != (Object)null)
			{
				IndependentGameGoodsVo independentGameGoodsVo = new IndependentGameGoodsVo();
				independentGameGoodsVo.goodsID = goodsConfigById.goodsID;
				independentGameGoodsVo.GoodsState = goodsState;
				IndGoodsBase indGameBaseById = IndependentDefine.GetIndGameBaseById(ViewLevelType, independentGameGoodsVo.goodsID, nearbyEmptyGrid, independentGameGoodsVo);
				nearbyEmptyGrid.ChangeGameGoodsVo(indGameBaseById);
				IndependentGrid value = null;
				if (mGridObjectDic.TryGetValue(gridId, out value))
				{
					nearbyEmptyGrid.GetGameLevelItem()?.PlayItemFly(value.GameItemParent, 0.4f, isPlayDownEffect: false, isPlayDoubleUp: false, 0f, isBreakAudio: false, "숏끜徿䤐敗&\u0082厁숚끞撼攛湑<\u0096厕숞끎徐氟湑?\u0082厁刕枇\ud9ddŝ");
				}
				IndependentDefine.UnlockNewGoods(ViewLevelType, goodsId, nearbyEmptyGrid);
				return nearbyEmptyGrid;
			}
		}
		return null;
	}

	private void UpdateGridTime()
	{
		if (!CanShowHint)
		{
			return;
		}
		Dictionary<int, IndependentGrid>.Enumerator enumerator = mGridObjectDic.GetEnumerator();
		while (enumerator.MoveNext())
		{
			IndependentGrid value = enumerator.Current.Value;
			if ((Object)(object)value != (Object)null && value.GetGameGoodsVo() != null)
			{
				IndependentGameGoodsVo gameGoodsVo = value.GetGameGoodsVo();
				if (gameGoodsVo.MergeDropList != null && (gameGoodsVo.MergeDropList.Count > 0 || gameGoodsVo.MergeDropItemList.Count > 0))
				{
					value.OnUpdateTime();
				}
			}
		}
	}

	public bool CheckEmptyGridEnough(int num, bool showEnoughTip = false)
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
			ShowMapEnoughTip(null);
		}
		return false;
	}

	public void ShowMapEnoughTip(Transform tipLocation)
	{
		if (IsShowMapFullTip())
		{
			if (CheckMapIsFull())
			{
				ViewManager.Instance.ShowTip("숨끼犆搩䡛3Î反숆끏斵猇䙫\u0016\u009a厙뻿");
			}
			else
			{
				ViewManager.Instance.ShowTip(IndependentDefine.GetMapFullTip(ViewLevelType), null, tipLocation);
			}
		}
		else
		{
			ViewManager.Instance.ShowTip(IndependentDefine.GetMapFullTip(ViewLevelType), null, tipLocation);
		}
	}

	private bool IsShowMapFullTip()
	{
		if (ViewLevelType == IndependentType.MergeFishing)
		{
			return true;
		}
		if (ViewLevelType == IndependentType.MergeFishingV2)
		{
			return true;
		}
		if (ViewLevelType == IndependentType.DiggingTreasure)
		{
			return true;
		}
		if (ViewLevelType == IndependentType.Independent_Mining)
		{
			return true;
		}
		if (ViewLevelType == IndependentType.MergeIndependent)
		{
			if (ObjectManager.GetInstance().independentMergeModel.ThemeID == 2)
			{
				return true;
			}
			if (ObjectManager.GetInstance().independentMergeModel.ThemeID == 3)
			{
				return true;
			}
			if (ObjectManager.GetInstance().independentMergeModel.ThemeID == 4)
			{
				return true;
			}
		}
		if (ViewLevelType == IndependentType.StageMergeIndependent)
		{
			return true;
		}
		if (ViewLevelType == IndependentType.Independent_Basic)
		{
			return true;
		}
		if (ViewLevelType == IndependentType.StageMergeBasic)
		{
			return true;
		}
		if (ViewLevelType == IndependentType.Independent_Farm)
		{
			return true;
		}
		if (ViewLevelType == IndependentType.IndStageMerge)
		{
			return true;
		}
		return false;
	}

	public virtual bool CheckMapIsFull()
	{
		if (CheckEmptyGridEnough(1))
		{
			return false;
		}
		Dictionary<int, IndependentGameGoodsVo> dictionary = new Dictionary<int, IndependentGameGoodsVo>();
		List<IndependentGrid> list = mGridObjectDic.Values.ToList();
		List<IndependentGrid> list2 = new List<IndependentGrid>();
		List<IndependentGrid> list3 = new List<IndependentGrid>();
		IIndependentGoodsBaseVo independentGoodsBaseVo = null;
		IndependentGameGoodsVo independentGameGoodsVo = null;
		for (int num = list.Count - 1; num >= 0; num--)
		{
			IndependentGrid independentGrid = list[num];
			if (!((Object)(object)independentGrid == (Object)null) && independentGrid.GetGoodsBaseVo() != null)
			{
				independentGoodsBaseVo = independentGrid.GetGoodsBaseVo();
				independentGameGoodsVo = independentGrid.GetGameGoodsVo();
				if (independentGoodsBaseVo != null && independentGameGoodsVo != null && !IIndependentGoodsBaseVo.CannotMerge(independentGameGoodsVo.GoodsState) && !IIndependentGoodsBaseVo.IsBatchProduce(independentGoodsBaseVo.type))
				{
					if (independentGoodsBaseVo.type == 2)
					{
						return false;
					}
					if (independentGoodsBaseVo.type == 3)
					{
						return false;
					}
					if (independentGoodsBaseVo.type == 6)
					{
						list2.Add(list[num]);
					}
					else if (independentGoodsBaseVo.type == 5 || independentGoodsBaseVo.type == 7)
					{
						list3.Add(list[num]);
					}
					if (IndependentDefine.GetGoodsConfigBySeriesAndLevel(independentGrid.GetGridType(), independentGoodsBaseVo.series, independentGoodsBaseVo.level + 1) != null)
					{
						if (dictionary.ContainsKey(independentGameGoodsVo.goodsID))
						{
							if (dictionary[independentGameGoodsVo.goodsID].GoodsState != IndependentGoodsState.Lock)
							{
								return false;
							}
							if (independentGameGoodsVo.GoodsState != IndependentGoodsState.Lock)
							{
								return false;
							}
						}
						else
						{
							dictionary.Add(independentGameGoodsVo.goodsID, independentGameGoodsVo);
						}
					}
				}
			}
		}
		if (list2.Count > 0 && list3.Count > 0)
		{
			for (int i = 0; i < list3.Count; i++)
			{
				for (int j = 0; j < list2.Count; j++)
				{
					if (CanPutinMaterial(list2[j], list3[i]))
					{
						return false;
					}
				}
			}
		}
		return true;
	}

	public virtual bool CheckGoodsCanDelete(IndependentGameGoodsVo gameGoodsVo)
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
		if (IIndependentGoodsBaseVo.IsBatchProduce(goodsConfigById.type))
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
		return true;
	}

	public virtual bool DeleteGoodsByGrid(IndependentGrid _grid)
	{
		//IL_0049: Unknown result type (might be due to invalid IL or missing references)
		if ((Object)(object)_grid == (Object)null)
		{
			return false;
		}
		if (_grid.GetGameGoodsVo() == null)
		{
			return false;
		}
		if (CheckGoodsCanDelete(_grid.GetGameGoodsVo()))
		{
			IndependentGameGoodsVo gameGoodsVo = _grid.GetGameGoodsVo();
			SendDeleteItemEvent(gameGoodsVo.goodsID);
			_grid.EmptyParentSelectGrid();
			_grid.PlayItemSellVanish(_grid.GetGoodsBaseVo());
			_grid.ChangeGameGoodsVo(null);
			return true;
		}
		return false;
	}

	public virtual bool CanPutinMaterial(IndependentGrid materialGrid, IndependentGrid targetGrid)
	{
		if ((Object)(object)targetGrid == (Object)null || (Object)(object)materialGrid == (Object)null)
		{
			return false;
		}
		if (materialGrid.GetGameGoodsVo() == null || materialGrid.GetGoodsBaseVo() == null)
		{
			return false;
		}
		if (targetGrid.GetGameGoodsVo() == null || targetGrid.GetGoodsBaseVo() == null)
		{
			return false;
		}
		List<IIndependentAutoConversionVO> autoConversionVoByID = IndependentDefine.GetAutoConversionVoByID(targetGrid.GetGridType(), targetGrid.GetGameGoodsVo().goodsID);
		if (autoConversionVoByID == null || autoConversionVoByID.Count == 0)
		{
			return false;
		}
		List<int> list = new List<int>();
		for (int i = 0; i < targetGrid.GetGameGoodsVo().MakeMaterials.Count; i++)
		{
			list.Add(targetGrid.GetGameGoodsVo().MakeMaterials[i]);
		}
		list.Add(materialGrid.GetGameGoodsVo().goodsID);
		for (int j = 0; j < autoConversionVoByID.Count; j++)
		{
			if (autoConversionVoByID[j].CheckContainByMaterials(list))
			{
				return true;
			}
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

	public IndependentGrid GetNearbyEmptyGrid(int gridID, bool showEnoughTip = false, Transform enoughTipLocation = null, int goodsID = 0)
	{
		IndependentGrid independentGrid = null;
		bool flag = false;
		List<int> list = new List<int>();
		for (int i = 0; i < GridKeyList.Count; i++)
		{
			if ((Object)(object)GetEmptyGridByGridId(GridKeyList[i]) != (Object)null)
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
			independentGrid = GetEmptyGridByGridId(list[index]);
		}
		if (((Object)(object)independentGrid == (Object)null) & showEnoughTip)
		{
			Transform tipLocation = null;
			if ((Object)(object)enoughTipLocation != (Object)null)
			{
				tipLocation = enoughTipLocation;
			}
			else if ((Object)(object)CurrentSelectGrid != (Object)null)
			{
				tipLocation = CurrentSelectGrid.GameItemParent;
			}
			ShowMapEnoughTip(tipLocation);
		}
		return independentGrid;
	}

	public IndependentGrid GetEmptyGridAroundID(int gridId)
	{
		IndependentGrid independentGrid = null;
		int gridId2 = gridId - 10;
		independentGrid = GetEmptyGridByGridId(gridId2);
		if ((Object)(object)independentGrid != (Object)null)
		{
			return independentGrid;
		}
		gridId2 = gridId + 10;
		independentGrid = GetEmptyGridByGridId(gridId2);
		if ((Object)(object)independentGrid != (Object)null)
		{
			return independentGrid;
		}
		gridId2 = gridId - 1;
		independentGrid = GetEmptyGridByGridId(gridId2);
		if ((Object)(object)independentGrid != (Object)null)
		{
			return independentGrid;
		}
		gridId2 = gridId + 1;
		independentGrid = GetEmptyGridByGridId(gridId2);
		if ((Object)(object)independentGrid != (Object)null)
		{
			return independentGrid;
		}
		gridId2 = gridId - 10 - 1;
		independentGrid = GetEmptyGridByGridId(gridId2);
		if ((Object)(object)independentGrid != (Object)null)
		{
			return independentGrid;
		}
		gridId2 = gridId - 10 + 1;
		independentGrid = GetEmptyGridByGridId(gridId2);
		if ((Object)(object)independentGrid != (Object)null)
		{
			return independentGrid;
		}
		gridId2 = gridId + 10 - 1;
		independentGrid = GetEmptyGridByGridId(gridId2);
		if ((Object)(object)independentGrid != (Object)null)
		{
			return independentGrid;
		}
		gridId2 = gridId + 10 + 1;
		independentGrid = GetEmptyGridByGridId(gridId2);
		if ((Object)(object)independentGrid != (Object)null)
		{
			return independentGrid;
		}
		return null;
	}

	private IndependentGrid GetEmptyGridByGridId(int gridId, IGoodsShapeVo areaInfo)
	{
		IndependentGrid result = GetEmptyGridByGridId(gridId);
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

	private IndependentGrid GetEmptyGridByGridId(int gridId)
	{
		if (mGridObjectDic.TryGetValue(gridId, out var value) && (Object)(object)value != (Object)null && IsGridEmptyByData(gridId))
		{
			return value;
		}
		return null;
	}

	private bool IsGridEmptyByData(int gridId)
	{
		Dictionary<int, IndependentGameGoodsVo> independentMap = IndependentDefine.GetIndependentMap(ViewLevelType);
		if (independentMap == null)
		{
			return true;
		}
		if (!independentMap.TryGetValue(gridId, out var value))
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
		IndependentGrid value = null;
		if (mGridObjectDic.TryGetValue(gridId, out value))
		{
			if ((Object)(object)value == (Object)null)
			{
				return false;
			}
			if (IsGridEmptyByData(gridId))
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
			if (IIndependentGoodsBaseVo.CannotMerge(value.GetGameGoodsVo().GoodsState))
			{
				return false;
			}
			return true;
		}
		return false;
	}

	public override bool OnBackPressed()
	{
		if (DragGoods)
		{
			return true;
		}
		OnCloseView();
		return true;
	}

	public void RecoveryGrid()
	{
		Dictionary<int, IndependentGrid>.Enumerator enumerator = mGridObjectDic.GetEnumerator();
		while (enumerator.MoveNext())
		{
			IndependentGrid value = enumerator.Current.Value;
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
		mMapBgGo.Clear();
	}

	private void Update()
	{
		mDeltaTime += Time.deltaTime;
		if (mDeltaTime >= 1f)
		{
			mDeltaTime--;
			UpdateGridTime();
			RefreshTimeDown();
			RefreshGiftTimeDown();
		}
		LastClickTime += Time.deltaTime;
		if (Input.touchCount > 0)
		{
			lastTouchUpTime = TimeManager.GetInstance().GetTimeStamp();
		}
		if (TimeManager.GetInstance().GetTimeStamp() - lastTouchUpTime < Singleton<GameLevelManager>.Instance.MergeHintInterval)
		{
			return;
		}
		lastTouchUpTime = TimeManager.GetInstance().GetTimeStamp();
		if (CanShowHint)
		{
			if (!ShowPriorityGuideWeak())
			{
				PlayMergeHintAnim();
				if (!DragGoods && (Object)(object)mMergeHintA == (Object)null && (Object)(object)mMergeHintB == (Object)null)
				{
					ShowGuideWeak();
				}
			}
			else
			{
				RemoveMergeHint();
			}
		}
		else
		{
			RemoveMergeHint();
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
		HideSpecialHintAnim();
	}

	protected void ShowMergeHint()
	{
		TimeManager.Instance.Schedule(this, (float dt) =>
		{
			PlayMergeHintAnim();
		}, 0.8f, 1, 0f);
	}

	private void PlayMergeHintAnim()
	{
		if (DragGoods || ((Object)(object)mMergeHintA != (Object)null && (Object)(object)mMergeHintB != (Object)null))
		{
			return;
		}
		List<IndependentGrid> list = mGridObjectDic.Values.ToList();
		for (int num = list.Count - 1; num >= 0; num--)
		{
			IndependentGrid independentGrid = list[num];
			if ((Object)(object)independentGrid != (Object)null && independentGrid.GetGoodsBaseVo() != null)
			{
				if (CheckGridGoodsSpecial(independentGrid))
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
		if ((Object)(object)mMergeHintA == (Object)null || (Object)(object)mMergeHintB == (Object)null)
		{
			ShowSpecialHintAnim();
		}
	}

	private void FindCanMergeItem(List<IndependentGrid> gameItems)
	{
		int num = -1;
		int num2 = -1;
		Dictionary<int, int> dictionary = new Dictionary<int, int>();
		List<IndependentGrid> list = new List<IndependentGrid>();
		for (int i = 0; i < gameItems.Count; i++)
		{
			IndependentGrid independentGrid = gameItems[i];
			if (independentGrid.GetGameGoodsVo() == null || independentGrid.GetGoodsBaseVo() == null)
			{
				continue;
			}
			if (independentGrid.GetGameGoodsVo().GoodsState == IndependentGoodsState.Lock)
			{
				if (!dictionary.ContainsKey(independentGrid.GetGoodsBaseVo().goodsID))
				{
					dictionary.Add(independentGrid.GetGoodsBaseVo().goodsID, i);
				}
				if ((Object)(object)CurrentSelectGrid != (Object)null && CurrentSelectGrid.GetGoodsBaseVo() != null && CurrentSelectGrid.GetGoodsBaseVo().goodsID == independentGrid.GetGoodsBaseVo().goodsID && num == -1 && CurrentSelectGrid.GetGridId() != independentGrid.GetGridId())
				{
					num = i;
				}
			}
			else
			{
				list.Add(gameItems[i]);
				if ((Object)(object)CurrentSelectGrid != (Object)null && CurrentSelectGrid.GetGoodsBaseVo() != null && CurrentSelectGrid.GetGoodsBaseVo().goodsID == independentGrid.GetGoodsBaseVo().goodsID && num2 == -1 && CurrentSelectGrid.GetGridId() != independentGrid.GetGridId())
				{
					num2 = i;
				}
			}
		}
		list.Sort((IndependentGrid gridA, IndependentGrid gridB) => gridB.GetGoodsBaseVo().level - gridA.GetGoodsBaseVo().level);
		if (!CheckSelectGoodsCanMerge(gameItems, num, num2))
		{
			CheckCanMerge(gameItems, list, dictionary);
		}
	}

	private bool CheckCanMerge(List<IndependentGrid> allItems, List<IndependentGrid> classifyItems, Dictionary<int, int> lockInfos)
	{
		for (int i = 0; i < classifyItems.Count; i++)
		{
			IndependentGrid independentGrid = classifyItems[i];
			if (lockInfos.ContainsKey(independentGrid.GetGoodsBaseVo().goodsID))
			{
				int index = lockInfos[independentGrid.GetGoodsBaseVo().goodsID];
				if (CanMergeHint(independentGrid, allItems[index]))
				{
					mMergeHintA = independentGrid;
					mMergeHintB = allItems[index];
					independentGrid.GetGameLevelItem().PlayMergeHintEffect(((Component)allItems[index].GetGameLevelItem()).transform);
					allItems[index].GetGameLevelItem().PlayMergeHintEffect(((Component)independentGrid.GetGameLevelItem()).transform);
					return true;
				}
			}
		}
		Dictionary<int, int> dictionary = new Dictionary<int, int>();
		for (int j = 0; j < classifyItems.Count; j++)
		{
			IndependentGrid independentGrid2 = classifyItems[j];
			if (!dictionary.ContainsKey(independentGrid2.GetGoodsBaseVo().goodsID))
			{
				dictionary.Add(independentGrid2.GetGoodsBaseVo().goodsID, j);
				continue;
			}
			int index2 = dictionary[independentGrid2.GetGoodsBaseVo().goodsID];
			if ((independentGrid2.GetGameGoodsVo().GoodsState != IndependentGoodsState.Lock || classifyItems[index2].GetGameGoodsVo().GoodsState != IndependentGoodsState.Lock) && CanMergeHint(independentGrid2, classifyItems[index2]))
			{
				mMergeHintA = independentGrid2;
				mMergeHintB = classifyItems[index2];
				independentGrid2.GetGameLevelItem().PlayMergeHintEffect(((Component)classifyItems[index2].GetGameLevelItem()).transform);
				classifyItems[index2].GetGameLevelItem().PlayMergeHintEffect(((Component)independentGrid2.GetGameLevelItem()).transform);
				return true;
			}
		}
		return false;
	}

	private bool CanMergeHint(IndependentGrid gridA, IndependentGrid gridB, bool isAutoConversion = false)
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
		if (gridA.GetGameGoodsVo().GoodsState == IndependentGoodsState.Lock && gridB.GetGameGoodsVo().GoodsState == IndependentGoodsState.Lock)
		{
			return false;
		}
		if (!isAutoConversion)
		{
			IIndependentGoodsBaseVo goodsConfigBySeriesAndLevel = IndependentDefine.GetGoodsConfigBySeriesAndLevel(ViewLevelType, gridA.GetGoodsBaseVo().series, gridA.GetGoodsBaseVo().level + 1);
			IIndependentGoodsBaseVo goodsConfigBySeriesAndLevel2 = IndependentDefine.GetGoodsConfigBySeriesAndLevel(ViewLevelType, gridB.GetGoodsBaseVo().series, gridB.GetGoodsBaseVo().level + 1);
			if (goodsConfigBySeriesAndLevel == null || goodsConfigBySeriesAndLevel2 == null)
			{
				return false;
			}
		}
		return true;
	}

	private bool CheckGridGoodsSpecial(IndependentGrid grid)
	{
		IIndependentGoodsBaseVo goodsBaseVo = grid.GetGoodsBaseVo();
		IndependentGameGoodsVo gameGoodsVo = grid.GetGameGoodsVo();
		if (goodsBaseVo == null || gameGoodsVo == null)
		{
			return true;
		}
		if (IndependentDefine.GetGoodsConfigBySeriesAndLevel(ViewLevelType, goodsBaseVo.series, goodsBaseVo.level + 1) == null)
		{
			return true;
		}
		if (IIndependentGoodsBaseVo.CannotMerge(gameGoodsVo.GoodsState))
		{
			return true;
		}
		if (!IndependentDefine.IsUnlockGrid(ViewLevelType, gameGoodsVo))
		{
			return true;
		}
		return false;
	}

	private bool CheckSelectGoodsCanMerge(List<IndependentGrid> gameItems, int lockIndex, int normalIndex)
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

	public virtual void ShowGuideWeak()
	{
	}

	public virtual bool ShowPriorityGuideWeak()
	{
		return false;
	}

	public virtual void ShowSpecialHintAnim()
	{
	}

	public virtual void HideSpecialHintAnim()
	{
	}

	public virtual void CheckUnlock(IIndependentGoodsBaseVo vo)
	{
	}

	public virtual void RefreshTimeDown()
	{
		int activityTimedown = IndependentDefine.GetActivityTimedown(ViewLevelType);
		if ((Object)(object)TimeDownTextTMP != (Object)null)
		{
			if (activityTimedown > 0)
			{
				((TMP_Text)TimeDownTextTMP).text = TimeManager.GetInstance().GetTimeDownBySecond(activityTimedown);
			}
			else
			{
				LocalizedLang.SetUITextLocalization((TextMeshProUGUI)(object)TimeDownTextTMP, "숃끙璭礄慂;Ö叕숄끜械攅彝!¦厥뻸");
			}
		}
		else if ((Object)(object)TimeDownText != (Object)null)
		{
			if (activityTimedown > 0)
			{
				TimeDownText.text = TimeManager.GetInstance().GetTimeDownBySecond(activityTimedown);
			}
			else
			{
				LocalizedLang.SetUITextLocalization(TimeDownText, "숃끙璭礄慂;Ö叕숄끜械攅彝!¦厥뻸");
			}
		}
	}

	protected virtual void RefreshGiftTimeDown()
	{
	}

	public override void SetLocalization(int tag = 0, object data = null)
	{
	}

	public void OnCloseView()
	{
		CloseViewAin();
		if (IndependentGrid.PlayCardAnim > 0)
		{
			IndependentGrid.PlayCardAnim = 0;
			EventManager.GetInstance().DispatchEvent(100130, arg: false);
		}
	}

	public virtual void OnOpenHelpView()
	{
	}

	public virtual void OnOpenGiftView()
	{
	}

	public virtual bool CanDragToGrid(int targetGridID)
	{
		return true;
	}

	public virtual bool IsHideGridBg(int targetGridID)
	{
		return false;
	}

	[AsyncStateMachine(typeof(_003CPlayExpAnimation_003Ed__109))]
	public virtual UniTask PlayExpAnimation(int changeExp, float delay)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0029: Unknown result type (might be due to invalid IL or missing references)
		_003CPlayExpAnimation_003Ed__109 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CPlayExpAnimation_003Ed__109>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	public virtual void OnOpenGoodInfoView()
	{
	}

	public virtual void PlayGoodsInfoAndHidePoolAni(bool isShow = true)
	{
	}

	public virtual void GoodsToTempary(IIndependentGoodsBaseVo goodsBaseVo, Transform startTrans)
	{
	}

	protected virtual void FlyToIllutrate(IIndependentGoodsBaseVo goodsBaseVo, Transform startTrans)
	{
	}

	public void CheckSendBoardFullEvent()
	{
		if (ViewLevelType == IndependentType.MergeIndependent && CheckMapIsFull())
		{
			ObjectManager.GetInstance().independentMergeModel.BoardFullAnalytic();
		}
		if (ViewLevelType == IndependentType.Independent_Basic && CheckMapIsFull())
		{
			ObjectManager.GetInstance().independentBasicModel.BoardFullAnalytic();
		}
		if (ViewLevelType == IndependentType.Independent_Farm && CheckMapIsFull())
		{
			ObjectManager.GetInstance().independentFarmModel.BoardFullAnalytic();
		}
		if (ViewLevelType == IndependentType.IndStageMerge && CheckMapIsFull())
		{
			ObjectManager.GetInstance().idnStageModel.BoardFullAnalytic();
		}
	}

	public void SendDeleteItemEvent(int goodsID)
	{
		if (ViewLevelType == IndependentType.MergeIndependent)
		{
			ObjectManager.GetInstance().independentMergeModel.DeleteItemAnalytic(goodsID);
		}
		if (ViewLevelType == IndependentType.Independent_Basic)
		{
			ObjectManager.GetInstance().independentBasicModel.DeleteItemAnalytic(goodsID);
		}
		if (ViewLevelType == IndependentType.Independent_Farm)
		{
			ObjectManager.GetInstance().independentFarmModel.DeleteItemAnalytic(goodsID);
		}
		if (ViewLevelType == IndependentType.IndStageMerge)
		{
			ObjectManager.GetInstance().idnStageModel.DeleteItemAnalytic(goodsID);
		}
	}

	public float GetMinDistance()
	{
		//IL_001f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0024: Unknown result type (might be due to invalid IL or missing references)
		//IL_0037: Unknown result type (might be due to invalid IL or missing references)
		//IL_003c: Unknown result type (might be due to invalid IL or missing references)
		//IL_003d: Unknown result type (might be due to invalid IL or missing references)
		//IL_003e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0044: Unknown result type (might be due to invalid IL or missing references)
		//IL_0049: Unknown result type (might be due to invalid IL or missing references)
		//IL_004b: Unknown result type (might be due to invalid IL or missing references)
		//IL_004c: Unknown result type (might be due to invalid IL or missing references)
		if (minDis < 0f)
		{
			Vector3 position = ((Component)GridObjectDic[11]).transform.position;
			Vector3 position2 = ((Component)GridObjectDic[12]).transform.position;
			Vector3 pointAtDistanceFromB = IndependentDefine.GetPointAtDistanceFromB(position2, position, IndependentDefine.distanceB);
			minDis = IndependentDefine.GetMinDistance(position2, pointAtDistanceFromB);
		}
		return minDis;
	}

	public float GetMaxDistance(Transform starTrans)
	{
		//IL_0033: Unknown result type (might be due to invalid IL or missing references)
		//IL_0038: Unknown result type (might be due to invalid IL or missing references)
		//IL_004a: Unknown result type (might be due to invalid IL or missing references)
		//IL_004f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0051: Unknown result type (might be due to invalid IL or missing references)
		//IL_0056: Unknown result type (might be due to invalid IL or missing references)
		//IL_005b: Unknown result type (might be due to invalid IL or missing references)
		//IL_005c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0066: Unknown result type (might be due to invalid IL or missing references)
		//IL_0067: Unknown result type (might be due to invalid IL or missing references)
		//IL_006c: Unknown result type (might be due to invalid IL or missing references)
		//IL_006d: Unknown result type (might be due to invalid IL or missing references)
		//IL_010d: Unknown result type (might be due to invalid IL or missing references)
		//IL_010e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0114: Unknown result type (might be due to invalid IL or missing references)
		//IL_0119: Unknown result type (might be due to invalid IL or missing references)
		//IL_011b: Unknown result type (might be due to invalid IL or missing references)
		//IL_011c: Unknown result type (might be due to invalid IL or missing references)
		//IL_007d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0082: Unknown result type (might be due to invalid IL or missing references)
		//IL_0083: Unknown result type (might be due to invalid IL or missing references)
		//IL_0089: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a5: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ab: Unknown result type (might be due to invalid IL or missing references)
		//IL_00fc: Unknown result type (might be due to invalid IL or missing references)
		//IL_0102: Unknown result type (might be due to invalid IL or missing references)
		if (maxDis < 0f)
		{
			int num = Rows * 10 + Columns;
			Vector3 position = ((Component)GridObjectDic[11]).transform.position;
			Vector3 position2 = ((Component)GridObjectDic[num]).transform.position;
			if (Vector2.Distance(Vector2.op_Implicit(starTrans.position), Vector2.op_Implicit(position)) > Vector2.Distance(Vector2.op_Implicit(position2), Vector2.op_Implicit(position)))
			{
				position2 = starTrans.position;
				float num2 = Mathf.Abs(position2.x - position.x) / ((float)GameGridWidth * 0.01f);
				float num3 = Mathf.Abs(position2.y - position.y) / ((float)GameGridHeight * 0.01f);
				num2 = Mathf.Clamp(num2, 0f, 6f);
				num = (Mathf.RoundToInt(Mathf.Clamp(num3, 0f, 8f)) + 1) * 10 + Mathf.RoundToInt(num2) + 1;
				if (position2.y > position.y)
				{
					num = -num;
				}
			}
			Vector3 pointAtDistanceFromB = IndependentDefine.GetPointAtDistanceFromB(position2, position, IndependentDefine.distanceB);
			maxDis = IndependentDefine.GetMaxDistance(position2, pointAtDistanceFromB, num);
		}
		return maxDis;
	}

	protected void SetTimeDownTextTMP(RTLTextMeshPro tmp)
	{
		TimeDownTextTMP = tmp;
	}
}
