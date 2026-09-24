using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading;
using DG.Tweening;
using DG.Tweening.Core;
using DG.Tweening.Plugins.Core.PathCore;
using DG.Tweening.Plugins.Options;
using TLF;
using UniRx.Async;
using UniRx.Async.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

public class IndependentItem : ResBase
{
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass69_0
	{
		public Vector3 endScale;

		public IndependentItem _003C_003E4__this;

		public TweenCallback _003C_003E9__2;

		internal void _003CPlayMergeAnim_003Eb__1()
		{
			//IL_0011: Unknown result type (might be due to invalid IL or missing references)
			//IL_001b: Unknown result type (might be due to invalid IL or missing references)
			//IL_0048: Unknown result type (might be due to invalid IL or missing references)
			//IL_004d: Unknown result type (might be due to invalid IL or missing references)
			//IL_004f: Expected Obj, but got Unknown
			//IL_0054: Expected Obj, but got Unknown
			Tweener val = TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(((Component)_003C_003E4__this.ItemIcon).transform, endScale * 1f, 0.1f * GameConst.AnimationScale()), (Ease)3);
			TweenCallback val2 = _003C_003E9__2;
			if (val2 == null)
			{
				TweenCallback val3 = () =>
				{
					//IL_0011: Unknown result type (might be due to invalid IL or missing references)
					TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(((Component)_003C_003E4__this.ItemIcon).transform, endScale, 0.1f * GameConst.AnimationScale()), (Ease)1);
				};
				TweenCallback val4 = val3;
				_003C_003E9__2 = val3;
				val2 = val4;
			}
			TweenSettingsExtensions.OnComplete<Tweener>(val, val2);
		}

		internal void _003CPlayMergeAnim_003Eb__2()
		{
			//IL_0011: Unknown result type (might be due to invalid IL or missing references)
			TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(((Component)_003C_003E4__this.ItemIcon).transform, endScale, 0.1f * GameConst.AnimationScale()), (Ease)1);
		}
	}

	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass70_0
	{
		public IndependentItem _003C_003E4__this;

		public bool isPlayDownEffect;

		public bool isPlayDoubleUp;

		internal void _003CPlayItemFly_003Eb__0()
		{
			//IL_0059: Unknown result type (might be due to invalid IL or missing references)
			//IL_006e: Unknown result type (might be due to invalid IL or missing references)
			Sequence flyScaleQuence = _003C_003E4__this.flyScaleQuence;
			if (flyScaleQuence != null)
			{
				TweenExtensions.Kill((Tween)(object)flyScaleQuence, false);
			}
			Sequence flyMoveQuence = _003C_003E4__this.flyMoveQuence;
			if (flyMoveQuence != null)
			{
				TweenExtensions.Kill((Tween)(object)flyMoveQuence, false);
			}
			((Component)_003C_003E4__this).transform.SetParent(_003C_003E4__this.gameLevelGrid.GameItemParent);
			((Component)_003C_003E4__this).transform.localPosition = Vector3.zero;
			((Component)_003C_003E4__this).transform.localScale = Vector3.one;
			_003C_003E4__this.SetItemScaleAnim(show: true);
			_003C_003E4__this.DragIcon.raycastTarget = true;
			_003C_003E4__this.mPlayFlyAnim = false;
			_003C_003E4__this.UpdateIcon();
			if (isPlayDownEffect && _003C_003E4__this.goodsBaseVo != null && Enumerable.Contains(GameLevelManager.PlayDownEffecGoods, _003C_003E4__this.goodsBaseVo.goodsID))
			{
				_003C_003E4__this.PlayDesignatedEffect(_003C_003E4__this.goodsBaseVo.GetIcon(_003C_003E4__this.gameLevelGrid.GetGridType()) + "晟e4끦g報㻜");
			}
			if (isPlayDoubleUp)
			{
				_003C_003E4__this.PlayOnceAnim("숏끜徿搐敗&\u0082厁숆끏撻爇潑\r\u0096厕匫橰ā讙ꝫ", "", 1f);
			}
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CPlayItemFly_003Ed__70 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public IndependentItem _003C_003E4__this;

		public bool isPlayDownEffect;

		public bool isPlayDoubleUp;

		public bool isBreakAudio;

		public float delay;

		private _003C_003Ec__DisplayClass70_0 _003C_003E8__1;

		public Transform startTrans;

		public string luodiEffectName;

		public string trailEffectName;

		public bool isAddTrail;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_018d: Unknown result type (might be due to invalid IL or missing references)
			//IL_0192: Unknown result type (might be due to invalid IL or missing references)
			//IL_019a: Unknown result type (might be due to invalid IL or missing references)
			//IL_009a: Unknown result type (might be due to invalid IL or missing references)
			//IL_01c8: Unknown result type (might be due to invalid IL or missing references)
			//IL_01cd: Unknown result type (might be due to invalid IL or missing references)
			//IL_01d9: Unknown result type (might be due to invalid IL or missing references)
			//IL_01f0: Unknown result type (might be due to invalid IL or missing references)
			//IL_014f: Unknown result type (might be due to invalid IL or missing references)
			//IL_0154: Unknown result type (might be due to invalid IL or missing references)
			//IL_0158: Unknown result type (might be due to invalid IL or missing references)
			//IL_015d: Unknown result type (might be due to invalid IL or missing references)
			//IL_0172: Unknown result type (might be due to invalid IL or missing references)
			//IL_0174: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			IndependentItem independentItem = _003C_003E4__this;
			try
			{
				Awaiter val2;
				if (num != 0)
				{
					_003C_003E8__1 = new _003C_003Ec__DisplayClass70_0();
					_003C_003E8__1._003C_003E4__this = _003C_003E4__this;
					_003C_003E8__1.isPlayDownEffect = isPlayDownEffect;
					_003C_003E8__1.isPlayDoubleUp = isPlayDoubleUp;
					independentItem.mPlayFlyAnim = true;
					independentItem.SetItemScaleAnim(show: false);
					if (independentItem.DragIcon.raycastTarget)
					{
						independentItem.DragIcon.raycastTarget = false;
					}
					((Component)independentItem).transform.SetParent(independentItem.gameLevelGrid.parentLogic.DragItemParent);
					((Component)independentItem).transform.localScale = Vector3.zero;
					AudioManager.Instance.StopEffect("숉끖抰甊损\r\u008e厍删狫\ud9dcŚ");
					if (isBreakAudio)
					{
						AudioManager.Instance.StopEffect("숉끖榰渊损\rª厩숏끟斩渐摚6\u009a厙녴剟✼\0逝\ud96f");
					}
					AudioManager.Instance.PlayEffect("숉끖榰渊损\rª厩숏끟斩渐摚6\u009a厙녴剟✼\0逝\ud96f");
					if (independentItem.gameLevelGrid.parentLogic.LastClickTime >= IndependentDefine.clickInterval)
					{
						independentItem.mClickSpeed = 1f;
					}
					else
					{
						independentItem.mClickSpeed = IndependentDefine.clickSpeed;
					}
					independentItem.gameLevelGrid.parentLogic.LastClickTime = 0f;
					if (!(delay > 0f))
					{
						goto IL_01b0;
					}
					UniTask val = UniTask.Delay((int)(delay * 1000f), false, (PlayerLoopTiming)4, default(CancellationToken));
					val2 = val.GetAwaiter();
					if (!val2.IsCompleted)
					{
						num = (_003C_003E1__state = 0);
						_003C_003Eu__1 = val2;
						_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CPlayItemFly_003Ed__70>(ref val2, ref this);
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
				goto IL_01b0;
				IL_01b0:
				Action overAction = () =>
				{
					//IL_0059: Unknown result type (might be due to invalid IL or missing references)
					//IL_006e: Unknown result type (might be due to invalid IL or missing references)
					Sequence flyScaleQuence = _003C_003E8__1._003C_003E4__this.flyScaleQuence;
					if (flyScaleQuence != null)
					{
						TweenExtensions.Kill((Tween)(object)flyScaleQuence, false);
					}
					Sequence flyMoveQuence = _003C_003E8__1._003C_003E4__this.flyMoveQuence;
					if (flyMoveQuence != null)
					{
						TweenExtensions.Kill((Tween)(object)flyMoveQuence, false);
					}
					((Component)_003C_003E8__1._003C_003E4__this).transform.SetParent(_003C_003E8__1._003C_003E4__this.gameLevelGrid.GameItemParent);
					((Component)_003C_003E8__1._003C_003E4__this).transform.localPosition = Vector3.zero;
					((Component)_003C_003E8__1._003C_003E4__this).transform.localScale = Vector3.one;
					_003C_003E8__1._003C_003E4__this.SetItemScaleAnim(show: true);
					_003C_003E8__1._003C_003E4__this.DragIcon.raycastTarget = true;
					_003C_003E8__1._003C_003E4__this.mPlayFlyAnim = false;
					_003C_003E8__1._003C_003E4__this.UpdateIcon();
					if (_003C_003E8__1.isPlayDownEffect && _003C_003E8__1._003C_003E4__this.goodsBaseVo != null && Enumerable.Contains(GameLevelManager.PlayDownEffecGoods, _003C_003E8__1._003C_003E4__this.goodsBaseVo.goodsID))
					{
						_003C_003E8__1._003C_003E4__this.PlayDesignatedEffect(_003C_003E8__1._003C_003E4__this.goodsBaseVo.GetIcon(_003C_003E8__1._003C_003E4__this.gameLevelGrid.GetGridType()) + "晟e4끦g報㻜");
					}
					if (_003C_003E8__1.isPlayDoubleUp)
					{
						_003C_003E8__1._003C_003E4__this.PlayOnceAnim("숏끜徿搐敗&\u0082厁숆끏撻爇潑\r\u0096厕匫橰ā讙ꝫ", "", 1f);
					}
				};
				Vector3 position = ((Component)independentItem).transform.position;
				float num2 = position.x - startTrans.position.x;
				float num3 = position.y - startTrans.position.y;
				if (num3 > 0f && num3 < 1.72f && Mathf.Abs(num2) < 0.01f)
				{
					independentItem.ItemFlyAnim2(startTrans, overAction, luodiEffectName, trailEffectName, isAddTrail);
				}
				else
				{
					independentItem.ItemFlyAnim1(startTrans, overAction, luodiEffectName, trailEffectName, isAddTrail);
				}
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
	private struct _003CPlayMergeAnim_003Ed__69 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public IndependentItem _003C_003E4__this;

		private _003C_003Ec__DisplayClass69_0 _003C_003E8__1;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_00c1: Unknown result type (might be due to invalid IL or missing references)
			//IL_00c6: Unknown result type (might be due to invalid IL or missing references)
			//IL_00cd: Unknown result type (might be due to invalid IL or missing references)
			//IL_00f4: Unknown result type (might be due to invalid IL or missing references)
			//IL_00fe: Unknown result type (might be due to invalid IL or missing references)
			//IL_0125: Unknown result type (might be due to invalid IL or missing references)
			//IL_012f: Expected Obj, but got Unknown
			//IL_004d: Unknown result type (might be due to invalid IL or missing references)
			//IL_0052: Unknown result type (might be due to invalid IL or missing references)
			//IL_0062: Unknown result type (might be due to invalid IL or missing references)
			//IL_0085: Unknown result type (might be due to invalid IL or missing references)
			//IL_008a: Unknown result type (might be due to invalid IL or missing references)
			//IL_008e: Unknown result type (might be due to invalid IL or missing references)
			//IL_0093: Unknown result type (might be due to invalid IL or missing references)
			//IL_00a7: Unknown result type (might be due to invalid IL or missing references)
			//IL_00a8: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			IndependentItem CS_0024_003C_003E8__locals13 = _003C_003E4__this;
			try
			{
				Awaiter val2;
				if (num != 0)
				{
					if (!((Object)(object)CS_0024_003C_003E8__locals13.ItemIcon != (Object)null))
					{
						goto IL_0137;
					}
					_003C_003E8__1 = new _003C_003Ec__DisplayClass69_0();
					_003C_003E8__1._003C_003E4__this = CS_0024_003C_003E8__locals13;
					_003C_003E8__1.endScale = ((Component)CS_0024_003C_003E8__locals13.ItemIcon).transform.localScale;
					((Component)CS_0024_003C_003E8__locals13.ItemIcon).transform.localScale = Vector3.zero;
					UniTask val = UniTask.Delay(TimeSpan.FromSeconds(0.019999999552965164), false, (PlayerLoopTiming)4, default(CancellationToken));
					val2 = val.GetAwaiter();
					if (!val2.IsCompleted)
					{
						num = (_003C_003E1__state = 0);
						_003C_003Eu__1 = val2;
						_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CPlayMergeAnim_003Ed__69>(ref val2, ref this);
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
				TweenSettingsExtensions.OnComplete<Tweener>(TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(((Component)CS_0024_003C_003E8__locals13.ItemIcon).transform, _003C_003E8__1.endScale * 1.2f, 0.18f * GameConst.AnimationScale()), (Ease)6), (TweenCallback)(() =>
				{
					//IL_0011: Unknown result type (might be due to invalid IL or missing references)
					//IL_001b: Unknown result type (might be due to invalid IL or missing references)
					//IL_0048: Unknown result type (might be due to invalid IL or missing references)
					//IL_004d: Unknown result type (might be due to invalid IL or missing references)
					//IL_004f: Expected Obj, but got Unknown
					//IL_0054: Expected Obj, but got Unknown
					Tweener val3 = TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(((Component)_003C_003E8__1._003C_003E4__this.ItemIcon).transform, _003C_003E8__1.endScale * 1f, 0.1f * GameConst.AnimationScale()), (Ease)3);
					TweenCallback val4 = _003C_003E8__1._003C_003E9__2;
					if (val4 == null)
					{
						TweenCallback val5 = () =>
						{
							//IL_0011: Unknown result type (might be due to invalid IL or missing references)
							TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(((Component)_003C_003E8__1._003C_003E4__this.ItemIcon).transform, _003C_003E8__1.endScale, 0.1f * GameConst.AnimationScale()), (Ease)1);
						};
						TweenCallback val6 = val5;
						_003C_003E8__1._003C_003E9__2 = val5;
						val4 = val6;
					}
					TweenSettingsExtensions.OnComplete<Tweener>(val3, val4);
				}));
				_003C_003E8__1 = null;
				goto IL_0137;
				IL_0137:
				if ((Object)(object)CS_0024_003C_003E8__locals13.mMergeSuccessGo == (Object)null)
				{
					CS_0024_003C_003E8__locals13.mMergeSuccessGo = CS_0024_003C_003E8__locals13.CreateGameObject("숏끜徿栐敗&\u0082厁숉끔溾朊敜7¾厽焍㡉", ((Component)CS_0024_003C_003E8__locals13).transform);
					TimeManager.GetInstance().Schedule(CS_0024_003C_003E8__locals13, (float dt1) =>
					{
						if ((Object)(object)CS_0024_003C_003E8__locals13.mMergeSuccessGo != (Object)null)
						{
							Object.Destroy((Object)(object)CS_0024_003C_003E8__locals13.mMergeSuccessGo);
							CS_0024_003C_003E8__locals13.mMergeSuccessGo = null;
						}
					}, 0.3f, 1, 0f);
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

	public static float IconNormalScale = 0.565f;

	public static float IconBubbleScale = 0.45f;

	private IndependentGameGoodsVo gameGoodsVo;

	private IndependentGrid gameLevelGrid;

	private IIndependentGoodsBaseVo goodsBaseVo;

	private GameButton mGameButton;

	private bool mPlayFlyAnim;

	private float mCellSpace = 85f;

	private int mItemW = 1;

	private int mItemH = 1;

	private IndepentCollectWidget mItemCollectWidget;

	private IndependentWebiconView mItemWebiconView;

	private IndependentBatchProduceWidget mBatchProduceWidget;

	private float mIconCurrentScale = 1f;

	private float mClickSpeed = 1f;

	private float move1TimeMin = 0.333f;

	private float move1TimeMax = 0.617f;

	private float move2Time = 0.383f;

	private float distanceY_1 = 0.125f;

	private float distanceY_2 = 0.05f;

	private Sequence flyScaleQuence;

	private Sequence flyMoveQuence;

	private bool isDownSelect;

	private GameObject mEffectTopStar;

	private GameObject mDropIdleEffect;

	private Animation BubbleAnim;

	private GameObject TransferGateGo;

	private GameObject mMergeHintGo;

	private GameObject mAutoCoveredHintGo;

	private GameObject mMergeSuccessGo;

	private Sequence ItemMoveTween;

	private Tween MergeHintTween;

	public Transform CoveredBoxBrokenParent;

	private GameObject CoveredBoxAnimGo;

	private GameObject onceEffectGo;

	private GameObject mDesignatedEffect;

	private GameObject mSpecialHintGo;

	public Transform ItemIconParent;

	public Image ItemIcon;

	public Image CoveredBoxIcon;

	public Image WebIcon;

	public Image MaskIcon;

	public GameObject BubbleIconGo;

	public Transform BubbleParent;

	public Text BubbleNumText;

	public Graphic DragIcon;

	public Image MaxLevelIcon;

	public Transform EffectParent;

	public Transform EffectTopParent;

	public Text DebugText;

	public bool PlayFlyAnim => mPlayFlyAnim;

	public IndependentGameGoodsVo GetGameGoodsVo => gameGoodsVo;

	private void Awake()
	{
		//IL_0022: Unknown result type (might be due to invalid IL or missing references)
		//IL_002c: Expected Obj, but got Unknown
		GameButton component = ((Component)this).gameObject.GetComponent<GameButton>();
		if ((Object)(object)component != (Object)null)
		{
			((UnityEvent)component.onPointerDownClick).AddListener((UnityAction)OnPointDownClick);
		}
	}

	public void Init(IndependentGameGoodsVo goodsVo, IndependentGrid _grid)
	{
		gameGoodsVo = goodsVo;
		gameLevelGrid = _grid;
		mGameButton = ((Component)this).gameObject.GetComponent<GameButton>();
		if (gameGoodsVo == null)
		{
			Log.E("鍿\u035bꦊ\uef1e猫畂쩩\ud8b9");
		}
		else
		{
			InitItem();
		}
	}

	private void InitItem()
	{
		goodsBaseVo = IndependentDefine.GetGoodsConfigById(gameLevelGrid.GetGridType(), gameGoodsVo.goodsID);
		if (goodsBaseVo != null)
		{
			UpdateIcon();
		}
	}

	public void UpdateIcon()
	{
		if (mPlayFlyAnim || goodsBaseVo == null)
		{
			return;
		}
		Reset();
		UpdateGoodsShow();
		UpdateBubbleShow();
		UpdateTransferGateShow();
		switch (gameGoodsVo.GoodsState)
		{
		case IndependentGoodsState.Lock:
			UpdateLock();
			break;
		case IndependentGoodsState.Covered:
		case IndependentGoodsState.FakeCovered:
			UpdateCovered();
			break;
		case IndependentGoodsState.InitiativeProduce:
			PlayProduceIdle();
			break;
		case IndependentGoodsState.Normal:
		case IndependentGoodsState.BatchProduce:
			if (gameGoodsVo.MergeDropList.Count > 0 || gameGoodsVo.MergeDropItemList.Count > 0)
			{
				PlayAutoDropIdle();
			}
			else
			{
				HideAutoDropIdle();
			}
			break;
		case IndependentGoodsState.CanCollect:
			if ((Object)(object)gameLevelGrid != (Object)null && IndependentDefine.IsShowProduceIdle(gameLevelGrid.GetGridType(), goodsBaseVo.goodsID))
			{
				PlayProduceIdle();
			}
			break;
		}
		ShowGeneratorDebug();
	}

	private void UpdateGoodsShow()
	{
		//IL_01bc: Unknown result type (might be due to invalid IL or missing references)
		//IL_01c6: Unknown result type (might be due to invalid IL or missing references)
		//IL_0190: Unknown result type (might be due to invalid IL or missing references)
		//IL_019a: Unknown result type (might be due to invalid IL or missing references)
		//IL_00f4: Unknown result type (might be due to invalid IL or missing references)
		//IL_00fe: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c8: Unknown result type (might be due to invalid IL or missing references)
		//IL_00d2: Unknown result type (might be due to invalid IL or missing references)
		//IL_0120: Unknown result type (might be due to invalid IL or missing references)
		//IL_012c: Unknown result type (might be due to invalid IL or missing references)
		if (goodsBaseVo == null)
		{
			return;
		}
		UpdateMaxLevel();
		if ((Object)(object)ItemIcon != (Object)null && goodsBaseVo != null && resLoader != null)
		{
			bool flag = true;
			IIndependentGoodsCollectVo collectConfigById = IndependentDefine.GetCollectConfigById(gameLevelGrid.GetGridType(), goodsBaseVo.goodsID);
			if (collectConfigById != null && collectConfigById.itemType == 12)
			{
				BaseData3VO realityDataByCollectVo = IndependentDefine.GetRealityDataByCollectVo(gameLevelGrid.GetGridType(), collectConfigById);
				if (realityDataByCollectVo != null)
				{
					ItemIcon.sprite = resLoader.LoadSync<Sprite>(realityDataByCollectVo.Icon());
					if (realityDataByCollectVo.type == 2 || realityDataByCollectVo.type == 12)
					{
						if (goodsBaseVo.type == 3)
						{
							((Component)ItemIcon).transform.localScale = Vector3.one * IconBubbleScale;
							mIconCurrentScale = IconBubbleScale;
						}
						else
						{
							((Component)ItemIcon).transform.localScale = Vector3.one * IconNormalScale;
							mIconCurrentScale = IconNormalScale;
						}
					}
					else
					{
						((Component)ItemIcon).transform.localScale = Vector3.one * realityDataByCollectVo.Scale();
						mIconCurrentScale = realityDataByCollectVo.Scale();
					}
					flag = false;
				}
			}
			if (flag)
			{
				ItemIcon.sprite = resLoader.LoadSync<Sprite>(goodsBaseVo.GetIcon(gameLevelGrid.GetGridType()));
				if (goodsBaseVo.type == 3)
				{
					((Component)ItemIcon).transform.localScale = Vector3.one * IconBubbleScale;
					mIconCurrentScale = IconBubbleScale;
				}
				else
				{
					((Component)ItemIcon).transform.localScale = Vector3.one * IconNormalScale;
					mIconCurrentScale = IconNormalScale;
				}
			}
			((Graphic)ItemIcon).SetNativeSize();
		}
		if (IIndependentGoodsBaseVo.IsAutoConversion(goodsBaseVo.type) && !IIndependentGoodsBaseVo.CannotDrag(gameGoodsVo.GoodsState))
		{
			UpdateCollectProgress();
		}
		if (goodsBaseVo.type == 8 && !IIndependentGoodsBaseVo.CannotDrag(gameGoodsVo.GoodsState))
		{
			UpdateBatchProduceProgress();
		}
	}

	private void UpdateMaxLevel()
	{
		if (gameGoodsVo != null && goodsBaseVo != null && goodsBaseVo.type != 3 && goodsBaseVo.type != 10 && !IIndependentGoodsBaseVo.IsAutoConversion(goodsBaseVo.type) && !IIndependentGoodsBaseVo.IsBatchProduce(goodsBaseVo.type) && !IIndependentGoodsBaseVo.CannotMerge(gameGoodsVo.GoodsState) && IndependentDefine.GetGoodsConfigBySeriesAndLevel(gameLevelGrid.GetGridType(), goodsBaseVo.series, goodsBaseVo.level + 1) == null)
		{
			MaxLevelIcon.SetSelfActive<Image>(true);
		}
	}

	private void UpdateBubbleShow()
	{
		if (goodsBaseVo == null || goodsBaseVo.type != 3)
		{
			return;
		}
		BubbleIconGo.SetSelfActive(active: true);
		IIndependentGoodsCollectVo collectConfigById = IndependentDefine.GetCollectConfigById(gameLevelGrid.GetGridType(), goodsBaseVo.goodsID);
		if (collectConfigById != null)
		{
			int num = collectConfigById.amount;
			if (collectConfigById.itemType == 12)
			{
				BaseData3VO realityDataByCollectVo = IndependentDefine.GetRealityDataByCollectVo(gameLevelGrid.GetGridType(), collectConfigById);
				if (realityDataByCollectVo != null)
				{
					num = realityDataByCollectVo.num;
				}
			}
			BubbleNumText.text = string.Format("勡㏗\ud9d0ŉ", num);
		}
		else
		{
			BubbleNumText.text = "";
		}
		PlayBubbleIdle();
	}

	private void UpdateTransferGateShow()
	{
		if (goodsBaseVo != null)
		{
			if (goodsBaseVo.type == 10 && IndependentDefine.IsCompleteCurrentStage(gameLevelGrid.GetGridType()) && IndependentDefine.IsPlayKeyAnimtion(gameLevelGrid.GetGridType()))
			{
				ShowTransferGateIdle();
			}
			else
			{
				HideTransferGateIdle();
			}
		}
	}

	private void UpdateCovered()
	{
		ItemIcon.SetSelfActive<Image>(false);
		CoveredBoxIcon.SetSelfActive<Image>(true);
		((Component)CoveredBoxIcon).transform.setLocalPosition();
		if ((Object)(object)gameLevelGrid != (Object)null)
		{
			IndependentDefine.SetGridCoveredSprite(CoveredBoxIcon, resLoader, gameLevelGrid.GetGridType(), gameLevelGrid.GetGridId());
		}
	}

	private void UpdateLock()
	{
		WebIcon.SetSelfActive<Image>(true);
		((Component)WebIcon).transform.setLocalPosition();
		((Component)WebIcon).transform.LocalIdentity<Transform>();
		if ((Object)(object)gameLevelGrid != (Object)null)
		{
			IndependentDefine.SetGridLockSprite(WebIcon, resLoader, gameLevelGrid.GetGridType(), gameLevelGrid.GetGridId());
		}
	}

	private void UpdateUnlockProgress(int has, int need)
	{
		if (ObjectManager.GetInstance().independentMergeModel.IsInActivity() && ObjectManager.GetInstance().independentMergeModel.ThemeID == 2 && gameGoodsVo != null && goodsBaseVo != null && !IIndependentGoodsBaseVo.CannotDrag(gameGoodsVo.GoodsState) && goodsBaseVo.type == 5)
		{
			MaskIcon.SetSelfActive<Image>(true);
			string text = "숏끔溽搐䥄7¾厽숭끔断䤮敕?\u009a厙숵끕榷渶捙3ª厩蘓þ赴";
			MaskIcon.sprite = resLoader.LoadSync<Sprite>(need switch
			{
				1 => "숏끔溽搐䥄7¾厽숭끔断䤮敕?\u009a厙숵끕榷渶捙3ª厩蘡þ赴", 
				2 => (has != 0) ? "숏끔溽搐䥄7¾厽숭끔断䤮敕?\u009a厙숵끕榷渶捙3ª厩蘡þ赴" : "숏끔溽搐䥄7¾厽숭끔断䤮敕?\u009a厙숵끕榷渶捙3ª厩蘔þ赴", 
				_ => has switch
				{
					0 => "숏끔溽搐䥄7¾厽숭끔断䤮敕?\u009a厙숵끕榷渶捙3ª厩蘓þ赴", 
					1 => "숏끔溽搐䥄7¾厽숭끔断䤮敕?\u009a厙숵끕榷渶捙3ª厩蘔þ赴", 
					_ => "숏끔溽搐䥄7¾厽숭끔断䤮敕?\u009a厙숵끕榷渶捙3ª厩蘡þ赴", 
				}, 
			});
			((Graphic)MaskIcon).SetNativeSize();
		}
	}

	public void UpdateCollectProgress()
	{
		//IL_0130: Unknown result type (might be due to invalid IL or missing references)
		if (goodsBaseVo == null)
		{
			HideCollectWidget();
			return;
		}
		IIndependentAutoConversionVO independentAutoConversionVO = null;
		List<IIndependentAutoConversionVO> autoConversionVoByID = IndependentDefine.GetAutoConversionVoByID(gameLevelGrid.GetGridType(), goodsBaseVo.goodsID);
		if (autoConversionVoByID != null && autoConversionVoByID.Count > 0)
		{
			independentAutoConversionVO = autoConversionVoByID[0];
		}
		if (independentAutoConversionVO == null)
		{
			HideCollectWidget();
			return;
		}
		int needNum = 0;
		independentAutoConversionVO.GetMaterials().ForEach((BaseData2VO item) =>
		{
			needNum += item.num;
		});
		float progress = (float)gameGoodsVo.MakeMaterials.Count / (float)needNum;
		if (gameGoodsVo.MakeMaterials.Count == 0 && goodsBaseVo.type == 5)
		{
			HideCollectWidget();
		}
		else
		{
			if ((Object)(object)mItemCollectWidget == (Object)null)
			{
				string collectWidgetName = IndependentDefine.GetCollectWidgetName(gameLevelGrid.GetGridType());
				if (collectWidgetName.IsNullOrEmpty())
				{
					return;
				}
				GameObject val = CreateGameObject(collectWidgetName, ((Component)this).transform);
				if ((Object)(object)val != (Object)null)
				{
					mItemCollectWidget = val.GetComponent<IndepentCollectWidget>();
					if ((Object)(object)mItemCollectWidget != (Object)null)
					{
						((Component)mItemCollectWidget).transform.localPosition = new Vector3(0f, -36.5f, 0f);
						mItemCollectWidget.Init(goodsBaseVo, independentAutoConversionVO, needNum, resLoader, gameLevelGrid.GetGridType());
					}
				}
			}
			int count = gameGoodsVo.MakeMaterials.Count;
			if ((Object)(object)mItemCollectWidget != (Object)null)
			{
				mItemCollectWidget.SetProgress(progress, count, needNum);
			}
		}
		UpdateUnlockProgress(gameGoodsVo.MakeMaterials.Count, needNum);
	}

	public void UpdateBatchProduceProgress()
	{
		//IL_00ea: Unknown result type (might be due to invalid IL or missing references)
		if (goodsBaseVo == null)
		{
			HideBatchProduceWidget();
			return;
		}
		IIndependentBatchProduce batchProduceConfigById = IndependentDefine.GetBatchProduceConfigById(gameLevelGrid.GetGridType(), goodsBaseVo.goodsID);
		if (batchProduceConfigById == null)
		{
			HideBatchProduceWidget();
			return;
		}
		int capacity = batchProduceConfigById.capacity;
		float progress = (float)gameGoodsVo.ProduceTotal / (float)capacity;
		if (gameGoodsVo.ProduceTotal == 0 && goodsBaseVo.type == 8)
		{
			HideBatchProduceWidget();
			return;
		}
		if ((Object)(object)mBatchProduceWidget == (Object)null)
		{
			string batchProduceWidgetName = IndependentDefine.GetBatchProduceWidgetName(gameLevelGrid.GetGridType());
			if (batchProduceWidgetName.IsNullOrEmpty())
			{
				return;
			}
			GameObject val = CreateGameObject(batchProduceWidgetName, ((Component)this).transform);
			if ((Object)(object)val != (Object)null)
			{
				mBatchProduceWidget = val.GetComponent<IndependentBatchProduceWidget>();
				if ((Object)(object)mBatchProduceWidget != (Object)null)
				{
					((Component)mBatchProduceWidget).transform.localPosition = new Vector3(0f, -36.5f, 0f);
					mBatchProduceWidget.Init(goodsBaseVo, capacity, resLoader);
				}
			}
		}
		int produceTotal = gameGoodsVo.ProduceTotal;
		if ((Object)(object)mBatchProduceWidget != (Object)null)
		{
			mBatchProduceWidget.SetProgress(progress, produceTotal, capacity);
		}
	}

	public void UpdateItemState(IndependentGoodsState goodsState)
	{
		if (goodsBaseVo != null && gameGoodsVo.GoodsState != goodsState)
		{
			gameGoodsVo.GoodsState = goodsState;
			UpdateIcon();
		}
	}

	public void SetItemScaleAnim(bool show)
	{
		if ((Object)(object)mGameButton != (Object)null)
		{
			mGameButton.EnableClickScal = show;
		}
	}

	public IndependentGrid GetGameLevelGrid()
	{
		return gameLevelGrid;
	}

	public void OnItemClick()
	{
		if (!IIndependentGoodsBaseVo.CanSelect(gameGoodsVo.GoodsState))
		{
			return;
		}
		if (isDownSelect)
		{
			isDownSelect = false;
			if (gameLevelGrid.CanDirectUse())
			{
				gameLevelGrid.OnSelectGrid(isProduce: true, showTip: true);
			}
			else
			{
				gameLevelGrid.OnSelectGrid(isProduce: false, showTip: true);
			}
		}
		else
		{
			gameLevelGrid.OnSelectGrid(isProduce: true, showTip: true);
		}
		ShowGeneratorDebug();
		if ((Object)(object)gameLevelGrid != (Object)null)
		{
			gameLevelGrid.OnOpenGoodInfoView();
		}
	}

	private void OnPointDownClick()
	{
		if (IIndependentGoodsBaseVo.CanSelect(gameGoodsVo.GoodsState) && !gameLevelGrid.IsCurrentSelectGrid())
		{
			isDownSelect = true;
			gameLevelGrid.OnSelectGrid(isProduce: false, showTip: false, playSelectAnim: false);
			ShowGeneratorDebug();
		}
	}

	public void PlayProduceIdle()
	{
		//IL_0040: Unknown result type (might be due to invalid IL or missing references)
		string resName = "숏끜徿朐敗&\u0082厁숃끗涼弄慀7º厹划擫\ud9dbņ";
		if ((Object)(object)mEffectTopStar == (Object)null)
		{
			mEffectTopStar = CreateGameObject(resName, EffectTopParent);
			if ((Object)(object)mEffectTopStar != (Object)null)
			{
				mEffectTopStar.transform.localScale = Vector3.one;
			}
		}
		mEffectTopStar.SetSelfActive(active: true);
	}

	public void HideProduceAnim()
	{
		if ((Object)(object)mEffectTopStar != (Object)null)
		{
			mEffectTopStar.SetSelfActive(active: false);
		}
	}

	public void PlayAutoDropIdle()
	{
		//IL_0040: Unknown result type (might be due to invalid IL or missing references)
		string resName = "숏끜徿朐敗&\u0082厁숃끗涼弄慀7º厹划擫\ud9dbņ";
		if ((Object)(object)mDropIdleEffect == (Object)null)
		{
			mDropIdleEffect = CreateGameObject(resName, EffectTopParent);
			if ((Object)(object)mDropIdleEffect != (Object)null)
			{
				mDropIdleEffect.transform.localScale = Vector3.one;
			}
		}
		mDropIdleEffect.SetSelfActive(active: true);
	}

	public void HideAutoDropIdle()
	{
		if ((Object)(object)mDropIdleEffect != (Object)null)
		{
			mDropIdleEffect.DestroySelf<GameObject>();
			mDropIdleEffect = null;
		}
	}

	public void PlayBubbleIdle()
	{
		if ((Object)(object)BubbleAnim == (Object)null)
		{
			GameObject val = CreateGameObject(GetBubbleAniName(), BubbleParent);
			if ((Object)(object)val != (Object)null)
			{
				BubbleAnim = val.GetComponent<Animation>();
			}
		}
		if (!((Object)(object)BubbleAnim == (Object)null))
		{
			BubbleAnim.Stop();
			BubbleAnim.Play("숏끜徿焐敗&\u0082厁숅끊憸椆楫6\u008a厉녪孩㉐\0這\ud974");
		}
	}

	public void PlayBubbleHide()
	{
	}

	public void PlayBubbleBroken()
	{
		if ((Object)(object)BubbleAnim == (Object)null)
		{
			GameObject val = CreateGameObject(GetBubbleAniName(), ((Component)this).transform);
			if ((Object)(object)val != (Object)null)
			{
				BubbleAnim = val.GetComponent<Animation>();
			}
		}
		if ((Object)(object)BubbleAnim == (Object)null)
		{
			return;
		}
		BubbleAnim.Stop();
		BubbleAnim.Play("숏끜徿焐敗&\u0082厁숅끊澸猆楫\"Â叁녵孩㉐\0這\ud974");
		TimeManager.GetInstance().Schedule(this, (float dt1) =>
		{
			if ((Object)(object)BubbleAnim != (Object)null)
			{
				Object.Destroy((Object)(object)((Component)BubbleAnim).gameObject);
				BubbleAnim = null;
			}
		}, 1f, 1, 0f);
	}

	public void ShowTransferGateIdle()
	{
		if ((Object)(object)TransferGateGo == (Object)null)
		{
			string transferIdleName = IndependentDefine.GetTransferIdleName(gameLevelGrid.GetGridType());
			TransferGateGo = CreateGameObject(transferIdleName, EffectParent);
		}
		if ((Object)(object)TransferGateGo != (Object)null)
		{
			ItemIcon.SetSelfActive<Image>(false);
		}
	}

	public void HideTransferGateIdle()
	{
		ItemIcon.SetSelfActive<Image>(true);
		if ((Object)(object)TransferGateGo != (Object)null)
		{
			Object.Destroy((Object)(object)TransferGateGo);
			TransferGateGo = null;
		}
	}

	public void PlayWebIconAnim(int has, int need)
	{
		if ((Object)(object)mItemWebiconView != (Object)null)
		{
			HideWebiconAnim();
		}
		GameObject val = CreateGameObject("숚끝憠甛敀\r\u008a厉숅끕斺爆瑚$\u009a厙숄끓憶猅獫?\u008a厉列楇\ud9c3Ō", EffectTopParent);
		if ((Object)(object)val != (Object)null)
		{
			mItemWebiconView = val.GetComponent<IndependentWebiconView>();
		}
		if (!((Object)(object)mItemWebiconView == (Object)null))
		{
			mItemWebiconView.PlayAnimation(has, need, () =>
			{
				HideWebiconAnim();
				UpdateIcon();
			});
		}
	}

	public void HideWebiconAnim()
	{
		if ((Object)(object)mItemWebiconView != (Object)null)
		{
			mItemWebiconView.Clear();
			Object.Destroy((Object)(object)((Component)mItemWebiconView).gameObject);
			mItemWebiconView = null;
		}
	}

	public void PlayCollectAnim(int has, int need, float delay)
	{
		if ((Object)(object)mItemCollectWidget != (Object)null)
		{
			mItemCollectWidget.PlayShowAnim(has, need, delay);
		}
	}

	public void PlayBatchCollectAnim(int has, int need, float delay)
	{
		if ((Object)(object)mBatchProduceWidget != (Object)null)
		{
			mBatchProduceWidget.PlayShowAnim(has, need, delay);
		}
	}

	public void PlayItemShow(Action action = null, float delay = 0f)
	{
		//IL_003e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0043: Unknown result type (might be due to invalid IL or missing references)
		//IL_0053: Unknown result type (might be due to invalid IL or missing references)
		//IL_0090: Unknown result type (might be due to invalid IL or missing references)
		//IL_009a: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b6: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c0: Expected Obj, but got Unknown
		if (!((Object)(object)ItemIcon != (Object)null))
		{
			return;
		}
		Vector3 endScale = ((Component)ItemIcon).transform.localScale;
		((Component)ItemIcon).transform.localScale = Vector3.zero;
		if (delay > 0f)
		{
			TweenCallback val3 = default;
			TimeManager.GetInstance().Schedule(this, (float dt1) =>
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_0020: Unknown result type (might be due to invalid IL or missing references)
				//IL_0047: Unknown result type (might be due to invalid IL or missing references)
				//IL_004c: Unknown result type (might be due to invalid IL or missing references)
				//IL_004e: Expected Obj, but got Unknown
				//IL_0053: Expected Obj, but got Unknown
				Tweener val = ShortcutExtensions.DOScale(((Component)ItemIcon).transform, endScale * 1.2f, 0.2f * GameConst.AnimationScale());
				TweenCallback val2 = val3;
				if (val2 == null)
				{
					TweenCallback val4 = () =>
					{
						//IL_0016: Unknown result type (might be due to invalid IL or missing references)
						//IL_004c: Unknown result type (might be due to invalid IL or missing references)
						//IL_0051: Unknown result type (might be due to invalid IL or missing references)
						//IL_0053: Expected Obj, but got Unknown
						//IL_0058: Expected Obj, but got Unknown
						Tweener val6 = ShortcutExtensions.DOScale(((Component)ItemIcon).transform, endScale, 0.3f * GameConst.AnimationScale());
						TweenCallback val8 = default;
						TweenCallback val7 = val8;
						if (val7 == null)
						{
							TweenCallback val9 = () =>
							{
								action.InvokeGracefully();
							};
							TweenCallback val10 = val9;
							val8 = val9;
							val7 = val10;
						}
						TweenSettingsExtensions.OnComplete<Tweener>(val6, val7);
						UpdateMaxLevel();
					};
					TweenCallback val5 = val4;
					val3 = val4;
					val2 = val5;
				}
				TweenSettingsExtensions.OnComplete<Tweener>(val, val2);
			}, delay, 1);
			return;
		}
		TweenSettingsExtensions.OnComplete<Tweener>(ShortcutExtensions.DOScale(((Component)ItemIcon).transform, endScale * 1.2f, 0.2f * GameConst.AnimationScale()), (TweenCallback)(() =>
		{
			//IL_0016: Unknown result type (might be due to invalid IL or missing references)
			//IL_004c: Unknown result type (might be due to invalid IL or missing references)
			//IL_0051: Unknown result type (might be due to invalid IL or missing references)
			//IL_0053: Expected Obj, but got Unknown
			//IL_0058: Expected Obj, but got Unknown
			Tweener val = ShortcutExtensions.DOScale(((Component)ItemIcon).transform, endScale, 0.3f * GameConst.AnimationScale());
			TweenCallback val3 = default;
			TweenCallback val2 = val3;
			if (val2 == null)
			{
				TweenCallback val4 = () =>
				{
					action.InvokeGracefully();
				};
				TweenCallback val5 = val4;
				val3 = val4;
				val2 = val5;
			}
			TweenSettingsExtensions.OnComplete<Tweener>(val, val2);
			UpdateMaxLevel();
		}));
	}

	public void PlayItemHide(Action action, float duration = 0.2f)
	{
		//IL_003e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0048: Expected Obj, but got Unknown
		if ((Object)(object)ItemIcon != (Object)null)
		{
			TweenSettingsExtensions.OnComplete<Tweener>(ShortcutExtensions.DOScale(((Component)ItemIcon).transform, 0f, duration * GameConst.AnimationScale()), (TweenCallback)(() =>
			{
				action.InvokeGracefully();
			}));
		}
		MaxLevelIcon.SetSelfActive<Image>(false);
	}

	public void PlayMergeHint()
	{
		if ((Object)(object)mMergeHintGo == (Object)null)
		{
			mMergeHintGo = CreateGameObject("숏끜徿栐敗&\u0082厁숉끔溾朊敜7¾厽숌끒ㆬ弍捕\rÉ又럔\u00af赴", EffectParent);
		}
	}

	public void PlayMergeHintHide()
	{
		if ((Object)(object)mMergeHintGo != (Object)null)
		{
			Object.Destroy((Object)(object)mMergeHintGo);
			mMergeHintGo = null;
		}
	}

	public void PlayAutoCoveredHint()
	{
		if ((Object)(object)mAutoCoveredHintGo != (Object)null)
		{
			Object.Destroy((Object)(object)mAutoCoveredHintGo);
			mAutoCoveredHintGo = null;
			TimeManager.GetInstance().ClearSchedule(this);
		}
		mAutoCoveredHintGo = CreateGameObject("숏끔溽搐楄7¾厽숵끔璭漶敕'Ö叕순끙斶搝彑 \u009a厙医橨ā讹酴", EffectParent);
		if (!((Object)(object)mAutoCoveredHintGo == (Object)null))
		{
			Animation component = mAutoCoveredHintGo.GetComponent<Animation>();
			if ((Object)(object)component != (Object)null)
			{
				component.Stop();
				component.Play("숏끔溽搐䥄7¾厽숧끔枭攨救 ¢厡숝끓碼弞噫4æ句숍끈犰攎瑓7Î反숚끥徶愛摑<\u0082厁显䥱");
			}
		}
	}

	public void AutoCoveredHintHide()
	{
		if ((Object)(object)mAutoCoveredHintGo != (Object)null)
		{
			Animation component = mAutoCoveredHintGo.GetComponent<Animation>();
			if ((Object)(object)component != (Object)null)
			{
				component.Stop();
				component.Play("숏끔溽搐䥄7¾厽숧끔枭攨救 ¢厡숝끓碼弞噫4æ句숍끈犰攎瑓7Î反숆끥斺弇摛!\u009a厙룲\u0083赴");
			}
			TimeManager.GetInstance().Schedule(this, (float dt1) =>
			{
				Object.Destroy((Object)(object)mAutoCoveredHintGo);
				mAutoCoveredHintGo = null;
			}, 1f, 1);
		}
	}

	[AsyncStateMachine(typeof(_003CPlayMergeAnim_003Ed__69))]
	public UniTask PlayMergeAnim()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0031: Unknown result type (might be due to invalid IL or missing references)
		_003CPlayMergeAnim_003Ed__69 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CPlayMergeAnim_003Ed__69>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	[AsyncStateMachine(typeof(_003CPlayItemFly_003Ed__70))]
	public UniTask PlayItemFly(Transform startTrans, float animationDuration = 0.4f, bool isPlayDownEffect = false, bool isPlayDoubleUp = false, float delay = 0f, bool isBreakAudio = false, string luodiEffectName = "effect_IndependentItem_luodi", string trailEffectName = "", bool isAddTrail = false)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0077: Unknown result type (might be due to invalid IL or missing references)
		_003CPlayItemFly_003Ed__70 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj.startTrans = startTrans;
		obj.isPlayDownEffect = isPlayDownEffect;
		obj.isPlayDoubleUp = isPlayDoubleUp;
		obj.delay = delay;
		obj.isBreakAudio = isBreakAudio;
		obj.luodiEffectName = luodiEffectName;
		obj.trailEffectName = trailEffectName;
		obj.isAddTrail = isAddTrail;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CPlayItemFly_003Ed__70>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	public void AwaitPlayItemFly()
	{
		//IL_0048: Unknown result type (might be due to invalid IL or missing references)
		mPlayFlyAnim = true;
		SetItemScaleAnim(show: false);
		if (DragIcon.raycastTarget)
		{
			DragIcon.raycastTarget = false;
		}
		((Component)this).transform.SetParent(gameLevelGrid.parentLogic.DragItemParent);
		((Component)this).transform.localScale = Vector3.zero;
	}

	public void PlayItemMove(Vector3 startPos, float animationDuration = 0.4f, bool exchange = true)
	{
		//IL_0001: Unknown result type (might be due to invalid IL or missing references)
		PlayItemMoveB(startPos, animationDuration, exchange);
	}

	private void PlayItemMoveB(Vector3 startPos, float animationDuration = 0.4f, bool exchange = true)
	{
		//IL_0071: Unknown result type (might be due to invalid IL or missing references)
		//IL_0076: Unknown result type (might be due to invalid IL or missing references)
		//IL_007d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0089: Unknown result type (might be due to invalid IL or missing references)
		//IL_009d: Unknown result type (might be due to invalid IL or missing references)
		//IL_009e: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a3: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ae: Unknown result type (might be due to invalid IL or missing references)
		//IL_00af: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b4: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b5: Unknown result type (might be due to invalid IL or missing references)
		//IL_00f8: Unknown result type (might be due to invalid IL or missing references)
		//IL_00f9: Unknown result type (might be due to invalid IL or missing references)
		//IL_00fa: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ff: Unknown result type (might be due to invalid IL or missing references)
		//IL_0102: Unknown result type (might be due to invalid IL or missing references)
		//IL_0107: Unknown result type (might be due to invalid IL or missing references)
		//IL_010a: Unknown result type (might be due to invalid IL or missing references)
		//IL_010c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0111: Unknown result type (might be due to invalid IL or missing references)
		//IL_0116: Unknown result type (might be due to invalid IL or missing references)
		//IL_0122: Unknown result type (might be due to invalid IL or missing references)
		//IL_0124: Unknown result type (might be due to invalid IL or missing references)
		//IL_0129: Unknown result type (might be due to invalid IL or missing references)
		//IL_0194: Unknown result type (might be due to invalid IL or missing references)
		//IL_01bd: Unknown result type (might be due to invalid IL or missing references)
		//IL_0145: Unknown result type (might be due to invalid IL or missing references)
		//IL_016e: Unknown result type (might be due to invalid IL or missing references)
		//IL_01e2: Unknown result type (might be due to invalid IL or missing references)
		//IL_01ec: Expected Obj, but got Unknown
		mPlayFlyAnim = true;
		if (MonoSingleton<GuideManager>.Instance.IsInGuide())
		{
			((Component)this).transform.SetParent(((Component)gameLevelGrid).transform.parent);
		}
		else
		{
			((Component)this).transform.SetParent(gameLevelGrid.parentLogic.DragItemParent);
		}
		SetItemScaleAnim(show: false);
		if (DragIcon.raycastTarget)
		{
			DragIcon.raycastTarget = false;
		}
		Vector3 position = ((Component)this).transform.position;
		((Component)this).transform.position = startPos;
		((Component)this).transform.localScale = Vector3.one;
		Vector3 val = Singleton<GameLevelManager>.Instance.UICamera.WorldToScreenPoint(startPos);
		Vector3 val2 = Singleton<GameLevelManager>.Instance.UICamera.WorldToScreenPoint(position);
		float num = Vector3.Distance(val2, val);
		float num2 = num * 0.06f;
		if (num >= GameLevelViewLogic.GridWidth)
		{
			num2 *= 0.5f;
			if (num2 < 5f)
			{
				num2 = 5f;
			}
			if (num2 > 15f)
			{
				num2 = 15f;
			}
		}
		else
		{
			num2 *= 1f;
		}
		Vector3 val3 = val2 - val;
		Vector3 normalized = val3.normalized;
		Vector3 val4 = val2 + num2 * normalized;
		Vector3 val5 = Singleton<GameLevelManager>.Instance.UICamera.ScreenToWorldPoint(val4);
		ItemMoveTween = DOTween.Sequence();
		if (exchange)
		{
			TweenSettingsExtensions.Append(ItemMoveTween, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOMove(((Component)this).transform, val5, 0.17999999f, false), GameLevelDefine.Exchange_Curve_1));
			TweenSettingsExtensions.Append(ItemMoveTween, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOMove(((Component)this).transform, position, 0.06f, false), (Ease)4));
		}
		else
		{
			TweenSettingsExtensions.Append(ItemMoveTween, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOMove(((Component)this).transform, val5, 0.17999999f, false), GameLevelDefine.Exchange_Curve_1));
			TweenSettingsExtensions.Append(ItemMoveTween, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOMove(((Component)this).transform, position, 0.06f, false), (Ease)4));
		}
		TweenSettingsExtensions.SetAutoKill<Sequence>(TweenSettingsExtensions.AppendCallback(ItemMoveTween, (TweenCallback)(() =>
		{
			//IL_001c: Unknown result type (might be due to invalid IL or missing references)
			((Component)this).transform.SetParent(gameLevelGrid.GameItemParent);
			((Component)this).transform.localPosition = Vector3.zero;
			SetItemScaleAnim(show: true);
			DragIcon.raycastTarget = true;
			mPlayFlyAnim = false;
			UpdateIcon();
			if (Singleton<GameLevelManager>.Instance.IsSendGetEvent)
			{
				EventManager.GetInstance().DispatchEvent(100105, -1);
				Singleton<GameLevelManager>.Instance.IsSendGetEvent = false;
			}
		})), true);
	}

	public void PlayItemMoveToBottom(float animationDuration = 0.4f)
	{
		//IL_002d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0032: Unknown result type (might be due to invalid IL or missing references)
		//IL_003b: Unknown result type (might be due to invalid IL or missing references)
		//IL_004b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0061: Unknown result type (might be due to invalid IL or missing references)
		//IL_006b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0076: Unknown result type (might be due to invalid IL or missing references)
		//IL_0077: Unknown result type (might be due to invalid IL or missing references)
		//IL_007c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0083: Unknown result type (might be due to invalid IL or missing references)
		//IL_008f: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b0: Unknown result type (might be due to invalid IL or missing references)
		//IL_00d0: Unknown result type (might be due to invalid IL or missing references)
		//IL_00da: Expected Obj, but got Unknown
		mPlayFlyAnim = true;
		SetItemScaleAnim(show: false);
		if (DragIcon.raycastTarget)
		{
			DragIcon.raycastTarget = false;
		}
		Vector3 position = ((Component)this).transform.position;
		Vector3 val = new Vector3(((Component)this).transform.localPosition.x, ((Component)this).transform.localPosition.y + 86f, ((Component)this).transform.localPosition.z);
		Vector3 position2 = ((Component)this).transform.TransformPoint(val);
		((Component)this).transform.position = position2;
		((Component)this).transform.localScale = Vector3.one;
		ItemMoveTween = DOTween.Sequence();
		TweenSettingsExtensions.SetAutoKill<Sequence>(TweenSettingsExtensions.AppendCallback(TweenSettingsExtensions.Append(ItemMoveTween, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOMove(((Component)this).transform, position, animationDuration * GameConst.AnimationScale(), false), (Ease)7)), (TweenCallback)(() =>
		{
			//IL_0006: Unknown result type (might be due to invalid IL or missing references)
			((Component)this).transform.localPosition = Vector3.zero;
			SetItemScaleAnim(show: true);
			DragIcon.raycastTarget = true;
			mPlayFlyAnim = false;
		})), true);
	}

	public void PlayMergeHintEffect(Transform targetTrans)
	{
		HideMergeHintEffect();
		if ((Object)(object)GetGameLevelGrid() != (Object)null)
		{
			if (gameGoodsVo.GoodsState == IndependentGoodsState.Lock)
			{
				MergeHintTween = DOTweenUITools.DoSelfScaleAnimation(ItemIconParent);
			}
			else
			{
				MergeHintTween = DOTweenUITools.DoInterattractionAnimation(ItemIconParent, targetTrans);
			}
		}
	}

	public void HideMergeHintEffect()
	{
		//IL_001a: Unknown result type (might be due to invalid IL or missing references)
		//IL_002a: Unknown result type (might be due to invalid IL or missing references)
		if (MergeHintTween != null)
		{
			TweenExtensions.Kill(MergeHintTween, false);
		}
		ItemIconParent.localPosition = Vector3.zero;
		ItemIconParent.localScale = Vector3.one;
	}

	public void PlayCoveredBroken()
	{
		CoveredBoxIcon.SetSelfActive<Image>(false);
		if ((Object)(object)CoveredBoxAnimGo != (Object)null)
		{
			HideCoveredBroken();
		}
		float duration = 1.5f;
		if (gameLevelGrid.GetGridType() == IndependentType.MergeIndependent && ObjectManager.GetInstance().independentMergeModel.ThemeID == 2)
		{
			CoveredBoxAnimGo = CreateGameObject("숚끝掠漛敀\r\u0092厑숏끟披漐癐\r\u008e厍노兟㨾\0逕\ud966", CoveredBoxBrokenParent);
			if ((Object)(object)CoveredBoxAnimGo == (Object)null)
			{
				return;
			}
			Image componentInChildren = CoveredBoxAnimGo.GetComponentInChildren<Image>();
			if ((Object)(object)componentInChildren != (Object)null)
			{
				componentInChildren.sprite = CoveredBoxIcon.sprite;
				((Graphic)componentInChildren).SetNativeSize();
			}
		}
		else if (gameLevelGrid.GetGridType() == IndependentType.MergeIndependent && ObjectManager.GetInstance().independentMergeModel.ThemeID == 3)
		{
			CoveredBoxAnimGo = CreateGameObject("숵끟皭收灗=Þ叝숵끟碽弶牖=æ句刕枟\ud9c0ő", CoveredBoxBrokenParent);
			if ((Object)(object)CoveredBoxAnimGo == (Object)null)
			{
				return;
			}
		}
		else if (gameLevelGrid.GetGridType() == IndependentType.MergeIndependent && ObjectManager.GetInstance().independentMergeModel.ThemeID == 4)
		{
			CoveredBoxAnimGo = CreateGameObject("숏끔溽搐䥄7¾厽숭끔璭嘮敝4Ö叕숵끟璮弶楗3Ö叕判皿\ud9c5ş", CoveredBoxBrokenParent);
			if ((Object)(object)CoveredBoxAnimGo == (Object)null)
			{
				return;
			}
			Animation component = CoveredBoxAnimGo.GetComponent<Animation>();
			if ((Object)(object)component == (Object)null)
			{
				return;
			}
			component.Play("숏끔溽搐䥄7¾厽숭끔璭嘮敝4Ö叕숵끟璮弶楗3Ö叕숁끛ㆪ异浫bÉ又룲\u0083赴");
		}
		else if (gameLevelGrid.GetGridType() == IndependentType.DiggingTreasure)
		{
			CoveredBoxAnimGo = CreateGameObject("숋끈犼攌呇'Î反숌끈溸服䍀;¾厽숝끓憼渞噫!\u008a厉숈끉殆攉摆=²厱뻲", CoveredBoxBrokenParent);
			if ((Object)(object)CoveredBoxAnimGo == (Object)null)
			{
				return;
			}
			CoveredBoxIcon.SetSelfActive<Image>(true);
			TimeManager.GetInstance().Schedule(this, (float dt1) =>
			{
				CoveredBoxIcon.SetSelfActive<Image>(false);
			}, 0.2f, 1, 0f);
		}
		else if (gameLevelGrid.GetGridType() == IndependentType.Independent_Mining)
		{
			string uIResourceName = ObjectManager.GetInstance().independentMiningModel.GetUIResourceName(IndependentMiningResName.Mining_Covered_Unlock.ToString());
			CoveredBoxAnimGo = CreateGameObject(uIResourceName, CoveredBoxBrokenParent);
			if ((Object)(object)CoveredBoxAnimGo == (Object)null)
			{
				return;
			}
			CoveredBoxIcon.SetSelfActive<Image>(true);
			TimeManager.GetInstance().Schedule(this, (float dt1) =>
			{
				CoveredBoxIcon.SetSelfActive<Image>(false);
			}, 0.2f, 1, 0f);
		}
		else if (gameLevelGrid.GetGridType() == IndependentType.StageMergeIndependent && ObjectManager.GetInstance().independentStageMergeModel.ThemeID == 1)
		{
			CoveredBoxAnimGo = CreateGameObject("숏끔溽搐䥄7¾厽숹끔枭攺敀3¢厡숍끟榫攎䵑\u0004ª厩睷_4끯x\udf37俚", CoveredBoxBrokenParent);
			if ((Object)(object)CoveredBoxAnimGo == (Object)null)
			{
				return;
			}
			Animation ani = CoveredBoxAnimGo.GetComponent<Animation>();
			if ((Object)(object)ani == (Object)null)
			{
				return;
			}
			ani.PlayAndDelayCall("숏끔溽搐䥄7¾厽숹끔枭攺敀3¢厡숍끟榫攎䵑\u0004ª厩숅끥犺弆睂7Î反숄끒ジㄅ捓7Å叄", () =>
			{
				ani.Play("숏끔溽搐䥄7¾厽숹끔枭攺敀3¢厡숍끟榫攎䵑\u0004ª厩숅끥犺弆睂7Î反녩դ㘶\0郢\ud9e7");
				CoveredBoxAnimGo.SetSelfActive(active: false);
				CoveredBoxIcon.SetSelfActive<Image>(true);
			}, -1f, aniShowMask: false);
		}
		else if (gameLevelGrid.GetGridType() == IndependentType.StageMergeBasic)
		{
			string coverEffectName = ObjectManager.GetInstance().idnStageBasicModel.GetCoverEffectName();
			if (coverEffectName == "")
			{
				return;
			}
			CoveredBoxAnimGo = CreateGameObject(coverEffectName, CoveredBoxBrokenParent);
			if ((Object)(object)CoveredBoxAnimGo == (Object)null)
			{
				return;
			}
			Animation component2 = CoveredBoxAnimGo.GetComponent<Animation>();
			if ((Object)(object)component2 == (Object)null)
			{
				return;
			}
			string coverEffectAniName = ObjectManager.GetInstance().idnStageBasicModel.GetCoverEffectAniName();
			if (coverEffectAniName == "")
			{
				return;
			}
			component2.PlayAndDelayCall(coverEffectAniName, () =>
			{
				CoveredBoxAnimGo.SetSelfActive(active: false);
			}, -1f, aniShowMask: false);
		}
		else if (gameLevelGrid.GetGridType() == IndependentType.IndStageMerge)
		{
			string coverEffectName2 = ObjectManager.GetInstance().idnStageModel.GetCoverEffectName();
			if (coverEffectName2 == "")
			{
				return;
			}
			CoveredBoxAnimGo = CreateGameObject(coverEffectName2, CoveredBoxBrokenParent);
			if ((Object)(object)CoveredBoxAnimGo == (Object)null)
			{
				return;
			}
			Animation component3 = CoveredBoxAnimGo.GetComponent<Animation>();
			if ((Object)(object)component3 == (Object)null)
			{
				return;
			}
			string coverEffectAniName2 = ObjectManager.GetInstance().idnStageModel.GetCoverEffectAniName();
			if (coverEffectAniName2 == "")
			{
				return;
			}
			component3.PlayAndDelayCall(coverEffectAniName2, () =>
			{
				CoveredBoxAnimGo.SetSelfActive(active: false);
			}, -1f, aniShowMask: false);
		}
		else if (gameLevelGrid.GetGridType() == IndependentType.Independent_Basic)
		{
			IndependentBasicModel independentBasicModel = ObjectManager.GetInstance().independentBasicModel;
			string uIResourceName2 = independentBasicModel.GetUIResourceName(IndependentBasicResName.Basic_Covered_Unlock.ToString());
			CoveredBoxAnimGo = CreateGameObject(uIResourceName2, CoveredBoxBrokenParent);
			if ((Object)(object)CoveredBoxAnimGo == (Object)null)
			{
				return;
			}
			if (independentBasicModel.IsCoveredReplaceSkin())
			{
				Transform val = CoveredBoxAnimGo.transform.FindChildRecursion("初濯\ud9ceŘ");
				if ((Object)(object)val != (Object)null)
				{
					Image component4 = ((Component)val).GetComponent<Image>();
					if ((Object)(object)component4 != (Object)null)
					{
						IndependentDefine.SetGridCoveredSprite(component4, resLoader, gameLevelGrid.GetGridType(), gameLevelGrid.GetGridId());
					}
				}
				Transform val2 = CoveredBoxAnimGo.transform.FindChildRecursion("初澿\ud9c0Œ");
				if ((Object)(object)val2 != (Object)null)
				{
					Image component5 = ((Component)val2).GetComponent<Image>();
					if ((Object)(object)component5 != (Object)null)
					{
						IndependentDefine.SetGridLockSprite(component5, resLoader, gameLevelGrid.GetGridType(), gameLevelGrid.GetGridId());
					}
				}
			}
		}
		else if (gameLevelGrid.GetGridType() == IndependentType.Independent_Farm)
		{
			string resName = "숵끜榡搶癳 ª厩숆끯殷弇彛1²厱녭䙥㐲\0這\ud95f";
			CoveredBoxAnimGo = CreateGameObject(resName, CoveredBoxBrokenParent);
			if ((Object)(object)CoveredBoxAnimGo == (Object)null)
			{
				return;
			}
		}
		else
		{
			CoveredBoxAnimGo = CreateGameObject("숏끕撯䈐䍆7\u0096厕수끂斛渙潛9\u009a厙녅塦㘢\0逤\ud97c", CoveredBoxBrokenParent);
			if ((Object)(object)CoveredBoxAnimGo == (Object)null)
			{
				return;
			}
			Image component6 = CoveredBoxAnimGo.GetComponent<Image>();
			if ((Object)(object)component6 != (Object)null)
			{
				component6.sprite = CoveredBoxIcon.sprite;
				((Graphic)component6).SetNativeSize();
			}
		}
		TimeManager.GetInstance().Schedule(this, (float dt1) =>
		{
			HideCoveredBroken();
		}, duration, 1, 0f);
	}

	public void HideCoveredBroken()
	{
		if ((Object)(object)CoveredBoxAnimGo != (Object)null)
		{
			Object.Destroy((Object)(object)CoveredBoxAnimGo);
			CoveredBoxAnimGo = null;
		}
		CoveredBoxIcon.SetSelfActive<Image>(false);
		if ((Object)(object)gameLevelGrid != (Object)null)
		{
			gameLevelGrid.GridBrokenTriggerGuide();
		}
	}

	public void PlayOnceAnim(string effectName, string audioName = "", float delay = 1.1f, Action callback = null)
	{
		HideOnceAnim();
		onceEffectGo = CreateGameObject(effectName, ((Component)this).transform);
		if (!((Object)(object)onceEffectGo == (Object)null))
		{
			if (audioName.IsNotNullAndEmpty())
			{
				AudioManager.Instance.PlayEffect(audioName);
			}
			TimeManager.GetInstance().Schedule(this, (float dt1) =>
			{
				HideOnceAnim();
				callback.InvokeGracefully();
			}, delay, 1);
		}
	}

	public void HideOnceAnim()
	{
		if ((Object)(object)onceEffectGo != (Object)null)
		{
			Object.Destroy((Object)(object)onceEffectGo);
		}
	}

	public void PlayDesignatedEffect(string effectName, float hideDuration = 0f)
	{
		HideDesignatedEffect();
		GameObject val = resLoader.LoadSync<GameObject>(effectName);
		if ((Object)(object)val == (Object)null)
		{
			return;
		}
		mDesignatedEffect = Object.Instantiate<GameObject>(val);
		mDesignatedEffect.transform.SetParent(((Component)this).transform);
		mDesignatedEffect.transform.LocalIdentity<Transform>();
		if (hideDuration > 0f)
		{
			CommonMaskViewLogic.Show(hideDuration);
			TimeManager.GetInstance().Schedule(this, (float dt) =>
			{
				HideDesignatedEffect();
			}, hideDuration, 1);
		}
	}

	public void HideDesignatedEffect()
	{
		if ((Object)(object)mDesignatedEffect != (Object)null)
		{
			Object.Destroy((Object)(object)mDesignatedEffect);
			mDesignatedEffect = null;
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

	public void ShowSpecialHint(string animtionName)
	{
		if ((Object)(object)mSpecialHintGo == (Object)null && animtionName.IsNotNullAndEmpty())
		{
			mSpecialHintGo = CreateGameObject(animtionName, EffectTopParent);
		}
	}

	public void HideSpecialHint()
	{
		if ((Object)(object)mSpecialHintGo != (Object)null)
		{
			Object.Destroy((Object)(object)mSpecialHintGo);
			mSpecialHintGo = null;
		}
	}

	private void HideCollectWidget()
	{
		if ((Object)(object)mItemCollectWidget != (Object)null)
		{
			mItemCollectWidget.Clear();
			Object.Destroy((Object)(object)((Component)mItemCollectWidget).gameObject);
			mItemCollectWidget = null;
		}
	}

	private void HideBatchProduceWidget()
	{
		if ((Object)(object)mBatchProduceWidget != (Object)null)
		{
			mBatchProduceWidget.Clear();
			Object.Destroy((Object)(object)((Component)mBatchProduceWidget).gameObject);
			mBatchProduceWidget = null;
		}
	}

	public void ShowGoodsIcon()
	{
		//IL_0045: Unknown result type (might be due to invalid IL or missing references)
		//IL_004f: Unknown result type (might be due to invalid IL or missing references)
		Reset();
		if (goodsBaseVo != null)
		{
			ItemIcon.sprite = resLoader.LoadSync<Sprite>(goodsBaseVo.GetIcon(gameLevelGrid.GetGridType()));
			((Component)ItemIcon).transform.localScale = Vector3.one * IconNormalScale;
			((Graphic)ItemIcon).SetNativeSize();
		}
	}

	public void InterruptAnimtion()
	{
		//IL_0043: Unknown result type (might be due to invalid IL or missing references)
		mPlayFlyAnim = false;
		Sequence itemMoveTween = ItemMoveTween;
		if (itemMoveTween != null)
		{
			TweenExtensions.Kill((Tween)(object)itemMoveTween, false);
		}
		Sequence val = flyScaleQuence;
		if (val != null)
		{
			TweenExtensions.Kill((Tween)(object)val, false);
		}
		Sequence val2 = flyMoveQuence;
		if (val2 != null)
		{
			TweenExtensions.Kill((Tween)(object)val2, false);
		}
		((Component)this).transform.localPosition = Vector3.zero;
		DragIcon.raycastTarget = true;
		UpdateIcon();
	}

	private void Reset()
	{
		//IL_0013: Unknown result type (might be due to invalid IL or missing references)
		//IL_009c: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b1: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c6: Unknown result type (might be due to invalid IL or missing references)
		//IL_00d0: Unknown result type (might be due to invalid IL or missing references)
		ShortcutExtensions.DOKill((Component)(object)((Component)this).transform, false);
		((Component)this).transform.localScale = Vector3.one;
		((Component)this).gameObject.SetSelfActive(active: true);
		ItemIcon.SetSelfActive<Image>(true);
		WebIcon.SetSelfActive<Image>(false);
		((Component)WebIcon).transform.setLocalPosition();
		MaskIcon.SetSelfActive<Image>(false);
		BubbleIconGo.SetSelfActive(active: false);
		MaxLevelIcon.SetSelfActive<Image>(false);
		DebugText.SetSelfActive<Text>(false);
		((Component)ItemIcon).transform.localRotation = Quaternion.identity;
		((Component)ItemIcon).transform.localPosition = Vector3.zero;
		((Component)ItemIcon).transform.localScale = Vector3.one * IconNormalScale;
		mIconCurrentScale = IconNormalScale;
		isDownSelect = false;
		if ((Object)(object)BubbleAnim != (Object)null)
		{
			Object.Destroy((Object)(object)((Component)BubbleAnim).gameObject);
			BubbleAnim = null;
		}
		if ((Object)(object)mMergeHintGo != (Object)null)
		{
			Object.Destroy((Object)(object)mMergeHintGo);
			mMergeHintGo = null;
		}
		if ((Object)(object)mMergeSuccessGo != (Object)null)
		{
			Object.Destroy((Object)(object)mMergeSuccessGo);
			mMergeSuccessGo = null;
		}
		if ((Object)(object)mAutoCoveredHintGo != (Object)null)
		{
			Object.Destroy((Object)(object)mAutoCoveredHintGo);
			mAutoCoveredHintGo = null;
		}
		HideCollectWidget();
		HideBatchProduceWidget();
		HideMergeHintEffect();
		HideCoveredBroken();
		HideOnceAnim();
		HideDesignatedEffect();
		HideProduceAnim();
		HideWebiconAnim();
		HideAutoDropIdle();
		HideSpecialHint();
		HideTransferGateIdle();
		if ((Object)(object)gameLevelGrid != (Object)null)
		{
			gameLevelGrid.RemoveMergeHint();
		}
		TimeManager.Instance.ClearSchedule(this);
	}

	public override void Recovery()
	{
		//IL_004f: Unknown result type (might be due to invalid IL or missing references)
		base.Recovery();
		Reset();
		mPlayFlyAnim = false;
		Sequence itemMoveTween = ItemMoveTween;
		if (itemMoveTween != null)
		{
			TweenExtensions.Kill((Tween)(object)itemMoveTween, false);
		}
		Sequence val = flyScaleQuence;
		if (val != null)
		{
			TweenExtensions.Kill((Tween)(object)val, false);
		}
		Sequence val2 = flyMoveQuence;
		if (val2 != null)
		{
			TweenExtensions.Kill((Tween)(object)val2, false);
		}
		((Component)this).transform.localPosition = Vector3.zero;
		DragIcon.raycastTarget = true;
		if ((Object)(object)mEffectTopStar != (Object)null)
		{
			mEffectTopStar.DestroySelf<GameObject>();
		}
		mEffectTopStar = null;
	}

	private void OnEnable()
	{
		//IL_0021: Unknown result type (might be due to invalid IL or missing references)
		//IL_0036: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ab: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b5: Unknown result type (might be due to invalid IL or missing references)
		//IL_0061: Unknown result type (might be due to invalid IL or missing references)
		//IL_006b: Unknown result type (might be due to invalid IL or missing references)
		HideDesignatedEffect();
		HideSpecialHint();
		if ((Object)(object)((Component)this).transform == (Object)null)
		{
			return;
		}
		((Component)this).transform.localScale = Vector3.one;
		((Component)ItemIcon).transform.localPosition = Vector3.zero;
		if (goodsBaseVo != null && goodsBaseVo.type == 3)
		{
			((Component)ItemIcon).transform.localScale = Vector3.one * IconBubbleScale;
			if ((Object)(object)BubbleAnim != (Object)null)
			{
				BubbleAnim.Stop();
				BubbleAnim.Play("숏끜徿焐敗&\u0082厁숅끊憸椆楫6\u008a厉녪孩㉐\0這\ud974");
			}
		}
		else
		{
			((Component)ItemIcon).transform.localScale = Vector3.one * IconNormalScale;
		}
	}

	private string GetBubbleAniName()
	{
		return "숏끜徿焐敗&\u0082厁숅끊徸愆楫c\u0082厁橣t4끶k嬨䋑";
	}

	private void ShowGeneratorDebug()
	{
		if (gameGoodsVo != null && goodsBaseVo != null && GameConst.GAME_MODE != GameConstMode.RELEASE && Singleton<GameLevelManager>.Instance.ShowDebug)
		{
			StringBuilder stringBuilder = new StringBuilder();
			if (IIndependentGoodsBaseVo.IsCreator(goodsBaseVo.type))
			{
				string value = string.Format("类04뀯}ﱣ哕", gameGoodsVo.ProduceCapacity - gameGoodsVo.ProduceTotal, gameGoodsVo.ProduceCapacity);
				stringBuilder.Append(value);
				stringBuilder.Append("뺖");
			}
			stringBuilder.Append(goodsBaseVo.goodsID);
			DebugText.text = stringBuilder.ToString();
			DebugText.SetSelfActive<Text>(true);
		}
	}

	private void ItemFlyAnim1(Transform startTrans, Action overAction, string luodiEffectName = "effect_IndependentItem_luodi", string trailEffectName = "", bool isAddTrail = false)
	{
		//IL_0013: Unknown result type (might be due to invalid IL or missing references)
		//IL_0018: Unknown result type (might be due to invalid IL or missing references)
		//IL_001a: Unknown result type (might be due to invalid IL or missing references)
		//IL_001f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0020: Unknown result type (might be due to invalid IL or missing references)
		//IL_0021: Unknown result type (might be due to invalid IL or missing references)
		//IL_0027: Unknown result type (might be due to invalid IL or missing references)
		//IL_002c: Unknown result type (might be due to invalid IL or missing references)
		//IL_002d: Unknown result type (might be due to invalid IL or missing references)
		//IL_002e: Unknown result type (might be due to invalid IL or missing references)
		//IL_003d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0047: Unknown result type (might be due to invalid IL or missing references)
		//IL_004d: Unknown result type (might be due to invalid IL or missing references)
		//IL_008e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0094: Unknown result type (might be due to invalid IL or missing references)
		//IL_00af: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b5: Unknown result type (might be due to invalid IL or missing references)
		//IL_0106: Unknown result type (might be due to invalid IL or missing references)
		//IL_010c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0194: Unknown result type (might be due to invalid IL or missing references)
		//IL_0195: Unknown result type (might be due to invalid IL or missing references)
		//IL_0198: Unknown result type (might be due to invalid IL or missing references)
		//IL_019d: Unknown result type (might be due to invalid IL or missing references)
		//IL_019f: Unknown result type (might be due to invalid IL or missing references)
		//IL_01a0: Unknown result type (might be due to invalid IL or missing references)
		//IL_01a3: Unknown result type (might be due to invalid IL or missing references)
		//IL_01a8: Unknown result type (might be due to invalid IL or missing references)
		//IL_01aa: Unknown result type (might be due to invalid IL or missing references)
		//IL_01ab: Unknown result type (might be due to invalid IL or missing references)
		//IL_01af: Unknown result type (might be due to invalid IL or missing references)
		//IL_01bd: Unknown result type (might be due to invalid IL or missing references)
		//IL_01c2: Unknown result type (might be due to invalid IL or missing references)
		//IL_01c4: Unknown result type (might be due to invalid IL or missing references)
		//IL_01c5: Unknown result type (might be due to invalid IL or missing references)
		//IL_01c9: Unknown result type (might be due to invalid IL or missing references)
		//IL_01d7: Unknown result type (might be due to invalid IL or missing references)
		//IL_01dc: Unknown result type (might be due to invalid IL or missing references)
		//IL_01e5: Unknown result type (might be due to invalid IL or missing references)
		//IL_01ee: Unknown result type (might be due to invalid IL or missing references)
		//IL_0164: Unknown result type (might be due to invalid IL or missing references)
		//IL_016c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0174: Unknown result type (might be due to invalid IL or missing references)
		//IL_017c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0203: Unknown result type (might be due to invalid IL or missing references)
		//IL_0209: Unknown result type (might be due to invalid IL or missing references)
		//IL_0214: Unknown result type (might be due to invalid IL or missing references)
		//IL_021a: Unknown result type (might be due to invalid IL or missing references)
		//IL_021f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0220: Unknown result type (might be due to invalid IL or missing references)
		//IL_0222: Unknown result type (might be due to invalid IL or missing references)
		//IL_0224: Unknown result type (might be due to invalid IL or missing references)
		//IL_0237: Unknown result type (might be due to invalid IL or missing references)
		//IL_0238: Unknown result type (might be due to invalid IL or missing references)
		//IL_023f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0240: Unknown result type (might be due to invalid IL or missing references)
		//IL_031f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0349: Unknown result type (might be due to invalid IL or missing references)
		//IL_0353: Unknown result type (might be due to invalid IL or missing references)
		//IL_0383: Unknown result type (might be due to invalid IL or missing references)
		//IL_038a: Unknown result type (might be due to invalid IL or missing references)
		//IL_03ca: Unknown result type (might be due to invalid IL or missing references)
		//IL_03d1: Unknown result type (might be due to invalid IL or missing references)
		//IL_0411: Unknown result type (might be due to invalid IL or missing references)
		//IL_0418: Unknown result type (might be due to invalid IL or missing references)
		//IL_0456: Unknown result type (might be due to invalid IL or missing references)
		//IL_045d: Unknown result type (might be due to invalid IL or missing references)
		//IL_050d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0517: Expected Obj, but got Unknown
		Vector3 position = ((Component)this).transform.position;
		Vector3 position2 = startTrans.position;
		Vector3 pointAtDistanceFromB = IndependentDefine.GetPointAtDistanceFromB(position2, position, IndependentDefine.distanceB);
		float num = Vector3.Distance(position2, pointAtDistanceFromB);
		((Component)this).transform.position = startTrans.position;
		float num2 = position.x - position2.x;
		float num3 = 0f;
		float num4 = 0f;
		float num5 = 0f;
		float num6 = 0f;
		float num7 = 0f;
		float num8 = 0f;
		float bcLength = 0f;
		float bcLength2 = 0f;
		float num9 = Mathf.Abs(position2.x - position.x) / ((float)IndependentMergeViewBaseLogic.GridWidth * 0.01f);
		float num10 = Mathf.Abs(position2.y - position.y) / ((float)IndependentMergeViewBaseLogic.GridHeight * 0.01f);
		num9 = Mathf.Clamp(num9, 0f, 6f);
		int num11 = (Mathf.RoundToInt(Mathf.Clamp(num10, 0f, 8f)) + 1) * 10 + Mathf.RoundToInt(num9) + 1;
		if (position2.y > position.y)
		{
			num11 = -num11;
		}
		if (IndependentDefine.paramsDic.ContainsKey(num11))
		{
			List<float> list = IndependentDefine.paramsDic[num11];
			num7 = list[0];
			bcLength = list[1];
			num8 = list[2];
			bcLength2 = list[3];
		}
		if (Mathf.Abs(num2) < 0.01f)
		{
			num3 = position2.x;
			num4 = position2.y;
			num5 = position2.x;
			num6 = position2.y;
		}
		else
		{
			float distanceFromB = num * num7;
			float distanceFromB2 = num * num8;
			Vector3 pointAtDistanceFromB2 = IndependentDefine.GetPointAtDistanceFromB(position2, pointAtDistanceFromB, distanceFromB2);
			Vector3 pointAtDistanceFromB3 = IndependentDefine.GetPointAtDistanceFromB(position2, pointAtDistanceFromB, distanceFromB);
			Vector3 perpendicularPoint = IndependentDefine.GetPerpendicularPoint(position2, pointAtDistanceFromB2, bcLength, Vector3.forward, num2 < 0f);
			Vector3 perpendicularPoint2 = IndependentDefine.GetPerpendicularPoint(position2, pointAtDistanceFromB3, bcLength2, Vector3.forward, num2 < 0f);
			num3 = perpendicularPoint.x;
			num4 = perpendicularPoint.y;
			num5 = perpendicularPoint2.x;
			num6 = perpendicularPoint2.y;
		}
		Vector3 controlPoint = new Vector3(num3, num4, pointAtDistanceFromB.z);
		Vector3 controlPoint2 = new Vector3(num5, num6, pointAtDistanceFromB.z);
		Vector3[] thirdBeizerList = UIAnimationExtend.GetThirdBeizerList(position2, controlPoint, controlPoint2, pointAtDistanceFromB, 30);
		Vector3[] array = new Vector3[2] { pointAtDistanceFromB, position };
		float pathDistance = IndependentDefine.GetPathDistance(thirdBeizerList);
		float num12 = move1TimeMax;
		float num13 = move1TimeMin;
		float maxDistance = gameLevelGrid.parentLogic.GetMaxDistance(startTrans);
		float minDistance = gameLevelGrid.parentLogic.GetMinDistance();
		float num14 = (num12 - num13) * ((pathDistance - minDistance) / (maxDistance - minDistance));
		if (num14 < 0f)
		{
			num14 = 0f;
		}
		if (num14 > num12 - num13)
		{
			num14 = num12 - num13;
		}
		float num15 = num13 + num14;
		float delay = num15;
		if ((((Object)(object)gameLevelGrid != (Object)null) & isAddTrail) && !string.IsNullOrEmpty(trailEffectName))
		{
			gameLevelGrid.PlayTrailEffect(trailEffectName, 0f, num15 + move2Time);
		}
		if ((Object)(object)gameLevelGrid != (Object)null)
		{
			gameLevelGrid.PlayOnceEffect(luodiEffectName, delay);
		}
		float num16 = ((Component)gameLevelGrid).transform.lossyScale.x * 100f;
		Sequence val = flyScaleQuence;
		if (val != null)
		{
			TweenExtensions.Kill((Tween)(object)val, false);
		}
		((Component)this).transform.localScale = Vector3.one * 0.5f;
		flyScaleQuence = DOTween.Sequence();
		TweenSettingsExtensions.Append(flyScaleQuence, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(((Component)this).transform, new Vector3(1.35f, 1.35f, 1f) * num16, num15 * 0.485f * mClickSpeed), (Ease)6));
		TweenSettingsExtensions.Append(flyScaleQuence, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(((Component)this).transform, new Vector3(0.85f, 0.85f, 1f) * num16, num15 * 0.515f * mClickSpeed), (Ease)3));
		TweenSettingsExtensions.Append(flyScaleQuence, (Tween)(object)ShortcutExtensions.DOScale(((Component)this).transform, new Vector3(1.04f, 1.04f, 1f) * num16, move2Time * 0.545f * mClickSpeed));
		TweenSettingsExtensions.Append(flyScaleQuence, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(((Component)this).transform, new Vector3(1f, 1f, 1f) * num16, move2Time * 0.455f * mClickSpeed), (Ease)3));
		Sequence val2 = flyMoveQuence;
		if (val2 != null)
		{
			TweenExtensions.Kill((Tween)(object)val2, false);
		}
		flyMoveQuence = TweenExtensions.Play<Sequence>(TweenSettingsExtensions.OnComplete<Sequence>(TweenSettingsExtensions.SetAutoKill<Sequence>(TweenSettingsExtensions.Append(TweenSettingsExtensions.Append(DOTween.Sequence(), (Tween)(object)TweenSettingsExtensions.SetEase<TweenerCore<Vector3, Path, PathOptions>>(ShortcutExtensions.DOPath(((Component)this).transform, thirdBeizerList, num15 * mClickSpeed, (PathType)0, (PathMode)1, 10, (Color?)null), (Ease)6)), (Tween)(object)TweenSettingsExtensions.SetEase<TweenerCore<Vector3, Path, PathOptions>>(ShortcutExtensions.DOPath(((Component)this).transform, array, move2Time * mClickSpeed, (PathType)0, (PathMode)1, 10, (Color?)null), (Ease)3)), true), (TweenCallback)(() =>
		{
			overAction();
		})));
	}

	private void ItemFlyAnim2(Transform startTrans, Action overAction, string luodiEffectName = "effect_IndependentItem_luodi", string trailEffectName = "", bool isAddTrail = false)
	{
		//IL_0013: Unknown result type (might be due to invalid IL or missing references)
		//IL_0018: Unknown result type (might be due to invalid IL or missing references)
		//IL_001a: Unknown result type (might be due to invalid IL or missing references)
		//IL_001f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0020: Unknown result type (might be due to invalid IL or missing references)
		//IL_0021: Unknown result type (might be due to invalid IL or missing references)
		//IL_0027: Unknown result type (might be due to invalid IL or missing references)
		//IL_002c: Unknown result type (might be due to invalid IL or missing references)
		//IL_002d: Unknown result type (might be due to invalid IL or missing references)
		//IL_002e: Unknown result type (might be due to invalid IL or missing references)
		//IL_003c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0046: Unknown result type (might be due to invalid IL or missing references)
		//IL_004c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0053: Unknown result type (might be due to invalid IL or missing references)
		//IL_0059: Unknown result type (might be due to invalid IL or missing references)
		//IL_0062: Unknown result type (might be due to invalid IL or missing references)
		//IL_0067: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c8: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c9: Unknown result type (might be due to invalid IL or missing references)
		//IL_00d0: Unknown result type (might be due to invalid IL or missing references)
		//IL_00d2: Unknown result type (might be due to invalid IL or missing references)
		//IL_00d9: Unknown result type (might be due to invalid IL or missing references)
		//IL_00da: Unknown result type (might be due to invalid IL or missing references)
		//IL_00e9: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ea: Unknown result type (might be due to invalid IL or missing references)
		//IL_00f1: Unknown result type (might be due to invalid IL or missing references)
		//IL_00f2: Unknown result type (might be due to invalid IL or missing references)
		//IL_00f9: Unknown result type (might be due to invalid IL or missing references)
		//IL_00fa: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a2: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a8: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b5: Unknown result type (might be due to invalid IL or missing references)
		//IL_00bb: Unknown result type (might be due to invalid IL or missing references)
		//IL_0080: Unknown result type (might be due to invalid IL or missing references)
		//IL_0086: Unknown result type (might be due to invalid IL or missing references)
		//IL_0093: Unknown result type (might be due to invalid IL or missing references)
		//IL_0099: Unknown result type (might be due to invalid IL or missing references)
		//IL_01d7: Unknown result type (might be due to invalid IL or missing references)
		//IL_0201: Unknown result type (might be due to invalid IL or missing references)
		//IL_020b: Unknown result type (might be due to invalid IL or missing references)
		//IL_023b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0242: Unknown result type (might be due to invalid IL or missing references)
		//IL_0282: Unknown result type (might be due to invalid IL or missing references)
		//IL_0289: Unknown result type (might be due to invalid IL or missing references)
		//IL_02c9: Unknown result type (might be due to invalid IL or missing references)
		//IL_02d0: Unknown result type (might be due to invalid IL or missing references)
		//IL_030e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0315: Unknown result type (might be due to invalid IL or missing references)
		//IL_03c5: Unknown result type (might be due to invalid IL or missing references)
		//IL_03cf: Expected Obj, but got Unknown
		Vector3 position = ((Component)this).transform.position;
		Vector3 position2 = startTrans.position;
		Vector3 pointAtDistanceFromB = IndependentDefine.GetPointAtDistanceFromB(position2, position, IndependentDefine.distanceB);
		Vector3.Distance(position2, pointAtDistanceFromB);
		((Component)this).transform.position = startTrans.position;
		float num = position.x - position2.x;
		float num2 = position.y - position2.y;
		Vector3 val = Vector3.zero;
		if (Mathf.Abs(num) < 0.01f)
		{
			val = ((!(num2 < 0.86f)) ? new Vector3(pointAtDistanceFromB.x, pointAtDistanceFromB.y + distanceY_2, pointAtDistanceFromB.z) : new Vector3(pointAtDistanceFromB.x, pointAtDistanceFromB.y + distanceY_1, pointAtDistanceFromB.z));
		}
		Vector3[] array = new Vector3[3] { position2, val, pointAtDistanceFromB };
		Vector3[] array2 = new Vector3[2] { pointAtDistanceFromB, position };
		float num3 = Vector3.Distance(position2, pointAtDistanceFromB) * 100f;
		float num4 = move1TimeMax;
		float num5 = move1TimeMin;
		float maxDistance = gameLevelGrid.parentLogic.GetMaxDistance(startTrans);
		float minDistance = gameLevelGrid.parentLogic.GetMinDistance();
		float num6 = (num4 - num5) * ((num3 - minDistance) / (maxDistance - minDistance));
		if (num6 < 0f)
		{
			num6 = 0f;
		}
		if (num6 > num4 - num5)
		{
			num6 = num4 - num5;
		}
		float num7 = num5 + num6;
		float delay = num7;
		if ((Object)(object)gameLevelGrid != (Object)null)
		{
			gameLevelGrid.PlayOnceEffect(luodiEffectName, delay);
		}
		if ((((Object)(object)gameLevelGrid != (Object)null) & isAddTrail) && !string.IsNullOrEmpty(trailEffectName))
		{
			gameLevelGrid.PlayTrailEffect(trailEffectName, 0f, num7 + move2Time);
		}
		float num8 = ((Component)gameLevelGrid).transform.lossyScale.x * 100f;
		Sequence val2 = flyScaleQuence;
		if (val2 != null)
		{
			TweenExtensions.Kill((Tween)(object)val2, false);
		}
		((Component)this).transform.localScale = Vector3.one * 0.5f;
		flyScaleQuence = DOTween.Sequence();
		TweenSettingsExtensions.Append(flyScaleQuence, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(((Component)this).transform, new Vector3(1.35f, 1.35f, 1f) * num8, num7 * 0.485f * mClickSpeed), (Ease)6));
		TweenSettingsExtensions.Append(flyScaleQuence, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(((Component)this).transform, new Vector3(0.85f, 0.85f, 1f) * num8, num7 * 0.515f * mClickSpeed), (Ease)3));
		TweenSettingsExtensions.Append(flyScaleQuence, (Tween)(object)ShortcutExtensions.DOScale(((Component)this).transform, new Vector3(1.04f, 1.04f, 1f) * num8, move2Time * 0.545f * mClickSpeed));
		TweenSettingsExtensions.Append(flyScaleQuence, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(((Component)this).transform, new Vector3(1f, 1f, 1f) * num8, move2Time * 0.455f * mClickSpeed), (Ease)3));
		Sequence val3 = flyMoveQuence;
		if (val3 != null)
		{
			TweenExtensions.Kill((Tween)(object)val3, false);
		}
		flyMoveQuence = TweenExtensions.Play<Sequence>(TweenSettingsExtensions.OnComplete<Sequence>(TweenSettingsExtensions.SetAutoKill<Sequence>(TweenSettingsExtensions.Append(TweenSettingsExtensions.Append(DOTween.Sequence(), (Tween)(object)TweenSettingsExtensions.SetEase<TweenerCore<Vector3, Path, PathOptions>>(ShortcutExtensions.DOPath(((Component)this).transform, array, num7 * mClickSpeed, (PathType)0, (PathMode)1, 10, (Color?)null), (Ease)3)), (Tween)(object)TweenSettingsExtensions.SetEase<TweenerCore<Vector3, Path, PathOptions>>(ShortcutExtensions.DOPath(((Component)this).transform, array2, move2Time * mClickSpeed, (PathType)0, (PathMode)1, 10, (Color?)null), (Ease)3)), true), (TweenCallback)(() =>
		{
			overAction();
		})));
	}

	private void PlayItemClickSound()
	{
		if (goodsBaseVo != null && (Object)(object)gameLevelGrid != (Object)null && gameGoodsVo != null)
		{
			bool isCovered = gameGoodsVo.GoodsState == IndependentGoodsState.FakeCovered || gameGoodsVo.GoodsState == IndependentGoodsState.Covered;
			IndependentDefine.PlayClickAudio(gameLevelGrid.GetGridType(), goodsBaseVo.goodsID, isCovered);
		}
	}
}
