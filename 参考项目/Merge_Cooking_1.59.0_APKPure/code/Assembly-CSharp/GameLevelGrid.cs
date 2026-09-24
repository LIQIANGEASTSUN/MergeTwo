using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using DG.Tweening;
using TLF;
using TMPro;
using UniRx.Async;
using UniRx.Async.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class GameLevelGrid : ResBase, IDragHandler, IEventSystemHandler, IBeginDragHandler, IEndDragHandler
{
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass193_0
	{
		public Action _action;

		public GameLevelGrid _003C_003E4__this;

		internal void _003CPlayItemVanish_003Eb__0()
		{
			_action.InvokeGracefully();
			GameLevelDefine.RecycleGameObject(_003C_003E4__this.ItemVanishGo);
			_003C_003E4__this.ItemVanishGo = null;
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CItemDisappearAnim_003Ed__125 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public GameLevelGrid _003C_003E4__this;

		private GameObject _003CcurrentEffect_003E5__2;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_0087: Unknown result type (might be due to invalid IL or missing references)
			//IL_008c: Unknown result type (might be due to invalid IL or missing references)
			//IL_0093: Unknown result type (might be due to invalid IL or missing references)
			//IL_004b: Unknown result type (might be due to invalid IL or missing references)
			//IL_0050: Unknown result type (might be due to invalid IL or missing references)
			//IL_0054: Unknown result type (might be due to invalid IL or missing references)
			//IL_0059: Unknown result type (might be due to invalid IL or missing references)
			//IL_006d: Unknown result type (might be due to invalid IL or missing references)
			//IL_006e: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			GameLevelGrid gameLevelGrid = _003C_003E4__this;
			try
			{
				if (num != 0)
				{
					_003CcurrentEffect_003E5__2 = null;
				}
				try
				{
					Awaiter val2;
					if (num != 0)
					{
						_003CcurrentEffect_003E5__2 = GameLevelDefine.CreateGameObjectAsync("숏끜徿成敗&\u0082厁숃끕御戄慕=\u0082厁睯x4끯x\ud937俚", gameLevelGrid.GameItemParent);
						UniTask val = UniTask.Delay(TimeSpan.FromSeconds(2.0), false, (PlayerLoopTiming)4, default(CancellationToken));
						val2 = val.GetAwaiter();
						if (!val2.IsCompleted)
						{
							num = (_003C_003E1__state = 0);
							_003C_003Eu__1 = val2;
							_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CItemDisappearAnim_003Ed__125>(ref val2, ref this);
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
				catch (Exception ex)
				{
					Log.E(string.Format("싊༸讼귋孉輏\u0085㟖\ua711ʒ纑\uef9d㻥卍쩩\ud8cd숣᠆횉〤⁰hò叱슅뀚움綆紎)É卓", gameLevelGrid.GetGridId(), ex.Message));
				}
				finally
				{
					if (num < 0 && (Object)(object)_003CcurrentEffect_003E5__2 != (Object)null)
					{
						GameLevelDefine.RecycleGameObject(_003CcurrentEffect_003E5__2);
					}
				}
			}
			catch (Exception exception)
			{
				_003C_003E1__state = -2;
				_003CcurrentEffect_003E5__2 = null;
				_003C_003Et__builder.SetException(exception);
				return;
			}
			_003C_003E1__state = -2;
			_003CcurrentEffect_003E5__2 = null;
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
	private struct _003CPlayItemVanish_003Ed__193 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public Action _action;

		public GameLevelGrid _003C_003E4__this;

		public GameGoodsVo _goodsVo;

		public float delay;

		private _003C_003Ec__DisplayClass193_0 _003C_003E8__1;

		private GridItemAni _003CitemAni_003E5__2;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_011c: Unknown result type (might be due to invalid IL or missing references)
			//IL_0121: Unknown result type (might be due to invalid IL or missing references)
			//IL_0128: Unknown result type (might be due to invalid IL or missing references)
			//IL_00e0: Unknown result type (might be due to invalid IL or missing references)
			//IL_00e5: Unknown result type (might be due to invalid IL or missing references)
			//IL_00e9: Unknown result type (might be due to invalid IL or missing references)
			//IL_00ee: Unknown result type (might be due to invalid IL or missing references)
			//IL_0102: Unknown result type (might be due to invalid IL or missing references)
			//IL_0103: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			GameLevelGrid gameLevelGrid = _003C_003E4__this;
			try
			{
				Awaiter val;
				if (num == 0)
				{
					val = _003C_003Eu__1;
					_003C_003Eu__1 = default;
					num = (_003C_003E1__state = -1);
					goto IL_0137;
				}
				_003C_003E8__1 = new _003C_003Ec__DisplayClass193_0();
				_003C_003E8__1._action = _action;
				_003C_003E8__1._003C_003E4__this = _003C_003E4__this;
				if ((Object)(object)gameLevelGrid.ItemVanishGo != (Object)null)
				{
					GameLevelDefine.RecycleGameObject(gameLevelGrid.ItemVanishGo);
					gameLevelGrid.ItemVanishGo = null;
				}
				if (_goodsVo != null)
				{
					gameLevelGrid.ItemVanishGo = GameLevelDefine.CreateGameObjectSync("숎끈新洏䝽&\u009a厙飲\u0083赴", gameLevelGrid.GameItemParent);
					if ((Object)(object)gameLevelGrid.ItemVanishGo != (Object)null)
					{
						if (gameLevelGrid.ItemVanishGo.TryGetComponent<GridItemAni>(ref _003CitemAni_003E5__2))
						{
							_003CitemAni_003E5__2.Init(_goodsVo);
							if (delay > 0f)
							{
								UniTask val2 = UniTask.Delay(TimeSpan.FromSeconds(delay), false, (PlayerLoopTiming)4, default(CancellationToken));
								val = val2.GetAwaiter();
								if (!val.IsCompleted)
								{
									num = (_003C_003E1__state = 0);
									_003C_003Eu__1 = val;
									_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CPlayItemVanish_003Ed__193>(ref val, ref this);
									return;
								}
								goto IL_0137;
							}
							goto IL_013e;
						}
						goto IL_0164;
					}
				}
				goto end_IL_000e;
				IL_0164:
				_003CitemAni_003E5__2 = null;
				goto end_IL_000e;
				IL_0137:
				val.GetResult();
				goto IL_013e;
				IL_013e:
				_003CitemAni_003E5__2.PlayAni("숇끎犼愈䥇\u0006Î反숎끟憆瀏摝!\u008a厉수끟溸椙火3¾厽", () =>
				{
					_003C_003E8__1._action.InvokeGracefully();
					GameLevelDefine.RecycleGameObject(_003C_003E8__1._003C_003E4__this.ItemVanishGo);
					_003C_003E8__1._003C_003E4__this.ItemVanishGo = null;
				}, 1f);
				goto IL_0164;
				end_IL_000e:;
			}
			catch (Exception exception)
			{
				_003C_003E1__state = -2;
				_003C_003E8__1 = null;
				_003C_003Et__builder.SetException(exception);
				return;
			}
			_003C_003E1__state = -2;
			_003C_003E8__1 = null;
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
	private struct _003CPlayOnceEffect_003Ed__167 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public GameLevelGrid _003C_003E4__this;

		public float delay;

		public string effectName;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_007e: Unknown result type (might be due to invalid IL or missing references)
			//IL_0083: Unknown result type (might be due to invalid IL or missing references)
			//IL_008a: Unknown result type (might be due to invalid IL or missing references)
			//IL_0109: Unknown result type (might be due to invalid IL or missing references)
			//IL_010e: Unknown result type (might be due to invalid IL or missing references)
			//IL_0115: Unknown result type (might be due to invalid IL or missing references)
			//IL_00d0: Unknown result type (might be due to invalid IL or missing references)
			//IL_00d5: Unknown result type (might be due to invalid IL or missing references)
			//IL_00d9: Unknown result type (might be due to invalid IL or missing references)
			//IL_00de: Unknown result type (might be due to invalid IL or missing references)
			//IL_0042: Unknown result type (might be due to invalid IL or missing references)
			//IL_0047: Unknown result type (might be due to invalid IL or missing references)
			//IL_004b: Unknown result type (might be due to invalid IL or missing references)
			//IL_0050: Unknown result type (might be due to invalid IL or missing references)
			//IL_00f2: Unknown result type (might be due to invalid IL or missing references)
			//IL_00f3: Unknown result type (might be due to invalid IL or missing references)
			//IL_0064: Unknown result type (might be due to invalid IL or missing references)
			//IL_0065: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			GameLevelGrid gameLevelGrid = _003C_003E4__this;
			try
			{
				Awaiter val;
				UniTask val2;
				if (num != 0)
				{
					if (num == 1)
					{
						val = _003C_003Eu__1;
						_003C_003Eu__1 = default;
						num = (_003C_003E1__state = -1);
						goto IL_0124;
					}
					gameLevelGrid.DestroyOnceGameObject();
					if (!(delay > 0f))
					{
						goto IL_00a0;
					}
					val2 = UniTask.Delay(TimeSpan.FromSeconds(delay), false, (PlayerLoopTiming)4, default(CancellationToken));
					val = val2.GetAwaiter();
					if (!val.IsCompleted)
					{
						num = (_003C_003E1__state = 0);
						_003C_003Eu__1 = val;
						_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CPlayOnceEffect_003Ed__167>(ref val, ref this);
						return;
					}
				}
				else
				{
					val = _003C_003Eu__1;
					_003C_003Eu__1 = default;
					num = (_003C_003E1__state = -1);
				}
				val.GetResult();
				goto IL_00a0;
				IL_0124:
				val.GetResult();
				gameLevelGrid.DestroyOnceGameObject();
				goto end_IL_000e;
				IL_00a0:
				gameLevelGrid.mOnceGameObject = GameLevelDefine.CreateGameObjectAsync(effectName, gameLevelGrid.EffectBottomParent);
				val2 = UniTask.Delay(TimeSpan.FromSeconds(1.600000023841858), false, (PlayerLoopTiming)4, default(CancellationToken));
				val = val2.GetAwaiter();
				if (!val.IsCompleted)
				{
					num = (_003C_003E1__state = 1);
					_003C_003Eu__1 = val;
					_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CPlayOnceEffect_003Ed__167>(ref val, ref this);
					return;
				}
				goto IL_0124;
				end_IL_000e:;
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

	public Image GridBg;

	public Transform GameItemParent;

	public GameObject SelectGo;

	public RectTransform SelectParentTrans;

	public RectTransform SelectTrans;

	public Animation SelectAnimation;

	public Animation GameItemAnimation;

	[HideInInspector]
	public GameLevelViewLogic parentLogic;

	public GameObject LockNodeGo;

	public Animation CloudAnimation;

	public Transform EffectParent;

	public Transform EffectBottomParent;

	private GameObject CloudShowGo;

	private GameObject CloudHideGo;

	private GameLevelGridBg gameLevelGridBg;

	private GameLevelItem gameLevelItem;

	private int GridId;

	private int GridIndex;

	private bool mIsLock;

	private bool isDrag;

	private bool isCheckShortcutTip;

	private GameGoodsBase mGameGoodsBase;

	public static int GuideDepth = -40;

	private bool isBanDrag;

	private bool mGridBgActive;

	private bool mPlayCdClearAnim;

	private float mPlayProgress;

	private bool mIsPassive;

	public Vector2 mapPos = Vector2.zero;

	private object mLockFrameTimerTarget = new object();

	private int mShapeHeadGridId = -1;

	private List<int> mShapeGridIdList = new List<int>();

	private GameObject _moveItemGo;

	private GameObject mOnceGameObject;

	private GameObject additionalGo;

	private Tween plusAdditionalDelayTween;

	private GameObject effectObj;

	private GameObject feedback_btm;

	private GameObject feedback_mid;

	private GameObject feedback_up;

	private GameObject ItemVanishGo;

	private Vector3 _targetPosition = Vector3.zero;

	private bool _touchMoving;

	private bool vibarating;

	private GameLevelItem lastPlayEffectItem;

	public bool IsLock => mIsLock;

	public bool IsDrag => isDrag;

	public bool IsPlayCdAnim
	{
		get
		{
			if ((Object)(object)gameLevelItem != (Object)null)
			{
				return gameLevelItem.mPlayCDAnim;
			}
			return false;
		}
	}

	public bool IsMoveItem
	{
		get
		{
			if ((Object)(object)gameLevelItem == (Object)null)
			{
				return false;
			}
			return gameLevelItem.PlayFlyAnim;
		}
	}

	public bool PlayCdClearAnim
	{
		get
		{
			return mPlayCdClearAnim;
		}
		set
		{
			mPlayCdClearAnim = value;
		}
	}

	public bool GlobalSpeedupState
	{
		get
		{
			if ((Object)(object)gameLevelItem != (Object)null)
			{
				return gameLevelItem.GlobalSpeedupState;
			}
			return false;
		}
	}

	public int GetShapeHeadGridId()
	{
		return mShapeHeadGridId;
	}

	public GameLevelGrid GetShapeHeadGrid()
	{
		if (mShapeHeadGridId < 0)
		{
			return null;
		}
		if ((Object)(object)parentLogic == (Object)null)
		{
			return null;
		}
		Dictionary<int, GameLevelGrid> gridObjectDic = parentLogic.GridObjectDic;
		if (gridObjectDic == null)
		{
			return null;
		}
		GameLevelGrid value = null;
		gridObjectDic.TryGetValue(mShapeHeadGridId, out value);
		if ((Object)(object)value == (Object)null)
		{
			return null;
		}
		return value;
	}

	public void SetShapeHeadGridId(int gId)
	{
		mShapeHeadGridId = gId;
	}

	public void AddShapeGridId(int gId)
	{
		mShapeGridIdList.Add(gId);
	}

	public void Init(int _id, GameGoodsBase _goodsBase, GameLevelViewLogic _parent, int index, GameLevelGridBg _gridBg)
	{
		GridId = _id;
		parentLogic = _parent;
		GridIndex = index;
		gameLevelGridBg = _gridBg;
		InitGrid();
		InitGoodsVo(_goodsBase, showFrist: false, isSave: false);
		OnUpdateAttribute();
		EventManager.GetInstance().AddEventListener<bool>(100119, EventBanDrag);
		EventManager.GetInstance().AddEventListener<bool>(100057, ApplicationPause);
		EventManager.GetInstance().AddEventListener(203021, DestoryFindEffect);
		EventManager.GetInstance().AddEventListener(203024, UpdateItemFeverState);
		EventManager.GetInstance().AddEventListener(203030, UpdateFeverResState);
	}

	private void EventBanDrag(bool val)
	{
		isBanDrag = val;
	}

	private void ApplicationPause(bool result)
	{
		//IL_0028: Unknown result type (might be due to invalid IL or missing references)
		//IL_002d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0056: Unknown result type (might be due to invalid IL or missing references)
		if (isDrag)
		{
			isDrag = false;
			if ((Object)(object)gameLevelItem != (Object)null)
			{
				Vector3 position = ((Component)gameLevelItem).transform.position;
				((Component)gameLevelItem).transform.SetParent(GameItemParent);
				gameLevelItem.LocalIdentity<GameLevelItem>();
				gameLevelItem.PlayItemMove(position);
			}
			if ((Object)(object)parentLogic != (Object)null)
			{
				parentLogic.DragGoods = false;
			}
		}
		HideMergeHintEffect();
		HideAdditionalHint();
		HideSplitHint();
		HideCopyHint();
		HideGeneratorAcceleratorHint();
		HideAutoConversionHint();
		HideUpgradeHint();
	}

	private void InitGrid()
	{
		if (Singleton<GameLevelManager>.Instance.GridUnlock(GridId))
		{
			mIsLock = false;
			LockNodeGo.SetSelfActive(active: false);
			GameItemParent.SetSelfActive<Transform>(true);
		}
		else
		{
			mIsLock = true;
			LockNodeGo.SetSelfActive(active: true);
			GameItemParent.SetSelfActive<Transform>(false);
			if (GameLevelViewLogic.PlayCloudShowAnim)
			{
				ShowLockAnim();
			}
		}
		SetGridBg();
	}

	private void SetGridBg()
	{
		if (GridIndex % 2 == 0)
		{
			GridBg.sprite = ((BaseViewLogic)parentLogic).Load<Sprite>("숍끓斆弎畕?\u009a厙숎끈枰式杫0¢厡뺮");
			((Graphic)GridBg).SetNativeSize();
		}
		else
		{
			GridBg.sprite = ((BaseViewLogic)parentLogic).Load<Sprite>("숍끓斆弎畕?\u009a厙숎끈枰式杫0¢厡뺭");
			((Graphic)GridBg).SetNativeSize();
		}
	}

	private void InitGoodsVo(GameGoodsBase goodsBase, bool showFrist, bool isSave = true, bool updateOrder = true)
	{
		ResetUI();
		mGameGoodsBase = goodsBase;
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.Recovery();
			gameLevelItem = null;
		}
		if (goodsBase != null && goodsBase.GameGoods != null)
		{
			Transform guideTrans = GameItemParent;
			gameLevelItem = Singleton<ResCacheManager>.Instance.GetRes<GameLevelItem>();
			if ((Object)(object)gameLevelItem != (Object)null)
			{
				gameLevelItem.Init(goodsBase.GameGoods, this);
				if ((Object)(object)gameLevelItem == (Object)null)
				{
					return;
				}
				gameLevelItem.IsPlayCdDotweenAnim = false;
				((Component)gameLevelItem).transform.SetParent(GameItemParent);
				gameLevelItem.LocalIdentity<GameLevelItem>();
				gameLevelItem.UpdateSizeAndPos();
				guideTrans = ((Component)gameLevelItem).transform;
			}
			if (goodsBase.GoodsBaseVo != null && (goodsBase.GoodsBaseVo.type == 2 || goodsBase.GoodsBaseVo.type == 3 || goodsBase.GoodsBaseVo.type == 4) && goodsBase.GameGoods.InitiativeSurplusNumber > 0)
			{
				EventManager.GetInstance().DispatchEvent(100163, new GuideWeakCmdData
				{
					guideParam = goodsBase.GoodsBaseVo.goodsID.ToString(),
					guideTrans = guideTrans,
					guideTransParent = ((Component)parentLogic).transform,
					guideType = GuideWeakType.NewCreater
				});
			}
			if (goodsBase.GoodsBaseVo != null && goodsBase.GoodsBaseVo.type == 9 && Singleton<GameLevelManager>.Instance.GetGoodsBaseVoBySeriesAndLevel(goodsBase.GoodsBaseVo.series, goodsBase.GoodsBaseVo.level + 1) == null)
			{
				IGoodsCollectVo goodsCollectVoById = Singleton<GameLevelManager>.Instance.GetGoodsCollectVoById(goodsBase.GameGoods.goodsID);
				if (goodsCollectVoById != null)
				{
					if (goodsCollectVoById.itemId == 1002)
					{
						MonoSingleton<GuideWeakManager>.Instance.NewFunctionGuide(guideTrans, ((Component)parentLogic).transform, 26);
					}
					else if (goodsCollectVoById.itemId == 1003)
					{
						MonoSingleton<GuideWeakManager>.Instance.NewFunctionGuide(guideTrans, ((Component)parentLogic).transform, 27);
					}
					else if (goodsCollectVoById.itemId == 1001)
					{
						MonoSingleton<GuideWeakManager>.Instance.NewFunctionGuide(guideTrans, ((Component)parentLogic).transform, 28);
					}
				}
			}
		}
		else
		{
			EmptyParentSelectGrid();
		}
		if (isSave)
		{
			SaveGridData();
		}
		if (goodsBase != null && goodsBase.GameGoods != null && !IGoodsBaseVo.CannotDrag(goodsBase.GameGoods.GoodsState) && Singleton<GameLevelManager>.Instance.GridUnlock(GridId))
		{
			UnlockGoodsMap(goodsBase.GameGoods.goodsID, showFrist, updateOrder);
		}
		UpdateSize();
	}

	public GameGoodsBase GetGameGoodsBase()
	{
		return mGameGoodsBase;
	}

	private void UpdateShapeData(GameGoodsBase goodsBase)
	{
		cleanShapeGridData();
		if (goodsBase == null || goodsBase.GoodsBaseVo == null)
		{
			return;
		}
		IGoodsShapeVo shapeData = goodsBase.GoodsBaseVo.GetShapeData();
		if (shapeData == null)
		{
			return;
		}
		UpdateTopLayer();
		if ((Object)(object)parentLogic == (Object)null)
		{
			return;
		}
		Dictionary<int, GameLevelGrid> gridObjectDic = parentLogic.GridObjectDic;
		if (gridObjectDic == null)
		{
			return;
		}
		List<int> areaGridIdByGridId = shapeData.GetAreaGridIdByGridId(GetGridId());
		for (int i = 0; i < areaGridIdByGridId.Count; i++)
		{
			if (areaGridIdByGridId[i] != GetGridId())
			{
				GameLevelGrid value = null;
				if (gridObjectDic.TryGetValue(areaGridIdByGridId[i], out value))
				{
					value.SetShapeHeadGridId(GetGridId());
					AddShapeGridId(areaGridIdByGridId[i]);
				}
			}
		}
	}

	public void UpdateTopLayer()
	{
		((Component)this).transform.SetSiblingIndex(((Component)this).transform.parent.childCount - 1);
	}

	private void cleanShapeGridData()
	{
		if (mShapeGridIdList == null)
		{
			mShapeGridIdList = new List<int>();
		}
		if (mShapeGridIdList.Count < 1 || (Object)(object)parentLogic == (Object)null)
		{
			return;
		}
		Dictionary<int, GameLevelGrid> gridObjectDic = parentLogic.GridObjectDic;
		if (gridObjectDic == null)
		{
			return;
		}
		for (int i = 0; i < mShapeGridIdList.Count; i++)
		{
			GameLevelGrid value = null;
			if (gridObjectDic.TryGetValue(mShapeGridIdList[i], out value))
			{
				value.SetShapeHeadGridId(-1);
			}
		}
		mShapeGridIdList.Clear();
	}

	public void UpdateSize()
	{
		//IL_005c: Unknown result type (might be due to invalid IL or missing references)
		//IL_009b: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a5: Unknown result type (might be due to invalid IL or missing references)
		//IL_00aa: Unknown result type (might be due to invalid IL or missing references)
		//IL_00bd: Unknown result type (might be due to invalid IL or missing references)
		//IL_001c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0021: Unknown result type (might be due to invalid IL or missing references)
		int num = 1;
		int num2 = 1;
		IGoodsBaseVo goodsBaseVo = GetGoodsBaseVo();
		if (goodsBaseVo != null)
		{
			IGoodsShapeVo shapeData = goodsBaseVo.GetShapeData();
			if (shapeData != null)
			{
				Vector2 size = shapeData.GetSize();
				num = (int)size.x;
				num2 = (int)size.y;
			}
		}
		float num3 = 95f + (float)(num - 1) * GameLevelViewLogic.ItemWidth;
		float num4 = 99f + (float)(num2 - 1) * GameLevelViewLogic.ItemWidth;
		SelectParentTrans.sizeDelta = new Vector2(num3, num4);
		float num5 = (float)(num - 1) * GameLevelViewLogic.ItemWidth / 2f;
		float num6 = (float)(num2 - 1) * GameLevelViewLogic.ItemWidth / 2f;
		SelectParentTrans.anchoredPosition = Vector2.op_Implicit(new Vector3(num5, 0f - num6, ((Transform)SelectParentTrans).localPosition.z));
		SelectTrans.sizeDelta = new Vector2(num3, num4);
		if ((Object)(object)gameLevelGridBg != (Object)null)
		{
			gameLevelGridBg.UpdateSize(num, num2);
		}
	}

	public void ChangeGameGoodsVo(GameGoodsBase goodsBase, string from, bool updateOrder = true, bool isFromSpecial = false)
	{
		if (goodsBase == null)
		{
			GoodsDeleteAnalytic(from, "숄끒䞸愅䍓7\"匡숅끟玞嘆浛6Ò发뻳");
		}
		if ((Object)(object)parentLogic != (Object)null)
		{
			parentLogic.RefreshSendAnalyticState(goodsBase);
		}
		UpdateShapeData(goodsBase);
		bool showFrist = !isFromSpecial;
		InitGoodsVo(goodsBase, showFrist, isSave: true, updateOrder);
		RemoveMergeHint();
	}

	public void ChangeGridGameGoods(GameGoodsBase goodsBase, GameLevelItem levelItem, string from)
	{
		if (goodsBase == null)
		{
			GoodsDeleteAnalytic(from, "숄끒䞸爅䍓7\"匡숋끞䞞漌楙7\"匡뛘«赴");
		}
		ResetUI();
		mGameGoodsBase = goodsBase;
		if (mGameGoodsBase != null)
		{
			mGameGoodsBase.ChangeGameLevelGrid(this);
		}
		if ((Object)(object)levelItem != (Object)null)
		{
			gameLevelItem = levelItem;
			((Component)gameLevelItem).transform.SetParent(GameItemParent);
			gameLevelItem.LocalIdentity<GameLevelItem>();
			if (mGameGoodsBase != null)
			{
				gameLevelItem.Init(mGameGoodsBase.GameGoods, this);
				if ((Object)(object)gameLevelItem != (Object)null)
				{
					gameLevelItem.UpdateSizeAndPos();
				}
				if (mGameGoodsBase != null)
				{
					mGameGoodsBase.UpdateAttribute();
				}
			}
		}
		else
		{
			gameLevelItem = null;
		}
		SaveGridData();
		RemoveMergeHint();
		UpdateSize();
	}

	public bool ChangeGameGoodsState(GameGoodsState goodsState)
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.UpdateItemState(goodsState);
			if ((Object)(object)parentLogic != (Object)null && (Object)(object)parentLogic.CurrentSelectGrid != (Object)null && parentLogic.CurrentSelectGrid.GetGridId() == GetGridId())
			{
				parentLogic.CurrentSelectGrid = this;
			}
			SaveGridData();
			if (GetGoodsBaseVo() != null && (Object)(object)parentLogic != (Object)null)
			{
				if (IGoodsBaseVo.IsTreasureBox(GetGoodsBaseVo().type) && goodsState == GameGoodsState.InitiativeProduce)
				{
					MonoSingleton<GuideWeakManager>.Instance.ShowGuideNewGoodsBox(((Component)GetGameLevelItem()).transform, ((Component)parentLogic).transform, 2);
				}
				else if (IGoodsBaseVo.IsInstrument(GetGoodsBaseVo().type) && goodsState == GameGoodsState.InitiativeProduce)
				{
					if (IsPlayCdAnim)
					{
						TimeManager.GetInstance().Schedule(this, (float dt1) =>
						{
							if (GetGoodsBaseVo() != null && GetGameGoodsVo() != null && IGoodsBaseVo.IsInstrument(GetGoodsBaseVo().type) && GetGameGoodsVo().GoodsState == GameGoodsState.InitiativeProduce)
							{
								MonoSingleton<GuideWeakManager>.Instance.ShowGuideInstrumentTake(((Component)GetGameLevelItem()).transform, ((Component)parentLogic).transform);
							}
						}, 1.5f, 1, 0f);
					}
					else
					{
						MonoSingleton<GuideWeakManager>.Instance.ShowGuideInstrumentTake(((Component)GetGameLevelItem()).transform, ((Component)parentLogic).transform);
					}
				}
			}
			return true;
		}
		return false;
	}

	public void UpdateGameLevelItem(bool backgroundAnim = true)
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.UpdateIcon(backgroundAnim);
		}
	}

	public int GetItemTaskType()
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			return gameLevelItem.GetBackgroundType();
		}
		return 0;
	}

	public int GetItemBingoType()
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			return gameLevelItem.GetBingoGoodsType();
		}
		return 0;
	}

	public GameLevelItem GetGameLevelItem()
	{
		return gameLevelItem;
	}

	public GameGoodsVo GetGameGoodsVo()
	{
		if (mGameGoodsBase != null)
		{
			return mGameGoodsBase.GameGoods;
		}
		return null;
	}

	public IGoodsBaseVo GetGoodsBaseVo()
	{
		if (mGameGoodsBase != null)
		{
			return mGameGoodsBase.GoodsBaseVo;
		}
		return null;
	}

	public int GetGridId()
	{
		return GridId;
	}

	private bool CanPack(Transform tipTransform = null)
	{
		if (GetGameGoodsVo() == null)
		{
			return false;
		}
		if (GetGameGoodsVo().GoodsState == GameGoodsState.Bubble)
		{
			ViewManager.Instance.ShowTip("숋끥溻漌呓\r¾厽刦磻\ud9f7ŀ", null, tipTransform);
			EventManager.GetInstance().DispatchEvent(202123, VibrateManager.VibrateType.Intense);
			return false;
		}
		if (GetGoodsBaseVo().type == 19)
		{
			ViewManager.Instance.ShowTip("숋끥溻漌呓\r¾厽刦磻\ud9f7ŀ", null, tipTransform);
			EventManager.GetInstance().DispatchEvent(202123, VibrateManager.VibrateType.Intense);
			return false;
		}
		if (IGoodsBaseVo.IsTreasureBox(GetGoodsBaseVo().type) && GetGameGoodsVo().GoodsState == GameGoodsState.CoolDown)
		{
			ViewManager.Instance.ShowTip("숋끥溻漌呓\r¾厽刦磻\ud9f7ŀ", null, tipTransform);
			EventManager.GetInstance().DispatchEvent(202123, VibrateManager.VibrateType.Intense);
			return false;
		}
		if (GetGoodsBaseVo().GetShapeData() != null)
		{
			return false;
		}
		return true;
	}

	public void ResetItem()
	{
		//IL_0019: Unknown result type (might be due to invalid IL or missing references)
		//IL_001e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0050: Unknown result type (might be due to invalid IL or missing references)
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			Vector3 position = ((Component)gameLevelItem).transform.position;
			((Component)gameLevelItem).transform.SetParent(GameItemParent);
			gameLevelItem.LocalIdentity<GameLevelItem>();
			OnSelectGrid();
			gameLevelItem.PlayItemMove(position);
			if (GetGameGoodsVo() != null)
			{
				Singleton<GameLevelManager>.Instance.PlayAudio(23, 0, IndependentType.None, GetGameGoodsVo().goodsID);
			}
		}
		isDrag = false;
		if ((Object)(object)parentLogic != (Object)null)
		{
			parentLogic.DragGoods = false;
		}
		EventManager.GetInstance().DispatchEvent(203042);
		isCheckShortcutTip = true;
	}

	public void InterruptItemAnim()
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			((Component)gameLevelItem).transform.SetParent(GameItemParent);
			gameLevelItem.LocalIdentity<GameLevelItem>();
			gameLevelItem.InterruptAnimtion();
			OnSelectGrid();
		}
		isDrag = false;
		if ((Object)(object)parentLogic != (Object)null)
		{
			parentLogic.DragGoods = false;
		}
		TimeManager.Instance.ClearSchedule(this);
	}

	public void SetSelectState(bool select, bool playAnim = true)
	{
		if (!((Object)(object)SelectGo != (Object)null))
		{
			return;
		}
		TimeManager.GetInstance().ClearSchedule(mLockFrameTimerTarget);
		SelectGo.SetSelfActive(select);
		if (!(((Object)(object)SelectAnimation != (Object)null) & playAnim))
		{
			return;
		}
		SelectAnimation.Stop();
		if (!select)
		{
			return;
		}
		AnimationClip clip = SelectAnimation.GetClip("숏끛皴攐䝸7Þ叝숏끳疭椐汙\rÚ叙숆끉璼弇彑1Ö叕숝끒溶椞獫3¾厽");
		if ((Object)(object)clip != (Object)null && clip.length > 0f)
		{
			SelectAnimation.Play("숏끛皴攐䝸7Þ叝숏끳疭椐汙\rÚ叙숆끉璼弇彑1Ö叕숝끒溶椞獫3¾厽");
			TimeManager.GetInstance().Schedule(this, (float dt1) =>
			{
				SelectAnimation.Stop();
				if ((Object)(object)((Component)SelectAnimation).GetComponent<CanvasGroup>() != (Object)null)
				{
					((Component)SelectAnimation).GetComponent<CanvasGroup>().alpha = 1f;
				}
				SelectAnimation.Play("숏끛皴攐䝸7Þ叝숏끳疭椐汙\rÚ叙숆끉璼弇彑1Ö叕룲\u0083赴");
			}, clip.length, 1, 0f);
		}
		else
		{
			SelectAnimation.Play("숏끛皴攐䝸7Þ叝숏끳疭椐汙\rÚ叙숆끉璼弇彑1Ö叕룲\u0083赴");
		}
	}

	public void SetLockFrameState(bool select)
	{
		TimeManager.GetInstance().ClearSchedule(mLockFrameTimerTarget);
		if ((Object)(object)SelectGo == (Object)null)
		{
			return;
		}
		if (!select)
		{
			SelectGo.SetSelfActive(active: false);
			if ((Object)(object)SelectAnimation != (Object)null)
			{
				SelectAnimation.Stop();
			}
			return;
		}
		if ((Object)(object)SelectAnimation == (Object)null)
		{
			SelectGo.SetSelfActive(active: true);
			return;
		}
		SelectAnimation.Stop();
		TimeManager.GetInstance().Schedule(mLockFrameTimerTarget, (float dt1) =>
		{
			SelectGo.SetSelfActive(active: true);
			SelectAnimation.Play("숏끛皴攐䝸7Þ叝숏끳疭椐汙\rÚ叙숆끉璼弇彑1Ö叕숝끒溶椞獫3¾厽");
		}, 0.15f, 1, 0f);
		TimeManager.GetInstance().Schedule(mLockFrameTimerTarget, (float dt2) =>
		{
			SelectAnimation.Stop();
			if ((Object)(object)((Component)SelectAnimation).GetComponent<CanvasGroup>() != (Object)null)
			{
				((Component)SelectAnimation).GetComponent<CanvasGroup>().alpha = 1f;
			}
			SelectAnimation.Play("숏끛皴攐䝸7Þ叝숏끳疭椐汙\rÚ叙숆끉璼弇彑1Ö叕룲\u0083赴");
		}, 1.35f, 1, 0f);
	}

	public void OnSelectGrid(bool isProduce = false, bool playSelectAnim = true, bool isShowQuick = false)
	{
		if ((Object)(object)parentLogic == (Object)null || (Object)(object)gameLevelItem == (Object)null)
		{
			return;
		}
		if ((Object)(object)parentLogic.CurrentSelectGrid == (Object)null)
		{
			parentLogic.CurrentSelectGrid = this;
			SetSelectState(select: true, playSelectAnim);
			if (isProduce && mGameGoodsBase is GoodsTransferGate)
			{
				mGameGoodsBase.Use();
			}
			parentLogic.PlayInstrumentSound(this);
			MonoSingleton<GuideWeakManager>.Instance.ShowChessboardUserScissor_Consume(0);
			parentLogic.ShowMachineBubble(this, GridId);
			if (isShowQuick)
			{
				parentLogic.ShowQuickConsumption(this);
			}
		}
		else if (parentLogic.CurrentSelectGrid.GetGridId() == GetGridId())
		{
			if (isProduce)
			{
				SetSelectState(select: true);
				if (mGameGoodsBase != null && MonoSingleton<GuideManager>.Instance.CanUseGoods() && !IsPlayCdAnim)
				{
					if (RefreshManytimesDropGoods())
					{
						GameLevelDefine.SetOrderNeedLowLevelGoods(GetGoodsBaseVo().goodsID);
					}
					SendVibrateEvent(mGameGoodsBase.GoodsType);
					mGameGoodsBase.Use();
					if (GetGoodsBaseVo() != null && IGoodsBaseVo.IsCreator(GetGoodsBaseVo().type))
					{
						MonoSingleton<PlayerStateManager>.Instance.Trigger(EPlayerStateTrigger.GeneratorClick);
					}
					parentLogic.ShowMachineBubble(this, GridId);
					if (isShowQuick)
					{
						parentLogic.ShowQuickConsumption(this);
					}
				}
			}
			else
			{
				if (MonoSingleton<GuideManager>.Instance.IsInGuide())
				{
					parentLogic.CurrentSelectGrid = this;
				}
				SetSelectState(select: true);
				if (isShowQuick)
				{
					parentLogic.ShowQuickConsumption(this);
				}
			}
		}
		else
		{
			parentLogic.CurrentSelectGrid.SetSelectState(select: false);
			parentLogic.CurrentSelectGrid = this;
			parentLogic.PlayInstrumentSound(this);
			SetSelectState(select: true, playSelectAnim);
			if (isProduce && mGameGoodsBase is GoodsTransferGate)
			{
				mGameGoodsBase.Use();
			}
			MonoSingleton<GuideWeakManager>.Instance.ShowChessboardUserScissor_Consume(0);
			parentLogic.ShowMachineBubble(this, GridId);
			if (isShowQuick)
			{
				parentLogic.ShowQuickConsumption(this);
			}
		}
	}

	public void OnDoubleClickGrid()
	{
		if ((Object)(object)parentLogic != (Object)null)
		{
			parentLogic.ShowBuyBubbleHint(this);
		}
	}

	public void OnClickGrid()
	{
		if (ObjectManager.GetInstance().gameLevelSortModel.GetGameLevelSortState() && !((Object)(object)gameLevelItem != (Object)null) && GetGameGoodsVo() == null && (Object)(object)parentLogic.CurrentSelectGrid != (Object)null)
		{
			parentLogic.CurrentSelectGrid.SetSelectState(select: false);
			parentLogic.CurrentSelectGrid = null;
			EventManager.GetInstance().DispatchEvent(203041);
			EventManager.GetInstance().DispatchEvent(203248);
		}
	}

	public bool IsCurrentSelectGrid()
	{
		if ((Object)(object)parentLogic.CurrentSelectGrid == (Object)null)
		{
			return false;
		}
		return parentLogic.CurrentSelectGrid.GetGridId() == GetGridId();
	}

	private void SendVibrateEvent(GameGoodsType goodsType)
	{
		if (goodsType == GameGoodsType.Collection)
		{
			EventManager.GetInstance().DispatchEvent(202123, VibrateManager.VibrateType.Moderate);
		}
	}

	private bool RefreshManytimesDropGoods()
	{
		if (!ObjectManager.GetInstance().doubleConsumptionModel.IsOpenManytimesDrop())
		{
			return false;
		}
		if (GetGoodsBaseVo() == null)
		{
			return false;
		}
		if (GameLevelDefine.CurrentGeneratorID == GetGoodsBaseVo().goodsID)
		{
			return false;
		}
		if (GetGoodsBaseVo().type != 2 && GetGoodsBaseVo().type != 3)
		{
			return false;
		}
		IGoodsProduceVo produceById = Singleton<GameLevelManager>.Instance.GetProduceById(GetGoodsBaseVo().goodsID);
		if (produceById == null)
		{
			return false;
		}
		if (produceById.doubleConsume == 0)
		{
			return false;
		}
		return true;
	}

	public void OnUpdateTime()
	{
		bool flag = false;
		if (mGameGoodsBase != null && mGameGoodsBase.GameGoods != null)
		{
			flag = mGameGoodsBase.GameGoods.UpdateUncooledState;
		}
		if (mGameGoodsBase != null && !IsLock)
		{
			mGameGoodsBase.UpdateAttribute();
		}
		if (mGameGoodsBase != null && mGameGoodsBase.GameGoods != null && (mGameGoodsBase.GameGoods.UpdateUncooledState | flag) && (Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.OnUpdateUncooled();
		}
	}

	public void OnUpdateAttribute()
	{
		if (mGameGoodsBase != null && !IsLock)
		{
			mGameGoodsBase.UpdateAttribute();
		}
	}

	public void UpdateItemUncd()
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.OnUpdateUncooled();
		}
	}

	public void UpdateItemFeverState()
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.OnUpdateUncooled(backgroundAnim: false);
		}
	}

	public void UpdateFeverResState()
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.UpdateIcon(backgroundAnim: false);
		}
	}

	public int CheckInTaskGoods(int id)
	{
		if ((Object)(object)parentLogic != (Object)null)
		{
			return parentLogic.CheckInOrderGoods(id);
		}
		return 0;
	}

	public int CheckInBingoGoods(int id)
	{
		if ((Object)(object)parentLogic != (Object)null)
		{
			return parentLogic.CheckInBingoGoods(id);
		}
		return 0;
	}

	public void EmptyParentSelectGrid()
	{
		if (!((Object)(object)parentLogic == (Object)null) && (Object)(object)parentLogic.CurrentSelectGrid != (Object)null && parentLogic.CurrentSelectGrid.GetGridId() == GetGridId())
		{
			SetSelectState(select: false);
			parentLogic.CurrentSelectGrid = null;
		}
	}

	public void SelectCurrentGrid()
	{
		if (!((Object)(object)gameLevelItem == (Object)null) && !((Object)(object)parentLogic == (Object)null))
		{
			if ((Object)(object)parentLogic.CurrentSelectGrid == (Object)null)
			{
				parentLogic.CurrentSelectGrid = this;
				SetSelectState(select: true);
			}
			else
			{
				parentLogic.CurrentSelectGrid.SetSelectState(select: false);
				parentLogic.CurrentSelectGrid = this;
				SetSelectState(select: true);
			}
		}
	}

	public void UpdateBubbleGoodsTime()
	{
		if ((Object)(object)parentLogic == (Object)null)
		{
			return;
		}
		if ((Object)(object)parentLogic.CurrentSelectGrid != (Object)null && parentLogic.CurrentSelectGrid.GetGridId() == GetGridId())
		{
			parentLogic.UpdateBubbleTime(this);
		}
		if (GetGameGoodsVo() != null && GetGameGoodsVo().GoodsState == GameGoodsState.Bubble)
		{
			int num = Singleton<GameLevelManager>.Instance.BubbleLife - ServerTimeManager.IntervalTimeInGame((int)GetGameGoodsVo().InitiativeCDStarTime);
			if (GetGameGoodsVo().IsBubbleGoodsOpt())
			{
				num = Singleton<GameLevelManager>.Instance.BubbleLife - ServerTimeManager.IntervalTimeInGameUseServerTime((int)GetGameGoodsVo().InitiativeCDStarTime);
			}
			if (num < 0)
			{
				num = 0;
			}
			if ((Object)(object)gameLevelItem != (Object)null)
			{
				gameLevelItem.SetBubbleCD(TimeManager.Instance.GetTimeFormatString2(num));
			}
		}
	}

	public void GeneratorSuperSpeedup(int time)
	{
		if ((Object)(object)parentLogic != (Object)null)
		{
			parentLogic.GeneratorSuperSpeedup(time);
		}
	}

	public void CreatorSpeedup(int time)
	{
		if ((Object)(object)parentLogic != (Object)null)
		{
			parentLogic.CreatorSpeedup(time);
		}
	}

	public void CookingSpeedup(int time)
	{
		if ((Object)(object)parentLogic != (Object)null)
		{
			parentLogic.CookingSpeedup(time);
		}
	}

	public bool CreatorAddProduceNum(IGoodsBaseVo useGoods)
	{
		if ((Object)(object)parentLogic != (Object)null)
		{
			return parentLogic.CreatorAddProduceNum(useGoods, this);
		}
		return false;
	}

	public bool GoodsRandomUpgrade(IGoodsBaseVo useGoods)
	{
		if ((Object)(object)parentLogic != (Object)null)
		{
			return parentLogic.GoodsRandomUpgrade(useGoods, this);
		}
		return false;
	}

	public bool GoodsInstrumentSpeedup(int time)
	{
		if ((Object)(object)parentLogic != (Object)null)
		{
			return parentLogic.InstrumentSpeedup(time, this);
		}
		return false;
	}

	public bool CheckEmptyGridEnough(int num, bool showEnoughTip = false, bool checkPlayerState = false)
	{
		if ((Object)(object)parentLogic == (Object)null)
		{
			return false;
		}
		return parentLogic.CheckEmptyGridEnough(num, showEnoughTip, checkPlayerState);
	}

	public void GameMapFull()
	{
		if ((Object)(object)parentLogic != (Object)null)
		{
			parentLogic.GameMapFull();
		}
	}

	public void AutoSelectGrid()
	{
		if ((Object)(object)parentLogic != (Object)null)
		{
			parentLogic.AutoSelectGoods(this);
		}
	}

	public GameLevelGrid GetNearbyEmptyGrid(int gridID, bool showEnoughTip = false, int goodsID = 0, bool checkPlayerState = false)
	{
		if ((Object)(object)parentLogic == (Object)null)
		{
			return null;
		}
		return parentLogic.GetNearbyEmptyGrid(gridID, showEnoughTip, null, goodsID, checkPlayerState);
	}

	public GameLevelGrid GetEmptyGridAroundID(int gridID)
	{
		if ((Object)(object)parentLogic == (Object)null)
		{
			return null;
		}
		return parentLogic.GetEmptyGridAroundID(gridID);
	}

	public void UnlockGoodsMap(int id, bool showFristUnlock = true, bool updateOrder = true)
	{
		if (!((Object)(object)parentLogic == (Object)null))
		{
			parentLogic.ProduceNewGoods(id, showFristUnlock, GameItemParent, updateOrder);
		}
	}

	public void GetNewGoods(int id)
	{
		if (!((Object)(object)parentLogic == (Object)null))
		{
			parentLogic.GetNewGoods(id, this, 0.4f);
		}
	}

	public bool GetGameMapInitState()
	{
		if ((Object)(object)parentLogic == (Object)null)
		{
			return false;
		}
		return parentLogic.GetGameMapInitState();
	}

	public void SetCDProgress(float progress, bool initiative, float cdTime = 0f, Action endCall = null)
	{
		if ((Object)(object)gameLevelItem == (Object)null)
		{
			return;
		}
		GameGoodsVo gameGoodsVo = GetGameGoodsVo();
		if (gameGoodsVo != null && gameGoodsVo.GoodsState == GameGoodsState.CoolDown)
		{
			gameLevelItem.SetCdProgress(progress, initiative, PlayCdClearAnim, cdTime, endCall);
			PlayCdClearAnim = false;
			if ((Object)(object)parentLogic != (Object)null)
			{
				parentLogic.UpdateGeneratorCdTime(this);
			}
		}
	}

	public void SetGlobalSpeedupState(bool state, float progress, bool isPassive = false)
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.GlobalSpeedupState = state;
			mPlayProgress = progress;
			mIsPassive = isPassive;
		}
	}

	public void SetPlayCDState(bool state)
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.SetPlayCDState(state);
		}
	}

	public void PlayGlobalSpeedupAnim()
	{
		if ((Object)(object)gameLevelItem != (Object)null && gameLevelItem.GlobalSpeedupState)
		{
			gameLevelItem.PlayGlobalSpeedupAnim(mPlayProgress, mIsPassive);
			gameLevelItem.GlobalSpeedupState = false;
		}
	}

	public void PlayUFOSpeedupAnim()
	{
		if ((Object)(object)gameLevelItem != (Object)null && gameLevelItem.GlobalSpeedupState)
		{
			gameLevelItem.PlayUFOSpeedupAnim(mPlayProgress, mIsPassive);
			gameLevelItem.GlobalSpeedupState = false;
		}
	}

	public void SetWorkingProgress(float progress)
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.SetWorkingProgress(progress, PlayCdClearAnim);
			PlayCdClearAnim = false;
		}
		if ((Object)(object)parentLogic != (Object)null)
		{
			parentLogic.UpdateGoodsCDTime(this);
		}
	}

	public void RemoveMergeHint()
	{
		if ((Object)(object)parentLogic != (Object)null)
		{
			if ((Object)(object)parentLogic.mMergeHintA != (Object)null && parentLogic.mMergeHintA.GetGridId() == GetGridId())
			{
				parentLogic.RemoveMergeHint();
			}
			if ((Object)(object)parentLogic.mMergeHintB != (Object)null && parentLogic.mMergeHintB.GetGridId() == GetGridId())
			{
				parentLogic.RemoveMergeHint();
			}
		}
	}

	public void CollectFly(int itemId, int itemNum)
	{
		//IL_0030: Unknown result type (might be due to invalid IL or missing references)
		//IL_0036: Expected Obj, but got Unknown
		//IL_0077: Unknown result type (might be due to invalid IL or missing references)
		if (GetGameGoodsVo() == null)
		{
			return;
		}
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(GetGameGoodsVo().goodsID);
		if (goodsBaseVoById == null)
		{
			return;
		}
		GameObject val = new GameObject();
		Image flyImage = val.AddComponent<Image>();
		flyImage.LocalIdentity<Image>();
		Singleton<GameLevelManager>.Instance.SetGoodsIcon(flyImage, goodsBaseVoById, resLoader);
		((Component)flyImage).transform.position = GameItemParent.position;
		RewardFlyIconType endIconType = RewardFlyIconType.TopCoin;
		RewardFlyIconType flyIconType = RewardFlyIconType.None;
		_ = new TopUIInfoType[0];
		switch (itemId)
		{
		case 1002:
			endIconType = RewardFlyIconType.TopCoin;
			flyIconType = RewardFlyIconType.TopCoin;
			break;
		case 1003:
			endIconType = RewardFlyIconType.TopMoney;
			break;
		case 1001:
			endIconType = RewardFlyIconType.TopExp;
			break;
		case 1004:
			endIconType = RewardFlyIconType.TopLightning;
			break;
		case 1014:
		case 1015:
		case 1016:
		case 1017:
			endIconType = RewardFlyIconType.WeeklyCycleActivity;
			itemNum = 1;
			break;
		case 1023:
			endIconType = RewardFlyIconType.EasterActivity;
			itemNum = 1;
			break;
		case 1024:
		case 1029:
		case 1031:
			endIconType = RewardFlyIconType.MotherDayActivity;
			itemNum = 1;
			break;
		case 1007:
			endIconType = RewardFlyIconType.MergeViewBag;
			flyIconType = RewardFlyIconType.MergeViewBag;
			break;
		}
		CommonRewardFlyViewData flyData = new CommonRewardFlyViewData
		{
			rewardVo = new ItemVO
			{
				id = itemId,
				num = itemNum
			},
			flyTrans = ((Component)flyImage).transform,
			endIconType = endIconType,
			flyIconType = flyIconType,
			toScale = 0.6f,
			callBack = () =>
			{
				Object.Destroy((Object)(object)((Component)flyImage).gameObject);
				EventManager.GetInstance().DispatchEvent(100014, itemId);
				if (itemId == 1004)
				{
					ObjectManager.GetInstance().timelimitMultModel.CheckActivateTip();
				}
			}
		};
		ObjectManager.GetInstance().itemDataModel.FlyRewardView(flyData);
	}

	public void SetItemBackground(int type, bool active, int backgroundType = 0, bool playAnim = true)
	{
		mGridBgActive = active;
		if ((Object)(object)gameLevelGridBg != (Object)null)
		{
			gameLevelGridBg.SetItemBackground(type, active, backgroundType, playAnim);
		}
	}

	public void ResetGridBgAnimState()
	{
		if ((Object)(object)gameLevelGridBg != (Object)null)
		{
			gameLevelGridBg.ResetAnimationState();
		}
	}

	public void ShowLockAnim()
	{
		if ((Object)(object)CloudShowGo == (Object)null)
		{
			CloudShowGo = GameLevelDefine.CreateGameObjectSync("숏끜徿礐敗&\u0082厁숟끔梮漠慫!¦厥뻫", ((Component)this).transform);
		}
		if ((Object)(object)CloudHideGo == (Object)null)
		{
			CloudHideGo = GameLevelDefine.CreateGameObjectSync("숏끜徿礐敗&\u0082厁숟끔皮攠慫=Þ叝뻮", ((Component)this).transform);
		}
		if (!((Object)(object)CloudAnimation != (Object)null))
		{
			return;
		}
		CloudAnimation.Stop();
		CloudAnimation.Play("숅끔䎵漆啗9\u0012匑숞끞溰弟湝=¾厽숟끖玶栠捐\rÒ发녯孷㉐\0這\ud974");
		AnimationClip clip = CloudAnimation.GetClip("숅끔䎵漆啗9\u0012匑숞끞溰弟湝=¾厽숟끖玶栠捐\rÒ发녯孷㉐\0這\ud974");
		if (!((Object)(object)clip != (Object)null))
		{
			return;
		}
		TimeManager.GetInstance().Schedule(this, (float dt1) =>
		{
			//IL_0036: Unknown result type (might be due to invalid IL or missing references)
			CloudShowGo.SetSelfActive(active: false);
			CloudHideGo.SetSelfActive(active: false);
			if ((Object)(object)LockNodeGo.GetComponent<Image>() != (Object)null)
			{
				((Graphic)LockNodeGo.GetComponent<Image>()).color = Color.white;
			}
		}, clip.length + 0.1f, 1, 0f);
	}

	public void HideLockAnim()
	{
		//IL_009b: Unknown result type (might be due to invalid IL or missing references)
		if ((Object)(object)CloudShowGo == (Object)null)
		{
			CloudShowGo = GameLevelDefine.CreateGameObjectSync("숏끜徿礐敗&\u0082厁숟끔梮漠慫!¦厥뻫", EffectParent);
		}
		if ((Object)(object)CloudHideGo == (Object)null)
		{
			CloudHideGo = GameLevelDefine.CreateGameObjectSync("숏끜徿礐敗&\u0082厁숟끔皮攠慫=Þ叝뻮", EffectParent);
		}
		if (!((Object)(object)CloudAnimation != (Object)null))
		{
			return;
		}
		LockNodeGo.SetSelfActive(active: true);
		CloudShowGo.SetSelfActive(active: false);
		CloudHideGo.SetSelfActive(active: false);
		if ((Object)(object)LockNodeGo.GetComponent<Image>() != (Object)null)
		{
			((Graphic)LockNodeGo.GetComponent<Image>()).color = Color.white;
		}
		CloudAnimation.Stop();
		CloudAnimation.Play("숅끔䎵漆啗9\u0012匑숞끞溰弟湝=¾厽숟끖澶瘠捐\rÂ叁녥孲㉐\0這\ud974");
		AnimationClip clip = CloudAnimation.GetClip("숅끔䎵漆啗9\u0012匑숞끞溰弟湝=¾厽숟끖澶瘠捐\rÂ叁녥孲㉐\0這\ud974");
		if (!((Object)(object)clip != (Object)null))
		{
			return;
		}
		TimeManager.GetInstance().Schedule(this, (float dt1) =>
		{
			//IL_0042: Unknown result type (might be due to invalid IL or missing references)
			CloudShowGo.SetSelfActive(active: false);
			CloudHideGo.SetSelfActive(active: false);
			LockNodeGo.SetSelfActive(active: false);
			if ((Object)(object)LockNodeGo.GetComponent<Image>() != (Object)null)
			{
				((Graphic)LockNodeGo.GetComponent<Image>()).color = Color.white;
			}
		}, clip.length + 0.1f, 1, 0f);
	}

	public void HideLockAnimB(float delay = 0f)
	{
		//IL_0006: Unknown result type (might be due to invalid IL or missing references)
		GameItemParent.localScale = Vector3.zero;
		if (delay > 0f)
		{
			TimeManager.GetInstance().Schedule(this, (float dt1) =>
			{
				if ((Object)(object)GameItemAnimation != (Object)null)
				{
					GameItemAnimation.Play();
				}
			}, delay, 1, 0f);
		}
		else if ((Object)(object)GameItemAnimation != (Object)null)
		{
			GameItemAnimation.Play();
		}
	}

	public void PlayGoodsTakeout()
	{
		//IL_0014: Unknown result type (might be due to invalid IL or missing references)
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.PlayGoodsTakeout();
		}
	}

	public void PlayGoodsTakeoutNewAni()
	{
		//IL_0015: Unknown result type (might be due to invalid IL or missing references)
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.PlayGoodsTakeoutNewAni();
		}
	}

	public void PlayGoodsHintAnim()
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.PlayGoodsHintAnim();
		}
	}

	public void ShowGridColorBg()
	{
		if (MonoSingleton<GuideManager>.Instance.ShowMainGridBg())
		{
			GridBg.SetSelfActive<Image>(true);
		}
		else if (!mGridBgActive)
		{
			if (MonoSingleton<GuideManager>.Instance.HideMainGridBg())
			{
				GridBg.SetSelfActive<Image>(false);
			}
			else
			{
				GridBg.SetSelfActive<Image>(true);
			}
		}
	}

	public void HideGridColorBg()
	{
		GridBg.SetSelfActive<Image>(false);
	}

	public void PlayCoveredBroken()
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.PlayCoveredBroken();
		}
	}

	public void PlayClearVineAnim()
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.PlayClearVineAnim();
		}
	}

	[AsyncStateMachine(typeof(_003CItemDisappearAnim_003Ed__125))]
	public UniTask ItemDisappearAnim()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0031: Unknown result type (might be due to invalid IL or missing references)
		_003CItemDisappearAnim_003Ed__125 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CItemDisappearAnim_003Ed__125>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	public void ShowAdditionalHint(IGoodsBaseVo additionalCard, int dragGridID)
	{
		if ((Object)(object)parentLogic != (Object)null)
		{
			parentLogic.ShowAdditionalHint(additionalCard, dragGridID);
		}
	}

	public void HideAdditionalHint()
	{
		if ((Object)(object)parentLogic != (Object)null)
		{
			parentLogic.HideAdditionalHint();
		}
	}

	public void PlayAdditionalHint()
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.PlayPropHintEffect(1);
		}
	}

	public void StopAdditionalHint()
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.HidePropHintEffect();
		}
	}

	public void PlayPlusAdditional(int num, string effectName = "effect_cika_1")
	{
		//IL_0016: Unknown result type (might be due to invalid IL or missing references)
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.PlayPlusAdditional(num, effectName);
		}
	}

	public void ShowSplitHint(GameGoodsVo splitCard, int dragGridID)
	{
		if ((Object)(object)parentLogic != (Object)null)
		{
			parentLogic.ShowSplitHint(splitCard, dragGridID);
		}
	}

	public void HideSplitHint()
	{
		if ((Object)(object)parentLogic != (Object)null)
		{
			parentLogic.HideSplitHint();
		}
	}

	public void PlaySplitHint()
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.PlayPropHintEffect(2);
		}
	}

	public void StopSplitHint()
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.HidePropHintEffect();
		}
	}

	public void ShowUpgradeHint(IGoodsBaseVo splitCard, int dragGridID)
	{
		if ((Object)(object)parentLogic != (Object)null)
		{
			parentLogic.ShowUpgradeHint(splitCard, dragGridID);
		}
	}

	public void HideUpgradeHint()
	{
		if ((Object)(object)parentLogic != (Object)null)
		{
			parentLogic.HideUpgradeHint();
		}
	}

	public void PlayUpgradeHint()
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.PlayPropHintEffect(4);
		}
	}

	public void StopUpgradeHint()
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.HidePropHintEffect();
		}
	}

	public void ShowCopyHint(IGoodsBaseVo splitCard, int dragGridID)
	{
		if ((Object)(object)parentLogic != (Object)null)
		{
			parentLogic.ShowCopyHint(splitCard, dragGridID);
		}
	}

	public void HideCopyHint()
	{
		if ((Object)(object)parentLogic != (Object)null)
		{
			parentLogic.HideCopyHint();
		}
	}

	public void PlayCopyHint()
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.PlayPropHintEffect(3);
		}
	}

	public void StopCopyHint()
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.HidePropHintEffect();
		}
	}

	public void PlayCopyAnim()
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.PlayOnceAnim("숏끜徿瀐敗&\u0082厁숵끕炩礶牗=Æ叅蛰£赴", "숚끛玩弛瑘'Ò发곦÷赴");
		}
	}

	public void ShowGeneratorAcceleratorHint(IGoodsBaseVo additionalCard, int dragGridID)
	{
		if ((Object)(object)parentLogic != (Object)null)
		{
			parentLogic.ShowGeneratorAcceleratorHint(additionalCard, dragGridID);
		}
	}

	public void HideGeneratorAcceleratorHint()
	{
		if ((Object)(object)parentLogic != (Object)null)
		{
			parentLogic.HideGeneratorAcceleratorHint();
		}
	}

	public void PlayGeneratorAcceleratorHint()
	{
	}

	public void StopGeneratorAcceleratorHint()
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.HidePropHintEffect();
		}
	}

	public void ShowAutoConversionHint(IGoodsBaseVo splitCard, int dragGridID)
	{
		if ((Object)(object)parentLogic != (Object)null)
		{
			parentLogic.ShowAutoConversionHint(splitCard, dragGridID);
		}
	}

	public void HideAutoConversionHint()
	{
		if ((Object)(object)parentLogic != (Object)null)
		{
			parentLogic.HideAutoConversionHint();
		}
	}

	public void PlayRocketAnim(string effectName = "effect_prop_rocket_low_fk", string audioName = "fireworks_boom")
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.PlayOnceAnim(effectName, audioName, 2.6f);
		}
	}

	public void PlayYamiAnim(string effectName = "effect_prop_yami_fk")
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.PlayOnceAnim(effectName, "", 2.6f);
		}
	}

	public void PlayGeneratorAcceleratorAnim(Action callback = null)
	{
		CommonMaskViewLogic.Show();
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.PlayOnceAnim("숏끜徿瀐敗&\u0082厁숵끕溩收牓7¾厽숅끛憭挆牆\r\u008a厉숏끟璵漐捆3Ö叕뻮", "숍끓憷挎獘7\u008a厉숏끟璵攐捆3Ö叕", 1.5f, callback);
		}
	}

	public void PlayItemJumpAnim(float delay)
	{
		//IL_0015: Unknown result type (might be due to invalid IL or missing references)
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.PlayItemJumpAnim(delay);
		}
	}

	public void PlayItemMoveToBottom(float duration = 0.4f)
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.PlayItemMoveToBottom(duration);
		}
	}

	public void PlayDesignatedEffect(string effectName, float hideDuration = 0f)
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.PlayDesignatedEffect(effectName, hideDuration);
		}
	}

	public void HideDesignatedEffect()
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.HideDesignatedEffect();
		}
	}

	public void PlayItemShow(Action action = null, float delay = 0f)
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.PlayItemShow(action, delay);
		}
	}

	public void PlayItemHide(Action action, float duration = 0.2f)
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.PlayItemHide(action, duration);
		}
		else
		{
			action.InvokeGracefully();
		}
	}

	public void PlayGetGoodsAnim(float delay = 0f)
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.PlayGetGoodsAnim(delay);
		}
	}

	public void SetItemShowState(bool show)
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.SetSelfActive<GameLevelItem>(show);
			gameLevelItem.SetItemBackground(show, show);
		}
	}

	public async void PlayItemMoveToTarget(int pGoodsID, Transform pTarget, float pDelay = 0f, bool bShowEffect = false)
	{
		if ((Object)(object)_moveItemGo != (Object)null)
		{
			_moveItemGo.DestroySelf<GameObject>();
		}
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(pGoodsID);
		if (goodsBaseVoById == null)
		{
			return;
		}
		_moveItemGo = new GameObject();
		_moveItemGo.transform.SetParent(parentLogic.DragItemParent);
		_moveItemGo.transform.LocalIdentity<Transform>();
		_moveItemGo.transform.position = GameItemParent.position;
		Image icon = _moveItemGo.AddComponent<Image>();
		Singleton<GameLevelManager>.Instance.SetGoodsIcon(icon, goodsBaseVoById);
		if (pDelay > 0f)
		{
			await UniTask.Delay(TimeSpan.FromSeconds(pDelay), false, (PlayerLoopTiming)4, default(CancellationToken));
		}
		Sequence val = DOTween.Sequence();
		float x = _moveItemGo.transform.localScale.x;
		TweenSettingsExtensions.Append(val, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(_moveItemGo.transform, new Vector3(0.85f * x, 0.85f * x, 1f), 0.233f), (Ease)9));
		TweenSettingsExtensions.Append(val, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(_moveItemGo.transform, new Vector3(1.6f * x, 1.6f * x, 1f), 0.3f), (Ease)2));
		TweenSettingsExtensions.Append(val, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(_moveItemGo.transform, new Vector3(1.2f * x, 1.2f * x, 1f), 0.266f), (Ease)4));
		TweenSettingsExtensions.SetAutoKill<Sequence>(val, true);
		await UniTask.Delay(TimeSpan.FromSeconds(0.3659999966621399), false, (PlayerLoopTiming)4, default(CancellationToken));
		if ((Object)(object)_moveItemGo != (Object)null)
		{
			TweenCallback val5 = default;
			TweenSettingsExtensions.OnComplete<Tweener>(TweenSettingsExtensions.SetAutoKill<Tweener>(TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOMove(_moveItemGo.transform, pTarget.position, 0.433f, false), (Ease)4), true), (TweenCallback)(() =>
			{
				//IL_008f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0094: Unknown result type (might be due to invalid IL or missing references)
				//IL_0096: Expected Obj, but got Unknown
				//IL_009b: Expected Obj, but got Unknown
				if ((Object)(object)_moveItemGo != (Object)null)
				{
					_moveItemGo.DestroySelf<GameObject>();
				}
				if (bShowEffect)
				{
					GameObject val2 = Object.Instantiate<GameObject>(((BaseViewLogic)parentLogic).Load<GameObject>("숏끜徿猐敗&\u0082厁숀끕暬愁桝\r\u009e厝숃끑斬眄湫<\u009a厙"));
					val2.transform.LocalIdentity<Transform>();
					val2.transform.SetParent(pTarget, false);
					Tweener val3 = TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(pTarget, 0.9f, 0.067f), (Ease)4);
					TweenCallback val4 = val5;
					if (val4 == null)
					{
						TweenCallback val6 = () =>
						{
							TweenSettingsExtensions.SetAutoKill<Tweener>(TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(pTarget, 1f, 0.067f), (Ease)4), true);
						};
						TweenCallback val7 = val6;
						val5 = val6;
						val4 = val7;
					}
					TweenSettingsExtensions.SetAutoKill<Tweener>(TweenSettingsExtensions.OnComplete<Tweener>(val3, val4), true);
				}
			}));
		}
		await UniTask.Delay(TimeSpan.FromSeconds(0.2669999897480011), false, (PlayerLoopTiming)4, default(CancellationToken));
		if ((Object)(object)icon != (Object)null)
		{
			TweenSettingsExtensions.SetAutoKill<Tweener>(TweenSettingsExtensions.SetEase<Tweener>(DOTweenModuleUI.DOFade(icon, 0f, 0.166f), (Ease)1), true);
		}
	}

	public void ResetGridBg()
	{
		if ((Object)(object)gameLevelGridBg != (Object)null)
		{
			gameLevelGridBg.ResetBg();
		}
	}

	public void UpdateActivityEnergy(bool playAnim = false)
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.UpdateActivityEnergy(playAnim);
		}
	}

	public void UpdateCollectProgress()
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.UpdateCollectProgress();
		}
	}

	[AsyncStateMachine(typeof(_003CPlayOnceEffect_003Ed__167))]
	public UniTask PlayOnceEffect(string effectName, float delay)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0041: Unknown result type (might be due to invalid IL or missing references)
		_003CPlayOnceEffect_003Ed__167 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj.effectName = effectName;
		obj.delay = delay;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CPlayOnceEffect_003Ed__167>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	public void DestroyOnceGameObject()
	{
		GameLevelDefine.RecycleGameObject(mOnceGameObject);
		mOnceGameObject = null;
	}

	public void PlayStackAnim(int num)
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.PlayMergeAnim();
		}
		PlayPlusNumber(num, "숏끜徿猐敗&\u0082厁숁끛疺洂瑫<Ú叙믗\u00af赴");
	}

	public async void PlayPlusNumber(int num, string effectName = "effect_stack_number")
	{
		HidePlusAdditional();
		additionalGo = GameLevelDefine.CreateGameObjectAsync(effectName, EffectParent);
		if (!((Object)(object)additionalGo != (Object)null))
		{
			return;
		}
		((Object)additionalGo).name = effectName;
		Text componentInChildren = additionalGo.GetComponentInChildren<Text>();
		if ((Object)(object)componentInChildren != (Object)null)
		{
			if (num > 0)
			{
				componentInChildren.text = string.Format("勡㏗\ud983ŉ", num);
			}
			else
			{
				componentInChildren.text = string.Format("ꋞú赴", num);
			}
		}
		RTLTextMeshPro componentInChildren2 = additionalGo.GetComponentInChildren<RTLTextMeshPro>();
		if ((Object)(object)componentInChildren2 != (Object)null)
		{
			if (num > 0)
			{
				((TMP_Text)componentInChildren2).text = string.Format("勡㏗\ud983ŉ", num);
			}
			else
			{
				((TMP_Text)componentInChildren2).text = string.Format("ꋞú赴", num);
			}
		}
		AudioManager.Instance.PlayEffect("숚끛玩弛瑘'Ò发곦÷赴");
		plusAdditionalDelayTween = DOVirtual.DelayedCall(1.1f, (TweenCallback)HidePlusAdditional, true);
	}

	public void HidePlusAdditional()
	{
		if (plusAdditionalDelayTween != null)
		{
			TweenExtensions.Kill(plusAdditionalDelayTween, false);
			plusAdditionalDelayTween = null;
		}
		GameLevelDefine.RecycleGameObject(additionalGo);
		additionalGo = null;
	}

	public void SaveGridData()
	{
		Singleton<GameLevelManager>.Instance.ChangeMapById(GridId, GetGameGoodsVo());
	}

	public void CreateFindEffect(GameObject go, Vector3 pos)
	{
		if (!IsDrag && (Object)(object)effectObj == (Object)null)
		{
			Transform val = null;
			if (GameItemParent.childCount > 0)
			{
				val = GameItemParent;
			}
			else if (parentLogic.DragItemParent.childCount > 0)
			{
				val = parentLogic.DragItemParent;
			}
			effectObj = Object.Instantiate<GameObject>(go, val.GetChild(0).Find("숏끟璯攐䱘\u001bÖ叕숌뀕掜琍浒7\u0092厑숞끕傭感䉛?F卅刟熯\ud9daŀ"));
			effectObj.transform.LocalIdentity<Transform>();
			effectObj.transform.SetSiblingIndex(0);
		}
	}

	private void DestoryFindEffect()
	{
		if (Object.op_Implicit((Object)(object)effectObj) && ((Component)this).gameObject.activeSelf)
		{
			ClearEffect();
		}
	}

	private void ClearEffect()
	{
		if (Object.op_Implicit((Object)(object)effectObj))
		{
			Object.Destroy((Object)(object)effectObj);
		}
		effectObj = null;
	}

	public override void Recovery()
	{
		//IL_00fb: Unknown result type (might be due to invalid IL or missing references)
		//IL_0100: Unknown result type (might be due to invalid IL or missing references)
		//IL_0141: Unknown result type (might be due to invalid IL or missing references)
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.Recovery();
			gameLevelItem = null;
		}
		SetSelectState(select: false);
		RemoveMergeHint();
		DestroyOnceGameObject();
		HidePlusAdditional();
		ResetUI();
		UpdateSize();
		base.Recovery();
		ClearEffect();
		EventManager.GetInstance().RemoveEventListener<bool>(100119, EventBanDrag);
		EventManager.GetInstance().RemoveEventListener<bool>(100057, ApplicationPause);
		EventManager.GetInstance().RemoveEventListener(203021, DestoryFindEffect);
		mIsLock = false;
		isDrag = false;
		isBanDrag = false;
		isCheckShortcutTip = false;
		mGameGoodsBase = null;
		mPlayProgress = 0f;
		mIsPassive = false;
		GridId = 0;
		TimeManager.Instance.ClearSchedule(this);
		TimeManager.Instance.ClearSchedule(mLockFrameTimerTarget);
		mapPos = Vector2.zero;
		mShapeHeadGridId = -1;
		mShapeGridIdList.Clear();
		GameLevelDefine.RecycleGameObject(CloudShowGo);
		CloudShowGo = null;
		GameLevelDefine.RecycleGameObject(CloudHideGo);
		CloudHideGo = null;
		GameItemParent.localScale = Vector3.one;
	}

	private void ResetUI()
	{
		//IL_0065: Unknown result type (might be due to invalid IL or missing references)
		//IL_0055: Unknown result type (might be due to invalid IL or missing references)
		HideGridColorBg();
		if ((Object)(object)gameLevelGridBg != (Object)null)
		{
			gameLevelGridBg.ResetBg();
		}
		CloudShowGo.SetSelfActive(active: false);
		CloudHideGo.SetSelfActive(active: false);
		if ((Object)(object)LockNodeGo.GetComponent<Image>() != (Object)null)
		{
			((Graphic)LockNodeGo.GetComponent<Image>()).color = Color.white;
		}
		GameItemParent.localScale = Vector3.one;
		if ((Object)(object)_moveItemGo != (Object)null)
		{
			_moveItemGo.DestroySelf<GameObject>();
		}
	}

	private void OnDisable()
	{
		//IL_004d: Unknown result type (might be due to invalid IL or missing references)
		GameLevelDefine.RecycleGameObject("숏끜徿成敗&\u0082厁숃끕御戄慕=\u0082厁睯x4끯x\ud937俚");
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.HideGoodsTakeout();
			gameLevelItem.HideGoodsTakeoutNewAni();
		}
		if ((Object)(object)_moveItemGo != (Object)null)
		{
			_moveItemGo.DestroySelf<GameObject>();
		}
		GameItemParent.localScale = Vector3.one;
		DestroyOnceGameObject();
		HidePlusAdditional();
		ClearEffect();
		TimeManager.GetInstance().ClearSchedule(mLockFrameTimerTarget);
	}

	private void GoodsDeleteAnalytic(string from, string method)
	{
		if (GetGameGoodsVo() != null && GetGoodsBaseVo() != null)
		{
			ObjectManager.GetInstance().gameLevelModel.LevelDeleteGoods(GetGameGoodsVo(), GetGoodsBaseVo(), GridId, from, method);
		}
	}

	public void ShowFeverFlambeEffect()
	{
		//IL_0039: Unknown result type (might be due to invalid IL or missing references)
		//IL_006f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0061: Unknown result type (might be due to invalid IL or missing references)
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			IGoodsBaseVo goodsBaseVo = GetGoodsBaseVo();
			if (goodsBaseVo == null)
			{
				return;
			}
			if (IGoodsBaseVo.IsInitiativeCreator(goodsBaseVo.type) || IGoodsBaseVo.IsInstrument(goodsBaseVo.type))
			{
				gameLevelItem.PlayFeverFlambeEffect();
			}
			else if (IGoodsBaseVo.IsPassiveCreator(goodsBaseVo.type))
			{
				if (gameLevelItem.GetPassiveGeneratorIsCoolDown())
				{
					gameLevelItem.PlayFeverFlambeCDEffect();
				}
				else
				{
					gameLevelItem.PlayFeverFlambeEffect();
				}
			}
		}
		if ((Object)(object)parentLogic != (Object)null)
		{
			parentLogic.UpdateGoodsCDTime(this);
		}
	}

	public void UFOSpeedUpFeedBack()
	{
		GameObject val = resLoader.LoadSync<GameObject>("숭끟斮爮乑<\u009a厙수끎碶弙慫4æ句숎끟掼欏晖3\u0092厑蛲«赴");
		GameObject val2 = resLoader.LoadSync<GameObject>("숭끟斮爮乑<\u009a厙수끎碶弙慫4æ句숎끟掼欏晖3\u0092厑녟䡦㘊\0逘\ud960");
		GameObject val3 = resLoader.LoadSync<GameObject>("숭끟斮爮乑<\u009a厙수끎碶弙慫4æ句숎끟掼欏晖3\u0092厑숍끖榰渎彜&ª厩뻻");
		if ((Object)(object)gameLevelItem == (Object)null || (Object)(object)val == (Object)null || (Object)(object)val2 == (Object)null || (Object)(object)val3 == (Object)null)
		{
			return;
		}
		feedback_btm = Object.Instantiate<GameObject>(val);
		feedback_btm.transform.SetParent(GetGameLevelItem().EffectParent, false);
		feedback_btm.transform.LocalIdentity<Transform>();
		feedback_mid = Object.Instantiate<GameObject>(val2);
		feedback_mid.transform.SetParent(GetGameLevelItem().ItemIconParent, false);
		feedback_mid.transform.LocalIdentity<Transform>();
		Sprite sprite = GetGameLevelItem().ItemIcon.sprite;
		((Component)feedback_mid.transform.Find("숋끕澭渌牀;Â叁숄끙溶琅彀7¾厽숋끳徴愌⽓7\u0082厁核㽼")).GetComponent<Image>().sprite = sprite;
		((Component)feedback_mid.transform.Find("숋끕澭渌牀;Â叁숄끙溶琅彀7¾厽숋끳徴戌⽓7\u0082厁刔暿\ud9c4ş")).GetComponent<Image>().sprite = sprite;
		Animation component = ((Component)GetGameLevelItem().ItemIconParent).GetComponent<Animation>();
		if ((Object)(object)component != (Object)null)
		{
			AnimationClip clip = component.GetClip("숵끼斖搶啲7\u009a厙숁끛溺椂䉫\u0013¾厽");
			if ((Object)(object)clip == (Object)null)
			{
				clip = resLoader.LoadSync<AnimationClip>("숭끟斮爮乑<\u009a厙수끎碶弙慫4æ句숎끟掼欏晖3\u0092厑숏끜徫愐彇:\u0082厁显䥱");
				if ((Object)(object)clip != (Object)null)
				{
					component.AddClip(clip, "숵끼斖搶啲7\u009a厙숁끛溺椂䉫\u0013¾厽");
					component.PlayAnim("숵끼斖搶啲7\u009a厙숁끛溺椂䉫\u0013¾厽");
				}
			}
			else
			{
				component.PlayAnim("숵끼斖搶啲7\u009a厙숁끛溺椂䉫\u0013¾厽");
			}
		}
		feedback_up = Object.Instantiate<GameObject>(val3);
		feedback_up.transform.SetParent(GetGameLevelItem().EffectTopParent, false);
		feedback_up.transform.LocalIdentity<Transform>();
	}

	public void DestroyUFOFeedBackObj()
	{
		//IL_0052: Unknown result type (might be due to invalid IL or missing references)
		//IL_007b: Unknown result type (might be due to invalid IL or missing references)
		if ((Object)(object)feedback_btm != (Object)null)
		{
			Object.Destroy((Object)(object)feedback_btm);
		}
		if ((Object)(object)feedback_mid != (Object)null)
		{
			Animation component = ((Component)GetGameLevelItem().ItemIconParent).GetComponent<Animation>();
			if ((Object)(object)component != (Object)null)
			{
				component.Stop();
			}
			GetGameLevelItem().ItemIconParent.localScale = Vector3.one;
			GetGameLevelItem().ItemIconParent.rotation = new Quaternion(0f, 0f, 0f, 0f);
			Object.Destroy((Object)(object)feedback_mid);
		}
		if ((Object)(object)feedback_up != (Object)null)
		{
			Object.Destroy((Object)(object)feedback_up);
		}
	}

	public void PlayBubbleHide(IGoodsBaseVo goodsBaseVo)
	{
		Animation BubbleAnim = null;
		string resName = "숏끜徿焐敗&\u0082厁녩汰㰬\0郡\ud94d";
		GameObject bubbleEffectGo = GameLevelDefine.CreateGameObjectSync(resName, ((Component)GameItemParent).transform);
		if ((Object)(object)bubbleEffectGo != (Object)null)
		{
			BubbleAnim = bubbleEffectGo.GetComponent<Animation>();
		}
		BubbleAnim.Stop();
		BubbleAnim.Play("숏끜徿焐敗&\u0082厁숅끊榸愆楫*ª厩숃끉溱椄潫3¾厽");
		TimeManager.GetInstance().Schedule(this, (float dt1) =>
		{
			GameLevelDefine.RecycleGameObject(bubbleEffectGo);
			BubbleAnim = null;
		}, 1f, 1, 0f);
	}

	public void ChangeGameGoodsVoDebug(GameGoodsBase goodsBase)
	{
		InitGoodsVoDebug(goodsBase);
		RemoveMergeHint();
	}

	private void InitGoodsVoDebug(GameGoodsBase goodsBase)
	{
		ResetUI();
		mGameGoodsBase = goodsBase;
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.Recovery();
			gameLevelItem = null;
		}
		if (goodsBase != null && goodsBase.GameGoods != null)
		{
			_ = GameItemParent;
			gameLevelItem = Singleton<ResCacheManager>.Instance.GetRes<GameLevelItem>();
			if ((Object)(object)gameLevelItem != (Object)null)
			{
				gameLevelItem.UpdateIconDebug(goodsBase.GameGoods, this);
				if (!((Object)(object)gameLevelItem == (Object)null))
				{
					((Component)gameLevelItem).transform.SetParent(GameItemParent);
					gameLevelItem.LocalIdentity<GameLevelItem>();
					gameLevelItem.UpdateSizeAndPos();
					_ = ((Component)gameLevelItem).transform;
				}
			}
		}
		else
		{
			EmptyParentSelectGrid();
		}
	}

	[AsyncStateMachine(typeof(_003CPlayItemVanish_003Ed__193))]
	public UniTask PlayItemVanish(GameGoodsVo _goodsVo, Action _action = null, float delay = 0f)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0049: Unknown result type (might be due to invalid IL or missing references)
		_003CPlayItemVanish_003Ed__193 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj._goodsVo = _goodsVo;
		obj._action = _action;
		obj.delay = delay;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CPlayItemVanish_003Ed__193>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	public void PlayUndoShow()
	{
		//IL_0015: Unknown result type (might be due to invalid IL or missing references)
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.PlayUndoShow();
		}
	}

	private bool GetTouchPos(out Vector2 touchPoint)
	{
		//IL_0016: Unknown result type (might be due to invalid IL or missing references)
		//IL_001b: Unknown result type (might be due to invalid IL or missing references)
		//IL_001f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0024: Unknown result type (might be due to invalid IL or missing references)
		//IL_0009: Unknown result type (might be due to invalid IL or missing references)
		//IL_000e: Unknown result type (might be due to invalid IL or missing references)
		if (Input.touchCount <= 0)
		{
			touchPoint = Vector2.zero;
			return false;
		}
		Touch touch = Input.GetTouch(0);
		touchPoint = touch.position;
		return true;
	}

	private void UpdateTargetPosition()
	{
		//IL_0046: Unknown result type (might be due to invalid IL or missing references)
		//IL_004b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0061: Expected Obj, but got Unknown
		if (isDrag && !((Object)(object)gameLevelItem == (Object)null) && !((Object)(object)Singleton<GameLevelManager>.Instance.UICamera == (Object)null) && GetTouchPos(out var touchPoint) && RectTransformUtility.ScreenPointToWorldPointInRectangle((RectTransform)((Component)gameLevelItem).transform.parent, touchPoint, Singleton<GameLevelManager>.Instance.UICamera, ref _targetPosition))
		{
			_touchMoving = true;
		}
	}

	private void LateUpdate()
	{
		//IL_002d: Unknown result type (might be due to invalid IL or missing references)
		if (isDrag && !((Object)(object)gameLevelItem == (Object)null) && _touchMoving)
		{
			((Component)gameLevelItem).transform.position = _targetPosition;
			_touchMoving = false;
			if (gameLevelItem.DragIcon.raycastTarget)
			{
				gameLevelItem.DragIcon.raycastTarget = false;
			}
		}
	}

	public void OnBeginDrag(PointerEventData e)
	{
		//IL_0279: Unknown result type (might be due to invalid IL or missing references)
		//IL_027e: Unknown result type (might be due to invalid IL or missing references)
		//IL_02a9: Unknown result type (might be due to invalid IL or missing references)
		vibarating = false;
		if (isBanDrag || IsLock || (Object)(object)gameLevelItem == (Object)null)
		{
			return;
		}
		GameGoodsVo gameGoodsVo = GetGameGoodsVo();
		IGoodsBaseVo goodsBaseVo = GetGoodsBaseVo();
		if (gameGoodsVo == null || goodsBaseVo == null || IGoodsBaseVo.CannotDrag(gameGoodsVo.GoodsState) || goodsBaseVo == null || goodsBaseVo.GetShapeData() != null)
		{
			return;
		}
		RemoveMergeHint();
		EventManager.GetInstance().DispatchEvent(203021);
		EventManager.GetInstance().DispatchEvent(203039);
		EventManager.GetInstance().DispatchEvent(203041);
		EventManager.GetInstance().DispatchEvent(203248);
		if (MonoSingleton<GuideManager>.Instance.IsInGuide() && ((IGoodsBaseVo.IsInstrument((int)GetGameGoodsBase().GoodsType) && MonoSingleton<GuideManager>.Instance.CurrentGuideName() != "숎끏ㆰ式䝑\rÉ又❣\u0a4a") || ((MonoSingleton<GuideManager>.Instance.CurrentGuideName() == "숎끏㢰式䝑\rå古뺨" || MonoSingleton<GuideManager>.Instance.CurrentGuideName() == "숎끏嚰㈏䝑\r^卝蘓ö赴" || MonoSingleton<GuideManager>.Instance.CurrentGuideName() == "숎끏嚰㌏䝑\r^卝蘓ö赴") && GetGameGoodsBase().GoodsType == GameGoodsType.InitiativeProduce) || (GetGameGoodsBase().GoodsType == GameGoodsType.AutoConversion && (MonoSingleton<GuideManager>.Instance.CurrentGuideName() == "숎끏㢰式䝑\rå古❣\u0a4c" || MonoSingleton<GuideManager>.Instance.CurrentGuideName() == "숎끏㢰式䝑\rå古❣\u0a4d" || MonoSingleton<GuideManager>.Instance.CurrentGuideName() == "숎끏㢰式䝑\rå古❣\u0a4e" || MonoSingleton<GuideManager>.Instance.CurrentGuideName() == "숎끏㢰式䝑\rå古❣\u0a4f"))))
		{
			return;
		}
		if ((Object)(object)((Component)gameLevelItem).transform.parent == (Object)(object)parentLogic.DragItemParent)
		{
			if (MonoSingleton<GuideManager>.Instance.IsInGuide())
			{
				return;
			}
			InterruptItemAnim();
		}
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.SetItemScaleAnim(show: false);
		}
		isDrag = true;
		parentLogic.DragGoods = true;
		isCheckShortcutTip = false;
		gameLevelItem.SetItemBackground(active: false);
		gameLevelItem.SetBingGoIcon(active: false);
		if (!MonoSingleton<GuideManager>.Instance.IsInGuide())
		{
			((Component)gameLevelItem).transform.SetParent(parentLogic.DragItemParent);
		}
		GameLevelManager.TryReportGoodsLockOperation(gameGoodsVo, goodsBaseVo, GetGridId());
		OnSelectGrid();
		SetSelectState(select: false);
		if (MonoSingleton<GuideManager>.Instance.IsInGuide())
		{
			((Component)this).transform.SetAsLastSibling();
			Vector3 localPosition = ((Component)gameLevelItem.ItemIcon).transform.localPosition;
			GuideDepth -= 10;
			localPosition.z = GuideDepth;
			((Component)gameLevelItem.ItemIcon).transform.localPosition = localPosition;
		}
		if (goodsBaseVo.type == 15)
		{
			if ((Object)(object)parentLogic != (Object)null)
			{
				parentLogic.RemoveMergeHint();
			}
			ShowAdditionalHint(goodsBaseVo, GetGridId());
		}
		if (goodsBaseVo.type == 16)
		{
			if ((Object)(object)parentLogic != (Object)null)
			{
				parentLogic.RemoveMergeHint();
			}
			ShowSplitHint(gameGoodsVo, GetGridId());
		}
		if (goodsBaseVo.type == 23)
		{
			if ((Object)(object)parentLogic != (Object)null)
			{
				parentLogic.RemoveMergeHint();
			}
			ShowCopyHint(goodsBaseVo, GetGridId());
		}
		if (goodsBaseVo.type == 24)
		{
			if ((Object)(object)parentLogic != (Object)null)
			{
				parentLogic.RemoveMergeHint();
			}
			ShowGeneratorAcceleratorHint(goodsBaseVo, GetGridId());
		}
		if (goodsBaseVo.type == 26)
		{
			if ((Object)(object)parentLogic != (Object)null)
			{
				parentLogic.RemoveMergeHint();
			}
			ShowAutoConversionHint(goodsBaseVo, GetGridId());
		}
		if (goodsBaseVo.type == 27)
		{
			if ((Object)(object)parentLogic != (Object)null)
			{
				parentLogic.RemoveMergeHint();
			}
			ShowUpgradeHint(goodsBaseVo, GetGridId());
		}
	}

	public void OnDragGuide(GameObject obj)
	{
		//IL_0005: Unknown result type (might be due to invalid IL or missing references)
		//IL_000b: Expected Obj, but got Unknown
		//IL_000e: Unknown result type (might be due to invalid IL or missing references)
		//IL_001c: Unknown result type (might be due to invalid IL or missing references)
		PointerEventData val = new PointerEventData(EventSystem.current);
		RaycastResult pointerCurrentRaycast = default;
		pointerCurrentRaycast.gameObject = obj;
		val.pointerCurrentRaycast = pointerCurrentRaycast;
		OnDrag(val);
	}

	public void OnDrag(PointerEventData e)
	{
		//IL_01de: Unknown result type (might be due to invalid IL or missing references)
		//IL_01c9: Unknown result type (might be due to invalid IL or missing references)
		if (!isDrag || (Object)(object)gameLevelItem == (Object)null || (Object)(object)Singleton<GameLevelManager>.Instance.UICamera == (Object)null)
		{
			return;
		}
		UpdateTargetPosition();
		GameObject touchObject = GetTouchObject(e);
		if ((Object)(object)touchObject == (Object)null)
		{
			return;
		}
		if (!vibarating)
		{
			UserRichTapController.PlayEffect("숵끛掩欶桄;\u0092厑嬧予");
		}
		vibarating = true;
		if (touchObject.CompareTag("鯤¿赴"))
		{
			HideMergeHintEffect();
			if ((Object)(object)parentLogic != (Object)null)
			{
				parentLogic.bagButtonAni.PlayBagHintEffect();
			}
		}
		else if (touchObject.CompareTag("參橯ā讑靳"))
		{
			if ((Object)(object)parentLogic != (Object)null)
			{
				parentLogic.bagButtonAni.HideBagHintEffect();
			}
			GameLevelItem component = touchObject.GetComponent<GameLevelItem>();
			if ((Object)(object)component == (Object)null)
			{
				HideMergeHintEffect();
				return;
			}
			GameLevelGrid gameLevelGrid = component.GetGameLevelGrid();
			if ((Object)(object)gameLevelGrid == (Object)null)
			{
				HideMergeHintEffect();
			}
			else
			{
				if (gameLevelGrid.GetGridId() == GetGridId())
				{
					return;
				}
				GameGoodsVo gameGoodsVo = gameLevelGrid.GetGameGoodsVo();
				if (gameGoodsVo == null)
				{
					Log.E("쉥ᣱḁ崄寵咄⦧匘끗ӻ渏쯃槎克Ｕ㮆뒤ᘄ苣楗\ud864孿댩←隬꼶▟う솕汛ꥠǅ꩒୪뷴℄㳵咳ヂ匳㯘ㅐƀ訑넚" + gameLevelGrid.GetGridId());
					HideMergeHintEffect();
				}
				else if (IGoodsBaseVo.CannotMerge(gameGoodsVo.GoodsState) || gameLevelGrid.IsLock)
				{
					HideMergeHintEffect();
				}
				else if (Singleton<GameLevelManager>.Instance.GetNextLevelGoods(gameGoodsVo, GetGameGoodsVo()) == null)
				{
					HideMergeHintEffect();
				}
				else if (!GetGameGoodsBase().CanInstrumentMergeStatus() || !gameLevelGrid.GetGameGoodsBase().CanInstrumentMergeStatus())
				{
					HideMergeHintEffect();
				}
				else if ((Object)(object)lastPlayEffectItem != (Object)null)
				{
					if (lastPlayEffectItem.GetGameLevelGrid().GetGridId() != component.GetGameLevelGrid().GetGridId())
					{
						HideMergeHintEffect();
						component.PlayMergeHint(component.GetGameGoodsVo);
						lastPlayEffectItem = component;
					}
				}
				else
				{
					component.PlayMergeHint(component.GetGameGoodsVo);
					lastPlayEffectItem = component;
				}
			}
		}
		else
		{
			HideMergeHintEffect();
			if ((Object)(object)parentLogic != (Object)null)
			{
				parentLogic.bagButtonAni.HideBagHintEffect();
			}
		}
	}

	private void HideMergeHintEffect()
	{
		if ((Object)(object)lastPlayEffectItem != (Object)null)
		{
			lastPlayEffectItem.PlayMergeHintHide();
			lastPlayEffectItem = null;
		}
	}

	public void OnEndDragGuide(GameObject obj)
	{
		//IL_0005: Unknown result type (might be due to invalid IL or missing references)
		//IL_000b: Expected Obj, but got Unknown
		//IL_000e: Unknown result type (might be due to invalid IL or missing references)
		//IL_001c: Unknown result type (might be due to invalid IL or missing references)
		PointerEventData val = new PointerEventData(EventSystem.current);
		RaycastResult pointerCurrentRaycast = default;
		pointerCurrentRaycast.gameObject = obj;
		val.pointerCurrentRaycast = pointerCurrentRaycast;
		OnEndDrag(val);
	}

	private GameObject GetTouchObject(PointerEventData e)
	{
		//IL_021c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0221: Unknown result type (might be due to invalid IL or missing references)
		//IL_004d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0052: Unknown result type (might be due to invalid IL or missing references)
		//IL_0057: Unknown result type (might be due to invalid IL or missing references)
		//IL_005c: Unknown result type (might be due to invalid IL or missing references)
		//IL_014d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0152: Unknown result type (might be due to invalid IL or missing references)
		//IL_0188: Unknown result type (might be due to invalid IL or missing references)
		//IL_018d: Unknown result type (might be due to invalid IL or missing references)
		//IL_01a7: Unknown result type (might be due to invalid IL or missing references)
		//IL_01a9: Unknown result type (might be due to invalid IL or missing references)
		//IL_0172: Unknown result type (might be due to invalid IL or missing references)
		//IL_0177: Unknown result type (might be due to invalid IL or missing references)
		//IL_017c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0181: Unknown result type (might be due to invalid IL or missing references)
		GameObject val = null;
		if (GameLevelViewLogic.MergeAdsorb && !MonoSingleton<GuideManager>.Instance.IsInGuide() && (Object)(object)parentLogic != (Object)null)
		{
			Dictionary<int, GameLevelGrid> gridObjectDic = parentLogic.GridObjectDic;
			Vector2 val2 = Vector2.op_Implicit(((Component)parentLogic).transform.InverseTransformPoint(((Component)this.gameLevelItem).transform.position));
			float num = GameLevelViewLogic.GridWidth / 2f;
			float num2 = 99999f;
			int num3 = 99999;
			GameLevelGrid gameLevelGrid = this.gameLevelItem.GetGameLevelGrid();
			GameGoodsBase gameGoodsBase = GetGameGoodsBase();
			GameGoodsVo gameGoodsVo = GetGameGoodsVo();
			foreach (KeyValuePair<int, GameLevelGrid> item in gridObjectDic)
			{
				GameLevelGrid value = item.Value;
				GameGoodsBase gameGoodsBase2 = value.GetGameGoodsBase();
				if (((Object)(object)gameLevelGrid != (Object)null && value.GetGridId() == gameLevelGrid.GetGridId()) || value.IsLock)
				{
					continue;
				}
				GameGoodsVo gameGoodsVo2 = value.GetGameGoodsVo();
				if ((gameGoodsVo2 != null && gameGoodsVo != null && (gameGoodsVo.GoodsState == GameGoodsState.Working || gameGoodsVo2.GoodsState == GameGoodsState.Working)) || gameGoodsBase == null || gameGoodsBase2 == null || !gameGoodsBase.CanInstrumentMergeStatus() || !gameGoodsBase2.CanInstrumentMergeStatus() || Singleton<GameLevelManager>.Instance.GetNextLevelGoods(gameGoodsVo2, gameGoodsVo) == null)
				{
					continue;
				}
				if (value.mapPos == Vector2.zero)
				{
					value.mapPos = Vector2.op_Implicit(((Component)parentLogic).transform.InverseTransformPoint(((Component)value).transform.position));
				}
				Vector2 val3 = value.mapPos;
				val3.x += num;
				val3.y -= num;
				float num4 = Vector2.Distance(val3, val2);
				if (!(num4 > GameLevelViewLogic.MergeAdsorbRadius) && !(num2 < num4) && (num2 != num4 || num3 >= value.GetGridId()))
				{
					GameLevelItem gameLevelItem = value.GetGameLevelItem();
					if ((Object)(object)gameLevelItem != (Object)null)
					{
						num3 = value.GetGridId();
						num2 = num4;
						val = ((Component)gameLevelItem).gameObject;
					}
				}
			}
		}
		if ((Object)(object)val == (Object)null)
		{
			RaycastResult pointerCurrentRaycast = e.pointerCurrentRaycast;
			val = pointerCurrentRaycast.gameObject;
		}
		return touchShapeLogic(val);
	}

	private GameObject touchShapeLogic(GameObject target)
	{
		if ((Object)(object)target == (Object)null)
		{
			return target;
		}
		if (!target.CompareTag("刚泳\ud9efŐ"))
		{
			return target;
		}
		GameLevelGrid component = target.GetComponent<GameLevelGrid>();
		if ((Object)(object)component == (Object)null)
		{
			return target;
		}
		GameLevelGrid shapeHeadGrid = component.GetShapeHeadGrid();
		if ((Object)(object)shapeHeadGrid == (Object)null)
		{
			return target;
		}
		GameLevelItem gameLevelItem = shapeHeadGrid.GetGameLevelItem();
		if ((Object)(object)gameLevelItem == (Object)null)
		{
			return target;
		}
		GameObject gameObject = ((Component)gameLevelItem).gameObject;
		if ((Object)(object)gameObject == (Object)null)
		{
			return target;
		}
		return gameObject;
	}

	public void OnEndDrag(PointerEventData e)
	{
		HideMergeHintEffect();
		HideAdditionalHint();
		HideSplitHint();
		HideCopyHint();
		HideGeneratorAcceleratorHint();
		HideAutoConversionHint();
		HideUpgradeHint();
		if ((Object)(object)parentLogic != (Object)null)
		{
			parentLogic.bagButtonAni.HideBagHintEffect();
		}
		if (!isDrag)
		{
			return;
		}
		isDrag = false;
		if ((Object)(object)gameLevelItem == (Object)null)
		{
			ResetItem();
			return;
		}
		GameObject touchObject = GetTouchObject(e);
		gameLevelItem.DragIcon.raycastTarget = true;
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.SetItemScaleAnim(show: true);
		}
		if ((Object)(object)touchObject == (Object)null)
		{
			ResetItem();
			return;
		}
		GameGoodsVo gameGoodsVo = GetGameGoodsVo();
		if (gameGoodsVo == null)
		{
			ResetItem();
			return;
		}
		vibarating = false;
		UserRichTapController.PlayEffect("숵끛璩搶桄'Ö叕뛫ç赴");
		int goodsID = gameGoodsVo.goodsID;
		if (touchObject.CompareTag("刚泳\ud9efŐ"))
		{
			GameLevelGrid component = touchObject.GetComponent<GameLevelGrid>();
			if ((Object)(object)component != (Object)null && (Object)(object)component.GetGameLevelItem() != (Object)null && component.GetGridId() != GetGridId())
			{
				component.InterruptItemAnim();
			}
			EndDragToTargetGrid(component, goodsID);
		}
		else if (touchObject.CompareTag("參橯ā讑靳"))
		{
			GameLevelItem component2 = touchObject.GetComponent<GameLevelItem>();
			if ((Object)(object)component2 == (Object)null)
			{
				ResetItem();
				return;
			}
			GameLevelGrid gameLevelGrid = component2.GetGameLevelGrid();
			EndDragToTargetGrid(gameLevelGrid, goodsID);
		}
		else if (touchObject.CompareTag("鯤¿赴"))
		{
			if (CanPack(touchObject.transform))
			{
				EventManager.GetInstance().DispatchEvent(100124, gameGoodsVo.goodsID);
				if (Singleton<GameLevelManager>.Instance.AddItemToGameBag(gameGoodsVo))
				{
					int goodsID2 = gameGoodsVo.goodsID;
					GameLevelDefine.ClearOrderNeedLowLevelGoods();
					GameLevelDefine.PutinOrTakeoutBagGoods(gameGoodsVo, takeout: false);
					if ((Object)(object)GetGameLevelItem() != (Object)null)
					{
						MonoSingleton<GuideWeakManager>.Instance.OnlyRemoveShowingFingerByTransform(((Component)GetGameLevelItem()).transform);
					}
					ChangeGameGoodsVo(null, "匐橯ā讅驧");
					EventManager.GetInstance().DispatchEvent(100047);
					ObjectManager.GetInstance().gameLevelModel.RefreshGridNum = true;
					GameLevelDefine.CheckUpdateOrderView(goodsID2);
					if ((Object)(object)parentLogic != (Object)null)
					{
						parentLogic.bagButtonAni.PlayBagPutInEffect();
					}
				}
				else
				{
					ResetItem();
					ViewManager.Instance.ShowTip("숋끥溻漌呓\r¾厽수끗玶瀙彑\rÒ发뫦¿赴", null, touchObject.transform);
					Singleton<PopupManager>.Instance.ResetShowPopups(EPopupFromScene.S_BagGrid_Deficiency);
					EventManager.GetInstance().DispatchEvent(202123, VibrateManager.VibrateType.Intense);
				}
			}
			else
			{
				ResetItem();
			}
		}
		else
		{
			ResetItem();
		}
		isDrag = false;
		if ((Object)(object)parentLogic != (Object)null)
		{
			parentLogic.DragGoods = false;
		}
		if (isCheckShortcutTip)
		{
			isCheckShortcutTip = false;
		}
		else
		{
			EventManager.GetInstance().DispatchEvent(203042);
		}
	}

	private void EndDragToTargetGrid(GameLevelGrid targetGrid, int dragGoodsId = 0)
	{
		//IL_00ea: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ef: Unknown result type (might be due to invalid IL or missing references)
		//IL_0132: Unknown result type (might be due to invalid IL or missing references)
		//IL_02fa: Unknown result type (might be due to invalid IL or missing references)
		//IL_02ff: Unknown result type (might be due to invalid IL or missing references)
		//IL_0369: Unknown result type (might be due to invalid IL or missing references)
		//IL_039c: Unknown result type (might be due to invalid IL or missing references)
		if ((Object)(object)targetGrid == (Object)null)
		{
			Log.E("쉥ᣱḁ崄寵咄⦧匘쉊끛䞾牋吉r\"匡숭끞ヵ\ueecc椽本⧅┰\uaac8ｷ쾷\ue161\u07b0癮굆Დꈖ뀖\uab0f䓃潝犓*卻玆" + dragGoodsId);
			ResetItem();
			return;
		}
		int gridId = targetGrid.GetGridId();
		if (gridId == GetGridId())
		{
			ResetItem();
			return;
		}
		if (!parentLogic.CanDragToGrid(gridId))
		{
			ResetItem();
			return;
		}
		if (targetGrid.IsLock)
		{
			ResetItem();
			return;
		}
		GameGoodsVo gameGoodsVo = GetGameGoodsVo();
		GameGoodsVo gameGoodsVo2 = targetGrid.GetGameGoodsVo();
		IGoodsBaseVo goodsBaseVo = GetGoodsBaseVo();
		IGoodsBaseVo goodsBaseVo2 = targetGrid.GetGoodsBaseVo();
		GameLevelItem gameLevelItem = targetGrid.GetGameLevelItem();
		if (gameGoodsVo == null)
		{
			Log.E("쉥ᣱḁ崄寵咄⦧匘슉ᖊ⹇꠸孧弟ㅠş둊≓섘敋葳3º厹숎끕澶\u200f䝇\u0004Â叁谮⩀샘䦽㪜刻⨌卭ഘ③" + dragGoodsId);
			ResetItem();
			return;
		}
		if (goodsBaseVo == null)
		{
			Log.E("쉥ᣱḁ崄寵咄⦧匘슉ᖊ⹇꠸孧弟ㅠş둊≓쌘潋葽\u0015Â叁숋끉嚛漌摇7^卝슽\ufe00\ue3a3셬\u20e2拺㦪\u07a8邘+\ue7f4" + dragGoodsId);
			ResetItem();
			return;
		}
		if (gameGoodsVo2 == null || goodsBaseVo2 == null)
		{
			Vector3 position = ((Component)this.gameLevelItem).transform.position;
			targetGrid.ChangeGridGameGoods(mGameGoodsBase, this.gameLevelItem, "划擳\ud9ccœ");
			targetGrid.OnSelectGrid();
			ChangeGridGameGoods(null, null, "划擳\ud9ccœ");
			gameLevelItem = targetGrid.GetGameLevelItem();
			if ((Object)(object)gameLevelItem != (Object)null)
			{
				gameLevelItem.PlayItemMove(position, 0.2f, exchange: false);
				if (targetGrid.GetGoodsBaseVo() != null)
				{
					Singleton<GameLevelManager>.Instance.PlayAudio(23, 0, IndependentType.None, targetGrid.GetGoodsBaseVo().goodsID);
				}
			}
			return;
		}
		if ((Object)(object)gameLevelItem == (Object)null)
		{
			ResetItem();
			return;
		}
		if (IGoodsBaseVo.CannotMerge(gameGoodsVo2.GoodsState))
		{
			ResetItem();
			return;
		}
		if (gameGoodsVo2.GoodsState == GameGoodsState.AwaitRemove)
		{
			if (gameGoodsVo2.goodsID == gameGoodsVo.goodsID)
			{
				Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(gameGoodsVo.goodsID, -1, gameGoodsVo);
				targetGrid.ChangeGameGoodsVo(null, "划擳\ud9ccœ");
				ChangeGameGoodsVo(null, "划擳\ud9ccœ");
				parentLogic.MergeSuccess(targetGrid, this);
			}
			else
			{
				ResetItem();
			}
			return;
		}
		int goodsID = gameGoodsVo.goodsID;
		IGoodsBaseVo nextLevelGoods = Singleton<GameLevelManager>.Instance.GetNextLevelGoods(gameGoodsVo2, gameGoodsVo, showTip: true, targetGrid.GameItemParent);
		if (nextLevelGoods == null)
		{
			if (gameGoodsVo2.GoodsState == GameGoodsState.Lock)
			{
				ResetItem();
				return;
			}
			int goodsID2 = gameGoodsVo.goodsID;
			if (!targetGrid.GetGameGoodsBase().CheckEligible(this))
			{
				if (CheckMakingHint(gameGoodsVo2, goodsBaseVo2, gameGoodsVo, goodsBaseVo))
				{
					ResetItem();
				}
				else if (goodsBaseVo.type == 15 && AdditionalProduceCardEndDrag(targetGrid))
				{
					MonoSingleton<PlayerStateManager>.Instance.MarkStrongSignal("Ꮦ쾝\uf4c2乙셴詂");
				}
				else
				{
					if (goodsBaseVo.type == 23 && CopyCardEndDrag(targetGrid))
					{
						return;
					}
					if (goodsBaseVo.type == 24 && GeneratorAcceleratorCardEndDrag(targetGrid))
					{
						MonoSingleton<PlayerStateManager>.Instance.MarkStrongSignal("ϖ匟扁٨劢㵍\ue9c9");
					}
					else
					{
						if ((goodsBaseVo.type == 27 && UpgradeCardEndDrag(targetGrid)) || (goodsBaseVo.type == 16 && SplitGoodsEndDrag(targetGrid)) || (GameLevelDefine.IsGoodsStackable(goodsBaseVo) && StackGoodsEndDrag(targetGrid)))
						{
							return;
						}
						if (goodsBaseVo.GetShapeData() != null || goodsBaseVo2.GetShapeData() != null)
						{
							ResetItem();
							return;
						}
						Vector3 position2 = ((Component)this.gameLevelItem).transform.position;
						GameGoodsBase gameGoodsBase = targetGrid.GetGameGoodsBase();
						targetGrid.ChangeGridGameGoods(mGameGoodsBase, this.gameLevelItem, "숍끈碸挎摫7æ句匬橡ā讝陥");
						targetGrid.OnSelectGrid();
						((Component)gameLevelItem).transform.SetParent(parentLogic.DragItemParent);
						ChangeGridGameGoods(gameGoodsBase, gameLevelItem, "숍끈碸挎摫7æ句匬橡ā讝陥");
						if ((Object)(object)this.gameLevelItem != (Object)null)
						{
							this.gameLevelItem.PlayItemMove(targetGrid.GameItemParent.position);
						}
						if ((Object)(object)targetGrid != (Object)null && (Object)(object)targetGrid.GetGameLevelItem() != (Object)null)
						{
							targetGrid.GetGameLevelItem().PlayItemMove(position2, 0.2f);
						}
					}
				}
			}
			else
			{
				GameOrderMatBubbleLogic.JudgeDispatcherYellowBubble(goodsID2, targetGrid.GetGameGoodsVo());
				GameLevelDefine.CheckUpdateOrderMatState(goodsID2);
				Singleton<GameLevelManager>.Instance.PlayAudio(11, 0, IndependentType.None, gameGoodsVo2.goodsID);
				targetGrid.OnSelectGrid();
				MonoSingleton<GuideManager>.Instance.CheckTakeoutMaterialGuide(gameGoodsVo2, goodsID2);
			}
			return;
		}
		bool flag = true;
		if (!GetGameGoodsBase().CanInstrumentMergeStatus() || !targetGrid.GetGameGoodsBase().CanInstrumentMergeStatus())
		{
			flag = false;
			ViewManager.Instance.ShowTip("숅끥榮渆呆9ª厩숄끥沬攅杕0¶厵녟呭ℤ\0逕\ud969", null, targetGrid.GameItemParent);
		}
		if (flag)
		{
			GameLevelDefine.MapGoodsAnalytics(gameGoodsVo.goodsID, 2, 3);
			Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(gameGoodsVo.goodsID, -1, gameGoodsVo);
			GameLevelDefine.ChangeGeneratorUUIDToDisk(gameGoodsVo, -1);
			if (gameGoodsVo2.GoodsState != GameGoodsState.Lock)
			{
				Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(gameGoodsVo2.goodsID, -1, gameGoodsVo2);
				GameLevelDefine.ChangeGeneratorUUIDToDisk(gameGoodsVo2, -1);
			}
			else
			{
				GameLevelDefine.ChangeUUIDCache(gameGoodsVo2, -1);
				ObjectManager.GetInstance().gameLevelModel.RefreshUnlockGridNum = true;
			}
			int num = 0;
			int num2 = 0;
			int num3 = 0;
			List<int> list = new List<int>();
			if (gameGoodsVo2 != null)
			{
				num += gameGoodsVo2.InitiativeSurplusNumber;
				num2 += gameGoodsVo2.PassiveSurplusNumber;
				num3 += gameGoodsVo2.InitiativeAdditionalNumber;
				list = list.Concat(gameGoodsVo2.MergeDropList).ToList();
			}
			if (gameGoodsVo != null)
			{
				num += gameGoodsVo.InitiativeSurplusNumber;
				num2 += gameGoodsVo.PassiveSurplusNumber;
				num3 += gameGoodsVo.InitiativeAdditionalNumber;
				list = list.Concat(gameGoodsVo.MergeDropList).ToList();
			}
			GameGoodsBase gameGoodsBaseById = Singleton<GameLevelManager>.Instance.GetGameGoodsBaseById(nextLevelGoods.goodsID, targetGrid, null, num, num2, num3, excludeZero: true, addMergeDrop: true, list);
			Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(nextLevelGoods.goodsID, 1, gameGoodsBaseById.GameGoods);
			if ((Object)(object)parentLogic != (Object)null)
			{
				parentLogic.MergeSuccessCheckUpdate(nextLevelGoods.goodsID, goodsID);
			}
			targetGrid.ChangeGameGoodsVo(gameGoodsBaseById, "匩橥ā讝詥", updateOrder: false);
			targetGrid.OnSelectGrid();
			GameLevelDefine.MapGoodsAnalytics(nextLevelGoods.goodsID, 1, 1, 77);
			ChangeGameGoodsVo(null, "匩橥ā讝詥");
			parentLogic.MergeSuccess(targetGrid, this);
			goodsBaseVo2 = targetGrid.GetGoodsBaseVo();
			gameGoodsVo2 = targetGrid.GetGameGoodsVo();
			bool flag2 = false;
			if (IGoodsBaseVo.IsCreator(goodsBaseVo2.type) || IGoodsBaseVo.IsInstrument(goodsBaseVo2.type))
			{
				Singleton<GameLevelManager>.Instance.ChangeGeneratorOrMachine(gameGoodsVo2, 2);
				flag2 = true;
			}
			if (goodsBaseVo2.level >= 7)
			{
				Singleton<GameLevelManager>.Instance.SaveGameMapToDisk();
				flag2 = true;
			}
			if (flag2)
			{
				ObjectManager.GetInstance().SaveToDisk();
			}
		}
		else
		{
			ResetItem();
		}
	}

	private bool CheckMakingHint(GameGoodsVo machine, IGoodsBaseVo machineConfig, GameGoodsVo material, IGoodsBaseVo materialConfig)
	{
		if (machine == null || machineConfig == null || material == null || materialConfig == null)
		{
			return false;
		}
		if (!IGoodsBaseVo.IsPermanentlyInstrument(machineConfig.type))
		{
			return false;
		}
		if (materialConfig.type != 1 && materialConfig.type != 3)
		{
			return false;
		}
		IGoodsInstrumentVO goodsInstrumentVO = Singleton<GameLevelManager>.Instance.GetGoodsInstrumentVO(machineConfig.goodsID);
		if (goodsInstrumentVO == null)
		{
			return false;
		}
		if (goodsInstrumentVO.GetMakingGoodsByMaterials(new List<int> { materialConfig.goodsID }) <= 0)
		{
			ViewManager.Instance.ShowTip("숎끕䶶意䝇\r:匹匐橣ā诀進");
			return true;
		}
		if (machine.GoodsState == GameGoodsState.Working)
		{
			ViewManager.Instance.ShowTip("숎끕䶶意䝇\r:匹匐橣ā诀週");
			return true;
		}
		List<int> list = new List<int>();
		for (int i = 0; i < machine.MakeMaterials.Count; i++)
		{
			list.Add(machine.MakeMaterials[i].goodsID);
		}
		list.Add(materialConfig.goodsID);
		if (goodsInstrumentVO.GetMakingGoodsByMaterials(list) <= 0)
		{
			ViewManager.Instance.ShowTip("숎끕䶶意䝇\r:匹匐橣ā诀逳");
			return true;
		}
		return false;
	}

	private void ConsumeDragGoodsUse(string from)
	{
		GameGoodsVo gameGoodsVo = GetGameGoodsVo();
		if (gameGoodsVo != null)
		{
			gameGoodsVo.AddGoodsUses(-1);
			Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(gameGoodsVo.goodsID, -1, gameGoodsVo);
			Singleton<GameLevelManager>.Instance.StackUseAnalytic(gameGoodsVo, 1);
			if (gameGoodsVo.GoodsUses <= 0)
			{
				ChangeGameGoodsVo(null, from);
				return;
			}
			UpdateGameLevelItem();
			SaveGridData();
			ResetItem();
		}
	}

	private bool ApplyStackMerge(GameLevelGrid targetGrid, string from)
	{
		GameGoodsVo gameGoodsVo = GetGameGoodsVo();
		GameGoodsVo gameGoodsVo2 = targetGrid.GetGameGoodsVo();
		if (gameGoodsVo == null || gameGoodsVo2 == null)
		{
			return false;
		}
		int goodsUses = gameGoodsVo2.GoodsUses;
		int goodsUses2 = gameGoodsVo.GoodsUses;
		if (goodsUses >= 99 || goodsUses2 >= 99)
		{
			ViewManager.GetInstance().ShowTip("숚끈撶搛火3\u0096厕숅끍徫理獚5\u0082厁냘û赴");
			return false;
		}
		int num = 99 - goodsUses;
		if (goodsUses2 <= num)
		{
			gameGoodsVo2.AddGoodsUses(goodsUses2);
			if (gameGoodsVo2.StackID <= 0)
			{
				gameGoodsVo2.SetStackID();
			}
			if (goodsUses == 1)
			{
				ObjectManager.GetInstance().gameLevelModel.AddStackTotal(1);
			}
			if (goodsUses2 == 1)
			{
				ObjectManager.GetInstance().gameLevelModel.AddStackTotal(1);
			}
			targetGrid.SaveGridData();
			targetGrid.OnSelectGrid();
			targetGrid.UpdateGameLevelItem();
			targetGrid.PlayStackAnim(goodsUses2);
			ChangeGameGoodsVo(null, from);
			Singleton<GameLevelManager>.Instance.GoodsStackAnalytic("숉끎枸漊獟\r¢厡뛘«赴", gameGoodsVo2.goodsID, gameGoodsVo2.StackID, goodsUses2, goodsUses, gameGoodsVo2.GoodsUses);
		}
		else
		{
			gameGoodsVo2.AddGoodsUses(num);
			if (gameGoodsVo2.StackID <= 0)
			{
				gameGoodsVo2.SetStackID();
			}
			gameGoodsVo.AddGoodsUses(-num);
			if (goodsUses == 1)
			{
				ObjectManager.GetInstance().gameLevelModel.AddStackTotal(1);
			}
			if (goodsUses2 == 1)
			{
				ObjectManager.GetInstance().gameLevelModel.AddStackTotal(1);
			}
			targetGrid.SaveGridData();
			targetGrid.OnSelectGrid();
			targetGrid.UpdateGameLevelItem();
			targetGrid.PlayStackAnim(num);
			UpdateGameLevelItem();
			SaveGridData();
			Singleton<GameLevelManager>.Instance.GoodsStackAnalytic("숉끎枸漊獟\r¢厡뛘«赴", gameGoodsVo2.goodsID, gameGoodsVo2.StackID, num, goodsUses, gameGoodsVo2.GoodsUses);
			ResetItem();
			ViewManager.GetInstance().ShowTip("숚끈撶搛火3\u0096厕숅끍徫理獚5\u0082厁냘û赴");
		}
		return true;
	}

	private bool StackGoodsEndDrag(GameLevelGrid targetGrid)
	{
		IGoodsBaseVo goodsBaseVo = GetGoodsBaseVo();
		IGoodsBaseVo goodsBaseVo2 = targetGrid.GetGoodsBaseVo();
		if (goodsBaseVo == null || goodsBaseVo2 == null)
		{
			return false;
		}
		if (goodsBaseVo.goodsID != goodsBaseVo2.goodsID)
		{
			return false;
		}
		if (!GameLevelDefine.IsGoodsStackable(goodsBaseVo))
		{
			return false;
		}
		if (!GameLevelDefine.IsGoodsStackable(goodsBaseVo2))
		{
			return false;
		}
		return ApplyStackMerge(targetGrid, "숉끎涸攊獟\rº厹\uabe6§赴");
	}

	private bool AdditionalProduceCardEndDrag(GameLevelGrid targetGrid)
	{
		IGoodsBaseVo goodsBaseVo = GetGoodsBaseVo();
		IGoodsBaseVo goodsBaseVo2 = targetGrid.GetGoodsBaseVo();
		GameGoodsVo gameGoodsVo = targetGrid.GetGameGoodsVo();
		if (goodsBaseVo == null || goodsBaseVo2 == null || gameGoodsVo == null)
		{
			return false;
		}
		if (goodsBaseVo.goodsID == goodsBaseVo2.goodsID && GameLevelDefine.IsGoodsStackable(goodsBaseVo) && GameLevelDefine.IsGoodsStackable(goodsBaseVo2))
		{
			return ApplyStackMerge(targetGrid, "숎끈斶挏灁1\u009a厙숵끈犽朶慙7Î反뻹");
		}
		if (!IGoodsBaseVo.IsCreator(goodsBaseVo2.type))
		{
			return false;
		}
		IGoodsCollectVo goodsCollectVoById = Singleton<GameLevelManager>.Instance.GetGoodsCollectVoById(goodsBaseVo.goodsID);
		if (goodsCollectVoById == null)
		{
			return false;
		}
		if (goodsCollectVoById.itemId != 0 && goodsCollectVoById.itemId != goodsBaseVo2.series)
		{
			return false;
		}
		gameGoodsVo.InitiativeAdditionalNumber += goodsCollectVoById.amount;
		targetGrid.SaveGridData();
		targetGrid.OnSelectGrid(isProduce: false, playSelectAnim: true, isShowQuick: true);
		targetGrid.UpdateGameLevelItem();
		targetGrid.PlayPlusAdditional(goodsCollectVoById.amount, "숏끜徿挐敗&\u0082厁匭橫ā譽餱");
		GameLevelDefine.MapGoodsAnalytics(goodsCollectVoById.goodsID, 1, 2);
		ConsumeDragGoodsUse("숎끈斶挏灁1\u009a厙룥ó赴");
		EventManager.GetInstance().DispatchEvent(100122, gameGoodsVo.goodsID);
		ObjectManager.GetInstance().taskPassModel.SetTaskPassQuestNum(DailyTaskType.UseAdditionalCard, 1);
		ObjectManager.GetInstance().taskPassModelV2.SetTaskPassQuestNum(DailyTaskType.UseAdditionalCard, 1);
		ObjectManager.GetInstance().taskThemePassModel.SetTaskPassQuestNum(DailyTaskType.UseAdditionalCard, 1);
		ObjectManager.GetInstance().taskThemePassModelV2.SetTaskPassQuestNum(DailyTaskType.UseAdditionalCard, 1);
		ObjectManager.GetInstance().dailyChallengeModel.SetChallengeTask(DailyTaskType.UseAdditionalCard, 1);
		return true;
	}

	private bool CopyCardEndDrag(GameLevelGrid targetGrid)
	{
		GameGoodsVo gameGoodsVo = GetGameGoodsVo();
		IGoodsBaseVo goodsBaseVo = GetGoodsBaseVo();
		GameGoodsVo gameGoodsVo2 = targetGrid.GetGameGoodsVo();
		IGoodsBaseVo goodsBaseVo2 = targetGrid.GetGoodsBaseVo();
		if (gameGoodsVo == null || goodsBaseVo == null || gameGoodsVo2 == null || goodsBaseVo2 == null)
		{
			return false;
		}
		if (goodsBaseVo.goodsID == goodsBaseVo2.goodsID && GameLevelDefine.IsGoodsStackable(goodsBaseVo) && GameLevelDefine.IsGoodsStackable(goodsBaseVo2))
		{
			return ApplyStackMerge(targetGrid, "숓끕斩爔捫?\u009a厙椵䁽");
		}
		if (!Singleton<GameLevelManager>.Instance.GoodsCanCopy(gameGoodsVo2, goodsBaseVo))
		{
			return false;
		}
		GameLevelGrid nearbyEmptyGrid = GetNearbyEmptyGrid(targetGrid.GetGridId(), showEnoughTip: false, 0, checkPlayerState: true);
		if (gameGoodsVo.GoodsUses > 1 && (Object)(object)nearbyEmptyGrid == (Object)null)
		{
			ViewManager.Instance.ShowTip("숅끥澷爆呫?Â叁摥_4끰e섳㳍");
			ResetItem();
			return true;
		}
		CommonMaskViewLogic.Show(0.5f);
		targetGrid.PlayCopyAnim();
		if ((Object)(object)nearbyEmptyGrid != (Object)null)
		{
			GameGoodsBase gameGoodsBaseById = Singleton<GameLevelManager>.Instance.GetGameGoodsBaseById(goodsBaseVo2.goodsID, nearbyEmptyGrid);
			if (gameGoodsBaseById != null)
			{
				Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(goodsBaseVo2.goodsID, 1, gameGoodsBaseById.GameGoods);
			}
			nearbyEmptyGrid.ChangeGameGoodsVo(gameGoodsBaseById, "刡率\ud9cbō");
			if ((Object)(object)nearbyEmptyGrid.GetGameLevelItem() != (Object)null)
			{
				nearbyEmptyGrid.GetGameLevelItem().PlayItemFly(targetGrid.GameItemParent);
			}
			if ((Object)(object)parentLogic != (Object)null)
			{
				parentLogic.ClearCurrentGrid();
			}
			ConsumeDragGoodsUse("刡率\ud9cbō");
			GameLevelDefine.MapGoodsAnalytics(gameGoodsVo.goodsID, 1, 2);
			EventManager.GetInstance().DispatchEvent<Transform, int, float>(203236, nearbyEmptyGrid.GameItemParent, goodsBaseVo2.goodsID, 0f);
			EventManager.GetInstance().DispatchEvent<Transform, int, float>(203218, nearbyEmptyGrid.GameItemParent, goodsBaseVo2.goodsID, 0f);
		}
		else
		{
			gameGoodsVo.AddGoodsUses(-1);
			Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(gameGoodsVo.goodsID, -1, gameGoodsVo);
			Singleton<GameLevelManager>.Instance.StackUseAnalytic(gameGoodsVo, 1);
			GameGoodsBase gameGoodsBaseById = Singleton<GameLevelManager>.Instance.GetGameGoodsBaseById(goodsBaseVo2.goodsID, this);
			if (gameGoodsBaseById != null)
			{
				Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(goodsBaseVo2.goodsID, 1, gameGoodsBaseById.GameGoods);
			}
			ChangeGameGoodsVo(gameGoodsBaseById, "刡率\ud9cbō");
			if ((Object)(object)GetGameLevelItem() != (Object)null)
			{
				GetGameLevelItem().PlayItemFly(targetGrid.GameItemParent);
			}
			EventManager.GetInstance().DispatchEvent<Transform, int, float>(203236, ((Component)GetGameLevelItem()).transform, goodsBaseVo2.goodsID, 0f);
			EventManager.GetInstance().DispatchEvent<Transform, int, float>(203218, ((Component)GetGameLevelItem()).transform, goodsBaseVo2.goodsID, 0f);
		}
		GameLevelDefine.MapGoodsAnalytics(goodsBaseVo2.goodsID, 1, 1, 79);
		AudioManager.Instance.PlayEffect("숚끈掶漛灇\r\u0092厑숋끃犺愌灙7Î反");
		ObjectManager.GetInstance().SaveToDisk();
		return true;
	}

	private bool GeneratorAcceleratorCardEndDrag(GameLevelGrid targetGrid)
	{
		GameGoodsVo gameGoodsVo = GetGameGoodsVo();
		IGoodsBaseVo goodsBaseVo = GetGoodsBaseVo();
		GameGoodsVo gameGoodsVo2 = targetGrid.GetGameGoodsVo();
		IGoodsBaseVo goodsBaseVo2 = targetGrid.GetGoodsBaseVo();
		if (gameGoodsVo == null || goodsBaseVo == null || gameGoodsVo2 == null || goodsBaseVo2 == null)
		{
			return false;
		}
		if (goodsBaseVo.goodsID == goodsBaseVo2.goodsID && GameLevelDefine.IsGoodsStackable(goodsBaseVo) && GameLevelDefine.IsGoodsStackable(goodsBaseVo2))
		{
			return ApplyStackMerge(targetGrid, "숏끙犺愐慘7Î反숵끕犫朶瑙7Î反뻹");
		}
		if (!IGoodsBaseVo.IsCreator(goodsBaseVo2.type))
		{
			return false;
		}
		if (gameGoodsVo2.GoodsState != GameGoodsState.CoolDown)
		{
			return false;
		}
		IGoodsCollectVo goodsCollectVoById = Singleton<GameLevelManager>.Instance.GetGoodsCollectVoById(goodsBaseVo.goodsID);
		if (goodsCollectVoById == null)
		{
			return false;
		}
		gameGoodsVo2.DoneType = "删狳\ud9d8ń";
		gameGoodsVo2.SpeedupTotalTime += goodsCollectVoById.amount;
		GameLevelDefine.ProduceAnalytics(3, gameGoodsVo2, goodsCollectVoById.amount, 0, gameGoodsVo);
		Singleton<GameLevelManager>.Instance.RreduceGameGoodsCDTime(gameGoodsVo2, goodsCollectVoById.amount);
		targetGrid.SetPlayCDState(state: true);
		targetGrid.PlayGeneratorAcceleratorAnim(() =>
		{
			targetGrid.SetPlayCDState(state: false);
			targetGrid.GetGameGoodsBase().UpdateAttribute();
			targetGrid.UpdateGameLevelItem();
		});
		targetGrid.SaveGridData();
		targetGrid.OnSelectGrid(isProduce: false, playSelectAnim: true, isShowQuick: true);
		GameLevelDefine.MapGoodsAnalytics(goodsCollectVoById.goodsID, 1, 2);
		ConsumeDragGoodsUse("숏끙犺愐慘7Î反귗\u0087赴");
		return true;
	}

	private bool UpgradeCardEndDrag(GameLevelGrid targetGrid)
	{
		GameGoodsVo gameGoodsVo = GetGameGoodsVo();
		IGoodsBaseVo goodsBaseVo = GetGoodsBaseVo();
		GameGoodsVo gameGoodsVo2 = targetGrid.GetGameGoodsVo();
		IGoodsBaseVo goodsBaseVo2 = targetGrid.GetGoodsBaseVo();
		if (gameGoodsVo == null || goodsBaseVo == null || gameGoodsVo2 == null || goodsBaseVo2 == null)
		{
			return false;
		}
		if (goodsBaseVo.goodsID == goodsBaseVo2.goodsID && GameLevelDefine.IsGoodsStackable(goodsBaseVo) && GameLevelDefine.IsGoodsStackable(goodsBaseVo2))
		{
			return ApplyStackMerge(targetGrid, "수끊斾弙畕6\u009a厙匩橥ā讝詥");
		}
		if (!Singleton<GameLevelManager>.Instance.GoodsCanUpgrade(gameGoodsVo2))
		{
			return false;
		}
		GameLevelDefine.MapGoodsAnalytics(gameGoodsVo2.goodsID, 1, 2);
		Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(gameGoodsVo2.goodsID, -1, gameGoodsVo2);
		GameLevelDefine.ChangeGeneratorUUIDToDisk(gameGoodsVo2, -1);
		if ((Object)(object)parentLogic != (Object)null)
		{
			parentLogic.CheckOrderUpdate(gameGoodsVo2.goodsID);
		}
		IGoodsBaseVo goodsBaseVoBySeriesAndLevel = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoBySeriesAndLevel(goodsBaseVo2.series, goodsBaseVo2.level + 1);
		if (goodsBaseVoBySeriesAndLevel != null)
		{
			int num = 0;
			int num2 = 0;
			int num3 = 0;
			List<int> list = new List<int>();
			if (gameGoodsVo2 != null)
			{
				num += gameGoodsVo2.InitiativeSurplusNumber;
				num2 += gameGoodsVo2.PassiveSurplusNumber;
				num3 += gameGoodsVo2.InitiativeAdditionalNumber;
				list = list.Concat(gameGoodsVo2.MergeDropList).ToList();
			}
			GameGoodsBase gameGoodsBaseById = Singleton<GameLevelManager>.Instance.GetGameGoodsBaseById(goodsBaseVoBySeriesAndLevel.goodsID, targetGrid, null, num, num2, num3, excludeZero: true, addMergeDrop: true, list);
			Singleton<GameLevelManager>.Instance.ChangeMapById(targetGrid.GetGridId(), gameGoodsBaseById.GameGoods);
			Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(gameGoodsBaseById.GameGoods.goodsID, 1, gameGoodsBaseById.GameGoods);
			GameLevelDefine.ChangeGeneratorUUIDToDisk(gameGoodsBaseById.GameGoods, 1);
			GameLevelDefine.MapGoodsAnalytics(gameGoodsBaseById.GameGoods.goodsID, 1, 1, 96);
			targetGrid.ChangeGameGoodsVo(gameGoodsBaseById, "扵p4끲c尸㫍", updateOrder: false);
			targetGrid.OnSelectGrid(isProduce: false, playSelectAnim: true, isShowQuick: true);
			targetGrid.PlayRocketAnim("숏끜徿瀐敗&\u0082厁숵끕掩欶牆=\u0092厑숂끎梆弃敝5¦厥渶䅳", "숚끛玩弛瑘'Ò发곦÷赴");
			GameLevelDefine.MapGoodsAnalytics(gameGoodsVo.goodsID, 1, 2);
			ConsumeDragGoodsUse("扵p4끲c尸㫍");
			if ((Object)(object)parentLogic != (Object)null)
			{
				parentLogic.CheckOrderUpdate(goodsBaseVoBySeriesAndLevel.goodsID);
			}
			EventManager.GetInstance().DispatchEvent<Transform, int, float>(203236, targetGrid.GameItemParent, gameGoodsBaseById.GameGoods.goodsID, 0f);
			EventManager.GetInstance().DispatchEvent<Transform, int, float>(203218, targetGrid.GameItemParent, gameGoodsBaseById.GameGoods.goodsID, 0f);
		}
		return true;
	}

	private bool SplitGoodsEndDrag(GameLevelGrid targetGrid)
	{
		IGoodsBaseVo goodsBaseVo = GetGoodsBaseVo();
		IGoodsBaseVo goodsBaseVo2 = targetGrid.GetGoodsBaseVo();
		GameGoodsVo gameGoodsVo = targetGrid.GetGameGoodsVo();
		if (goodsBaseVo == null || goodsBaseVo2 == null || gameGoodsVo == null)
		{
			return false;
		}
		if (goodsBaseVo.goodsID == goodsBaseVo2.goodsID && GameLevelDefine.IsGoodsStackable(goodsBaseVo) && GameLevelDefine.IsGoodsStackable(goodsBaseVo2))
		{
			return ApplyStackMerge(targetGrid, "숃끊涵攄獀\rº厹\uabe6§赴");
		}
		if (Singleton<GameLevelManager>.Instance.GoodsCanSplit(targetGrid.GetGameGoodsVo()))
		{
			if (GetGameGoodsVo().GoodsUses > 1)
			{
				if (CheckEmptyGridEnough(1, showEnoughTip: false, checkPlayerState: true))
				{
					if (GoodsSplit(targetGrid))
					{
						return true;
					}
				}
				else
				{
					ViewManager.Instance.ShowTip("숅끥澷爆呫?Â叁摥_4끰e섳㳍");
				}
			}
			else if (GoodsSplit(targetGrid))
			{
				return true;
			}
		}
		else if (GetGameGoodsVo().GoodsUses > 1 && !CheckEmptyGridEnough(1, showEnoughTip: false, checkPlayerState: true))
		{
			ViewManager.Instance.ShowTip("숅끥澷爆呫?Â叁摥_4끰e섳㳍");
		}
		return false;
	}

	private bool GoodsSplit(GameLevelGrid targetGrid)
	{
		int series = targetGrid.GetGoodsBaseVo().series;
		int level = targetGrid.GetGoodsBaseVo().level - 1;
		IGoodsBaseVo splitGoodsVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoBySeriesAndLevel(series, level);
		if (splitGoodsVo != null)
		{
			GoodsSplitHintData data = new GoodsSplitHintData
			{
				SplitGoods = GetGoodsBaseVo(),
				OriginalGoods = targetGrid.GetGoodsBaseVo(),
				SonGoods = splitGoodsVo,
				SureAction = () =>
				{
					GameLevelDefine.MapGoodsAnalytics(GetGameGoodsVo().goodsID, 1, 2);
					GameLevelDefine.MapGoodsAnalytics(targetGrid.GetGameGoodsVo().goodsID, 1, 2);
					Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(targetGrid.GetGameGoodsVo().goodsID, -1, targetGrid.GetGameGoodsVo());
					if ((Object)(object)parentLogic != (Object)null)
					{
						parentLogic.CheckOrderUpdate(targetGrid.GetGameGoodsVo().goodsID);
					}
					GameGoodsBase gameGoodsBaseById = Singleton<GameLevelManager>.Instance.GetGameGoodsBaseById(splitGoodsVo.goodsID, targetGrid);
					Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(splitGoodsVo.goodsID, 1, gameGoodsBaseById.GameGoods);
					GameLevelDefine.MapGoodsAnalytics(splitGoodsVo.goodsID, 2, 1, 78);
					targetGrid.ChangeGameGoodsVo(gameGoodsBaseById, "北橰ā讥鑴");
					targetGrid.PlayItemShow();
					targetGrid.OnSelectGrid();
					EventManager.GetInstance().DispatchEvent<Transform, int, float>(203236, targetGrid.GameItemParent, splitGoodsVo.goodsID, 0f);
					EventManager.GetInstance().DispatchEvent<Transform, int, float>(203218, targetGrid.GameItemParent, splitGoodsVo.goodsID, 0f);
					GameLevelGrid nearbyEmptyGrid = GetNearbyEmptyGrid(targetGrid.GetGridId());
					if ((Object)(object)nearbyEmptyGrid != (Object)null)
					{
						GameGoodsBase gameGoodsBaseById2 = Singleton<GameLevelManager>.Instance.GetGameGoodsBaseById(splitGoodsVo.goodsID, nearbyEmptyGrid);
						if (gameGoodsBaseById2 != null)
						{
							Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(splitGoodsVo.goodsID, 1, gameGoodsBaseById2.GameGoods);
						}
						nearbyEmptyGrid.ChangeGameGoodsVo(gameGoodsBaseById2, "北橰ā讥鑴");
						if ((Object)(object)nearbyEmptyGrid.GetGameLevelItem() != (Object)null)
						{
							nearbyEmptyGrid.GetGameLevelItem().PlayItemFly(targetGrid.GameItemParent);
						}
						GetGameGoodsVo().AddGoodsUses(-1);
						Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(GetGameGoodsVo().goodsID, -1, GetGameGoodsVo());
						Singleton<GameLevelManager>.Instance.StackUseAnalytic(GetGameGoodsVo(), 1);
						if (GetGameGoodsVo().GoodsUses <= 0)
						{
							ChangeGameGoodsVo(null, "北橰ā讥鑴");
						}
						else
						{
							UpdateGameLevelItem();
							SaveGridData();
						}
						EventManager.GetInstance().DispatchEvent<Transform, int, float>(203236, nearbyEmptyGrid.GameItemParent, splitGoodsVo.goodsID, 0f);
						EventManager.GetInstance().DispatchEvent<Transform, int, float>(203218, nearbyEmptyGrid.GameItemParent, splitGoodsVo.goodsID, 0f);
					}
					else
					{
						Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(GetGameGoodsVo().goodsID, -1, GetGameGoodsVo());
						GameGoodsBase gameGoodsBaseById2 = Singleton<GameLevelManager>.Instance.GetGameGoodsBaseById(splitGoodsVo.goodsID, this);
						if (gameGoodsBaseById2 != null)
						{
							Singleton<GameLevelManager>.Instance.ChangeOwnerGoodsNum(splitGoodsVo.goodsID, 1, gameGoodsBaseById2.GameGoods);
						}
						ChangeGameGoodsVo(gameGoodsBaseById2, "北橰ā讥鑴");
						if ((Object)(object)GetGameLevelItem() != (Object)null)
						{
							GetGameLevelItem().PlayItemFly(targetGrid.GameItemParent);
							EventManager.GetInstance().DispatchEvent<Transform, int, float>(203236, ((Component)GetGameLevelItem()).transform, splitGoodsVo.goodsID, 0f);
							EventManager.GetInstance().DispatchEvent<Transform, int, float>(203218, ((Component)GetGameLevelItem()).transform, splitGoodsVo.goodsID, 0f);
						}
					}
					AudioManager.Instance.PlayEffect("숚끈炶氛火!Æ叅漻䊌");
					ObjectManager.GetInstance().SaveToDisk();
				}
			};
			ViewManager.GetInstance().ShowView<GoodsSplitHintLogic>(data, ViewManager.ViewLayer.POP, animate: true);
			ResetItem();
			return true;
		}
		return false;
	}

	public GameLevelGrid()
	{
		//IL_0001: Unknown result type (might be due to invalid IL or missing references)
		//IL_0006: Unknown result type (might be due to invalid IL or missing references)
		//IL_0029: Unknown result type (might be due to invalid IL or missing references)
		//IL_002e: Unknown result type (might be due to invalid IL or missing references)
	}
}
