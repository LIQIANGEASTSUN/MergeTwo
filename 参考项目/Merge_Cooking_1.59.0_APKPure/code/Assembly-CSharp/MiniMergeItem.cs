using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using DG.Tweening;
using DG.Tweening.Core;
using DG.Tweening.Plugins.Core.PathCore;
using DG.Tweening.Plugins.Options;
using TLF;
using UniRx.Async;
using UniRx.Async.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

public class MiniMergeItem : ResBase
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CPlayItemFly_003Ed__26 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public MiniMergeItem _003C_003E4__this;

		public float delay;

		public Transform startTrans;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_00ca: Unknown result type (might be due to invalid IL or missing references)
			//IL_00cf: Unknown result type (might be due to invalid IL or missing references)
			//IL_00d7: Unknown result type (might be due to invalid IL or missing references)
			//IL_005c: Unknown result type (might be due to invalid IL or missing references)
			//IL_00f3: Unknown result type (might be due to invalid IL or missing references)
			//IL_00fd: Unknown result type (might be due to invalid IL or missing references)
			//IL_0125: Unknown result type (might be due to invalid IL or missing references)
			//IL_012f: Expected Obj, but got Unknown
			//IL_012f: Unknown result type (might be due to invalid IL or missing references)
			//IL_0139: Expected Obj, but got Unknown
			//IL_013f: Unknown result type (might be due to invalid IL or missing references)
			//IL_0144: Unknown result type (might be due to invalid IL or missing references)
			//IL_0151: Unknown result type (might be due to invalid IL or missing references)
			//IL_015b: Unknown result type (might be due to invalid IL or missing references)
			//IL_0167: Unknown result type (might be due to invalid IL or missing references)
			//IL_0173: Unknown result type (might be due to invalid IL or missing references)
			//IL_017f: Unknown result type (might be due to invalid IL or missing references)
			//IL_0192: Unknown result type (might be due to invalid IL or missing references)
			//IL_01ac: Unknown result type (might be due to invalid IL or missing references)
			//IL_008c: Unknown result type (might be due to invalid IL or missing references)
			//IL_0091: Unknown result type (might be due to invalid IL or missing references)
			//IL_0095: Unknown result type (might be due to invalid IL or missing references)
			//IL_009a: Unknown result type (might be due to invalid IL or missing references)
			//IL_01ef: Unknown result type (might be due to invalid IL or missing references)
			//IL_01f9: Unknown result type (might be due to invalid IL or missing references)
			//IL_00af: Unknown result type (might be due to invalid IL or missing references)
			//IL_00b1: Unknown result type (might be due to invalid IL or missing references)
			//IL_0227: Unknown result type (might be due to invalid IL or missing references)
			//IL_023b: Unknown result type (might be due to invalid IL or missing references)
			//IL_0207: Unknown result type (might be due to invalid IL or missing references)
			//IL_01cf: Unknown result type (might be due to invalid IL or missing references)
			//IL_024e: Unknown result type (might be due to invalid IL or missing references)
			//IL_0259: Unknown result type (might be due to invalid IL or missing references)
			//IL_025e: Unknown result type (might be due to invalid IL or missing references)
			//IL_0260: Unknown result type (might be due to invalid IL or missing references)
			//IL_02b4: Unknown result type (might be due to invalid IL or missing references)
			//IL_02be: Expected Obj, but got Unknown
			//IL_02be: Unknown result type (might be due to invalid IL or missing references)
			//IL_02c8: Expected Obj, but got Unknown
			int num = _003C_003E1__state;
			MiniMergeItem CS_0024_003C_003E8__locals21 = _003C_003E4__this;
			try
			{
				Awaiter val2;
				if (num != 0)
				{
					CS_0024_003C_003E8__locals21.mPlayFlyAnim = true;
					CS_0024_003C_003E8__locals21.SetItemScaleAnim(show: false);
					if (CS_0024_003C_003E8__locals21.DragIcon.raycastTarget)
					{
						CS_0024_003C_003E8__locals21.DragIcon.raycastTarget = false;
					}
					((Component)CS_0024_003C_003E8__locals21).transform.SetParent(((Component)CS_0024_003C_003E8__locals21.gameLevelGrid.parentLogic).transform);
					((Component)CS_0024_003C_003E8__locals21).transform.localScale = Vector3.zero;
					if (!(delay > 0f))
					{
						goto IL_00ed;
					}
					UniTask val = UniTask.Delay((int)(delay * 1000f), false, (PlayerLoopTiming)4, default(CancellationToken));
					val2 = val.GetAwaiter();
					if (!val2.IsCompleted)
					{
						num = (_003C_003E1__state = 0);
						_003C_003Eu__1 = val2;
						_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CPlayItemFly_003Ed__26>(ref val2, ref this);
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
				goto IL_00ed;
				IL_00ed:
				Tweener val3 = TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(((Component)CS_0024_003C_003E8__locals21).transform, Vector3.one * 1.2f, 0.2f * GameConst.AnimationScale()), (Ease)7);
				((Tween)val3).onComplete = (TweenCallback)Delegate.Combine((Delegate?)(object)((Tween)val3).onComplete, (Delegate?)(TweenCallback)(() =>
				{
					//IL_0006: Unknown result type (might be due to invalid IL or missing references)
					//IL_002e: Unknown result type (might be due to invalid IL or missing references)
					//IL_0038: Expected Obj, but got Unknown
					//IL_0038: Unknown result type (might be due to invalid IL or missing references)
					//IL_0042: Expected Obj, but got Unknown
					Tweener val5 = TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(((Component)CS_0024_003C_003E8__locals21).transform, Vector3.one, 0.1f * GameConst.AnimationScale()), (Ease)7);
					((Tween)val5).onComplete = (TweenCallback)Delegate.Combine((Delegate?)(object)((Tween)val5).onComplete, (Delegate?)(TweenCallback)(() =>
					{
						//IL_0006: Unknown result type (might be due to invalid IL or missing references)
						((Component)CS_0024_003C_003E8__locals21).transform.localScale = Vector3.one;
					}));
				}));
				Vector3 position = ((Component)CS_0024_003C_003E8__locals21).transform.position;
				((Component)CS_0024_003C_003E8__locals21).transform.position = startTrans.position;
				float num2 = position.x - startTrans.position.x;
				float num3 = position.y - startTrans.position.y;
				float num4 = startTrans.position.x + num2 * 0.5f;
				float y = startTrans.position.y;
				if (num2 == 0f && num3 > 0f)
				{
					y = startTrans.position.y + 85f / Display.PixelsPerUnit;
				}
				else if (startTrans.position.y >= position.y)
				{
					y = startTrans.position.y + 100f / Display.PixelsPerUnit;
				}
				else
				{
					num4 = startTrans.position.x + num2 * 0.15f;
					y = position.y;
				}
				Vector3[] array = UIAnimationExtend.GetBeizerList(controlPoint: new Vector3(num4, y, 0f), startPoint: startTrans.position, endPoint: position, segmentNum: 11);
				TweenerCore<Vector3, Path, PathOptions> val4 = TweenSettingsExtensions.SetAutoKill<TweenerCore<Vector3, Path, PathOptions>>(TweenSettingsExtensions.SetDelay<TweenerCore<Vector3, Path, PathOptions>>(TweenSettingsExtensions.SetEase<TweenerCore<Vector3, Path, PathOptions>>(ShortcutExtensions.DOPath(((Component)CS_0024_003C_003E8__locals21).transform, array, 0.5f * GameConst.AnimationScale(), (PathType)0, (PathMode)1, 10, (Color?)null), (Ease)7), 0f), true);
				((Tween)val4).onComplete = (TweenCallback)Delegate.Combine((Delegate?)(object)((Tween)val4).onComplete, (Delegate?)(TweenCallback)(() =>
				{
					//IL_001c: Unknown result type (might be due to invalid IL or missing references)
					//IL_002c: Unknown result type (might be due to invalid IL or missing references)
					((Component)CS_0024_003C_003E8__locals21).transform.SetParent(CS_0024_003C_003E8__locals21.gameLevelGrid.GameItemParent);
					((Component)CS_0024_003C_003E8__locals21).transform.localPosition = Vector3.zero;
					((Component)CS_0024_003C_003E8__locals21).transform.localScale = Vector3.one;
					CS_0024_003C_003E8__locals21.SetItemScaleAnim(show: true);
					CS_0024_003C_003E8__locals21.DragIcon.raycastTarget = true;
					CS_0024_003C_003E8__locals21.mPlayFlyAnim = false;
					CS_0024_003C_003E8__locals21.UpdateIcon();
				}));
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

	private MiniMergeGameGoodsVo gameGoodsVo;

	private MiniMergeGrid gameLevelGrid;

	private IMiniMergeGoodsBaseVo goodsBaseVo;

	private GameButton mGameButton;

	private bool mPlayFlyAnim;

	private GameObject mMergeHintGo;

	private GameObject mMergeSuccessGo;

	private Sequence ItemMoveTween;

	private Tween MergeHintTween;

	public Transform ItemIconParent;

	public Image ItemIcon;

	public Image CoveredBoxIcon;

	public Image WebIcon;

	public Graphic DragIcon;

	public Transform EffectParent;

	public Transform EffectTopParent;

	public bool PlayFlyAnim => mPlayFlyAnim;

	public MiniMergeGameGoodsVo GetGameGoodsVo => gameGoodsVo;

	public void Init(MiniMergeGameGoodsVo goodsVo, MiniMergeGrid _grid)
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
		goodsBaseVo = MiniMergeDefine.GetGoodsConfigById(gameLevelGrid.GetGridType(), gameGoodsVo.goodsID);
		if (goodsBaseVo != null)
		{
			UpdateIcon();
		}
	}

	public void UpdateIcon()
	{
		if (!mPlayFlyAnim && goodsBaseVo != null)
		{
			Reset();
			UpdateGoodsIcon();
			switch (gameGoodsVo.GoodsState)
			{
			case MiniMergeGoodsState.Lock:
				UpdateLock();
				break;
			case MiniMergeGoodsState.Covered:
				UpdateCovered();
				break;
			}
		}
	}

	private void UpdateGoodsIcon()
	{
		//IL_0035: Unknown result type (might be due to invalid IL or missing references)
		//IL_003f: Unknown result type (might be due to invalid IL or missing references)
		if (goodsBaseVo != null)
		{
			ItemIcon.sprite = resLoader.LoadSync<Sprite>(goodsBaseVo.icon);
			((Component)ItemIcon).transform.localScale = Vector3.one * IconNormalScale;
			((Graphic)ItemIcon).SetNativeSize();
		}
	}

	private void UpdateCovered()
	{
		ItemIcon.SetSelfActive<Image>(false);
		CoveredBoxIcon.SetSelfActive<Image>(true);
		((Component)CoveredBoxIcon).transform.setLocalPosition();
		_ = (Object)(object)gameLevelGrid != (Object)null;
	}

	private void UpdateLock()
	{
		WebIcon.SetSelfActive<Image>(true);
		((Component)WebIcon).transform.setLocalPosition();
		((Component)WebIcon).transform.LocalIdentity<Transform>();
	}

	public void UpdateItemState(MiniMergeGoodsState goodsState)
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

	public MiniMergeGrid GetGameLevelGrid()
	{
		return gameLevelGrid;
	}

	public void OnItemClick()
	{
		if (IMiniMergeGoodsBaseVo.CanSelect(gameGoodsVo.GoodsState))
		{
			gameLevelGrid.OnSelectGrid();
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
	}

	public void PlayMergeHint()
	{
		if ((Object)(object)mMergeHintGo == (Object)null)
		{
			mMergeHintGo = CreateGameObject(MiniMergeDefine.GetMergeTriggerName(gameLevelGrid.GetGridType()), EffectParent);
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

	public void PlayMergeAnim()
	{
		//IL_0027: Unknown result type (might be due to invalid IL or missing references)
		//IL_002c: Unknown result type (might be due to invalid IL or missing references)
		//IL_003c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0052: Unknown result type (might be due to invalid IL or missing references)
		//IL_005c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0078: Unknown result type (might be due to invalid IL or missing references)
		//IL_0082: Expected Obj, but got Unknown
		if ((Object)(object)ItemIcon != (Object)null)
		{
			Vector3 endScale = ((Component)ItemIcon).transform.localScale;
			((Component)ItemIcon).transform.localScale = Vector3.zero;
			TweenSettingsExtensions.OnComplete<Tweener>(ShortcutExtensions.DOScale(((Component)ItemIcon).transform, endScale * 1.2f, 0.2f * GameConst.AnimationScale()), (TweenCallback)(() =>
			{
				//IL_0011: Unknown result type (might be due to invalid IL or missing references)
				ShortcutExtensions.DOScale(((Component)ItemIcon).transform, endScale, 0.1f * GameConst.AnimationScale());
			}));
		}
		if (!((Object)(object)mMergeSuccessGo == (Object)null))
		{
			return;
		}
		mMergeSuccessGo = CreateGameObject(MiniMergeDefine.GetMergeFeedback(gameLevelGrid.GetGridType()), ((Component)this).transform);
		TimeManager.GetInstance().Schedule(this, (float dt1) =>
		{
			if ((Object)(object)mMergeSuccessGo != (Object)null)
			{
				Object.Destroy((Object)(object)mMergeSuccessGo);
				mMergeSuccessGo = null;
			}
		}, 0.3f, 1, 0f);
	}

	[AsyncStateMachine(typeof(_003CPlayItemFly_003Ed__26))]
	public UniTask PlayItemFly(Transform startTrans, float delay = 0f)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0041: Unknown result type (might be due to invalid IL or missing references)
		_003CPlayItemFly_003Ed__26 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj.startTrans = startTrans;
		obj.delay = delay;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CPlayItemFly_003Ed__26>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	public void PlayItemMove(Vector3 startPos, float animationDuration = 0.4f)
	{
		//IL_0071: Unknown result type (might be due to invalid IL or missing references)
		//IL_0076: Unknown result type (might be due to invalid IL or missing references)
		//IL_007d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0089: Unknown result type (might be due to invalid IL or missing references)
		//IL_00aa: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ca: Unknown result type (might be due to invalid IL or missing references)
		//IL_00d4: Expected Obj, but got Unknown
		mPlayFlyAnim = true;
		if (MonoSingleton<GuideManager>.Instance.IsInGuide())
		{
			((Component)this).transform.SetParent(((Component)gameLevelGrid).transform.parent);
		}
		else
		{
			((Component)this).transform.SetParent(((Component)gameLevelGrid.parentLogic).transform);
		}
		SetItemScaleAnim(show: false);
		if (DragIcon.raycastTarget)
		{
			DragIcon.raycastTarget = false;
		}
		Vector3 position = ((Component)this).transform.position;
		((Component)this).transform.position = startPos;
		((Component)this).transform.localScale = Vector3.one;
		ItemMoveTween = DOTween.Sequence();
		TweenSettingsExtensions.SetAutoKill<Sequence>(TweenSettingsExtensions.AppendCallback(TweenSettingsExtensions.Append(ItemMoveTween, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOMove(((Component)this).transform, position, animationDuration * GameConst.AnimationScale(), false), (Ease)7)), (TweenCallback)(() =>
		{
			//IL_001c: Unknown result type (might be due to invalid IL or missing references)
			((Component)this).transform.SetParent(gameLevelGrid.GameItemParent);
			((Component)this).transform.localPosition = Vector3.zero;
			SetItemScaleAnim(show: true);
			DragIcon.raycastTarget = true;
			mPlayFlyAnim = false;
			UpdateIcon();
		})), true);
	}

	public void PlayMergeHintEffect(Transform targetTrans)
	{
		HideMergeHintEffect();
		if ((Object)(object)GetGameLevelGrid() != (Object)null)
		{
			if (gameGoodsVo.GoodsState == MiniMergeGoodsState.Lock)
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

	private void Reset()
	{
		//IL_0013: Unknown result type (might be due to invalid IL or missing references)
		//IL_0078: Unknown result type (might be due to invalid IL or missing references)
		//IL_008d: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a2: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ac: Unknown result type (might be due to invalid IL or missing references)
		ShortcutExtensions.DOKill((Component)(object)((Component)this).transform, false);
		((Component)this).transform.localScale = Vector3.one;
		((Component)this).gameObject.SetSelfActive(active: true);
		ItemIcon.SetSelfActive<Image>(true);
		WebIcon.SetSelfActive<Image>(false);
		((Component)WebIcon).transform.setLocalPosition();
		CoveredBoxIcon.SetSelfActive<Image>(false);
		((Component)ItemIcon).transform.localRotation = Quaternion.identity;
		((Component)ItemIcon).transform.localPosition = Vector3.zero;
		((Component)ItemIcon).transform.localScale = Vector3.one * IconNormalScale;
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
		HideMergeHintEffect();
		if ((Object)(object)gameLevelGrid != (Object)null)
		{
			gameLevelGrid.RemoveMergeHint();
		}
		TimeManager.Instance.ClearSchedule(this);
	}

	public override void Recovery()
	{
		//IL_002d: Unknown result type (might be due to invalid IL or missing references)
		base.Recovery();
		Reset();
		mPlayFlyAnim = false;
		if (ItemMoveTween != null)
		{
			TweenExtensions.Kill((Tween)(object)ItemMoveTween, false);
		}
		((Component)this).transform.localPosition = Vector3.zero;
		DragIcon.raycastTarget = true;
	}

	private void OnEnable()
	{
		//IL_0015: Unknown result type (might be due to invalid IL or missing references)
		//IL_002a: Unknown result type (might be due to invalid IL or missing references)
		//IL_003f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0049: Unknown result type (might be due to invalid IL or missing references)
		if (!((Object)(object)((Component)this).transform == (Object)null))
		{
			((Component)this).transform.localScale = Vector3.one;
			((Component)ItemIcon).transform.localPosition = Vector3.zero;
			((Component)ItemIcon).transform.localScale = Vector3.one * IconNormalScale;
		}
	}
}
