using System;
using System.Collections.Generic;
using System.Diagnostics;
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

public class BagGrid : ResBase, IDragHandler, IEventSystemHandler, IBeginDragHandler, IEndDragHandler
{
	[Serializable]
	[CompilerGenerated]
	private sealed class _003C_003Ec
	{
		public static readonly _003C_003Ec _003C_003E9 = new _003C_003Ec();

		public static TweenCallback _003C_003E9__58_0;

		internal void _003CPlayUndoShow_003Eb__58_0()
		{
			AudioManager.Instance.PlayEffect("숇끎澼瘈楫?Â叁煥_4끭r唨䧑");
		}
	}

	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass57_0
	{
		public Action _action;

		public BagGrid _003C_003E4__this;

		internal void _003CPlayItemVanish_003Eb__0()
		{
			_action.InvokeGracefully();
			_003C_003E4__this.ItemVanishGo.DestroySelf<GameObject>();
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CPlayItemVanish_003Ed__57 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public Action _action;

		public BagGrid _003C_003E4__this;

		public GameGoodsVo _goodsVo;

		public float delay;

		private _003C_003Ec__DisplayClass57_0 _003C_003E8__1;

		private GridItemAni _003CitemAni_003E5__2;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_0115: Unknown result type (might be due to invalid IL or missing references)
			//IL_011a: Unknown result type (might be due to invalid IL or missing references)
			//IL_0121: Unknown result type (might be due to invalid IL or missing references)
			//IL_00d9: Unknown result type (might be due to invalid IL or missing references)
			//IL_00de: Unknown result type (might be due to invalid IL or missing references)
			//IL_00e2: Unknown result type (might be due to invalid IL or missing references)
			//IL_00e7: Unknown result type (might be due to invalid IL or missing references)
			//IL_00fb: Unknown result type (might be due to invalid IL or missing references)
			//IL_00fc: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			BagGrid bagGrid = _003C_003E4__this;
			try
			{
				Awaiter val;
				if (num == 0)
				{
					val = _003C_003Eu__1;
					_003C_003Eu__1 = default;
					num = (_003C_003E1__state = -1);
					goto IL_0130;
				}
				_003C_003E8__1 = new _003C_003Ec__DisplayClass57_0();
				_003C_003E8__1._action = _action;
				_003C_003E8__1._003C_003E4__this = _003C_003E4__this;
				if ((Object)(object)bagGrid.ItemVanishGo != (Object)null)
				{
					bagGrid.ItemVanishGo.DestroySelf<GameObject>();
				}
				if (_goodsVo != null)
				{
					bagGrid.ItemVanishGo = GameLevelDefine.CreateGameObjectSync("숎끈新洏䝽&\u009a厙飲\u0083赴", bagGrid.GameItemParent);
					if ((Object)(object)bagGrid.ItemVanishGo != (Object)null)
					{
						if (bagGrid.ItemVanishGo.TryGetComponent<GridItemAni>(ref _003CitemAni_003E5__2))
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
									_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CPlayItemVanish_003Ed__57>(ref val, ref this);
									return;
								}
								goto IL_0130;
							}
							goto IL_0137;
						}
						goto IL_015d;
					}
				}
				goto end_IL_000e;
				IL_015d:
				_003CitemAni_003E5__2 = null;
				goto end_IL_000e;
				IL_0130:
				val.GetResult();
				goto IL_0137;
				IL_0137:
				_003CitemAni_003E5__2.PlayAni("숇끎犼愈䥇\u0006Î反숎끟憆瀏摝!\u008a厉수끟溸椙火3¾厽", () =>
				{
					_003C_003E8__1._action.InvokeGracefully();
					_003C_003E8__1._003C_003E4__this.ItemVanishGo.DestroySelf<GameObject>();
				}, 1f);
				goto IL_015d;
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

	public Transform GameItemParent;

	public Transform EffectParent;

	public Transform EffectBottomParent;

	public Image LightColorBg;

	public Image DarkColorBg;

	public GameObject SelectGo;

	public Transform LockNodeParent;

	protected BagViewLogic parentLogic;

	protected BagGridItem mBagGridItem;

	private int GridId;

	public BagGridType gridType;

	private bool isDrag;

	protected GameGoodsVo mGameGoodsVo;

	protected BagGridLockItem mBagGridLockItem;

	public static int GuideDepth = -40;

	private int buyGridType;

	private IBagVo buyGridBagVO;

	[Header("限时格子")]
	public GameObject LimitBg;

	public GameObject LimitBg_out;

	private Animation BubbleAnim;

	private Animation GeneratorBubbleAnim;

	private GameObject putInEffectGo;

	private GameObject ItemVanishGo;

	private GameObject additionalGo;

	public void Init(int id, GameGoodsVo goodsBase, BagViewLogic parent, BagGridType gridType)
	{
		GridId = id;
		parentLogic = parent;
		this.gridType = gridType;
		InitLimitBg();
		InitGoodsVo(goodsBase);
		InitLockInfo();
	}

	public void InitLimitBg()
	{
		LimitBg.SetSelfActive(active: false);
		LimitBg_out.SetSelfActive(active: false);
	}

	public void UpdateLimitBg()
	{
		bool bagLimitIsShow = ObjectManager.GetInstance().gameLevelModel.GetBagLimitIsShow();
		LimitBg.SetSelfActive(bagLimitIsShow);
		LimitBg_out.SetSelfActive(!bagLimitIsShow);
	}

	private void InitGoodsVo(GameGoodsVo goodsBase, bool SaveData = false)
	{
		mGameGoodsVo = goodsBase;
		if ((Object)(object)mBagGridItem != (Object)null)
		{
			mBagGridItem.Recovery();
			mBagGridItem = null;
		}
		if (mGameGoodsVo != null)
		{
			mBagGridItem = Singleton<ResCacheManager>.Instance.GetRes<BagGridItem>();
			if ((Object)(object)mBagGridItem != (Object)null)
			{
				mBagGridItem.Init(mGameGoodsVo, this, gridType);
				((Component)mBagGridItem).transform.SetParent(GameItemParent);
				mBagGridItem.LocalIdentity<BagGridItem>();
			}
		}
		else
		{
			EmptyParentSelectGrid();
		}
		if (SaveData)
		{
			SaveGridData();
		}
	}

	public BagGridItem GetBagGridItem()
	{
		return mBagGridItem;
	}

	private void InitLockInfo()
	{
		buyGridType = 0;
		buyGridBagVO = null;
		if ((Object)(object)mBagGridLockItem != (Object)null)
		{
			mBagGridLockItem.Recovery();
			mBagGridLockItem = null;
		}
		int gameBagOpenNum = Singleton<GameLevelManager>.Instance.GetGameBagOpenNum();
		int gameBagLimitOpenNum = Singleton<GameLevelManager>.Instance.GetGameBagLimitOpenNum();
		int gameBagOpenLimitStartIndex = ObjectManager.GetInstance().gameLevelModel.GetGameBagOpenLimitStartIndex();
		int gameBagOpenLimitEndIndex = ObjectManager.GetInstance().gameLevelModel.GetGameBagOpenLimitEndIndex();
		int num = gameBagOpenNum + gameBagLimitOpenNum;
		int num2 = Singleton<GameLevelManager>.Instance.GetBagMaxinum();
		if (gameBagLimitOpenNum > 0)
		{
			num2 += gameBagLimitOpenNum;
		}
		if (num > GridId)
		{
			if (gameBagOpenLimitStartIndex <= GridId && GridId < gameBagOpenLimitEndIndex)
			{
				UpdateLimitBg();
			}
		}
		else if ((num == GridId || num + 1 == GridId) && GridId < num2)
		{
			IBagVo bagVo = Singleton<GameLevelManager>.Instance.GetBagVo(Singleton<GameLevelManager>.Instance.GetGameBagBuyNum_Diamond() + 1);
			IBagVo bagVo2 = Singleton<GameLevelManager>.Instance.FindNextCoinBagVO();
			List<IBagVo> list = new List<IBagVo>();
			List<int> list2 = new List<int>();
			if (bagVo != null)
			{
				list.Add(bagVo);
				list2.Add(1);
				ObjectManager.GetInstance().bagCircumModel.SaveUnlockBagGridByDiamond(bagVo.cost);
			}
			if (ObjectManager.GetInstance().userDataModel.NextBagUnlockLv > -1)
			{
				list.Add(null);
				list2.Add(2);
			}
			else if (bagVo2 != null && bagVo2.coin > 0)
			{
				list.Add(bagVo2);
				list2.Add(2);
			}
			if (num == GridId)
			{
				if (list.Count >= 1)
				{
					buyGridBagVO = list[0];
					buyGridType = list2[0];
				}
			}
			else if (num + 1 == GridId && list.Count >= 2)
			{
				buyGridBagVO = list[1];
				buyGridType = list2[1];
			}
			mBagGridLockItem = Singleton<ResCacheManager>.Instance.GetRes<BagGridLockItem>();
			if ((Object)(object)mBagGridLockItem != (Object)null)
			{
				mBagGridLockItem.Init(1, this, buyGridType, buyGridBagVO);
				((Component)mBagGridLockItem).transform.SetParent(LockNodeParent);
				mBagGridLockItem.LocalIdentity<BagGridLockItem>();
			}
		}
		else
		{
			mBagGridLockItem = Singleton<ResCacheManager>.Instance.GetRes<BagGridLockItem>();
			if ((Object)(object)mBagGridLockItem != (Object)null)
			{
				mBagGridLockItem.Init(2, this);
				((Component)mBagGridLockItem).transform.SetParent(LockNodeParent);
				mBagGridLockItem.LocalIdentity<BagGridLockItem>();
			}
		}
	}

	public virtual void ChangeGameGoodsVo(GameGoodsVo goodsBase)
	{
		InitGoodsVo(goodsBase, SaveData: true);
	}

	public void ChangeGridGameGoods(GameGoodsVo goodsBase, BagGridItem levelItem)
	{
		mGameGoodsVo = goodsBase;
		if ((Object)(object)levelItem != (Object)null)
		{
			mBagGridItem = levelItem;
			((Component)mBagGridItem).transform.SetParent(GameItemParent);
			mBagGridItem.LocalIdentity<BagGridItem>();
			if (mGameGoodsVo != null)
			{
				mBagGridItem.Init(mGameGoodsVo, this, gridType);
			}
		}
		else
		{
			mBagGridItem = null;
		}
		SaveGridData();
	}

	public GameGoodsVo GetGameGoodsVo()
	{
		return mGameGoodsVo;
	}

	public virtual int GetGridId()
	{
		return GridId;
	}

	public void OnBeginDrag(PointerEventData e)
	{
		//IL_00a8: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ad: Unknown result type (might be due to invalid IL or missing references)
		//IL_00d8: Unknown result type (might be due to invalid IL or missing references)
		if (!((Object)(object)mBagGridItem == (Object)null) && mGameGoodsVo != null && gridType != BagGridType.Generator && !((Object)(object)((Component)mBagGridItem).transform.parent == (Object)(object)((Component)parentLogic).transform))
		{
			isDrag = true;
			if (!MonoSingleton<GuideManager>.Instance.IsInGuide())
			{
				((Component)mBagGridItem).transform.SetParent(((Component)parentLogic).transform);
			}
			OnSelectGrid();
			SetSelectState(select: false);
			if (MonoSingleton<GuideManager>.Instance.IsInGuide())
			{
				((Component)this).transform.SetAsLastSibling();
				Vector3 localPosition = ((Component)mBagGridItem.ItemIcon).transform.localPosition;
				GuideDepth -= 10;
				localPosition.z = GuideDepth;
				((Component)mBagGridItem.ItemIcon).transform.localPosition = localPosition;
			}
		}
	}

	public void OnDrag(PointerEventData e)
	{
		//IL_0045: Unknown result type (might be due to invalid IL or missing references)
		//IL_004a: Unknown result type (might be due to invalid IL or missing references)
		//IL_004f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0065: Expected Obj, but got Unknown
		//IL_0071: Unknown result type (might be due to invalid IL or missing references)
		//IL_0072: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a0: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a5: Unknown result type (might be due to invalid IL or missing references)
		if (!isDrag || (Object)(object)mBagGridItem == (Object)null || gridType == BagGridType.Generator || (Object)(object)Singleton<GameLevelManager>.Instance.UICamera == (Object)null)
		{
			return;
		}
		Vector2 val = default;
		RectTransformUtility.ScreenPointToLocalPointInRectangle((RectTransform)((Component)mBagGridItem).transform.parent, Vector2.op_Implicit(Input.mousePosition), Singleton<GameLevelManager>.Instance.UICamera, ref val);
		((Component)mBagGridItem).transform.localPosition = Vector2.op_Implicit(val);
		if (mBagGridItem.DragIcon.raycastTarget)
		{
			mBagGridItem.DragIcon.raycastTarget = false;
		}
		RaycastResult pointerCurrentRaycast = e.pointerCurrentRaycast;
		GameObject gameObject = pointerCurrentRaycast.gameObject;
		if ((Object)(object)gameObject == (Object)null)
		{
			return;
		}
		if (gameObject.CompareTag("녂噡ܠ\0逗\ud96d"))
		{
			BagTagItemLogic component = gameObject.GetComponent<BagTagItemLogic>();
			if (!((Object)(object)component == (Object)null))
			{
				parentLogic?.ShowDragHint(component.GetPageIndex());
			}
		}
		else
		{
			parentLogic?.HideDragHint();
		}
	}

	public void OnEndDrag(PointerEventData e)
	{
		//IL_0034: Unknown result type (might be due to invalid IL or missing references)
		//IL_0039: Unknown result type (might be due to invalid IL or missing references)
		parentLogic?.HideDragHint();
		if (!isDrag || (Object)(object)mBagGridItem == (Object)null || gridType == BagGridType.Generator)
		{
			return;
		}
		RaycastResult pointerCurrentRaycast = e.pointerCurrentRaycast;
		GameObject gameObject = pointerCurrentRaycast.gameObject;
		mBagGridItem.DragIcon.raycastTarget = true;
		if ((Object)(object)gameObject == (Object)null)
		{
			ResetItem();
			return;
		}
		if (gameObject.CompareTag("刚泳\ud9efŐ"))
		{
			BagGrid component = gameObject.GetComponent<BagGrid>();
			if ((Object)(object)component == (Object)null)
			{
				ResetItem();
				return;
			}
			int gameBagLimitOpenNum = Singleton<GameLevelManager>.Instance.GetGameBagLimitOpenNum();
			int gameBagOpenNum = Singleton<GameLevelManager>.Instance.GetGameBagOpenNum();
			if (gameBagLimitOpenNum + gameBagOpenNum <= component.GetGridId())
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
				new List<int>().Add(mGameGoodsVo.goodsID);
				component.ChangeGridGameGoods(mGameGoodsVo, mBagGridItem);
				component.OnSelectGrid();
				ChangeGridGameGoods(null, null);
			}
		}
		else if (gameObject.CompareTag("參橯ā讑靳"))
		{
			BagGridItem component2 = gameObject.GetComponent<BagGridItem>();
			if ((Object)(object)component2 == (Object)null)
			{
				Log.E("쉥ヶﯜ崄寵咄⦧匘껂\u1733꾧湛ꇚ癕Ꜻⲋ＊횄鈼呲\udf6e륃");
				ResetItem();
				return;
			}
			BagGrid gameLevelGrid = component2.GetGameLevelGrid();
			if ((Object)(object)gameLevelGrid == (Object)null)
			{
				Log.E("쉥ヶﯜ崄寵咄⦧匘껂\u1733쮧셛ꇚ癕㦪\u07fb＊횄Ζ孨\udf6e륃");
				ResetItem();
				return;
			}
			List<int> list = new List<int> { mGameGoodsVo.goodsID };
			GameGoodsVo gameGoodsVo = gameLevelGrid.GetGameGoodsVo();
			if (gameGoodsVo != null)
			{
				list.Add(gameGoodsVo.goodsID);
			}
			gameLevelGrid.ChangeGridGameGoods(mGameGoodsVo, mBagGridItem);
			gameLevelGrid.OnSelectGrid();
			((Component)component2).transform.SetParent(((Component)parentLogic).transform);
			ChangeGridGameGoods(gameGoodsVo, component2);
		}
		else if (gameObject.CompareTag("鯤¿赴"))
		{
			EventManager.GetInstance().DispatchEvent(100124, mGameGoodsVo.goodsID);
			EventManager.GetInstance().DispatchEvent(100019, new BagEventInfo
			{
				bagGoodsVo = mGameGoodsVo,
				CallBack = ToGameLevelCall,
				TipLocation = gameObject.transform,
				PlayTakeoutEffect = true
			});
		}
		else if (gameObject.CompareTag("녂噡ܠ\0逗\ud96d"))
		{
			BagTagItemLogic component3 = gameObject.GetComponent<BagTagItemLogic>();
			if ((Object)(object)component3 == (Object)null)
			{
				ResetItem();
				return;
			}
			if (component3.GetPageIndex() == parentLogic.GetCurrentPage())
			{
				ResetItem();
				return;
			}
			if (Singleton<GameLevelManager>.Instance.MoveGoodsByPageIndex(mGameGoodsVo, component3.GetPageIndex()))
			{
				ChangeGameGoodsVo(null);
			}
			else if (component3.isGeneratorTag)
			{
				ResetItem();
				ViewManager.Instance.ShowTip("숸끛榾爹䉑&ª厩녥剟✼\0逝\ud96f", null, gameObject.transform);
			}
			else
			{
				ResetItem();
				ViewManager.Instance.ShowTip("숋끥溻漌呓\r¾厽수끗玶瀙彑\rÒ发뫦¿赴", null, gameObject.transform);
			}
		}
		else
		{
			ResetItem();
		}
		isDrag = false;
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

	private void ToGameLevelCall(bool success)
	{
		if (success)
		{
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(mGameGoodsVo.goodsID);
			if (goodsBaseVoById != null && IGoodsBaseVo.IsCreator(goodsBaseVoById.type))
			{
				MonoSingleton<GuideWeakManager>.Instance.ShowChessboardHasntGenerator_Consume();
			}
			GameLevelDefine.CheckUpdateOrderView(goodsBaseVoById.goodsID);
			ChangeGameGoodsVo(null);
			parentLogic.UpdateCapacity(-1);
			parentLogic.bagButtonAni.PlayBagPutOutEffect();
		}
		else
		{
			ResetItem();
			EventManager.GetInstance().DispatchEvent(202123, VibrateManager.VibrateType.Intense);
		}
	}

	public void ResetItem()
	{
		if ((Object)(object)mBagGridItem != (Object)null)
		{
			((Component)mBagGridItem).transform.SetParent(GameItemParent);
			mBagGridItem.LocalIdentity<BagGridItem>();
			OnSelectGrid();
		}
		isDrag = false;
	}

	public void SetSelectState(bool select)
	{
		if ((Object)(object)SelectGo != (Object)null)
		{
			SelectGo.SetSelfActive(select);
		}
	}

	public virtual void OnSelectGrid(bool clickToGame = false)
	{
		if ((Object)(object)mBagGridItem == (Object)null)
		{
			return;
		}
		if ((Object)(object)parentLogic.CurrentSelectGrid == (Object)null)
		{
			parentLogic.CurrentSelectGrid = this;
			SetSelectState(select: true);
			parentLogic.PlayInstrumentSound(this);
		}
		else if (parentLogic.CurrentSelectGrid.GetGridId() == GetGridId())
		{
			if (!clickToGame)
			{
				SetSelectState(select: true);
				return;
			}
			if (MonoSingleton<GuideManager>.Instance.IsInGuide() && (MonoSingleton<GuideManager>.Instance.CurrentGuideName() == "숎끏ㆰ式䝑\rÉ又❣\u0a4a" || MonoSingleton<GuideManager>.Instance.CurrentGuideName() == "숎끏㊰㈏䝑\rÍ双焍㡊"))
			{
				SetSelectState(select: true);
				return;
			}
			EventManager.GetInstance().DispatchEvent(100019, new BagEventInfo
			{
				bagGoodsVo = mGameGoodsVo,
				CallBack = ClickToGameLevelCall,
				TipLocation = GameItemParent,
				PlayTakeoutEffect = true
			});
		}
		else
		{
			parentLogic.CurrentSelectGrid.SetSelectState(select: false);
			parentLogic.CurrentSelectGrid = this;
			SetSelectState(select: true);
			parentLogic.PlayInstrumentSound(this);
		}
	}

	private void ClickToGameLevelCall(bool success)
	{
		if (success)
		{
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(mGameGoodsVo.goodsID);
			if (goodsBaseVoById != null && IGoodsBaseVo.IsCreator(goodsBaseVoById.type))
			{
				MonoSingleton<GuideWeakManager>.Instance.ShowChessboardHasntGenerator_Consume();
			}
			GameLevelDefine.CheckUpdateOrderView(goodsBaseVoById.goodsID);
			parentLogic.GoodsFlyToGame(((Component)GameItemParent).transform, ((Component)parentLogic.LevelButton).transform, mGameGoodsVo.goodsID);
			ChangeGameGoodsVo(null);
			parentLogic.UpdateCapacity(-1);
		}
		else
		{
			EventManager.GetInstance().DispatchEvent(202123, VibrateManager.VibrateType.Intense);
		}
	}

	public bool CheckInTaskGoods(int id)
	{
		if ((Object)(object)parentLogic != (Object)null)
		{
			return parentLogic.CheckInTaskGoods(id);
		}
		return false;
	}

	public bool CheckInBingoGoods(int id)
	{
		if ((Object)(object)parentLogic != (Object)null)
		{
			return parentLogic.CheckInBingoGoods(id);
		}
		return false;
	}

	public void BuyBagGrid()
	{
		if (Singleton<GameLevelManager>.Instance.GameBagOpenLimit())
		{
			ViewManager.Instance.ShowTip("숋끥䶛愌呓\r:匹匜橩ā试镭", null, GameItemParent);
		}
		else if (buyGridType == 1)
		{
			if (buyGridBagVO != null)
			{
				int bagGridDiamondCost = ObjectManager.GetInstance().bagCircumModel.GetBagGridDiamondCost(buyGridBagVO);
				if (ObjectManager.GetInstance().itemDataModel.ChangeItemNum(1003, -bagGridDiamondCost, needNotice: true, 8) >= 0)
				{
					Singleton<GameLevelManager>.Instance.AddBagOpenNum(1);
					Singleton<GameLevelManager>.Instance.AddBagBuyNum_Diamond(1);
					ObjectManager.GetInstance().gameLevelModel.BagAnalytics("뻮\u00af赴", bagGridDiamondCost);
					parentLogic.UpdateGameBag();
					parentLogic.UpdateCapacity();
					parentLogic.UpdateTagView();
					EventManager.GetInstance().DispatchEvent(100047);
					ObjectManager.GetInstance().SaveToDisk();
				}
				else
				{
					ShopViewLogic.DiamondNotEnough(judgePopGift: true, inShopView: false, EPopupFromSubScene.SS_DiamondNotEnought_UnlockBag);
				}
			}
		}
		else if (buyGridType == 2 && buyGridBagVO != null)
		{
			if (ObjectManager.GetInstance().itemDataModel.ChangeItemNum(1002, -buyGridBagVO.coin, needNotice: true, 8) >= 0)
			{
				Singleton<GameLevelManager>.Instance.AddBagBuyNum_Coin(1);
				Singleton<GameLevelManager>.Instance.AddBagOpenNum(1);
				ObjectManager.GetInstance().gameLevelModel.BagAnalytics("刚沇\ud9cbŚ", buyGridBagVO.coin);
				parentLogic.UpdateGameBag();
				parentLogic.UpdateCapacity();
				parentLogic.UpdateTagView();
				EventManager.GetInstance().DispatchEvent(100047);
				ObjectManager.GetInstance().SaveToDisk();
			}
			else
			{
				ViewManager.Instance.ShowTip("숄끕澰琅䍫\u001cÂ叁숅끿梷理彁5¦厥", null, GameItemParent);
			}
		}
	}

	private void EmptyParentSelectGrid()
	{
		if (!((Object)(object)parentLogic == (Object)null) && (Object)(object)parentLogic.CurrentSelectGrid != (Object)null && parentLogic.CurrentSelectGrid.GetGridId() == GetGridId())
		{
			SetSelectState(select: false);
			parentLogic.CurrentSelectGrid = null;
		}
	}

	public void ShowGridColorBg()
	{
		DarkColorBg.SetSelfActive<Image>(true);
	}

	public void HideGridColorBg()
	{
		LightColorBg.SetSelfActive<Image>(false);
		DarkColorBg.SetSelfActive<Image>(false);
	}

	public virtual bool CanSell()
	{
		return true;
	}

	public virtual void UpdateItemNum()
	{
	}

	public void DelayShow()
	{
		if ((Object)(object)mBagGridLockItem != (Object)null)
		{
			mBagGridLockItem.DelayShow();
		}
	}

	public void PlayBubbleBroken()
	{
		int bagMaxinum = Singleton<GameLevelManager>.Instance.GetBagMaxinum();
		int gameBagLimitOpenNum = Singleton<GameLevelManager>.Instance.GetGameBagLimitOpenNum();
		int gameBagOpenLimitStartIndex = ObjectManager.GetInstance().gameLevelModel.GetGameBagOpenLimitStartIndex();
		int gameBagOpenLimitEndIndex = ObjectManager.GetInstance().gameLevelModel.GetGameBagOpenLimitEndIndex();
		LockNodeParent.SetSelfActive<Transform>(false);
		if ((Object)(object)BubbleAnim == (Object)null)
		{
			GameObject val = null;
			if (GridId > bagMaxinum - 1 && GridId <= bagMaxinum + gameBagLimitOpenNum - 1 && gameBagOpenLimitStartIndex <= GridId && GridId < gameBagOpenLimitEndIndex)
			{
				val = CreateGameObject("숄끓炸攅汫=Æ叅숌끥掼琍湒7\u0092厑", EffectParent);
			}
			else
			{
				val = CreateGameObject("숎끈犰漏杫0Î反숵끟暷收歑4\u009e厝由㲌", EffectParent);
				val.transform.SetParent(((Component)parentLogic).transform);
			}
			if ((Object)(object)val != (Object)null)
			{
				BubbleAnim = val.GetComponent<Animation>();
			}
		}
		TimeManager.GetInstance().Schedule(this, (float dt1) =>
		{
			if ((Object)(object)BubbleAnim != (Object)null)
			{
				LockNodeParent.SetSelfActive<Transform>(true);
				Object.Destroy((Object)(object)((Component)BubbleAnim).gameObject);
				BubbleAnim = null;
			}
		}, 2f, 1, 0f);
	}

	public void PlayGeneratorBubbleBroken()
	{
		LockNodeParent.SetSelfActive<Transform>(false);
		if ((Object)(object)GeneratorBubbleAnim == (Object)null)
		{
			GameObject val = CreateGameObject("숎끈犰漏杫0Î反숵끟暷收歑4\u009e厝由㲌", EffectParent);
			if ((Object)(object)val != (Object)null)
			{
				GeneratorBubbleAnim = val.GetComponent<Animation>();
			}
		}
		TimeManager.GetInstance().Schedule(this, (float dt1) =>
		{
			if ((Object)(object)GeneratorBubbleAnim != (Object)null)
			{
				LockNodeParent.SetSelfActive<Transform>(true);
				Object.Destroy((Object)(object)((Component)GeneratorBubbleAnim).gameObject);
				GeneratorBubbleAnim = null;
			}
		}, 1f, 1, 0f);
	}

	private GameObject CreateGameObject(string resName, Transform parent)
	{
		GameObject val = ((BaseViewLogic)parentLogic).Load<GameObject>(resName);
		if ((Object)(object)val == (Object)null)
		{
			return null;
		}
		GameObject val2 = Object.Instantiate<GameObject>(val);
		val2.transform.SetParent(parent);
		val2.transform.LocalIdentity<Transform>();
		return val2;
	}

	public void PlayPutInEffect()
	{
		HideGoodsPutInEffect();
		putInEffectGo = GameLevelDefine.CreateGameObjectAsync("숏끜徿䜐敗&\u0082厁숦끗於氧慑$\u009a厙숇끎疼漈䥫>Ú叙숞끓斆漟摕9\u009a厙嬧二", EffectBottomParent);
		if ((Object)(object)putInEffectGo != (Object)null)
		{
			putInEffectGo.SetSelfActive(active: false);
			TimeManager.GetInstance().Schedule(putInEffectGo, (float dt1) =>
			{
				putInEffectGo.SetSelfActive(active: true);
			}, 0.333f, 1, 0f);
			TimeManager.GetInstance().Schedule(putInEffectGo, (float dt1) =>
			{
				HideGoodsPutInEffect();
			}, 2f, 1, 0f);
		}
		if ((Object)(object)mBagGridItem != (Object)null)
		{
			mBagGridItem.PlayItemPutInEffect();
		}
	}

	public void HideGoodsPutInEffect()
	{
		if ((Object)(object)putInEffectGo != (Object)null)
		{
			TimeManager.GetInstance().ClearSchedule(putInEffectGo);
			GameLevelDefine.RecycleGameObject(putInEffectGo);
			putInEffectGo = null;
		}
	}

	[AsyncStateMachine(typeof(_003CPlayItemVanish_003Ed__57))]
	public UniTask PlayItemVanish(GameGoodsVo _goodsVo, Action _action = null, float delay = 0f)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0049: Unknown result type (might be due to invalid IL or missing references)
		_003CPlayItemVanish_003Ed__57 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj._goodsVo = _goodsVo;
		obj._action = _action;
		obj.delay = delay;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CPlayItemVanish_003Ed__57>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	public void PlayUndoShow()
	{
		//IL_001f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0024: Unknown result type (might be due to invalid IL or missing references)
		//IL_002a: Expected Obj, but got Unknown
		PlayPutInEffect();
		TweenCallback val = _003C_003Ec._003C_003E9__58_0;
		if (val == null)
		{
			TweenCallback val2 = () =>
			{
				AudioManager.Instance.PlayEffect("숇끎澼瘈楫?Â叁煥_4끭r唨䧑");
			};
			_003C_003Ec._003C_003E9__58_0 = val2;
			val = val2;
		}
		DOVirtual.DelayedCall(0.333f, val, true);
	}

	public void PlayPlusNumber(int num, string effectName = "effect_stack_sell_number")
	{
		HidePlusNumber();
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
		TimeManager.GetInstance().Schedule(this, (float dt1) =>
		{
			HidePlusNumber();
		}, 1.1f, 1, 0f);
	}

	public void HidePlusNumber()
	{
		GameLevelDefine.RecycleGameObject(additionalGo);
		additionalGo = null;
	}

	private void SaveGridData()
	{
		Singleton<GameLevelManager>.Instance.ChangeBagMapById(GridId, GetGameGoodsVo());
	}

	public override void Recovery()
	{
		if ((Object)(object)mBagGridItem != (Object)null)
		{
			mBagGridItem.Recovery();
			mBagGridItem = null;
		}
		if ((Object)(object)mBagGridLockItem != (Object)null)
		{
			mBagGridLockItem.Recovery();
			mBagGridLockItem = null;
		}
		LockNodeParent.SetSelfActive<Transform>(true);
		HideGridColorBg();
		SetSelectState(select: false);
		GridId = 0;
		isDrag = false;
		HideGoodsPutInEffect();
		HidePlusNumber();
		base.Recovery();
	}
}
