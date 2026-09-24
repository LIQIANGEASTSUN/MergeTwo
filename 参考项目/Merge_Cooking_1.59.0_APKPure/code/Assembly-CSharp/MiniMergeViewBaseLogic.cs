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
using UniRx.Async;
using UniRx.Async.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

public class MiniMergeViewBaseLogic : BaseViewLogic, IBaseViewAnimation
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003COnSuccess_003Ed__40 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public MiniMergeViewBaseLogic _003C_003E4__this;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_006e: Unknown result type (might be due to invalid IL or missing references)
			//IL_0073: Unknown result type (might be due to invalid IL or missing references)
			//IL_007a: Unknown result type (might be due to invalid IL or missing references)
			//IL_0035: Unknown result type (might be due to invalid IL or missing references)
			//IL_003a: Unknown result type (might be due to invalid IL or missing references)
			//IL_003e: Unknown result type (might be due to invalid IL or missing references)
			//IL_0043: Unknown result type (might be due to invalid IL or missing references)
			//IL_0057: Unknown result type (might be due to invalid IL or missing references)
			//IL_0058: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			MiniMergeViewBaseLogic miniMergeViewBaseLogic = _003C_003E4__this;
			try
			{
				Awaiter val2;
				if (num != 0)
				{
					CommonMaskViewLogic.Show(1.1f);
					UniTask val = UniTask.Delay(TimeSpan.FromSeconds(1.100000023841858), false, (PlayerLoopTiming)4, default(CancellationToken));
					val2 = val.GetAwaiter();
					if (!val2.IsCompleted)
					{
						num = (_003C_003E1__state = 0);
						_003C_003Eu__1 = val2;
						_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003COnSuccess_003Ed__40>(ref val2, ref this);
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
				miniMergeViewBaseLogic.Data.SuccessCallback.InvokeGracefully();
				miniMergeViewBaseLogic.CloseViewAin();
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
	private struct _003CShowFinger_003Ed__79 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public MiniMergeViewBaseLogic _003C_003E4__this;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_00c2: Unknown result type (might be due to invalid IL or missing references)
			//IL_00c7: Unknown result type (might be due to invalid IL or missing references)
			//IL_00ce: Unknown result type (might be due to invalid IL or missing references)
			//IL_0086: Unknown result type (might be due to invalid IL or missing references)
			//IL_008b: Unknown result type (might be due to invalid IL or missing references)
			//IL_008f: Unknown result type (might be due to invalid IL or missing references)
			//IL_0094: Unknown result type (might be due to invalid IL or missing references)
			//IL_00a8: Unknown result type (might be due to invalid IL or missing references)
			//IL_00a9: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			MiniMergeViewBaseLogic miniMergeViewBaseLogic = _003C_003E4__this;
			try
			{
				Awaiter val2;
				if (num != 0)
				{
					miniMergeViewBaseLogic.GuideMask.SetSelfActive<RectTransform>(miniMergeViewBaseLogic.mShowGuide);
					if (miniMergeViewBaseLogic.mShowGuide)
					{
						RectTransform guideMask = miniMergeViewBaseLogic.GuideMask;
						Image obj = ((guideMask != null) ? ((Component)guideMask).GetComponent<Image>() : null);
						obj?.ColorAlpha<Image>(0f);
						if (obj != null)
						{
							TweenSettingsExtensions.SetEase<Tweener>(DOTweenModuleUI.DOFade(obj, 0.6f, 0.5f), (Ease)4);
						}
					}
					UniTask val = UniTask.Delay(TimeSpan.FromSeconds(0.800000011920929), false, (PlayerLoopTiming)4, default(CancellationToken));
					val2 = val.GetAwaiter();
					if (!val2.IsCompleted)
					{
						num = (_003C_003E1__state = 0);
						_003C_003Eu__1 = val2;
						_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CShowFinger_003Ed__79>(ref val2, ref this);
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
				if (miniMergeViewBaseLogic.mHighLights != null && miniMergeViewBaseLogic.mHighLights.Count > 0)
				{
					miniMergeViewBaseLogic.mFingerGo = miniMergeViewBaseLogic.CreateFinger();
					miniMergeViewBaseLogic.mFingerSkeleton = miniMergeViewBaseLogic.mFingerGo.GetComponent<SkeletonGraphic>();
					if (miniMergeViewBaseLogic.mHighLights.Count >= 2)
					{
						miniMergeViewBaseLogic.mPathGoList = new List<GameObject>();
						for (int i = 0; i < miniMergeViewBaseLogic.mHighLights.Count; i++)
						{
							miniMergeViewBaseLogic.mPathGoList.Add(((Component)((Component)miniMergeViewBaseLogic.mHighLights[i]).transform.Find("숏끛斴洐䝽&\u009a厙념孡㘊\0逤\ud97f")).gameObject);
						}
						miniMergeViewBaseLogic.PlayMoveAnimMerge();
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

	public static float GridWidth = 110f;

	public static float GridHeight = 110f;

	public static bool MergeAdsorb = true;

	public static float MergeAdsorbRadius = GridWidth * 0.75f;

	public MiniMergeViewBaseData Data;

	private int mColumns = 4;

	private int mRows = 4;

	protected Dictionary<int, MiniMergeGrid> mGridObjectDic = new Dictionary<int, MiniMergeGrid>();

	protected Dictionary<int, MiniMergeGridBg> mGridBgObjectDic;

	protected List<int> GridKeyList = new List<int>();

	protected MiniMergeGrid mCurrentSelect;

	protected Dictionary<int, IMiniMergeInitVo> mGridLockMap;

	private List<MiniMergeGridBg> mMapBgGo;

	private bool mDragGoods;

	protected IMiniMergeStageVo mMiniMergeStage;

	private int mMergeCount;

	private Dictionary<int, List<Transform>> mLockGridDic;

	private Dictionary<int, StoryGridLockItemLogic> mGridLockItemLogics;

	private long lastTouchUpTime;

	[HideInInspector]
	public MiniMergeGrid mMergeHintA;

	[HideInInspector]
	public MiniMergeGrid mMergeHintB;

	private bool mShowGuide;

	private GameObject mEffectShouzhi;

	private GameObject mFingerGo;

	private List<MiniMergeGrid> mHighLights;

	private SkeletonGraphic mFingerSkeleton;

	public List<GameObject> mPathGoList;

	public Transform GrayTrans;

	public Transform ContentTrans;

	public RectTransform ContentBg;

	public RectTransform GridParent;

	public RectTransform GridBgParent;

	public RectTransform GuideMask;

	public RectTransform HighLightNode;

	public Transform DragItemParent;

	public GameObject UnlockPrefab;

	public virtual int Columns => mColumns;

	public virtual int Rows => mRows;

	public virtual MiniMergeType ViewLevelType => MiniMergeType.None;

	public Dictionary<int, MiniMergeGrid> GridObjectDic => mGridObjectDic;

	public MiniMergeGrid CurrentSelectGrid
	{
		get
		{
			return mCurrentSelect;
		}
		set
		{
			mCurrentSelect = value;
			RemoveMergeHint();
			if ((Object)(object)mCurrentSelect != (Object)null)
			{
				((Component)mCurrentSelect).transform.SetSiblingIndex(((Component)mCurrentSelect).transform.parent.childCount - 1);
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
		//IL_0076: Unknown result type (might be due to invalid IL or missing references)
		Data = (viewData as MiniMergeViewBaseData) ?? new MiniMergeViewBaseData();
		GameManager.GetInstance().SetMultiTouchEnabled(enable: false);
		mMiniMergeStage = MiniMergeDefine.GetMiniMergeStageVo(ViewLevelType, Data.stageID);
		if (mMiniMergeStage == null)
		{
			CloseView();
			return;
		}
		InitData();
		GameLayoutFit();
		CreateMapBg();
		CreateGameGrid();
		AddListener();
		OpenMergeAnalytic();
		ShowFinger();
	}

	public override void OnExit()
	{
		GameManager.GetInstance().SetMultiTouchEnabled(enable: true);
		mCurrentSelect = null;
		RemoveMergeHint();
		RecoveryGrid();
		RecoveryGridBg();
		RemoveListener();
		ClearLockGrid();
		CloseMergeAnalytic();
		HideFinger();
	}

	protected virtual void AddListener()
	{
	}

	protected virtual void RemoveListener()
	{
	}

	private void InitData()
	{
		mRows = mMiniMergeStage.row;
		mColumns = mMiniMergeStage.column;
		mGridLockMap = MiniMergeDefine.GetMiniMergeLockMap(MiniMergeType.MergeMini_Cold, mMiniMergeStage.id);
	}

	protected virtual void GameLayoutFit()
	{
		//IL_002c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0062: Unknown result type (might be due to invalid IL or missing references)
		//IL_008c: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b6: Unknown result type (might be due to invalid IL or missing references)
		//IL_00e0: Unknown result type (might be due to invalid IL or missing references)
		ContentBg.sizeDelta = new Vector2((float)Columns * GridWidth + 22f, (float)Rows * GridHeight + 23f);
		GuideMask.sizeDelta = new Vector2((float)Columns * GridWidth + 22f, (float)Rows * GridHeight + 23f);
		GridParent.sizeDelta = new Vector2((float)Columns * GridWidth, (float)Rows * GridHeight);
		GridBgParent.sizeDelta = new Vector2((float)Columns * GridWidth, (float)Rows * GridHeight);
		HighLightNode.sizeDelta = new Vector2((float)Columns * GridWidth, (float)Rows * GridHeight);
		GuideMask.SetSelfActive<RectTransform>(false);
	}

	public int GetCenterGridID()
	{
		return (Rows / 2 + 1) * 10 + (Columns / 2 + 1);
	}

	public void CreateMapBg()
	{
		//IL_000d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0012: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b7: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c2: Unknown result type (might be due to invalid IL or missing references)
		mGridBgObjectDic = new Dictionary<int, MiniMergeGridBg>();
		MiniMergeGridBg miniMergeGridBg = null;
		Vector2 zero = Vector2.zero;
		mMapBgGo = new List<MiniMergeGridBg>();
		for (int i = 1; i <= Rows; i++)
		{
			for (int j = 1; j <= Columns; j++)
			{
				int num = i * 10 + j;
				miniMergeGridBg = Singleton<ResCacheManager>.Instance.GetRes<MiniMergeGridBg>();
				if ((Object)(object)miniMergeGridBg == (Object)null)
				{
					Log.E("숤끕\u20f9䘥䑛&\u0085厄쉊끔溽楋楹;¾厽숍끟犫椎䵑\u0015Î反刘樳\ud9ccĕ");
					continue;
				}
				((Object)miniMergeGridBg).name = "숃끓犷朄䵹7Î反수끥從䈙敝6\u0082厁椵䂧" + num;
				((Component)miniMergeGridBg).transform.SetParent((Transform)(object)GridBgParent);
				miniMergeGridBg.LocalIdentity<MiniMergeGridBg>();
				miniMergeGridBg.Init(this, ViewLevelType);
				miniMergeGridBg.ShowGridBg(num);
				zero = new Vector2((float)(j - 1) * GridWidth, (float)(-(i - 1)) * GridHeight);
				((Component)miniMergeGridBg).GetComponent<RectTransform>().anchoredPosition = zero;
				mMapBgGo.Add(miniMergeGridBg);
				if (!mGridBgObjectDic.ContainsKey(num))
				{
					mGridBgObjectDic.Add(num, miniMergeGridBg);
				}
			}
		}
	}

	public virtual void CreateGameGrid()
	{
		//IL_004c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0051: Unknown result type (might be due to invalid IL or missing references)
		//IL_0138: Unknown result type (might be due to invalid IL or missing references)
		//IL_0143: Unknown result type (might be due to invalid IL or missing references)
		GridKeyList.Clear();
		mShowGuide = false;
		Dictionary<int, MiniMergeGameGoodsVo> miniMergeMap = MiniMergeDefine.GetMiniMergeMap(ViewLevelType, mMiniMergeStage.id);
		mGridObjectDic = new Dictionary<int, MiniMergeGrid>();
		mLockGridDic = new Dictionary<int, List<Transform>>();
		mHighLights = new List<MiniMergeGrid>();
		MiniMergeGrid miniMergeGrid = null;
		Vector2 zero = Vector2.zero;
		int num = 0;
		for (int i = 1; i <= Rows; i++)
		{
			for (int j = 1; j <= Columns; j++)
			{
				int num2 = i * 10 + j;
				GridKeyList.Add(num2);
				miniMergeGrid = Singleton<ResCacheManager>.Instance.GetRes<MiniMergeGrid>();
				if ((Object)(object)miniMergeGrid == (Object)null)
				{
					Log.E("숤끕\u20f9䘥䑛&\u0085厄쉊끔溽楋楹;¾厽숍끟犫椎䵑\u0015Î反核㼹");
					continue;
				}
				((Object)miniMergeGrid).name = "參橲ā讑酟" + num2;
				IMiniMergeInitVo mergeInitVoByID = MiniMergeDefine.GetMergeInitVoByID(MiniMergeType.MergeMini_Cold, mMiniMergeStage.id, num2);
				if (mergeInitVoByID != null && mergeInitVoByID.highLight == 1)
				{
					((Component)miniMergeGrid).transform.SetParent((Transform)(object)HighLightNode);
					miniMergeGrid.ShowGridBg();
					mHighLights.Add(miniMergeGrid);
					mShowGuide = true;
				}
				else
				{
					((Component)miniMergeGrid).transform.SetParent((Transform)(object)GridParent);
				}
				miniMergeGrid.LocalIdentity<MiniMergeGrid>();
				zero = new Vector2((float)(j - 1) * GridWidth, (float)(-(i - 1)) * GridHeight);
				((Component)miniMergeGrid).GetComponent<RectTransform>().anchoredPosition = zero;
				miniMergeGrid.SetGridType(ViewLevelType);
				MiniMergeGoodsBase goodsBase = null;
				MiniMergeGameGoodsVo miniMergeGameGoodsVo = null;
				if (miniMergeMap != null && miniMergeMap.ContainsKey(num2))
				{
					miniMergeGameGoodsVo = miniMergeMap[num2];
					if (miniMergeGameGoodsVo != null)
					{
						goodsBase = MiniMergeDefine.GetMiniMergeGameBaseById(ViewLevelType, miniMergeGameGoodsVo.goodsID, miniMergeGrid, miniMergeGameGoodsVo);
					}
				}
				MiniMergeGridBg value = null;
				mGridBgObjectDic.TryGetValue(num2, out value);
				miniMergeGrid.Init(num2, goodsBase, this, num, value);
				if (mGridLockMap.ContainsKey(num2))
				{
					miniMergeGrid.IsLock = true;
				}
				else
				{
					miniMergeGrid.IsLock = false;
				}
				mGridObjectDic[num2] = miniMergeGrid;
				if (mGridLockMap.TryGetValue(num2, out var value2) && value2 != null && value2.unlockGoodsID > 0)
				{
					if (!mLockGridDic.ContainsKey(value2.unlockGoodsID))
					{
						mLockGridDic.Add(value2.unlockGoodsID, new List<Transform>());
					}
					mLockGridDic[value2.unlockGoodsID].Add(((Component)miniMergeGrid).transform);
				}
				num++;
			}
		}
		UpdateLockGrid();
	}

	public void UpdateLockGrid()
	{
		ClearLockGrid();
		if (mLockGridDic == null)
		{
			return;
		}
		foreach (KeyValuePair<int, List<Transform>> item in mLockGridDic)
		{
			ShowUnlockCondition(item.Value, item.Key);
		}
	}

	private void ShowUnlockCondition(List<Transform> gridTrans, int lockGoodsID)
	{
		//IL_011f: Unknown result type (might be due to invalid IL or missing references)
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
		GameObject val2 = Object.Instantiate<GameObject>(UnlockPrefab);
		StoryGridLockItemLogic component = val2.GetComponent<StoryGridLockItemLogic>();
		val2.transform.SetParent((Transform)(object)GridParent);
		val2.transform.LocalIdentity<Transform>();
		val2.transform.position = new Vector3((num2 + num) / 2f, (num3 + num4) / 2f, num5);
		if (mGridLockItemLogics == null)
		{
			mGridLockItemLogics = new Dictionary<int, StoryGridLockItemLogic>();
		}
		mGridLockItemLogics[lockGoodsID] = component;
	}

	private void ClearLockGrid()
	{
		if (mGridLockItemLogics != null && mGridLockItemLogics.Count > 0)
		{
			List<StoryGridLockItemLogic> list = mGridLockItemLogics.Values.ToList();
			for (int i = 0; i < list.Count; i++)
			{
				Object.Destroy((Object)(object)list[i]);
			}
			mGridLockItemLogics.Clear();
		}
	}

	public virtual void MergeSuccess(MiniMergeGrid targetGrid)
	{
		//IL_00cf: Unknown result type (might be due to invalid IL or missing references)
		//IL_00f1: Unknown result type (might be due to invalid IL or missing references)
		if ((Object)(object)targetGrid == (Object)null)
		{
			return;
		}
		RemoveMergeHint();
		HideFinger();
		GuideMask.SetSelfActive<RectTransform>(false);
		MiniMergeGrid value = null;
		if (mGridObjectDic.TryGetValue(targetGrid.GetGridId(), out value))
		{
			if (value.GetGoodsBaseVo() != null)
			{
				Singleton<GameLevelManager>.Instance.PlayAudio(1, value.GetGoodsBaseVo().level);
			}
			if ((Object)(object)value.GetGameLevelItem() != (Object)null)
			{
				value.GetGameLevelItem().PlayMergeAnim();
			}
			if (value.GetGoodsBaseVo() != null)
			{
				CheckUnlockGrid(value.GetGoodsBaseVo().goodsID);
				MergeGoodsSuccess(value.GetGoodsBaseVo().goodsID);
			}
			if (value.GetGoodsBaseVo() != null && value.GetGoodsBaseVo().goodsID == mMiniMergeStage.targetGoodsID)
			{
				value.PlayDesignatedEffect("숏끜徿唐䕗&\u0082厁숅끩嚭椆䥆+^卝숼끟瞶弽摝7â叡參橲ā讅鵴", 1.1f, 58f);
				AudioManager.GetInstance().PlayEffect("수끎玶挙獍\rÒ发숵끔於愶敓 \u009a厙뻨");
				OnSuccess();
			}
			mMergeCount++;
			MergeAnalytic(mMergeCount);
		}
	}

	[AsyncStateMachine(typeof(_003COnSuccess_003Ed__40))]
	protected virtual UniTask OnSuccess()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0031: Unknown result type (might be due to invalid IL or missing references)
		_003COnSuccess_003Ed__40 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003COnSuccess_003Ed__40>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	private void CheckUnlockGrid(int goodsID)
	{
		foreach (KeyValuePair<int, IMiniMergeInitVo> item in mGridLockMap)
		{
			if (item.Value != null && item.Value.unlockGoodsID == goodsID && mGridObjectDic.TryGetValue(item.Key, out var value) && value.IsLock)
			{
				value.IsLock = false;
			}
		}
		if (mGridLockItemLogics != null && mGridLockItemLogics.TryGetValue(goodsID, out var value2))
		{
			mGridLockItemLogics.Remove(goodsID);
			value2.HideAnim();
		}
	}

	protected virtual void MergeGoodsSuccess(int goodsID)
	{
	}

	private void CheckGameFail()
	{
		List<MiniMergeGrid> list = mGridObjectDic.Values.ToList();
		for (int num = list.Count - 1; num >= 0; num--)
		{
			MiniMergeGrid miniMergeGrid = list[num];
			if ((Object)(object)miniMergeGrid != (Object)null && miniMergeGrid.GetGoodsBaseVo() != null)
			{
				if (CheckGridGoodsSpecial(miniMergeGrid))
				{
					list.RemoveAt(num);
				}
			}
			else
			{
				list.RemoveAt(num);
			}
		}
		if (!FindCanMergeItem(list))
		{
			Data.FailCallback.InvokeGracefully();
			CloseViewAin();
		}
	}

	private int MyAbs(int value)
	{
		if (value >= 0)
		{
			return value;
		}
		return -value;
	}

	public override bool OnBackPressed()
	{
		return true;
	}

	public void RecoveryGrid()
	{
		Dictionary<int, MiniMergeGrid>.Enumerator enumerator = mGridObjectDic.GetEnumerator();
		while (enumerator.MoveNext())
		{
			MiniMergeGrid value = enumerator.Current.Value;
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

	private void Update()
	{
		if (Input.touchCount > 0)
		{
			lastTouchUpTime = TimeManager.GetInstance().GetTimeStamp();
		}
		if (TimeManager.GetInstance().GetTimeStamp() - lastTouchUpTime >= 3)
		{
			lastTouchUpTime = TimeManager.GetInstance().GetTimeStamp();
			PlayMergeHintAnim();
			if (!DragGoods && (Object)(object)mMergeHintA == (Object)null && (Object)(object)mMergeHintB == (Object)null)
			{
				ShowGuideWeak();
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
		List<MiniMergeGrid> list = mGridObjectDic.Values.ToList();
		for (int num = list.Count - 1; num >= 0; num--)
		{
			MiniMergeGrid miniMergeGrid = list[num];
			if ((Object)(object)miniMergeGrid != (Object)null && miniMergeGrid.GetGoodsBaseVo() != null)
			{
				if (CheckGridGoodsSpecial(miniMergeGrid))
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

	private bool FindCanMergeItem(List<MiniMergeGrid> gameItems)
	{
		int num = -1;
		int num2 = -1;
		Dictionary<int, int> dictionary = new Dictionary<int, int>();
		List<MiniMergeGrid> list = new List<MiniMergeGrid>();
		for (int i = 0; i < gameItems.Count; i++)
		{
			MiniMergeGrid miniMergeGrid = gameItems[i];
			if (miniMergeGrid.GetGameGoodsVo() == null || miniMergeGrid.GetGoodsBaseVo() == null)
			{
				continue;
			}
			if (miniMergeGrid.GetGameGoodsVo().GoodsState == MiniMergeGoodsState.Lock)
			{
				if (!dictionary.ContainsKey(miniMergeGrid.GetGoodsBaseVo().goodsID))
				{
					dictionary.Add(miniMergeGrid.GetGoodsBaseVo().goodsID, i);
				}
				if ((Object)(object)CurrentSelectGrid != (Object)null && CurrentSelectGrid.GetGoodsBaseVo() != null && CurrentSelectGrid.GetGoodsBaseVo().goodsID == miniMergeGrid.GetGoodsBaseVo().goodsID && num == -1 && CurrentSelectGrid.GetGridId() != miniMergeGrid.GetGridId())
				{
					num = i;
				}
			}
			else
			{
				list.Add(gameItems[i]);
				if ((Object)(object)CurrentSelectGrid != (Object)null && CurrentSelectGrid.GetGoodsBaseVo() != null && CurrentSelectGrid.GetGoodsBaseVo().goodsID == miniMergeGrid.GetGoodsBaseVo().goodsID && num2 == -1 && CurrentSelectGrid.GetGridId() != miniMergeGrid.GetGridId())
				{
					num2 = i;
				}
			}
		}
		list.Sort((MiniMergeGrid gridA, MiniMergeGrid gridB) => gridB.GetGoodsBaseVo().level - gridA.GetGoodsBaseVo().level);
		if (CheckSelectGoodsCanMerge(gameItems, num, num2))
		{
			return true;
		}
		if (CheckCanMerge(gameItems, list, dictionary))
		{
			return true;
		}
		return false;
	}

	private bool CheckCanMerge(List<MiniMergeGrid> allItems, List<MiniMergeGrid> classifyItems, Dictionary<int, int> lockInfos)
	{
		for (int i = 0; i < classifyItems.Count; i++)
		{
			MiniMergeGrid miniMergeGrid = classifyItems[i];
			if (lockInfos.ContainsKey(miniMergeGrid.GetGoodsBaseVo().goodsID))
			{
				int index = lockInfos[miniMergeGrid.GetGoodsBaseVo().goodsID];
				if (CanMergeHint(miniMergeGrid, allItems[index]))
				{
					mMergeHintA = miniMergeGrid;
					mMergeHintB = allItems[index];
					miniMergeGrid.GetGameLevelItem().PlayMergeHintEffect(((Component)allItems[index].GetGameLevelItem()).transform);
					allItems[index].GetGameLevelItem().PlayMergeHintEffect(((Component)miniMergeGrid.GetGameLevelItem()).transform);
					return true;
				}
			}
		}
		Dictionary<int, int> dictionary = new Dictionary<int, int>();
		for (int j = 0; j < classifyItems.Count; j++)
		{
			MiniMergeGrid miniMergeGrid2 = classifyItems[j];
			if (!dictionary.ContainsKey(miniMergeGrid2.GetGoodsBaseVo().goodsID))
			{
				dictionary.Add(miniMergeGrid2.GetGoodsBaseVo().goodsID, j);
				continue;
			}
			int index2 = dictionary[miniMergeGrid2.GetGoodsBaseVo().goodsID];
			if ((miniMergeGrid2.GetGameGoodsVo().GoodsState != MiniMergeGoodsState.Lock || classifyItems[index2].GetGameGoodsVo().GoodsState != MiniMergeGoodsState.Lock) && CanMergeHint(miniMergeGrid2, classifyItems[index2]))
			{
				mMergeHintA = miniMergeGrid2;
				mMergeHintB = classifyItems[index2];
				miniMergeGrid2.GetGameLevelItem().PlayMergeHintEffect(((Component)classifyItems[index2].GetGameLevelItem()).transform);
				classifyItems[index2].GetGameLevelItem().PlayMergeHintEffect(((Component)miniMergeGrid2.GetGameLevelItem()).transform);
				return true;
			}
		}
		return false;
	}

	private bool CanMergeHint(MiniMergeGrid gridA, MiniMergeGrid gridB, bool isAutoConversion = false)
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
		if (gridA.GetGameGoodsVo().GoodsState == MiniMergeGoodsState.Lock && gridB.GetGameGoodsVo().GoodsState == MiniMergeGoodsState.Lock)
		{
			return false;
		}
		if (!isAutoConversion)
		{
			IMiniMergeGoodsBaseVo goodsConfigBySeriesAndLevel = MiniMergeDefine.GetGoodsConfigBySeriesAndLevel(ViewLevelType, gridA.GetGoodsBaseVo().series, gridA.GetGoodsBaseVo().level + 1);
			IMiniMergeGoodsBaseVo goodsConfigBySeriesAndLevel2 = MiniMergeDefine.GetGoodsConfigBySeriesAndLevel(ViewLevelType, gridB.GetGoodsBaseVo().series, gridB.GetGoodsBaseVo().level + 1);
			if (goodsConfigBySeriesAndLevel == null || goodsConfigBySeriesAndLevel2 == null)
			{
				return false;
			}
		}
		return true;
	}

	private bool CheckGridGoodsSpecial(MiniMergeGrid grid)
	{
		IMiniMergeGoodsBaseVo goodsBaseVo = grid.GetGoodsBaseVo();
		MiniMergeGameGoodsVo gameGoodsVo = grid.GetGameGoodsVo();
		if (goodsBaseVo == null || gameGoodsVo == null)
		{
			return true;
		}
		if (MiniMergeDefine.GetGoodsConfigBySeriesAndLevel(ViewLevelType, goodsBaseVo.series, goodsBaseVo.level + 1) == null)
		{
			return true;
		}
		if (IMiniMergeGoodsBaseVo.CannotMerge(gameGoodsVo.GoodsState))
		{
			return true;
		}
		if (grid.IsLock)
		{
			return true;
		}
		return false;
	}

	private bool CheckSelectGoodsCanMerge(List<MiniMergeGrid> gameItems, int lockIndex, int normalIndex)
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

	public override void SetLocalization(int tag = 0, object data = null)
	{
	}

	public void OnCloseView()
	{
		CloseViewAin();
	}

	public virtual void ViewShowAnimation(Action onComplete)
	{
		DOTweenUITools.DoEnterPopUIAnimation(ContentTrans, GrayTrans, null, onComplete);
	}

	public virtual void ViewHideAnimation(Action onComplete)
	{
		DOTweenUITools.DoExitPopUIAnimation(ContentTrans, GrayTrans, onComplete, isPlayAlpha: true, "숎끓德挏睛%\u0082厁判皇\ud9c4ő");
	}

	public void EnterAnimation(Action onComplete)
	{
		ViewShowAnimation(onComplete);
	}

	public void ExitAnimation(Action onComplete)
	{
		ViewHideAnimation(onComplete);
	}

	[AsyncStateMachine(typeof(_003CShowFinger_003Ed__79))]
	private UniTask ShowFinger()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0031: Unknown result type (might be due to invalid IL or missing references)
		_003CShowFinger_003Ed__79 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CShowFinger_003Ed__79>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	private void PlayMoveAnimMerge()
	{
		//IL_0038: Unknown result type (might be due to invalid IL or missing references)
		if (!((Object)(object)mFingerSkeleton != (Object)null) || mPathGoList.Count <= 1)
		{
			return;
		}
		((Component)mFingerSkeleton).transform.position = mPathGoList[0].transform.position;
		mFingerSkeleton.AnimationState.SetAnimation(0, "匦橥ā讥齮", false);
		TimeManager.GetInstance().Schedule(this, (float dt) =>
		{
			//IL_0037: Unknown result type (might be due to invalid IL or missing references)
			//IL_003c: Unknown result type (might be due to invalid IL or missing references)
			//IL_0041: Unknown result type (might be due to invalid IL or missing references)
			//IL_004d: Unknown result type (might be due to invalid IL or missing references)
			//IL_004e: Unknown result type (might be due to invalid IL or missing references)
			//IL_0071: Unknown result type (might be due to invalid IL or missing references)
			//IL_007b: Expected Obj, but got Unknown
			//IL_007b: Unknown result type (might be due to invalid IL or missing references)
			//IL_0085: Expected Obj, but got Unknown
			if ((Object)(object)mFingerSkeleton != (Object)null)
			{
				mFingerSkeleton.AnimationState.SetAnimation(0, "初澫\ud9c1ő", true);
				Vector2 val = Vector2.op_Implicit(mPathGoList[1].transform.position);
				Tweener val2 = TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOMove(((Component)mFingerSkeleton).transform, Vector2.op_Implicit(val), 0.8f, false), (Ease)4);
				((Tween)val2).onComplete = (TweenCallback)Delegate.Combine((Delegate?)(object)((Tween)val2).onComplete, (Delegate?)(TweenCallback)(() =>
				{
					if ((Object)(object)mFingerSkeleton != (Object)null)
					{
						mFingerSkeleton.AnimationState.SetAnimation(0, "刖棣\ud9c7ņ", false);
					}
					TimeManager.GetInstance().Schedule(this, (float num) =>
					{
						PlayMoveAnimMerge();
					}, 0.6f, 1, 0f);
				}));
			}
		}, 0.7f, 1, 0f);
	}

	private void HideFinger()
	{
		if ((Object)(object)mFingerGo != (Object)null)
		{
			mFingerGo.DestroySelf<GameObject>();
			mFingerGo = null;
		}
	}

	private GameObject CreateFinger()
	{
		if ((Object)(object)mEffectShouzhi == (Object)null)
		{
			mEffectShouzhi = base.Load<GameObject>("숏끜徿砐敗&\u0082厁숂끔禪椃楛'ê叩숅끞梸漆湫!¦厥则毓\ud9ddŝ");
		}
		GameObject val = mEffectShouzhi.Instantiate<GameObject>();
		val.AddComponent<CanvasGroup>();
		val.transform.SetParent((Transform)(object)HighLightNode, false);
		Canvas val2 = val.AddComponent<Canvas>();
		val2.overrideSorting = true;
		val2.sortingOrder = 100;
		return val;
	}

	public void OpenMergeAnalytic()
	{
		string step = string.Format("숏끟ク紐汘)Å叄医橯ā讕衮", Data.stageID);
		MiniMergeDefine.MergeAnalytic(ViewLevelType, "刖棫\ud9dbń", step);
	}

	public void MergeAnalytic(int index)
	{
		string step = string.Format("숏끟ク紐汘)Å叄수끗徼笙当7\u0082厁❣અ", Data.stageID, index);
		MiniMergeDefine.MergeAnalytic(ViewLevelType, "刖棫\ud9dbń", step);
	}

	public void CloseMergeAnalytic()
	{
		string step = string.Format("숏끟ク紐汘)Å叄녟䡣㰶\0逕\ud95d", Data.stageID);
		MiniMergeDefine.MergeAnalytic(ViewLevelType, "刖棫\ud9dbń", step);
	}
}
