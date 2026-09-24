using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using TLF;
using UniRx.Async;
using UniRx.Async.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class MiniMergeGrid : ResBase, IDragHandler, IEventSystemHandler, IBeginDragHandler, IEndDragHandler
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CPlayDesignatedEffect_003Ed__55 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public MiniMergeGrid _003C_003E4__this;

		public string effectName;

		public float posY;

		public float hideDuration;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_0095: Unknown result type (might be due to invalid IL or missing references)
			//IL_009a: Unknown result type (might be due to invalid IL or missing references)
			//IL_00a1: Unknown result type (might be due to invalid IL or missing references)
			//IL_005c: Unknown result type (might be due to invalid IL or missing references)
			//IL_0061: Unknown result type (might be due to invalid IL or missing references)
			//IL_0065: Unknown result type (might be due to invalid IL or missing references)
			//IL_006a: Unknown result type (might be due to invalid IL or missing references)
			//IL_007e: Unknown result type (might be due to invalid IL or missing references)
			//IL_007f: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			MiniMergeGrid miniMergeGrid = _003C_003E4__this;
			try
			{
				Awaiter val2;
				if (num != 0)
				{
					miniMergeGrid.HideDesignatedEffect();
					miniMergeGrid.mDesignatedEffect = miniMergeGrid.CreateGameObject(effectName, miniMergeGrid.EffectParent, posY);
					if (!(hideDuration > 0f))
					{
						goto IL_00b7;
					}
					UniTask val = UniTask.Delay(TimeSpan.FromSeconds(hideDuration), false, (PlayerLoopTiming)4, default(CancellationToken));
					val2 = val.GetAwaiter();
					if (!val2.IsCompleted)
					{
						num = (_003C_003E1__state = 0);
						_003C_003Eu__1 = val2;
						_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CPlayDesignatedEffect_003Ed__55>(ref val2, ref this);
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
				goto IL_00b7;
				IL_00b7:
				miniMergeGrid.HideDesignatedEffect();
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

	public Transform EffectParent;

	[HideInInspector]
	public MiniMergeViewBaseLogic parentLogic;

	[HideInInspector]
	public Vector2 mapPos = Vector2.zero;

	private MiniMergeGridBg gameLevelGridBg;

	private MiniMergeItem gameLevelItem;

	private MiniMergeType gridType;

	private int GridId;

	private int GridIndex;

	private bool mIsLock;

	private bool isDrag;

	private MiniMergeGoodsBase mGameGoodsBase;

	private bool isBanDrag;

	private bool mGridBgActive;

	private MiniMergeItem lastPlayEffectItem;

	private GameObject mDesignatedEffect;

	public bool IsDrag => isDrag;

	public bool IsLock
	{
		get
		{
			return mIsLock;
		}
		set
		{
			mIsLock = value;
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

	public void Init(int _id, MiniMergeGoodsBase _goodsBase, MiniMergeViewBaseLogic _parent, int index, MiniMergeGridBg _gridBg)
	{
		GridId = _id;
		parentLogic = _parent;
		GridIndex = index;
		gameLevelGridBg = _gridBg;
		InitGrid();
		InitGoodsVo(_goodsBase, isSave: false);
		EventManager.GetInstance().AddEventListener<bool>(100119, EventBanDrag);
		EventManager.GetInstance().AddEventListener<bool>(100057, ApplicationPause);
	}

	public void SetGridType(MiniMergeType _type)
	{
		gridType = _type;
		SetSelectState(select: false);
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
				gameLevelItem.LocalIdentity<MiniMergeItem>();
				gameLevelItem.PlayItemMove(position);
			}
			if ((Object)(object)parentLogic != (Object)null)
			{
				parentLogic.DragGoods = false;
			}
		}
		HideMergeHintEffect();
	}

	private void InitGrid()
	{
		SetGridBg();
	}

	private void SetGridBg()
	{
		GridBg.sprite = ((BaseViewLogic)parentLogic).Load<Sprite>(MiniMergeDefine.GetGridBgName(gridType, GridIndex % 2));
		((Graphic)GridBg).SetNativeSize();
	}

	private void InitGoodsVo(MiniMergeGoodsBase goodsBase, bool isSave = true)
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
			gameLevelItem = Singleton<ResCacheManager>.Instance.GetRes<MiniMergeItem>();
			if ((Object)(object)gameLevelItem != (Object)null)
			{
				gameLevelItem.Init(goodsBase.GameGoods, this);
				if (!((Object)(object)gameLevelItem == (Object)null))
				{
					((Component)gameLevelItem).transform.SetParent(GameItemParent);
					gameLevelItem.LocalIdentity<MiniMergeItem>();
				}
			}
		}
		else
		{
			EmptyParentSelectGrid();
		}
	}

	public MiniMergeGoodsBase GetGameGoodsBase()
	{
		return mGameGoodsBase;
	}

	public void ChangeGameGoodsVo(MiniMergeGoodsBase goodsBase)
	{
		InitGoodsVo(goodsBase);
		RemoveMergeHint();
	}

	public void ChangeGridGameGoods(MiniMergeGoodsBase goodsBase, MiniMergeItem levelItem)
	{
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
			gameLevelItem.LocalIdentity<MiniMergeItem>();
			if (mGameGoodsBase != null)
			{
				gameLevelItem.Init(mGameGoodsBase.GameGoods, this);
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
		RemoveMergeHint();
	}

	public void UpdateGameLevelItem()
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.UpdateIcon();
		}
	}

	public MiniMergeItem GetGameLevelItem()
	{
		return gameLevelItem;
	}

	public MiniMergeGameGoodsVo GetGameGoodsVo()
	{
		if (mGameGoodsBase != null)
		{
			return mGameGoodsBase.GameGoods;
		}
		return null;
	}

	public IMiniMergeGoodsBaseVo GetGoodsBaseVo()
	{
		if (mGameGoodsBase != null)
		{
			return mGameGoodsBase.GoodsBaseVo;
		}
		return null;
	}

	public MiniMergeType GetGridType()
	{
		return gridType;
	}

	public int GetGridId()
	{
		return GridId;
	}

	public void OnBeginDrag(PointerEventData e)
	{
		if (isBanDrag || IsLock || (Object)(object)gameLevelItem == (Object)null || gameLevelItem.PlayFlyAnim || GetGameGoodsVo() == null || IMiniMergeGoodsBaseVo.CannotDrag(GetGameGoodsVo().GoodsState) || GetGoodsBaseVo() == null)
		{
			return;
		}
		RemoveMergeHint();
		if (!((Object)(object)((Component)gameLevelItem).transform.parent == (Object)(object)parentLogic.DragItemParent))
		{
			if ((Object)(object)gameLevelItem != (Object)null)
			{
				gameLevelItem.SetItemScaleAnim(show: false);
			}
			isDrag = true;
			parentLogic.DragGoods = true;
			((Component)gameLevelItem).transform.SetParent(parentLogic.DragItemParent);
			OnSelectGrid();
			SetSelectState(select: false);
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
		//IL_003b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0040: Unknown result type (might be due to invalid IL or missing references)
		//IL_0045: Unknown result type (might be due to invalid IL or missing references)
		//IL_005b: Expected Obj, but got Unknown
		//IL_0067: Unknown result type (might be due to invalid IL or missing references)
		//IL_0068: Unknown result type (might be due to invalid IL or missing references)
		if (!isDrag || (Object)(object)gameLevelItem == (Object)null || (Object)(object)Singleton<GameLevelManager>.Instance.UICamera == (Object)null)
		{
			return;
		}
		Vector2 val = default;
		RectTransformUtility.ScreenPointToLocalPointInRectangle((RectTransform)((Component)gameLevelItem).transform.parent, Vector2.op_Implicit(Input.mousePosition), Singleton<GameLevelManager>.Instance.UICamera, ref val);
		((Component)gameLevelItem).transform.localPosition = Vector2.op_Implicit(val);
		if (gameLevelItem.DragIcon.raycastTarget)
		{
			gameLevelItem.DragIcon.raycastTarget = false;
		}
		GameObject touchObject = GetTouchObject(e);
		if ((Object)(object)touchObject == (Object)null)
		{
			return;
		}
		if (touchObject.CompareTag("參橯ā讑靳"))
		{
			MiniMergeItem component = touchObject.GetComponent<MiniMergeItem>();
			if ((Object)(object)component == (Object)null)
			{
				HideMergeHintEffect();
				return;
			}
			MiniMergeGrid gameLevelGrid = component.GetGameLevelGrid();
			if ((Object)(object)gameLevelGrid == (Object)null)
			{
				HideMergeHintEffect();
			}
			else if (gameLevelGrid.GetGridId() != GetGridId())
			{
				if (IMiniMergeGoodsBaseVo.CannotMerge(gameLevelGrid.GetGameGoodsVo().GoodsState) || gameLevelGrid.IsLock)
				{
					HideMergeHintEffect();
				}
				else if (MiniMergeDefine.GetNextGoodsConfig(gridType, gameLevelGrid.GetGameGoodsVo(), GetGameGoodsVo()) != null)
				{
					((Component)gameLevelGrid).transform.SetSiblingIndex(((Component)gameLevelGrid).transform.parent.childCount - 1);
					ShowMergeHintEffect(component);
				}
				else
				{
					HideMergeHintEffect();
				}
			}
		}
		else
		{
			HideMergeHintEffect();
		}
	}

	private void ShowMergeHintEffect(MiniMergeItem targetItem)
	{
		if ((Object)(object)lastPlayEffectItem != (Object)null)
		{
			if (lastPlayEffectItem.GetGameLevelGrid().GetGridId() != targetItem.GetGameLevelGrid().GetGridId())
			{
				HideMergeHintEffect();
				targetItem.PlayMergeHint();
				lastPlayEffectItem = targetItem;
			}
		}
		else
		{
			targetItem.PlayMergeHint();
			lastPlayEffectItem = targetItem;
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

	private GameObject GetTouchObject(PointerEventData e)
	{
		//IL_002d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0032: Unknown result type (might be due to invalid IL or missing references)
		//IL_0037: Unknown result type (might be due to invalid IL or missing references)
		//IL_003c: Unknown result type (might be due to invalid IL or missing references)
		//IL_01af: Unknown result type (might be due to invalid IL or missing references)
		//IL_01b4: Unknown result type (might be due to invalid IL or missing references)
		//IL_00e0: Unknown result type (might be due to invalid IL or missing references)
		//IL_00e5: Unknown result type (might be due to invalid IL or missing references)
		//IL_011b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0120: Unknown result type (might be due to invalid IL or missing references)
		//IL_013a: Unknown result type (might be due to invalid IL or missing references)
		//IL_013c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0105: Unknown result type (might be due to invalid IL or missing references)
		//IL_010a: Unknown result type (might be due to invalid IL or missing references)
		//IL_010f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0114: Unknown result type (might be due to invalid IL or missing references)
		GameObject val = null;
		if (MiniMergeViewBaseLogic.MergeAdsorb)
		{
			Dictionary<int, MiniMergeGrid> gridObjectDic = parentLogic.GridObjectDic;
			Vector2 val2 = Vector2.op_Implicit(((Component)parentLogic).transform.InverseTransformPoint(((Component)gameLevelItem).transform.position));
			float num = MiniMergeViewBaseLogic.GridWidth / 2f;
			float num2 = 99999f;
			int num3 = 99999;
			foreach (KeyValuePair<int, MiniMergeGrid> item in gridObjectDic)
			{
				MiniMergeGrid value = item.Value;
				MiniMergeGrid gameLevelGrid = gameLevelItem.GetGameLevelGrid();
				if (((Object)(object)gameLevelGrid != (Object)null && value.GetGridId() == gameLevelGrid.GetGridId()) || value.IsLock || GetGameGoodsBase() == null || value.GetGameGoodsBase() == null || MiniMergeDefine.GetNextGoodsConfig(gridType, value.GetGameGoodsVo(), GetGameGoodsVo()) == null)
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
				if (!(num4 > MiniMergeViewBaseLogic.MergeAdsorbRadius) && !(num2 < num4) && (num2 != num4 || num3 >= value.GetGridId()))
				{
					MiniMergeItem miniMergeItem = value.GetGameLevelItem();
					if ((Object)(object)miniMergeItem != (Object)null)
					{
						num3 = value.GetGridId();
						num2 = num4;
						val = ((Component)miniMergeItem).gameObject;
					}
				}
			}
		}
		if ((Object)(object)val == (Object)null)
		{
			RaycastResult pointerCurrentRaycast = e.pointerCurrentRaycast;
			val = pointerCurrentRaycast.gameObject;
		}
		return val;
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

	public void OnEndDrag(PointerEventData e)
	{
		//IL_00de: Unknown result type (might be due to invalid IL or missing references)
		//IL_00e3: Unknown result type (might be due to invalid IL or missing references)
		//IL_0127: Unknown result type (might be due to invalid IL or missing references)
		//IL_01f6: Unknown result type (might be due to invalid IL or missing references)
		//IL_01fb: Unknown result type (might be due to invalid IL or missing references)
		//IL_025a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0289: Unknown result type (might be due to invalid IL or missing references)
		HideMergeHintEffect();
		if (!isDrag || (Object)(object)gameLevelItem == (Object)null)
		{
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
		if (GetGameGoodsVo() != null)
		{
			_ = GetGameGoodsVo().goodsID;
		}
		if (touchObject.CompareTag("刚泳\ud9efŐ"))
		{
			MiniMergeGrid component = touchObject.GetComponent<MiniMergeGrid>();
			if ((Object)(object)component == (Object)null)
			{
				ResetItem();
				return;
			}
			if (component.GetGameGoodsVo() != null)
			{
				ResetItem();
				return;
			}
			if (component.IsLock)
			{
				ResetItem();
				return;
			}
			if (component.GetGridId() == GetGridId())
			{
				ResetItem();
			}
			else
			{
				Vector3 position = ((Component)gameLevelItem).transform.position;
				component.ChangeGridGameGoods(mGameGoodsBase, gameLevelItem);
				component.OnSelectGrid();
				ChangeGridGameGoods(null, null);
				if ((Object)(object)component != (Object)null && (Object)(object)component.GetGameLevelItem() != (Object)null)
				{
					component.GetGameLevelItem().PlayItemMove(position, 0.2f);
				}
			}
		}
		else if (touchObject.CompareTag("參橯ā讑靳"))
		{
			MiniMergeItem component2 = touchObject.GetComponent<MiniMergeItem>();
			if ((Object)(object)component2 == (Object)null)
			{
				ResetItem();
				return;
			}
			MiniMergeGrid gameLevelGrid = component2.GetGameLevelGrid();
			if ((Object)(object)gameLevelGrid == (Object)null)
			{
				ResetItem();
				return;
			}
			if (gameLevelGrid.GetGridId() == GetGridId())
			{
				ResetItem();
				return;
			}
			if (IMiniMergeGoodsBaseVo.CannotMerge(gameLevelGrid.GetGameGoodsVo().GoodsState) || gameLevelGrid.IsLock)
			{
				ResetItem();
				return;
			}
			IMiniMergeGoodsBaseVo nextGoodsConfig = MiniMergeDefine.GetNextGoodsConfig(gridType, gameLevelGrid.GetGameGoodsVo(), GetGameGoodsVo());
			if (nextGoodsConfig == null)
			{
				if (gameLevelGrid.GetGameGoodsVo().GoodsState == MiniMergeGoodsState.Lock)
				{
					ResetItem();
				}
				else
				{
					Vector3 position2 = ((Component)gameLevelItem).transform.position;
					MiniMergeGoodsBase gameGoodsBase = gameLevelGrid.GetGameGoodsBase();
					gameLevelGrid.ChangeGridGameGoods(mGameGoodsBase, gameLevelItem);
					gameLevelGrid.OnSelectGrid();
					((Component)component2).transform.SetParent(parentLogic.DragItemParent);
					ChangeGridGameGoods(gameGoodsBase, component2);
					if ((Object)(object)gameLevelItem != (Object)null)
					{
						gameLevelItem.PlayItemMove(gameLevelGrid.GameItemParent.position);
					}
					if ((Object)(object)gameLevelGrid != (Object)null && (Object)(object)gameLevelGrid.GetGameLevelItem() != (Object)null)
					{
						gameLevelGrid.GetGameLevelItem().PlayItemMove(position2, 0.2f);
					}
				}
			}
			else
			{
				MiniMergeGoodsBase miniMergeGameBaseById = MiniMergeDefine.GetMiniMergeGameBaseById(gridType, nextGoodsConfig.goodsID, gameLevelGrid);
				gameLevelGrid.ChangeGameGoodsVo(miniMergeGameBaseById);
				gameLevelGrid.OnSelectGrid();
				ChangeGameGoodsVo(null);
				parentLogic.MergeSuccess(gameLevelGrid);
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
	}

	public void ResetItem()
	{
		//IL_0019: Unknown result type (might be due to invalid IL or missing references)
		//IL_001e: Unknown result type (might be due to invalid IL or missing references)
		//IL_004d: Unknown result type (might be due to invalid IL or missing references)
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			Vector3 position = ((Component)gameLevelItem).transform.position;
			((Component)gameLevelItem).transform.SetParent(GameItemParent);
			gameLevelItem.LocalIdentity<MiniMergeItem>();
			OnSelectGrid();
			gameLevelItem.PlayItemMove(position);
		}
		isDrag = false;
		if ((Object)(object)parentLogic != (Object)null)
		{
			parentLogic.DragGoods = false;
		}
	}

	public void SetSelectState(bool select)
	{
		if ((Object)(object)SelectGo != (Object)null)
		{
			SelectGo.SetSelfActive(select);
		}
	}

	public void OnSelectGrid()
	{
		if (!((Object)(object)gameLevelItem == (Object)null) && !((Object)(object)parentLogic == (Object)null))
		{
			if ((Object)(object)parentLogic.CurrentSelectGrid == (Object)null)
			{
				parentLogic.CurrentSelectGrid = this;
				SetSelectState(select: true);
			}
			else if (parentLogic.CurrentSelectGrid.GetGridId() == GetGridId())
			{
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

	[AsyncStateMachine(typeof(_003CPlayDesignatedEffect_003Ed__55))]
	public UniTask PlayDesignatedEffect(string effectName, float hideDuration = 0f, float posY = 0f)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0049: Unknown result type (might be due to invalid IL or missing references)
		_003CPlayDesignatedEffect_003Ed__55 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj.effectName = effectName;
		obj.hideDuration = hideDuration;
		obj.posY = posY;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CPlayDesignatedEffect_003Ed__55>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	public void HideDesignatedEffect()
	{
		if ((Object)(object)mDesignatedEffect != (Object)null)
		{
			Object.Destroy((Object)(object)mDesignatedEffect);
			mDesignatedEffect = null;
		}
	}

	public void ShowGridBg()
	{
		GridBg.SetSelfActive<Image>(true);
	}

	public void HideGridColorBg()
	{
		GridBg.SetSelfActive<Image>(false);
	}

	private GameObject CreateGameObject(string resName, Transform parent, float posY = 0f)
	{
		//IL_0047: Unknown result type (might be due to invalid IL or missing references)
		GameObject val = resLoader.LoadSync<GameObject>(resName);
		if ((Object)(object)val == (Object)null)
		{
			return null;
		}
		GameObject val2 = Object.Instantiate<GameObject>(val);
		val2.transform.SetParent(parent);
		val2.transform.LocalIdentity<Transform>();
		val2.transform.localPosition = new Vector3(0f, posY, 0f);
		val2.SetSelfActive(active: true);
		return val2;
	}

	public override void Recovery()
	{
		//IL_00aa: Unknown result type (might be due to invalid IL or missing references)
		//IL_00af: Unknown result type (might be due to invalid IL or missing references)
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.Recovery();
			gameLevelItem = null;
		}
		SetSelectState(select: false);
		RemoveMergeHint();
		HideDesignatedEffect();
		HideGridColorBg();
		ResetUI();
		base.Recovery();
		EventManager.GetInstance().RemoveEventListener<bool>(100119, EventBanDrag);
		EventManager.GetInstance().RemoveEventListener<bool>(100057, ApplicationPause);
		isDrag = false;
		mIsLock = false;
		isBanDrag = false;
		mGameGoodsBase = null;
		GridId = 0;
		TimeManager.Instance.ClearSchedule(this);
		mapPos = Vector2.zero;
	}

	private void ResetUI()
	{
		if ((Object)(object)gameLevelGridBg != (Object)null)
		{
			gameLevelGridBg.ResetBg();
		}
	}

	public MiniMergeGrid()
	{
		//IL_0001: Unknown result type (might be due to invalid IL or missing references)
		//IL_0006: Unknown result type (might be due to invalid IL or missing references)
	}
}
