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
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class IndependentGrid : ResBase, IDragHandler, IEventSystemHandler, IBeginDragHandler, IEndDragHandler
{
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass129_0
	{
		public Action _action;

		public IndependentGrid _003C_003E4__this;

		internal void _003CPlayItemSellVanish_003Eb__0()
		{
			_action.InvokeGracefully();
			GameLevelDefine.RecycleGameObject(_003C_003E4__this.ItemVanishGo);
			_003C_003E4__this.ItemVanishGo = null;
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CCollectGoodsToTempary_003Ed__76 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public float delay;

		public IndependentGrid _003C_003E4__this;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_0072: Unknown result type (might be due to invalid IL or missing references)
			//IL_0077: Unknown result type (might be due to invalid IL or missing references)
			//IL_007e: Unknown result type (might be due to invalid IL or missing references)
			//IL_0036: Unknown result type (might be due to invalid IL or missing references)
			//IL_003b: Unknown result type (might be due to invalid IL or missing references)
			//IL_003f: Unknown result type (might be due to invalid IL or missing references)
			//IL_0044: Unknown result type (might be due to invalid IL or missing references)
			//IL_0058: Unknown result type (might be due to invalid IL or missing references)
			//IL_0059: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			IndependentGrid independentGrid = _003C_003E4__this;
			try
			{
				Awaiter val2;
				if (num != 0)
				{
					if (!(delay > 0f))
					{
						goto IL_0094;
					}
					UniTask val = UniTask.Delay(TimeSpan.FromSeconds(delay), false, (PlayerLoopTiming)4, default(CancellationToken));
					val2 = val.GetAwaiter();
					if (!val2.IsCompleted)
					{
						num = (_003C_003E1__state = 0);
						_003C_003Eu__1 = val2;
						_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CCollectGoodsToTempary_003Ed__76>(ref val2, ref this);
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
				goto IL_0094;
				IL_0094:
				IIndependentGoodsBaseVo goodsBaseVo = independentGrid.GetGoodsBaseVo();
				if (goodsBaseVo != null)
				{
					if ((Object)(object)independentGrid.parentLogic != (Object)null)
					{
						independentGrid.parentLogic.GoodsToTempary(goodsBaseVo, independentGrid.GameItemParent);
					}
					if ((Object)(object)independentGrid.gameLevelItem != (Object)null)
					{
						independentGrid.gameLevelItem.Recovery();
						independentGrid.gameLevelItem = null;
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
	private struct _003CPlayDesignatedEffect_003Ed__83 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public IndependentGrid _003C_003E4__this;

		public string effectName;

		public float hideDuration;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_008d: Unknown result type (might be due to invalid IL or missing references)
			//IL_0092: Unknown result type (might be due to invalid IL or missing references)
			//IL_0099: Unknown result type (might be due to invalid IL or missing references)
			//IL_0054: Unknown result type (might be due to invalid IL or missing references)
			//IL_0059: Unknown result type (might be due to invalid IL or missing references)
			//IL_005d: Unknown result type (might be due to invalid IL or missing references)
			//IL_0062: Unknown result type (might be due to invalid IL or missing references)
			//IL_0076: Unknown result type (might be due to invalid IL or missing references)
			//IL_0077: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			IndependentGrid independentGrid = _003C_003E4__this;
			try
			{
				Awaiter val2;
				if (num != 0)
				{
					independentGrid.HideDesignatedEffect();
					independentGrid.mDesignatedEffect = independentGrid.CreateGameObject(effectName, independentGrid.EffectParent);
					if (!(hideDuration > 0f))
					{
						goto IL_00af;
					}
					UniTask val = UniTask.Delay(TimeSpan.FromSeconds(hideDuration), false, (PlayerLoopTiming)4, default(CancellationToken));
					val2 = val.GetAwaiter();
					if (!val2.IsCompleted)
					{
						num = (_003C_003E1__state = 0);
						_003C_003Eu__1 = val2;
						_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CPlayDesignatedEffect_003Ed__83>(ref val2, ref this);
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
				goto IL_00af;
				IL_00af:
				independentGrid.HideDesignatedEffect();
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
	private struct _003CPlayDesignatedEffectOnStage_003Ed__85 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public IndependentGrid _003C_003E4__this;

		public string effectName;

		private void MoveNext()
		{
			IndependentGrid CS_0024_003C_003E8__locals6 = _003C_003E4__this;
			try
			{
				CS_0024_003C_003E8__locals6.HideDesignatedEffect();
				CS_0024_003C_003E8__locals6.mDesignatedEffect = CS_0024_003C_003E8__locals6.CreateGameObject(effectName, CS_0024_003C_003E8__locals6.EffectParent);
				Animation component = CS_0024_003C_003E8__locals6.mDesignatedEffect.GetComponent<Animation>();
				if (!((Object)(object)component == (Object)null))
				{
					component.PlayAndDelayCall("숏끔溽搐䥄7¾厽숹끔枭攺敀3¢厡숍끟榫攎䵑\u0004ª厩숅끥犺弆睂7Î反숄끒ジ㈅捓7Å叄", () =>
					{
						CS_0024_003C_003E8__locals6.HideDesignatedEffect();
					}, -1f, aniShowMask: false);
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
	private struct _003CPlayDesignatedEffectOnTheme4_003Ed__87 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public IndependentGrid _003C_003E4__this;

		public string effectName;

		private void MoveNext()
		{
			IndependentGrid CS_0024_003C_003E8__locals6 = _003C_003E4__this;
			try
			{
				CS_0024_003C_003E8__locals6.HideDesignatedEffect();
				CS_0024_003C_003E8__locals6.mDesignatedEffect = CS_0024_003C_003E8__locals6.CreateGameObject(effectName, CS_0024_003C_003E8__locals6.EffectParent);
				Animation component = CS_0024_003C_003E8__locals6.mDesignatedEffect.GetComponent<Animation>();
				if (!((Object)(object)component == (Object)null))
				{
					component.PlayAndDelayCall("숏끔溽搐䥄7¾厽숭끔璭嘮敝4Ö叕숵끟璮弶楗3Ö叕숁끛㊪异浫bÍ双룲\u0083赴", () =>
					{
						CS_0024_003C_003E8__locals6.HideDesignatedEffect();
					}, -1f, aniShowMask: false);
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
	private struct _003CPlayDiggingAnimation_003Ed__102 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public IndependentGrid _003C_003E4__this;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_00a0: Unknown result type (might be due to invalid IL or missing references)
			//IL_00a5: Unknown result type (might be due to invalid IL or missing references)
			//IL_00ac: Unknown result type (might be due to invalid IL or missing references)
			//IL_014d: Unknown result type (might be due to invalid IL or missing references)
			//IL_0152: Unknown result type (might be due to invalid IL or missing references)
			//IL_0159: Unknown result type (might be due to invalid IL or missing references)
			//IL_0045: Unknown result type (might be due to invalid IL or missing references)
			//IL_0064: Unknown result type (might be due to invalid IL or missing references)
			//IL_0069: Unknown result type (might be due to invalid IL or missing references)
			//IL_006d: Unknown result type (might be due to invalid IL or missing references)
			//IL_0072: Unknown result type (might be due to invalid IL or missing references)
			//IL_0114: Unknown result type (might be due to invalid IL or missing references)
			//IL_0119: Unknown result type (might be due to invalid IL or missing references)
			//IL_011d: Unknown result type (might be due to invalid IL or missing references)
			//IL_0122: Unknown result type (might be due to invalid IL or missing references)
			//IL_018b: Unknown result type (might be due to invalid IL or missing references)
			//IL_0086: Unknown result type (might be due to invalid IL or missing references)
			//IL_0087: Unknown result type (might be due to invalid IL or missing references)
			//IL_0136: Unknown result type (might be due to invalid IL or missing references)
			//IL_0137: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			IndependentGrid independentGrid = _003C_003E4__this;
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
						goto IL_0168;
					}
					independentGrid.mIsPlayDigging = true;
					independentGrid.mIsPlayBroken = false;
					CommonMaskViewLogic.Show(0.25f);
					independentGrid.PlayDesignatedEffect(IndependentDefine.GetDiggingEffectName(independentGrid.gridType), 0.6f);
					val2 = UniTask.Delay(TimeSpan.FromSeconds(0.22300000488758087), false, (PlayerLoopTiming)4, default(CancellationToken));
					val = val2.GetAwaiter();
					if (!val.IsCompleted)
					{
						num = (_003C_003E1__state = 0);
						_003C_003Eu__1 = val;
						_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CPlayDiggingAnimation_003Ed__102>(ref val, ref this);
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
				AudioManager.Instance.PlayEffect(IndependentDefine.GetDiggingAudName(independentGrid.gridType));
				independentGrid.mIsPlayDigging = false;
				independentGrid.OnUpdateTime();
				if (!independentGrid.mIsPlayBroken)
				{
					val2 = UniTask.Delay(TimeSpan.FromSeconds(0.10999999940395355), false, (PlayerLoopTiming)4, default(CancellationToken));
					val = val2.GetAwaiter();
					if (!val.IsCompleted)
					{
						num = (_003C_003E1__state = 1);
						_003C_003Eu__1 = val;
						_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CPlayDiggingAnimation_003Ed__102>(ref val, ref this);
						return;
					}
					goto IL_0168;
				}
				goto end_IL_000e;
				IL_0168:
				val.GetResult();
				independentGrid.PlayOnceAnim(IndependentDefine.GetDiggingBrokenName(independentGrid.gridType));
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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CPlayItemSellVanish_003Ed__129 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public Action _action;

		public IndependentGrid _003C_003E4__this;

		public IIndependentGoodsBaseVo _goodsBaseVo;

		public float delay;

		private _003C_003Ec__DisplayClass129_0 _003C_003E8__1;

		private IndependentItemAni _003CitemAni_003E5__2;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_012d: Unknown result type (might be due to invalid IL or missing references)
			//IL_0132: Unknown result type (might be due to invalid IL or missing references)
			//IL_0139: Unknown result type (might be due to invalid IL or missing references)
			//IL_00f1: Unknown result type (might be due to invalid IL or missing references)
			//IL_00f6: Unknown result type (might be due to invalid IL or missing references)
			//IL_00fa: Unknown result type (might be due to invalid IL or missing references)
			//IL_00ff: Unknown result type (might be due to invalid IL or missing references)
			//IL_0113: Unknown result type (might be due to invalid IL or missing references)
			//IL_0114: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			IndependentGrid independentGrid = _003C_003E4__this;
			try
			{
				Awaiter val;
				if (num == 0)
				{
					val = _003C_003Eu__1;
					_003C_003Eu__1 = default;
					num = (_003C_003E1__state = -1);
					goto IL_0148;
				}
				_003C_003E8__1 = new _003C_003Ec__DisplayClass129_0();
				_003C_003E8__1._action = _action;
				_003C_003E8__1._003C_003E4__this = _003C_003E4__this;
				if ((Object)(object)independentGrid.ItemVanishGo != (Object)null)
				{
					GameLevelDefine.RecycleGameObject(independentGrid.ItemVanishGo);
					independentGrid.ItemVanishGo = null;
				}
				if (_goodsBaseVo != null)
				{
					independentGrid.ItemVanishGo = GameLevelDefine.CreateGameObjectSync("숏끔溽搐䥄7¾厽숣끔涭䄤敀7º厹显䥱", independentGrid.GameItemParent);
					if ((Object)(object)independentGrid.ItemVanishGo != (Object)null)
					{
						if (independentGrid.ItemVanishGo.TryGetComponent<IndependentItemAni>(ref _003CitemAni_003E5__2))
						{
							_003CitemAni_003E5__2.Init(_goodsBaseVo.GetIcon(independentGrid.gridType), independentGrid.resLoader);
							if (delay > 0f)
							{
								UniTask val2 = UniTask.Delay(TimeSpan.FromSeconds(delay), false, (PlayerLoopTiming)4, default(CancellationToken));
								val = val2.GetAwaiter();
								if (!val.IsCompleted)
								{
									num = (_003C_003E1__state = 0);
									_003C_003Eu__1 = val;
									_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CPlayItemSellVanish_003Ed__129>(ref val, ref this);
									return;
								}
								goto IL_0148;
							}
							goto IL_014f;
						}
						goto IL_0190;
					}
				}
				goto end_IL_000e;
				IL_0190:
				_003CitemAni_003E5__2 = null;
				goto end_IL_000e;
				IL_0148:
				val.GetResult();
				goto IL_014f;
				IL_014f:
				_003CitemAni_003E5__2.PlayAni("숇끎犼愈䥇\u0006Î反숎끟憆瀏摝!\u008a厉수끟溸椙火3¾厽", () =>
				{
					_003C_003E8__1._action.InvokeGracefully();
					GameLevelDefine.RecycleGameObject(_003C_003E8__1._003C_003E4__this.ItemVanishGo);
					_003C_003E8__1._003C_003E4__this.ItemVanishGo = null;
				}, 1f);
				AudioManager.Instance.PlayEffect("숇끎澼瘈楫?Â叁煥_4끭r唨䧑");
				goto IL_0190;
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
	private struct _003CPlayItemVanish_003Ed__128 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public IndependentGrid _003C_003E4__this;

		public IIndependentGoodsBaseVo _goodsBaseVo;

		public Vector3 _scale;

		public bool changePos;

		public Vector3 _pos;

		public float delay;

		public string animName;

		public Vector3 _targetPos;

		public Action _action;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_0169: Unknown result type (might be due to invalid IL or missing references)
			//IL_016e: Unknown result type (might be due to invalid IL or missing references)
			//IL_0176: Unknown result type (might be due to invalid IL or missing references)
			//IL_0247: Unknown result type (might be due to invalid IL or missing references)
			//IL_024c: Unknown result type (might be due to invalid IL or missing references)
			//IL_0254: Unknown result type (might be due to invalid IL or missing references)
			//IL_020c: Unknown result type (might be due to invalid IL or missing references)
			//IL_0211: Unknown result type (might be due to invalid IL or missing references)
			//IL_0215: Unknown result type (might be due to invalid IL or missing references)
			//IL_021a: Unknown result type (might be due to invalid IL or missing references)
			//IL_01e0: Unknown result type (might be due to invalid IL or missing references)
			//IL_022f: Unknown result type (might be due to invalid IL or missing references)
			//IL_0231: Unknown result type (might be due to invalid IL or missing references)
			//IL_00fc: Unknown result type (might be due to invalid IL or missing references)
			//IL_00d8: Unknown result type (might be due to invalid IL or missing references)
			//IL_012b: Unknown result type (might be due to invalid IL or missing references)
			//IL_0130: Unknown result type (might be due to invalid IL or missing references)
			//IL_0134: Unknown result type (might be due to invalid IL or missing references)
			//IL_0139: Unknown result type (might be due to invalid IL or missing references)
			//IL_014e: Unknown result type (might be due to invalid IL or missing references)
			//IL_0150: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			IndependentGrid independentGrid = _003C_003E4__this;
			try
			{
				Awaiter val;
				if (num == 0)
				{
					val = _003C_003Eu__1;
					_003C_003Eu__1 = default;
					num = (_003C_003E1__state = -1);
					goto IL_0185;
				}
				if (num == 1)
				{
					val = _003C_003Eu__1;
					_003C_003Eu__1 = default;
					num = (_003C_003E1__state = -1);
					goto IL_0263;
				}
				if ((Object)(object)independentGrid.ItemVanishGo != (Object)null)
				{
					independentGrid.ItemVanishGo.DestroySelf<GameObject>();
				}
				UniTask val2;
				if (_goodsBaseVo != null)
				{
					independentGrid.ItemVanishGo = independentGrid.CreateGameObject("숏끛斴洐䝽&\u009a厙숃끛傷爄噇:F卅划撣\ud9cdŖ", independentGrid.GameItemParent, "숏끛斴洐䝽&\u009a厙숃끛傷爄噇:F卅划撣\ud9cdŖ");
					if ((Object)(object)independentGrid.ItemVanishGo != (Object)null)
					{
						if ((Object)(object)independentGrid.ItemVanishGo.transform.Find("删犷\ud9e1Ś") != (Object)null)
						{
							Image component = ((Component)independentGrid.ItemVanishGo.transform.Find("删犷\ud9e1Ś")).GetComponent<Image>();
							if ((Object)(object)component != (Object)null)
							{
								component.sprite = independentGrid.resLoader.LoadSync<Sprite>(_goodsBaseVo.GetIcon(independentGrid.gridType));
								((Component)component).transform.localScale = _scale;
								((Graphic)component).SetNativeSize();
							}
						}
						if (changePos)
						{
							independentGrid.ItemVanishGo.transform.position = _pos;
						}
						if (delay > 0f)
						{
							val2 = UniTask.Delay(TimeSpan.FromSeconds(delay), false, (PlayerLoopTiming)4, default(CancellationToken));
							val = val2.GetAwaiter();
							if (!val.IsCompleted)
							{
								num = (_003C_003E1__state = 0);
								_003C_003Eu__1 = val;
								_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CPlayItemVanish_003Ed__128>(ref val, ref this);
								return;
							}
							goto IL_0185;
						}
						goto IL_018c;
					}
					goto IL_0275;
				}
				goto end_IL_000e;
				IL_026a:
				independentGrid.ItemVanishGo.DestroySelf<GameObject>();
				goto IL_0275;
				IL_018c:
				Animation component2 = independentGrid.ItemVanishGo.GetComponent<Animation>();
				if ((Object)(object)component2 != (Object)null)
				{
					AnimationClip clip = component2.GetClip(animName);
					if ((Object)(object)clip != (Object)null)
					{
						component2.Play(animName);
						if (changePos)
						{
							ShortcutExtensions.DOMove(independentGrid.ItemVanishGo.transform, _targetPos, clip.length, false);
						}
						val2 = UniTask.Delay(TimeSpan.FromSeconds(clip.length), false, (PlayerLoopTiming)4, default(CancellationToken));
						val = val2.GetAwaiter();
						if (!val.IsCompleted)
						{
							num = (_003C_003E1__state = 1);
							_003C_003Eu__1 = val;
							_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CPlayItemVanish_003Ed__128>(ref val, ref this);
							return;
						}
						goto IL_0263;
					}
				}
				goto IL_026a;
				IL_0185:
				val.GetResult();
				goto IL_018c;
				IL_0263:
				val.GetResult();
				goto IL_026a;
				IL_0275:
				_action.InvokeGracefully();
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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CPlayOnceAnim_003Ed__89 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public IndependentGrid _003C_003E4__this;

		public float delay;

		public string effectName;

		public string audioName;

		public float hideDelay;

		public Action callback;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_007e: Unknown result type (might be due to invalid IL or missing references)
			//IL_0083: Unknown result type (might be due to invalid IL or missing references)
			//IL_008a: Unknown result type (might be due to invalid IL or missing references)
			//IL_0145: Unknown result type (might be due to invalid IL or missing references)
			//IL_014a: Unknown result type (might be due to invalid IL or missing references)
			//IL_0151: Unknown result type (might be due to invalid IL or missing references)
			//IL_0042: Unknown result type (might be due to invalid IL or missing references)
			//IL_0047: Unknown result type (might be due to invalid IL or missing references)
			//IL_004b: Unknown result type (might be due to invalid IL or missing references)
			//IL_0050: Unknown result type (might be due to invalid IL or missing references)
			//IL_0064: Unknown result type (might be due to invalid IL or missing references)
			//IL_0065: Unknown result type (might be due to invalid IL or missing references)
			//IL_010c: Unknown result type (might be due to invalid IL or missing references)
			//IL_0111: Unknown result type (might be due to invalid IL or missing references)
			//IL_0115: Unknown result type (might be due to invalid IL or missing references)
			//IL_011a: Unknown result type (might be due to invalid IL or missing references)
			//IL_012e: Unknown result type (might be due to invalid IL or missing references)
			//IL_012f: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			IndependentGrid independentGrid = _003C_003E4__this;
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
						goto IL_0160;
					}
					independentGrid.HideOnceAnim();
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
						_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CPlayOnceAnim_003Ed__89>(ref val, ref this);
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
				IL_0160:
				val.GetResult();
				independentGrid.HideOnceAnim();
				callback.InvokeGracefully();
				goto end_IL_000e;
				IL_00a0:
				independentGrid.onceEffectGo = independentGrid.CreateGameObject(effectName, independentGrid.EffectParent);
				if (!((Object)(object)independentGrid.onceEffectGo == (Object)null))
				{
					if (audioName.IsNotNullAndEmpty())
					{
						AudioManager.Instance.PlayEffect(audioName);
					}
					val2 = UniTask.Delay(TimeSpan.FromSeconds(hideDelay), false, (PlayerLoopTiming)4, default(CancellationToken));
					val = val2.GetAwaiter();
					if (!val.IsCompleted)
					{
						num = (_003C_003E1__state = 1);
						_003C_003Eu__1 = val;
						_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CPlayOnceAnim_003Ed__89>(ref val, ref this);
						return;
					}
					goto IL_0160;
				}
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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CStageBasicPlayDesignatedEffect_003Ed__86 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public IndependentGrid _003C_003E4__this;

		public string effectName;

		public string aniName;

		private void MoveNext()
		{
			IndependentGrid CS_0024_003C_003E8__locals6 = _003C_003E4__this;
			try
			{
				CS_0024_003C_003E8__locals6.HideDesignatedEffect();
				if (!(effectName == "") && !(aniName == ""))
				{
					CS_0024_003C_003E8__locals6.mDesignatedEffect = CS_0024_003C_003E8__locals6.CreateGameObject(effectName, CS_0024_003C_003E8__locals6.EffectParent);
					Animation component = CS_0024_003C_003E8__locals6.mDesignatedEffect.GetComponent<Animation>();
					if (!((Object)(object)component == (Object)null))
					{
						component.PlayAndDelayCall(aniName, () =>
						{
							CS_0024_003C_003E8__locals6.HideDesignatedEffect();
						}, -1f, aniShowMask: false);
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

	public static int PlayCardAnim;

	public static int DelayPlayGuide;

	public static bool ShowUnlockView;

	public Image GridBg;

	public Transform GameItemParent;

	public GameObject SelectGo;

	public Animation SelectAnimation;

	public RectTransform SelectParentTrans;

	public RectTransform SelectTrans;

	public RectTransform SelectTrans_Egypt;

	[HideInInspector]
	public IndependentMergeViewBaseLogic parentLogic;

	public Transform EffectParent;

	private Transform EffectBottomParent;

	private IndependentGridBg gameLevelGridBg;

	private IndependentItem gameLevelItem;

	private IndependentType gridType = IndependentType.None;

	private bool _canSaveData = true;

	private int GridId;

	private int GridIndex;

	private bool isDrag;

	private IndGoodsBase mGameGoodsBase;

	private bool isBanDrag;

	private bool mGridBgActive;

	private GameObject ItemVanishGo;

	public Vector2 mapPos = Vector2.zero;

	private IndependentItem lastPlayEffectItem;

	private GameObject mDesignatedEffect;

	private GameObject onceEffectGo;

	private bool mIsPlayDigging;

	private bool mIsPlayBroken;

	private Image lockBg;

	private GameObject mOnceGameObject;

	private GameObject mTrailGameObject;

	public bool IsDrag => isDrag;

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

	public void Init(int _id, IndGoodsBase _goodsBase, IndependentMergeViewBaseLogic _parent, int index, IndependentGridBg _gridBg)
	{
		GridId = _id;
		parentLogic = _parent;
		GridIndex = index;
		gameLevelGridBg = _gridBg;
		InitGrid();
		InitGoodsVo(_goodsBase, isSave: false);
		OnUpdateTime();
		EventManager.GetInstance().AddEventListener<bool>(100119, EventBanDrag);
		EventManager.GetInstance().AddEventListener<bool>(100057, ApplicationPause);
	}

	public void SetGridType(IndependentType _type)
	{
		gridType = _type;
		if (IndependentDefine.ShowGridSelectSpecial(_type))
		{
			SelectTrans.SetSelfActive<RectTransform>(false);
			SelectTrans_Egypt.SetSelfActive<RectTransform>(true);
		}
		else
		{
			SelectTrans.SetSelfActive<RectTransform>(true);
			SelectTrans_Egypt.SetSelfActive<RectTransform>(false);
		}
		SetSelectState(select: false);
	}

	public void SetGridCanSave(bool canSave)
	{
		_canSaveData = canSave;
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
				gameLevelItem.LocalIdentity<IndependentItem>();
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
		//IL_0046: Unknown result type (might be due to invalid IL or missing references)
		GridBg.sprite = ((BaseViewLogic)parentLogic).Load<Sprite>(IndependentDefine.GetGridBgName(gridType, GridIndex % 2, GridId));
		((Component)GridBg).transform.localScale = IndependentDefine.GetGridBgScale(gridType, GridId);
		((Graphic)GridBg).SetNativeSize();
	}

	private void InitGoodsVo(IndGoodsBase goodsBase, bool isSave = true)
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
			gameLevelItem = Singleton<ResCacheManager>.Instance.GetRes<IndependentItem>();
			if ((Object)(object)gameLevelItem != (Object)null)
			{
				gameLevelItem.Init(goodsBase.GameGoods, this);
				if ((Object)(object)gameLevelItem == (Object)null)
				{
					return;
				}
				((Component)gameLevelItem).transform.SetParent(GameItemParent);
				gameLevelItem.LocalIdentity<IndependentItem>();
			}
			UpdateGridBgByGoods();
		}
		else
		{
			EmptyParentSelectGrid();
		}
		if (isSave)
		{
			SaveGridData();
		}
		TriggerGuide();
	}

	public IndGoodsBase GetGameGoodsBase()
	{
		return mGameGoodsBase;
	}

	public void UpdateTopLayer()
	{
		((Component)this).transform.SetSiblingIndex(((Component)this).transform.parent.childCount - 1);
	}

	public void ChangeGameGoodsVo(IndGoodsBase goodsBase)
	{
		InitGoodsVo(goodsBase);
		RemoveMergeHint();
	}

	public void ChangeGridGameGoods(IndGoodsBase goodsBase, IndependentItem levelItem)
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
			gameLevelItem.LocalIdentity<IndependentItem>();
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
		SaveGridData();
		RemoveMergeHint();
	}

	public bool ChangeGameGoodsState(IndependentGoodsState goodsState)
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.UpdateItemState(goodsState);
			if ((Object)(object)parentLogic != (Object)null && (Object)(object)parentLogic.CurrentSelectGrid != (Object)null && parentLogic.CurrentSelectGrid.GetGridId() == GetGridId())
			{
				parentLogic.CurrentSelectGrid = this;
			}
			UpdateGridBgByGoods();
			SaveGridData();
			return true;
		}
		return false;
	}

	public void UpdateGameLevelItem()
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.UpdateIcon();
		}
	}

	public IndependentItem GetGameLevelItem()
	{
		return gameLevelItem;
	}

	public IndependentGameGoodsVo GetGameGoodsVo()
	{
		if (mGameGoodsBase != null)
		{
			return mGameGoodsBase.GameGoods;
		}
		return null;
	}

	public IIndependentGoodsBaseVo GetGoodsBaseVo()
	{
		if (mGameGoodsBase != null)
		{
			return mGameGoodsBase.GoodsBaseVo;
		}
		return null;
	}

	public IndependentType GetGridType()
	{
		return gridType;
	}

	public int GetGridId()
	{
		return GridId;
	}

	public void OnBeginDrag(PointerEventData e)
	{
		if (!isBanDrag && !((Object)(object)gameLevelItem == (Object)null) && GetGameGoodsVo() != null && !IIndependentGoodsBaseVo.CannotDrag(GetGameGoodsVo().GoodsState) && GetGoodsBaseVo() != null && !IIndependentGoodsBaseVo.CannotDragGoodsType(GetGoodsBaseVo().type) && IndependentDefine.IsUnlockGrid(GetGridType(), GetGameGoodsVo()))
		{
			RemoveMergeHint();
			if ((Object)(object)((Component)gameLevelItem).transform.parent == (Object)(object)parentLogic.DragItemParent)
			{
				InterruptItemAnim();
			}
			if ((Object)(object)gameLevelItem != (Object)null)
			{
				gameLevelItem.SetItemScaleAnim(show: false);
			}
			isDrag = true;
			parentLogic.DragGoods = true;
			((Component)gameLevelItem).transform.SetParent(parentLogic.DragItemParent);
			OnSelectGrid();
			SetSelectState(select: false);
			OnOpenGoodInfoView();
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
		//IL_004f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0054: Unknown result type (might be due to invalid IL or missing references)
		//IL_0059: Unknown result type (might be due to invalid IL or missing references)
		//IL_006f: Expected Obj, but got Unknown
		//IL_007b: Unknown result type (might be due to invalid IL or missing references)
		//IL_007c: Unknown result type (might be due to invalid IL or missing references)
		if (!isDrag || (Object)(object)gameLevelItem == (Object)null || (Object)(object)Singleton<GameLevelManager>.Instance.UICamera == (Object)null || (Object)(object)((Component)gameLevelItem).transform == (Object)null)
		{
			return;
		}
		Vector2 val = default;
		RectTransformUtility.ScreenPointToLocalPointInRectangle((RectTransform)((Component)gameLevelItem).transform.parent, Vector2.op_Implicit(Input.mousePosition), Singleton<GameLevelManager>.Instance.UICamera, ref val);
		((Component)gameLevelItem).transform.localPosition = Vector2.op_Implicit(val);
		if ((Object)(object)gameLevelItem.DragIcon != (Object)null && gameLevelItem.DragIcon.raycastTarget)
		{
			gameLevelItem.DragIcon.raycastTarget = false;
		}
		GameObject touchObject = GetTouchObject(e);
		if ((Object)(object)touchObject == (Object)null)
		{
			return;
		}
		if (touchObject.CompareTag("鯤¿赴"))
		{
			HideMergeHintEffect();
		}
		else if (touchObject.CompareTag("參橯ā讑靳"))
		{
			IndependentItem component = touchObject.GetComponent<IndependentItem>();
			if ((Object)(object)component == (Object)null)
			{
				HideMergeHintEffect();
				return;
			}
			IndependentGrid gameLevelGrid = component.GetGameLevelGrid();
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
				IndependentGameGoodsVo gameGoodsVo = gameLevelGrid.GetGameGoodsVo();
				if (gameGoodsVo == null)
				{
					HideMergeHintEffect();
				}
				else if (IIndependentGoodsBaseVo.CannotMerge(gameGoodsVo.GoodsState))
				{
					HideMergeHintEffect();
				}
				else if (!IndependentDefine.IsUnlockGrid(GetGridType(), gameGoodsVo))
				{
					HideMergeHintEffect();
				}
				else if (IndependentDefine.GetNextIndependentGoods(gridType, gameGoodsVo, GetGameGoodsVo()) == null)
				{
					if (CanPutinGoods(this, gameLevelGrid))
					{
						if ((Object)(object)((Component)gameLevelGrid).transform != (Object)null && (Object)(object)((Component)gameLevelGrid).transform.parent != (Object)null)
						{
							((Component)gameLevelGrid).transform.SetSiblingIndex(((Component)gameLevelGrid).transform.parent.childCount - 1);
						}
						PlayAutoCoveredHint(component);
					}
					else
					{
						HideMergeHintEffect();
					}
				}
				else
				{
					if ((Object)(object)((Component)gameLevelGrid).transform != (Object)null && (Object)(object)((Component)gameLevelGrid).transform.parent != (Object)null)
					{
						((Component)gameLevelGrid).transform.SetSiblingIndex(((Component)gameLevelGrid).transform.parent.childCount - 1);
					}
					ShowMergeHintEffect(component);
				}
			}
		}
		else
		{
			HideMergeHintEffect();
		}
	}

	private void ShowMergeHintEffect(IndependentItem targetItem)
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
			lastPlayEffectItem.AutoCoveredHintHide();
			lastPlayEffectItem = null;
		}
	}

	private void PlayAutoCoveredHint(IndependentItem targetItem)
	{
		if ((Object)(object)lastPlayEffectItem != (Object)null)
		{
			if (lastPlayEffectItem.GetGameLevelGrid().GetGridId() != targetItem.GetGameLevelGrid().GetGridId())
			{
				HideMergeHintEffect();
				targetItem.PlayAutoCoveredHint();
				lastPlayEffectItem = targetItem;
			}
		}
		else
		{
			targetItem.PlayAutoCoveredHint();
			lastPlayEffectItem = targetItem;
		}
	}

	private GameObject GetTouchObject(PointerEventData e)
	{
		//IL_002d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0032: Unknown result type (might be due to invalid IL or missing references)
		//IL_0037: Unknown result type (might be due to invalid IL or missing references)
		//IL_003c: Unknown result type (might be due to invalid IL or missing references)
		//IL_01a3: Unknown result type (might be due to invalid IL or missing references)
		//IL_01a8: Unknown result type (might be due to invalid IL or missing references)
		//IL_00d4: Unknown result type (might be due to invalid IL or missing references)
		//IL_00d9: Unknown result type (might be due to invalid IL or missing references)
		//IL_010f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0114: Unknown result type (might be due to invalid IL or missing references)
		//IL_012e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0130: Unknown result type (might be due to invalid IL or missing references)
		//IL_00f9: Unknown result type (might be due to invalid IL or missing references)
		//IL_00fe: Unknown result type (might be due to invalid IL or missing references)
		//IL_0103: Unknown result type (might be due to invalid IL or missing references)
		//IL_0108: Unknown result type (might be due to invalid IL or missing references)
		GameObject val = null;
		if (GameLevelViewLogic.MergeAdsorb)
		{
			Dictionary<int, IndependentGrid> gridObjectDic = parentLogic.GridObjectDic;
			Vector2 val2 = Vector2.op_Implicit(((Component)parentLogic).transform.InverseTransformPoint(((Component)gameLevelItem).transform.position));
			float num = GameLevelViewLogic.GridWidth / 2f;
			float num2 = 99999f;
			int num3 = 99999;
			foreach (KeyValuePair<int, IndependentGrid> item in gridObjectDic)
			{
				IndependentGrid value = item.Value;
				IndependentGrid gameLevelGrid = gameLevelItem.GetGameLevelGrid();
				if (((Object)(object)gameLevelGrid != (Object)null && value.GetGridId() == gameLevelGrid.GetGridId()) || GetGameGoodsBase() == null || value.GetGameGoodsBase() == null || IndependentDefine.GetNextIndependentGoods(gridType, value.GetGameGoodsVo(), GetGameGoodsVo()) == null)
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
					IndependentItem independentItem = value.GetGameLevelItem();
					if ((Object)(object)independentItem != (Object)null)
					{
						num3 = value.GetGridId();
						num2 = num4;
						val = ((Component)independentItem).gameObject;
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
		HideMergeHintEffect();
		if (!isDrag)
		{
			return;
		}
		isDrag = false;
		if ((Object)(object)gameLevelItem == (Object)null)
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
		int dragGoodsId = ((GetGameGoodsVo() != null) ? GetGameGoodsVo().goodsID : 0);
		if (touchObject.CompareTag("刚泳\ud9efŐ"))
		{
			IndependentGrid component = touchObject.GetComponent<IndependentGrid>();
			if ((Object)(object)component != (Object)null && (Object)(object)component.GetGameLevelItem() != (Object)null && component.GetGridId() != GetGridId())
			{
				component.InterruptItemAnim();
			}
			EndDragToTargetGrid(component, dragGoodsId);
		}
		else if (touchObject.CompareTag("參橯ā讑靳"))
		{
			IndependentItem component2 = touchObject.GetComponent<IndependentItem>();
			if ((Object)(object)component2 == (Object)null)
			{
				Log.E("신⋖\ue312셣嬤拭㦪\u07fdꀭʒや\ueecc혽本⧅┰\uaad2ｷ䂷\ue161\u07b0瘻⨌᱙ꈖ뀖\uab0f䓃潝犓*卻玆" + dragGoodsId);
				ResetItem();
				return;
			}
			IndependentGrid gameLevelGrid = component2.GetGameLevelGrid();
			EndDragToTargetGrid(gameLevelGrid, dragGoodsId);
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

	private void EndDragToTargetGrid(IndependentGrid targetGrid, int dragGoodsId = 0)
	{
		//IL_0062: Unknown result type (might be due to invalid IL or missing references)
		//IL_0067: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a9: Unknown result type (might be due to invalid IL or missing references)
		//IL_0154: Unknown result type (might be due to invalid IL or missing references)
		//IL_0159: Unknown result type (might be due to invalid IL or missing references)
		//IL_01b7: Unknown result type (might be due to invalid IL or missing references)
		//IL_03d8: Unknown result type (might be due to invalid IL or missing references)
		//IL_03dd: Unknown result type (might be due to invalid IL or missing references)
		//IL_03e5: Unknown result type (might be due to invalid IL or missing references)
		//IL_03ea: Unknown result type (might be due to invalid IL or missing references)
		//IL_03fe: Unknown result type (might be due to invalid IL or missing references)
		//IL_0408: Unknown result type (might be due to invalid IL or missing references)
		//IL_040d: Unknown result type (might be due to invalid IL or missing references)
		//IL_040f: Unknown result type (might be due to invalid IL or missing references)
		//IL_041d: Unknown result type (might be due to invalid IL or missing references)
		//IL_01e4: Unknown result type (might be due to invalid IL or missing references)
		if ((Object)(object)targetGrid == (Object)null)
		{
			ResetItem();
			return;
		}
		if (targetGrid.GetGridId() == GetGridId())
		{
			ResetItem();
			return;
		}
		if (!parentLogic.CanDragToGrid(targetGrid.GetGridId()))
		{
			ResetItem();
			return;
		}
		IndependentGameGoodsVo gameGoodsVo = GetGameGoodsVo();
		IndependentGameGoodsVo gameGoodsVo2 = targetGrid.GetGameGoodsVo();
		IIndependentGoodsBaseVo goodsBaseVo = targetGrid.GetGoodsBaseVo();
		if (gameGoodsVo2 == null)
		{
			Vector3 position = ((Component)gameLevelItem).transform.position;
			targetGrid.ChangeGridGameGoods(mGameGoodsBase, gameLevelItem);
			targetGrid.OnSelectGrid();
			ChangeGridGameGoods(null, null);
			if ((Object)(object)targetGrid != (Object)null && (Object)(object)targetGrid.GetGameLevelItem() != (Object)null)
			{
				targetGrid.GetGameLevelItem().PlayItemMove(position, 0.2f, exchange: false);
			}
			OnOpenGoodInfoView();
			return;
		}
		IndependentItem independentItem = targetGrid.GetGameLevelItem();
		if ((Object)(object)independentItem == (Object)null)
		{
			ResetItem();
			return;
		}
		if (IIndependentGoodsBaseVo.CannotMerge(gameGoodsVo2.GoodsState))
		{
			ResetItem();
			return;
		}
		if (!IndependentDefine.IsUnlockGrid(GetGridType(), gameGoodsVo2))
		{
			ResetItem();
			return;
		}
		IIndependentGoodsBaseVo nextIndependentGoods = IndependentDefine.GetNextIndependentGoods(gridType, gameGoodsVo2, gameGoodsVo);
		if (nextIndependentGoods == null)
		{
			if (gameGoodsVo2.GoodsState == IndependentGoodsState.Lock)
			{
				ResetItem();
			}
			else
			{
				if (targetGrid.GetGameGoodsBase().CheckEligible(this))
				{
					return;
				}
				if (IIndependentGoodsBaseVo.CannotDragGoodsType(goodsBaseVo.type))
				{
					ResetItem();
					return;
				}
				Vector3 position2 = ((Component)gameLevelItem).transform.position;
				IndGoodsBase gameGoodsBase = targetGrid.GetGameGoodsBase();
				targetGrid.ChangeGridGameGoods(mGameGoodsBase, gameLevelItem);
				targetGrid.OnSelectGrid();
				((Component)independentItem).transform.SetParent(parentLogic.DragItemParent);
				ChangeGridGameGoods(gameGoodsBase, independentItem);
				if ((Object)(object)gameLevelItem != (Object)null)
				{
					gameLevelItem.PlayItemMove(targetGrid.GameItemParent.position);
				}
				if ((Object)(object)targetGrid != (Object)null && (Object)(object)targetGrid.GetGameLevelItem() != (Object)null)
				{
					targetGrid.GetGameLevelItem().PlayItemMove(position2, 0.2f);
				}
				OnOpenGoodInfoView();
			}
			return;
		}
		List<BaseData2VO> list = new List<BaseData2VO>();
		List<int> list2 = new List<int>();
		if (gameGoodsVo2 != null)
		{
			list = list.Concat(gameGoodsVo2.MergeDropItemList).ToList();
			list2 = list2.Concat(gameGoodsVo2.MergeDropList).ToList();
		}
		if (gameGoodsVo != null)
		{
			list = list.Concat(gameGoodsVo.MergeDropItemList).ToList();
			list2 = list2.Concat(gameGoodsVo.MergeDropList).ToList();
		}
		if (gameGoodsVo2.GoodsState == IndependentGoodsState.Lock)
		{
			PlayGridUnlock(targetGrid);
		}
		if (gridType == IndependentType.MergeIndependent)
		{
			bool unlockStateByGoodsID = ObjectManager.GetInstance().independentMergeModel.GetUnlockStateByGoodsID(nextIndependentGoods.goodsID);
			IIndependentMergeTheme independentMergeTheme = ObjectManager.GetInstance().independentMergeModel.GetIndependentMergeTheme();
			if (independentMergeTheme != null && nextIndependentGoods.series == independentMergeTheme.themeSeriesID && nextIndependentGoods.level >= independentMergeTheme.popLevel && !unlockStateByGoodsID)
			{
				ShowUnlockView = true;
			}
		}
		else if (gridType == IndependentType.Independent_Basic)
		{
			bool unlockStateByGoodsID2 = ObjectManager.GetInstance().independentBasicModel.GetUnlockStateByGoodsID(nextIndependentGoods.goodsID);
			IIndependentMergeTheme independentMergeTheme2 = ObjectManager.GetInstance().independentBasicModel.GetIndependentMergeTheme();
			if (independentMergeTheme2 != null && nextIndependentGoods.series == independentMergeTheme2.themeSeriesID && nextIndependentGoods.level >= independentMergeTheme2.popLevel && !unlockStateByGoodsID2)
			{
				ShowUnlockView = true;
			}
		}
		else if (gridType == IndependentType.Independent_Farm)
		{
			bool unlockStateByGoodsID3 = ObjectManager.GetInstance().independentFarmModel.GetUnlockStateByGoodsID(nextIndependentGoods.goodsID);
			IIndependentFarmTheme independentMergeTheme3 = ObjectManager.GetInstance().independentFarmModel.GetIndependentMergeTheme();
			if (independentMergeTheme3 != null && nextIndependentGoods.series == independentMergeTheme3.themeSeriesID && nextIndependentGoods.level >= independentMergeTheme3.popLevel && !unlockStateByGoodsID3)
			{
				ShowUnlockView = true;
			}
		}
		IndGoodsBase indGameBaseById = IndependentDefine.GetIndGameBaseById(gridType, nextIndependentGoods.goodsID, targetGrid, null, list2, addMergeDrop: true, list);
		targetGrid.ChangeGameGoodsVo(indGameBaseById);
		targetGrid.OnSelectGrid();
		Vector3 position3 = ((Component)gameLevelItem).transform.position;
		Vector3 position4 = targetGrid.GameItemParent.position;
		IIndependentGoodsBaseVo goodsBaseVo2 = GetGoodsBaseVo();
		ChangeGameGoodsVo(null);
		PlayItemVanish(goodsBaseVo2, Vector3.one * 0.565f, position3, position4, null, "숏끛皴攐䝸7Þ叝숏끳澭瘐汙\rÂ叁녥孲㉐\0這\ud974", changePos: true);
		parentLogic.MergeSuccess(targetGrid, this);
		OnOpenGoodInfoView();
	}

	private void PlayGridUnlock(IndependentGrid targetGrid)
	{
		//IL_0028: Unknown result type (might be due to invalid IL or missing references)
		//IL_00fd: Unknown result type (might be due to invalid IL or missing references)
		//IL_00af: Unknown result type (might be due to invalid IL or missing references)
		//IL_004d: Unknown result type (might be due to invalid IL or missing references)
		//IL_006d: Unknown result type (might be due to invalid IL or missing references)
		//IL_01d7: Unknown result type (might be due to invalid IL or missing references)
		if (GetGridType() == IndependentType.MergeIndependent)
		{
			if (ObjectManager.GetInstance().independentMergeModel.ThemeID == 2)
			{
				targetGrid.PlayDesignatedEffect("숚끝瞠攛敀\râ叡숅끓梺椆扚\r¦厥核㽽", 0.5f);
			}
			else if (ObjectManager.GetInstance().independentMergeModel.ThemeID == 3)
			{
				targetGrid.PlayDesignatedEffect("숵끟抭椶灃7\u008e厍숵끕撷收捜;\u0096厕", 0.5f);
			}
			else if (ObjectManager.GetInstance().independentMergeModel.ThemeID == 4)
			{
				targetGrid.PlayDesignatedEffectOnTheme4("숏끔溽搐䥄7¾厽숭끔璭嘮敝4Ö叕숵끟璮弶楗3Ö叕判皿\ud9c5ş");
				AudioManager.GetInstance().PlayEffect("숏끔溽搐楄7¾厽숵끔炭收敄3Æ叅숃끥炽瀄片3Æ叅볗¿赴");
			}
		}
		if (GetGridType() == IndependentType.StageMergeIndependent && ObjectManager.GetInstance().independentStageMergeModel.ThemeID == 1)
		{
			targetGrid.PlayDesignatedEffectOnStage("숏끔溽搐䥄7¾厽숹끔枭攺敀3¢厡숍끟榫攎䵑\u0004ª厩睷_4끯x\udf37俚");
			AudioManager.GetInstance().PlayEffect("숍끎涸攎獑\rº厹숵끝玼愶牐;Ò发匔橰ā讅鵲");
		}
		if (GetGridType() == IndependentType.StageMergeBasic)
		{
			string coverEffectName = ObjectManager.GetInstance().idnStageBasicModel.GetCoverEffectName();
			string coverEffectAniName = ObjectManager.GetInstance().idnStageBasicModel.GetCoverEffectAniName(isHalf: true);
			targetGrid.StageBasicPlayDesignatedEffect(coverEffectName, coverEffectAniName);
			if (ObjectManager.GetInstance().idnStageBasicModel.ThemeID == 1)
			{
				AudioManager.GetInstance().PlayEffect("숍끎涸攎獑\rº厹숵끝玼愶牐;Ò发匔橰ā讅鵲");
			}
			else
			{
				AudioManager.GetInstance().PlayEffect("숵끏碽弶慇4æ句숅끔徵瘆畗9\u0082厁숄끖溼攅慀;¾厽");
			}
		}
		if (GetGridType() == IndependentType.IndStageMerge)
		{
			ObjectManager.GetInstance().idnStageModel.PlayGridUnlockAudio();
		}
		if (GetGridType() == IndependentType.Independent_Basic)
		{
			string uIResourceName = ObjectManager.GetInstance().independentBasicModel.GetUIResourceName(IndependentBasicResName.Basic_Covered_Sound.ToString());
			AudioManager.Instance.PlayEffect(uIResourceName);
		}
		if (GetGridType() == IndependentType.Independent_Mining)
		{
			string uIResourceName2 = ObjectManager.GetInstance().independentMiningModel.GetUIResourceName(IndependentMiningResName.Mining_Digging_Unlock.ToString());
			targetGrid.PlayDesignatedEffect(uIResourceName2, 0.5f);
		}
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
			gameLevelItem.LocalIdentity<IndependentItem>();
			OnSelectGrid();
			gameLevelItem.PlayItemMove(position);
			OnOpenGoodInfoView();
		}
		isDrag = false;
		if ((Object)(object)parentLogic != (Object)null)
		{
			parentLogic.DragGoods = false;
		}
	}

	public void InterruptItemAnim()
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			((Component)gameLevelItem).transform.SetParent(GameItemParent);
			gameLevelItem.LocalIdentity<IndependentItem>();
			gameLevelItem.InterruptAnimtion();
			OnSelectGrid();
		}
		isDrag = false;
		if ((Object)(object)parentLogic != (Object)null)
		{
			parentLogic.DragGoods = false;
		}
		TimeManager.Instance.ClearSchedule(this);
		DestroyTrailGameObject();
	}

	public void SetSelectState(bool select, bool playAnim = true)
	{
		if (!((Object)(object)SelectGo != (Object)null))
		{
			return;
		}
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
		SelectAnimation.Play("숏끛皴攐䝸7Þ叝숏끳疭椐汙\rÚ叙숆끉璼弇彑1Ö叕숝끒溶椞獫3¾厽");
		AnimationClip clip = SelectAnimation.GetClip("숏끛皴攐䝸7Þ叝숏끳疭椐汙\rÚ叙숆끉璼弇彑1Ö叕숝끒溶椞獫3¾厽");
		if (!((Object)(object)clip != (Object)null) || !(clip.length > 0f))
		{
			return;
		}
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

	public void OnSelectGrid(bool isProduce = false, bool showTip = false, bool playSelectAnim = true)
	{
		if ((Object)(object)gameLevelItem == (Object)null || (Object)(object)parentLogic == (Object)null)
		{
			return;
		}
		if ((Object)(object)parentLogic.CurrentSelectGrid == (Object)null)
		{
			parentLogic.CurrentSelectGrid = this;
			SetSelectState(select: true, playSelectAnim);
			if (isProduce && CanDirectUse())
			{
				parentLogic.CheckUnlock(mGameGoodsBase.GoodsBaseVo);
				mGameGoodsBase.Use();
			}
		}
		else if (parentLogic.CurrentSelectGrid.GetGridId() == GetGridId())
		{
			if (isProduce)
			{
				SetSelectState(select: true);
				if (mGameGoodsBase != null)
				{
					parentLogic.CheckUnlock(mGameGoodsBase.GoodsBaseVo);
					mGameGoodsBase.Use();
				}
			}
			else
			{
				SetSelectState(select: true);
			}
		}
		else
		{
			parentLogic.CurrentSelectGrid.SetSelectState(select: false);
			parentLogic.CurrentSelectGrid = this;
			SetSelectState(select: true, playSelectAnim);
			if (isProduce && CanDirectUse())
			{
				parentLogic.CheckUnlock(mGameGoodsBase.GoodsBaseVo);
				mGameGoodsBase.Use();
			}
		}
		if (showTip)
		{
			ShowIndependentTip();
		}
	}

	public bool CanDirectUse()
	{
		if (GetGoodsBaseVo() == null)
		{
			return false;
		}
		if (IIndependentGoodsBaseVo.IsBatchProduce(GetGoodsBaseVo().type))
		{
			return true;
		}
		if (GetGoodsBaseVo().type == 10)
		{
			return true;
		}
		return false;
	}

	public void OnOpenGoodInfoView()
	{
		parentLogic?.OnOpenGoodInfoView();
	}

	private void ShowIndependentTip()
	{
		if (!MonoSingleton<GuideManager>.Instance.IsInGuide() && GetGoodsBaseVo() != null && (GetGoodsBaseVo().type == 5 || GetGoodsBaseVo().type == 7))
		{
			List<IIndependentAutoConversionVO> autoConversionVoByID = IndependentDefine.GetAutoConversionVoByID(GetGridType(), GetGameGoodsVo().goodsID);
			if (autoConversionVoByID != null && autoConversionVoByID.Count > 0)
			{
				IndependentTipViewData data = new IndependentTipViewData
				{
					iconName = autoConversionVoByID[0].GetMaterialIcon(gridType),
					NodeTransform = GameItemParent,
					closeDelay = 3f
				};
				ViewManager.GetInstance().ShowView<IndependentTipViewLogic>(data, ViewManager.ViewLayer.POP);
			}
		}
	}

	public void OnUpdateTime()
	{
		if (!mIsPlayDigging && mGameGoodsBase != null)
		{
			mGameGoodsBase.UpdateAttribute();
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

	public bool CheckEmptyGridEnough(int num, bool showEnoughTip = false)
	{
		if ((Object)(object)parentLogic == (Object)null)
		{
			return false;
		}
		return parentLogic.CheckEmptyGridEnough(num, showEnoughTip);
	}

	public IndependentGrid GetNearbyEmptyGrid(int gridID, bool showEnoughTip = false, int goodsID = 0)
	{
		if ((Object)(object)parentLogic == (Object)null)
		{
			return null;
		}
		return parentLogic.GetNearbyEmptyGrid(gridID, showEnoughTip, null, goodsID);
	}

	public IndependentGrid GetEmptyGridAroundID(int gridID)
	{
		if ((Object)(object)parentLogic == (Object)null)
		{
			return null;
		}
		return parentLogic.GetEmptyGridAroundID(gridID);
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

	public void CurrencyCollectAnim(int itemId, int itemNum, string itemIcon = null)
	{
		//IL_0031: Unknown result type (might be due to invalid IL or missing references)
		//IL_0037: Expected Obj, but got Unknown
		//IL_008b: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b1: Unknown result type (might be due to invalid IL or missing references)
		//IL_031e: Unknown result type (might be due to invalid IL or missing references)
		if (GetGameGoodsVo() == null)
		{
			return;
		}
		IIndependentGoodsBaseVo goodsConfigById = IndependentDefine.GetGoodsConfigById(gridType, GetGameGoodsVo().goodsID);
		if (goodsConfigById == null)
		{
			return;
		}
		GameObject val = new GameObject();
		Image flyImage = val.AddComponent<Image>();
		flyImage.LocalIdentity<Image>();
		flyImage.sprite = resLoader.LoadSync<Sprite>(goodsConfigById.GetIcon(gridType));
		((Component)flyImage).transform.localScale = new Vector3(0.565f, 0.565f, 1f);
		((Graphic)flyImage).SetNativeSize();
		((Component)flyImage).transform.position = GameItemParent.position;
		RewardFlyIconType endIconType = RewardFlyIconType.TopCoin;
		RewardFlyIconType flyIconType = RewardFlyIconType.None;
		TopUIInfoType[] array = new TopUIInfoType[3]
		{
			TopUIInfoType.COIN,
			TopUIInfoType.MONEY,
			TopUIInfoType.LIGHTING
		};
		switch (itemId)
		{
		case 1002:
			endIconType = RewardFlyIconType.TopCoin;
			flyIconType = RewardFlyIconType.TopCoin;
			array = new TopUIInfoType[1] { TopUIInfoType.COIN };
			break;
		case 1003:
			endIconType = RewardFlyIconType.TopMoney;
			array = new TopUIInfoType[1] { TopUIInfoType.MONEY };
			break;
		case 1001:
			endIconType = RewardFlyIconType.TopExp;
			array = new TopUIInfoType[1] { TopUIInfoType.EXP };
			break;
		case 1004:
			endIconType = RewardFlyIconType.TopLightning;
			array = new TopUIInfoType[1] { TopUIInfoType.LIGHTING };
			break;
		case 1007:
			endIconType = RewardFlyIconType.TopCookingCard;
			array = new TopUIInfoType[1] { TopUIInfoType.CARD };
			EventManager.GetInstance().DispatchEvent(100130, arg: true);
			PlayCardAnim++;
			break;
		case 1050:
			endIconType = RewardFlyIconType.IndependentLevel;
			flyIconType = RewardFlyIconType.IndependentLevel;
			array = new TopUIInfoType[0];
			break;
		case 1053:
			endIconType = RewardFlyIconType.TreasureCraftingExp;
			flyIconType = RewardFlyIconType.TreasureCraftingExp;
			ObjectManager.GetInstance().treasureCraftingModel.ShowScoreTip(itemNum, GameItemParent);
			array = new TopUIInfoType[0];
			break;
		case 1061:
			endIconType = RewardFlyIconType.Independent_Mining_Exp;
			flyIconType = RewardFlyIconType.Independent_Mining_Exp;
			ObjectManager.GetInstance().independentMiningModel.ShowScoreTip(itemNum, GameItemParent);
			array = new TopUIInfoType[0];
			break;
		}
		CommonRewardFlyViewData flyData = new CommonRewardFlyViewData
		{
			NewCurrencyCollectAnim = true,
			rewardVo = new ItemVO
			{
				id = itemId,
				num = itemNum
			},
			flyTrans = ((Component)flyImage).transform,
			endIconType = endIconType,
			flyIconType = flyIconType,
			toScale = 0.6f,
			itemIcon = itemIcon,
			callBack = () =>
			{
				Object.Destroy((Object)(object)((Component)flyImage).gameObject);
				EventManager.GetInstance().DispatchEvent(100014, itemId);
			}
		};
		ObjectManager.GetInstance().itemDataModel.FlyRewardView(flyData);
		float num = 0.5f;
		if (array.Length != 0)
		{
			EventManager.GetInstance().DispatchEvent(100188, array, num + 1.4f, arg3: false);
		}
		TimeManager.GetInstance().Schedule(this, (float dt1) =>
		{
			if (itemId == 1007)
			{
				if (PlayCardAnim <= 1)
				{
					EventManager.GetInstance().DispatchEvent(100130, arg: false);
				}
				PlayCardAnim--;
			}
		}, num + 1.4f, 1, 0f);
		if (itemId == 1050 || itemId == 1053 || itemId == 1061)
		{
			parentLogic.PlayExpAnimation(itemNum, 1f);
		}
	}

	public void MainGoodsCoolectAnim(BaseData3VO data3Vo)
	{
		//IL_0006: Unknown result type (might be due to invalid IL or missing references)
		//IL_0055: Unknown result type (might be due to invalid IL or missing references)
		//IL_0065: Unknown result type (might be due to invalid IL or missing references)
		//IL_0071: Unknown result type (might be due to invalid IL or missing references)
		if (data3Vo != null)
		{
			RewardFlyIconType endIconType = RewardFlyIconType.MainUIPlayBtn;
			Image val = new GameObject().AddComponent<Image>();
			((Component)val).transform.SetParent(ViewManager.Instance.pop.transform);
			val.sprite = ((BaseViewLogic)parentLogic).Load<Sprite>(data3Vo.Icon());
			((Graphic)val).SetNativeSize();
			((Component)val).transform.position = GameItemParent.position;
			((Component)val).transform.localScale = Vector3.one * data3Vo.Scale();
			CommonRewardFlyViewData flyData = new CommonRewardFlyViewData
			{
				rewardVo = new ItemVO
				{
					id = -1,
					num = 1L
				},
				flyTrans = ((Component)val).transform,
				endIconType = endIconType,
				canvasEnable = false,
				resetImageName = true,
				callBack = () =>
				{
				}
			};
			MainUIPlayBtnAniViewLogic.Show(0f, 0.5f);
			ObjectManager.GetInstance().itemDataModel.FlyRewardView(flyData);
			Object.Destroy((Object)(object)((Component)val).gameObject);
		}
	}

	[AsyncStateMachine(typeof(_003CCollectGoodsToTempary_003Ed__76))]
	public UniTask CollectGoodsToTempary(float delay = 0f)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0039: Unknown result type (might be due to invalid IL or missing references)
		_003CCollectGoodsToTempary_003Ed__76 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj.delay = delay;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CCollectGoodsToTempary_003Ed__76>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	public async void CollectGoodsToTarget(Vector3 targetPos, float delay = 0f)
	{
		//IL_0016: Unknown result type (might be due to invalid IL or missing references)
		//IL_0017: Unknown result type (might be due to invalid IL or missing references)
		if (delay > 0f)
		{
			await UniTask.Delay(TimeSpan.FromSeconds(delay), false, (PlayerLoopTiming)4, default(CancellationToken));
		}
		IIndependentGoodsBaseVo goodsBaseVo = GetGoodsBaseVo();
		if (goodsBaseVo != null)
		{
			GameObject flyTransform = new GameObject();
			Image val = flyTransform.AddComponent<Image>();
			val.sprite = ((BaseViewLogic)parentLogic).Load<Sprite>(goodsBaseVo.GetIcon(gridType));
			flyTransform.transform.SetParent(GameItemParent);
			((Graphic)val).SetNativeSize();
			val.LocalIdentity<Image>();
			flyTransform.transform.localScale = Vector3.one * 0.565f;
			gameLevelItem.SetSelfActive<IndependentItem>(false);
			Sequence val2 = DOTween.Sequence();
			TweenSettingsExtensions.Append(val2, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(flyTransform.transform, Vector3.one * 0.565f * 0.9f, 0.133f), (Ease)1));
			TweenSettingsExtensions.Append(val2, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(flyTransform.transform, Vector3.one * 0.565f * 1.1f, 0.266f), (Ease)1));
			TweenSettingsExtensions.Append(val2, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(flyTransform.transform, Vector3.one * 0.565f * 0.4f, 0.166f), (Ease)1));
			TweenSettingsExtensions.Insert(val2, 0.2f, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOMove(flyTransform.transform, targetPos, 0.366f, false), (Ease)1));
			TweenSettingsExtensions.SetAutoKill<Sequence>(val2, true);
			TweenSettingsExtensions.AppendCallback(val2, (TweenCallback)(() =>
			{
				flyTransform.DestroySelf<GameObject>();
			}));
		}
	}

	public void SetItemBackground(int type, bool active, int backgroundType = 0)
	{
		mGridBgActive = active;
	}

	public void ShowGridBg()
	{
		GridBg.SetSelfActive<Image>(true);
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

	[AsyncStateMachine(typeof(_003CPlayDesignatedEffect_003Ed__83))]
	public UniTask PlayDesignatedEffect(string effectName, float hideDuration = 0f)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0041: Unknown result type (might be due to invalid IL or missing references)
		_003CPlayDesignatedEffect_003Ed__83 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj.effectName = effectName;
		obj.hideDuration = hideDuration;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CPlayDesignatedEffect_003Ed__83>(ref obj);
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

	[AsyncStateMachine(typeof(_003CPlayDesignatedEffectOnStage_003Ed__85))]
	public UniTask PlayDesignatedEffectOnStage(string effectName)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0039: Unknown result type (might be due to invalid IL or missing references)
		_003CPlayDesignatedEffectOnStage_003Ed__85 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj.effectName = effectName;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CPlayDesignatedEffectOnStage_003Ed__85>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	[AsyncStateMachine(typeof(_003CStageBasicPlayDesignatedEffect_003Ed__86))]
	public UniTask StageBasicPlayDesignatedEffect(string effectName, string aniName)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0041: Unknown result type (might be due to invalid IL or missing references)
		_003CStageBasicPlayDesignatedEffect_003Ed__86 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj.effectName = effectName;
		obj.aniName = aniName;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CStageBasicPlayDesignatedEffect_003Ed__86>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	[AsyncStateMachine(typeof(_003CPlayDesignatedEffectOnTheme4_003Ed__87))]
	public UniTask PlayDesignatedEffectOnTheme4(string effectName)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0039: Unknown result type (might be due to invalid IL or missing references)
		_003CPlayDesignatedEffectOnTheme4_003Ed__87 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj.effectName = effectName;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CPlayDesignatedEffectOnTheme4_003Ed__87>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	[AsyncStateMachine(typeof(_003CPlayOnceAnim_003Ed__89))]
	public UniTask PlayOnceAnim(string effectName, string audioName = "", float delay = 0f, float hideDelay = 1f, Action callback = null)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_005b: Unknown result type (might be due to invalid IL or missing references)
		_003CPlayOnceAnim_003Ed__89 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj.effectName = effectName;
		obj.audioName = audioName;
		obj.delay = delay;
		obj.hideDelay = hideDelay;
		obj.callback = callback;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CPlayOnceAnim_003Ed__89>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	public void HideOnceAnim()
	{
		if ((Object)(object)onceEffectGo != (Object)null)
		{
			Object.Destroy((Object)(object)onceEffectGo);
			onceEffectGo = null;
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

	public void PlayItemFly(Transform startTransform)
	{
		//IL_002d: Unknown result type (might be due to invalid IL or missing references)
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.PlayItemFly(startTransform, 0.4f, isPlayDownEffect: false, isPlayDoubleUp: false, 0f, isBreakAudio: false, "숏끜徿䤐敗&\u0082厁숚끞撼攛湑<\u0096厕숞끎徐氟湑?\u0082厁刕枇\ud9ddŝ");
		}
	}

	public void AwaitPlayItemFly()
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.AwaitPlayItemFly();
		}
	}

	public void PlayWebIconAnim(int has, int need)
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.PlayWebIconAnim(has, need);
		}
	}

	public void PlayCollectAnim(int has, int need, float delay)
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.PlayCollectAnim(has, need, delay);
		}
	}

	public void PlayBatchCollectAnim(int has, int need, float delay)
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.PlayBatchCollectAnim(has, need, delay);
		}
	}

	public void ShowSpecialHint(string name)
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.ShowSpecialHint(name);
		}
	}

	public void HideSpecialHint()
	{
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.HideSpecialHint();
		}
	}

	[AsyncStateMachine(typeof(_003CPlayDiggingAnimation_003Ed__102))]
	public UniTask PlayDiggingAnimation()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0031: Unknown result type (might be due to invalid IL or missing references)
		_003CPlayDiggingAnimation_003Ed__102 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CPlayDiggingAnimation_003Ed__102>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	public void ResetGridBg()
	{
		if ((Object)(object)gameLevelGridBg != (Object)null)
		{
			gameLevelGridBg.ResetBg();
		}
	}

	private void UpdateGridBgByGoods()
	{
		if (GetGoodsBaseVo() != null && GetGameGoodsVo() != null && !IIndependentGoodsBaseVo.CannotDrag(GetGameGoodsVo().GoodsState) && GetGoodsBaseVo().type == 8 && gridType == IndependentType.DiggingTreasure)
		{
			GridBg.sprite = ((BaseViewLogic)parentLogic).Load<Sprite>("숞끓憆猟畆7\u008a厉숵끈憼昶畗 \u008a厉숍끓澷瘎瑫1Â叁녥汲㜤\0郢\ud94e");
			((Graphic)GridBg).SetNativeSize();
			ShowGridBg();
		}
	}

	public void SaveGridData()
	{
		if (_canSaveData)
		{
			IndependentDefine.ChangeIndependentMap(gridType, GridId, GetGameGoodsVo());
		}
	}

	private bool CanPutinGoods(IndependentGrid dragGrid, IndependentGrid targetGrid)
	{
		if ((Object)(object)targetGrid == (Object)null || (Object)(object)dragGrid == (Object)null)
		{
			return false;
		}
		IndependentGameGoodsVo gameGoodsVo = dragGrid.GetGameGoodsVo();
		IndependentGameGoodsVo gameGoodsVo2 = targetGrid.GetGameGoodsVo();
		IIndependentGoodsBaseVo goodsBaseVo = targetGrid.GetGoodsBaseVo();
		if (gameGoodsVo == null || gameGoodsVo2 == null || goodsBaseVo == null)
		{
			return false;
		}
		if (IIndependentGoodsBaseVo.CannotDrag(gameGoodsVo2.GoodsState))
		{
			return false;
		}
		if (goodsBaseVo.type != 5 && goodsBaseVo.type != 7)
		{
			return false;
		}
		if (IIndependentGoodsBaseVo.CannotDrag(gameGoodsVo.GoodsState))
		{
			return false;
		}
		List<IIndependentAutoConversionVO> autoConversionVoByID = IndependentDefine.GetAutoConversionVoByID(targetGrid.GetGridType(), gameGoodsVo2.goodsID);
		if (autoConversionVoByID == null || autoConversionVoByID.Count == 0)
		{
			return false;
		}
		List<int> list = new List<int>();
		for (int i = 0; i < gameGoodsVo2.MakeMaterials.Count; i++)
		{
			list.Add(gameGoodsVo2.MakeMaterials[i]);
		}
		list.Add(gameGoodsVo.goodsID);
		for (int j = 0; j < autoConversionVoByID.Count; j++)
		{
			if (autoConversionVoByID[j].CheckContainByMaterials(list))
			{
				return true;
			}
		}
		return false;
	}

	public void UnlockAroundGrid(IndependentGrid targetGrid)
	{
		if ((Object)(object)parentLogic != (Object)null)
		{
			parentLogic.UnlockAroundGrid(targetGrid);
		}
	}

	public void DeleteGridGoods()
	{
		//IL_0040: Unknown result type (might be due to invalid IL or missing references)
		//IL_0082: Unknown result type (might be due to invalid IL or missing references)
		if ((Object)(object)parentLogic != (Object)null)
		{
			parentLogic.DeleteGridGoods(this);
		}
		if (GetGridType() == IndependentType.DiggingTreasure)
		{
			mIsPlayBroken = true;
			PlayOnceAnim("숋끈犼攌呇'Î反숌끈溸服䍀;¾厽숝끓憼渞噫!\u008a厉숈끉殆攉摆=²厱뻲", "", 0.11f);
		}
		if (GetGridType() == IndependentType.Independent_Mining)
		{
			mIsPlayBroken = true;
			EventManager.GetInstance().DispatchEvent(202123, VibrateManager.VibrateType.Moderate);
			PlayOnceAnim(IndependentDefine.GetDiggingBrokenName(gridType), "", 0.11f);
		}
	}

	private GameObject CreateGameObject(string resName, Transform parent, string prefabName = null)
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
		if (prefabName != null)
		{
			((Object)val2).name = prefabName;
		}
		return val2;
	}

	private void TriggerGuide()
	{
		if (mGameGoodsBase != null && mGameGoodsBase.GameGoods != null)
		{
			if (gridType == IndependentType.MergeIndependent)
			{
				IndependentTriggerGuide();
			}
			else if (gridType == IndependentType.DiggingTreasure)
			{
				TreasureCraftingTriggerGuide();
			}
			else if (gridType == IndependentType.Independent_Basic)
			{
				IndependentBasicTriggerGuide();
			}
			else if (gridType == IndependentType.Independent_Mining)
			{
				IndependentMiningTriggerGuide();
			}
			else if (gridType == IndependentType.Independent_Farm)
			{
				IndependentFarmTriggerGuide();
			}
		}
	}

	public void GridBrokenTriggerGuide()
	{
		if (mGameGoodsBase != null && mGameGoodsBase.GameGoods != null)
		{
			if (gridType == IndependentType.DiggingTreasure)
			{
				TreasureCraftingTriggerGuide();
			}
			else if (gridType == IndependentType.Independent_Mining)
			{
				IndependentMiningTriggerGuide();
			}
			else if (gridType == IndependentType.Independent_Farm)
			{
				IndependentFarmTriggerGuide();
			}
		}
	}

	private void IndependentTriggerGuide()
	{
		if (ObjectManager.GetInstance().independentMergeModel.DragGuideFinish())
		{
			return;
		}
		IIndependentGoodsBaseVo goodsConfigById = IndependentDefine.GetGoodsConfigById(gridType, mGameGoodsBase.GameGoods.goodsID);
		if (goodsConfigById == null)
		{
			return;
		}
		if (goodsConfigById.type == 3)
		{
			int num = ObjectManager.GetInstance().independentMergeModel.GuideId_2();
			if (!MonoSingleton<GuideManager>.Instance.IsFinishByID(num))
			{
				((Object)((Component)this).gameObject).name = "숏끔溽搐䥄7¾厽숭끔播攮敁;\u0096厕刖棫\ud9e1ř";
				SelectCurrentGrid();
				if (ShowUnlockView)
				{
					DelayPlayGuide = num;
					CommonMaskViewLogic.Show(1.3f);
					return;
				}
				ShowUnlockView = false;
				DelayPlayGuide = 0;
				CommonMaskViewLogic.Show(1f);
				EventManager.GetInstance().DispatchEvent(100133, num, 0.6f);
			}
			return;
		}
		if (goodsConfigById.type == 6)
		{
			int num2 = ObjectManager.GetInstance().independentMergeModel.GuideId_4();
			if (!MonoSingleton<GuideManager>.Instance.IsFinishByID(num2) && IndependentDefine.GetAutoConversionVoByID(GetGridType(), goodsConfigById.goodsID).Count > 0)
			{
				MonoSingleton<GuideManager>.Instance.AdditionalCardId = goodsConfigById.goodsID;
				EventManager.GetInstance().DispatchEvent(100133, num2, 0.2f);
			}
			return;
		}
		if (goodsConfigById.type == 2)
		{
			int num3 = ObjectManager.GetInstance().independentMergeModel.GuideId_5();
			int num4 = ObjectManager.GetInstance().independentMergeModel.GuideId_7();
			if (MonoSingleton<GuideManager>.Instance.IsFinishByID(num3) && MonoSingleton<GuideManager>.Instance.IsFinishByID(num4))
			{
				return;
			}
			bool flag = false;
			if (IndependentDefine.GetGoodsConfigBySeriesAndLevel(GetGridType(), goodsConfigById.series, goodsConfigById.level + 1) == null)
			{
				IIndependentGoodsCollectVo collectConfigById = IndependentDefine.GetCollectConfigById(GetGridType(), goodsConfigById.goodsID);
				if (collectConfigById != null && collectConfigById.itemId == 1050)
				{
					((Object)((Component)this).gameObject).name = "숏끔溽搐䥄7¾厽숭끔播攮敁;\u0096厕刖棫\ud9e1ř";
					SelectCurrentGrid();
					ShowGridBg();
					EventManager.GetInstance().DispatchEvent(100133, num3, 0.4f);
					flag = true;
				}
			}
			if (flag)
			{
				return;
			}
			IIndependentGoodsCollectVo collectConfigById2 = IndependentDefine.GetCollectConfigById(GetGridType(), goodsConfigById.goodsID);
			if (collectConfigById2 != null && collectConfigById2.itemId == 1007 && goodsConfigById.series == 1106)
			{
				((Object)((Component)this).gameObject).name = "숏끔溽搐䥄7¾厽숭끔播攮敁;\u0096厕숅끹溶朆彟;¾厽刣疿\ud9ebŐ";
				if (ShowUnlockView)
				{
					DelayPlayGuide = num4;
					CommonMaskViewLogic.Show(1.3f);
					return;
				}
				ShowUnlockView = false;
				DelayPlayGuide = 0;
				CommonMaskViewLogic.Show(1f);
				EventManager.GetInstance().DispatchEvent(100133, num4, 0f);
			}
			return;
		}
		int num5 = ObjectManager.GetInstance().independentMergeModel.GuideId_6();
		if (!MonoSingleton<GuideManager>.Instance.IsFinishByID(num5) && goodsConfigById.series == 1107 && num5 > 0)
		{
			((Object)((Component)this).gameObject).name = "숏끔溽搐䥄7¾厽숭끔播攮敁;\u0096厕숅끪掫攆彐'\u0092厑刣疿\ud9ebŐ";
			if (ShowUnlockView)
			{
				DelayPlayGuide = num5;
				CommonMaskViewLogic.Show(1.3f);
				return;
			}
			ShowUnlockView = false;
			DelayPlayGuide = 0;
			CommonMaskViewLogic.Show(1f);
			EventManager.GetInstance().DispatchEvent(100133, num5, 0f);
		}
	}

	private void TreasureCraftingTriggerGuide()
	{
		if (ObjectManager.GetInstance().treasureCraftingModel.DragGuideFinish())
		{
			return;
		}
		IIndependentGoodsBaseVo goodsConfigById = IndependentDefine.GetGoodsConfigById(gridType, mGameGoodsBase.GameGoods.goodsID);
		if (goodsConfigById == null)
		{
			return;
		}
		if (goodsConfigById.type == 2)
		{
			int num = ObjectManager.GetInstance().treasureCraftingModel.GuideId_3();
			int num2 = ObjectManager.GetInstance().treasureCraftingModel.GuideId_7();
			if (MonoSingleton<GuideManager>.Instance.IsFinishByID(num) && MonoSingleton<GuideManager>.Instance.IsFinishByID(num2))
			{
				return;
			}
			bool flag = false;
			if (IndependentDefine.GetGoodsConfigBySeriesAndLevel(GetGridType(), goodsConfigById.series, goodsConfigById.level + 1) == null)
			{
				IIndependentGoodsCollectVo collectConfigById = IndependentDefine.GetCollectConfigById(GetGridType(), goodsConfigById.goodsID);
				if (collectConfigById != null && collectConfigById.itemId == 1053 && !MonoSingleton<GuideManager>.Instance.IsFinishByID(num))
				{
					((Object)((Component)this).gameObject).name = "숏끔溽搐䥄7¾厽숭끔播攮敁;\u0096厕刖棫\ud9e1ř";
					SelectCurrentGrid();
					CommonMaskViewLogic.Show(0.4f);
					EventManager.GetInstance().DispatchEvent(100133, num, 0.4f);
					flag = true;
				}
			}
			if (flag)
			{
				return;
			}
			IIndependentGoodsCollectVo collectConfigById2 = IndependentDefine.GetCollectConfigById(GetGridType(), goodsConfigById.goodsID);
			if (collectConfigById2 != null && collectConfigById2.itemId == 1007 && goodsConfigById.series == 1106)
			{
				((Object)((Component)this).gameObject).name = "숏끔溽搐䥄7¾厽숭끔播攮敁;\u0096厕숅끹溶朆彟;¾厽刣疿\ud9ebŐ";
				if (ShowUnlockView)
				{
					DelayPlayGuide = num2;
					CommonMaskViewLogic.Show(1.3f);
					return;
				}
				ShowUnlockView = false;
				DelayPlayGuide = 0;
				CommonMaskViewLogic.Show(1f);
				EventManager.GetInstance().DispatchEvent(100133, num2, 0f);
			}
			return;
		}
		if (goodsConfigById.type == 4)
		{
			int num3 = ObjectManager.GetInstance().treasureCraftingModel.GuideId_4();
			if (!MonoSingleton<GuideManager>.Instance.IsFinishByID(num3) && !IIndependentGoodsBaseVo.CannotDrag(mGameGoodsBase.GameGoods.GoodsState))
			{
				((Object)((Component)this).gameObject).name = "숏끔溽搐䥄7¾厽숭끔播攮敁;\u0096厕숇끎澼砈䥫\u0010Â叁";
				SelectCurrentGrid();
				EventManager.GetInstance().DispatchEvent(100133, num3, 0.2f);
			}
			return;
		}
		int num4 = ObjectManager.GetInstance().treasureCraftingModel.GuideId_6();
		if (!MonoSingleton<GuideManager>.Instance.IsFinishByID(num4) && goodsConfigById.series == 1107 && num4 > 0)
		{
			((Object)((Component)this).gameObject).name = "숏끔溽搐䥄7¾厽숭끔播攮敁;\u0096厕숅끪掫攆彐'\u0092厑刣疿\ud9ebŐ";
			if (ShowUnlockView)
			{
				DelayPlayGuide = num4;
				CommonMaskViewLogic.Show(1.3f);
				return;
			}
			ShowUnlockView = false;
			DelayPlayGuide = 0;
			CommonMaskViewLogic.Show(1f);
			EventManager.GetInstance().DispatchEvent(100133, num4, 0f);
		}
	}

	private void IndependentBasicTriggerGuide()
	{
		if (ObjectManager.GetInstance().independentBasicModel.DragGuideFinish())
		{
			return;
		}
		IIndependentGoodsBaseVo goodsConfigById = IndependentDefine.GetGoodsConfigById(gridType, mGameGoodsBase.GameGoods.goodsID);
		if (goodsConfigById == null || goodsConfigById.type != 3)
		{
			return;
		}
		int num = ObjectManager.GetInstance().independentBasicModel.GuideId_2();
		if (!MonoSingleton<GuideManager>.Instance.IsFinishByID(num))
		{
			((Object)((Component)this).gameObject).name = "숏끔溽搐䥄7¾厽숨끔榭挩敕!ª厩숎끏環攏䝑\u001bÖ叕뻱";
			SelectCurrentGrid();
			if (ShowUnlockView)
			{
				DelayPlayGuide = num;
				CommonMaskViewLogic.Show(1.3f);
				return;
			}
			ShowUnlockView = false;
			DelayPlayGuide = 0;
			CommonMaskViewLogic.Show(1f);
			EventManager.GetInstance().DispatchEvent(100133, num, 0.6f);
		}
	}

	private void IndependentMiningTriggerGuide()
	{
		if (ObjectManager.GetInstance().independentMiningModel.DragGuideFinish())
		{
			return;
		}
		IIndependentGoodsBaseVo goodsConfigById = IndependentDefine.GetGoodsConfigById(gridType, mGameGoodsBase.GameGoods.goodsID);
		if (goodsConfigById == null)
		{
			return;
		}
		if (goodsConfigById.type == 2)
		{
			int num = ObjectManager.GetInstance().independentMiningModel.GuideId_3();
			if (!MonoSingleton<GuideManager>.Instance.IsFinishByID(num) && IndependentDefine.GetGoodsConfigBySeriesAndLevel(GetGridType(), goodsConfigById.series, goodsConfigById.level + 1) == null)
			{
				IIndependentGoodsCollectVo collectConfigById = IndependentDefine.GetCollectConfigById(GetGridType(), goodsConfigById.goodsID);
				if (collectConfigById != null && collectConfigById.itemId == 1061 && !MonoSingleton<GuideManager>.Instance.IsFinishByID(num))
				{
					((Object)((Component)this).gameObject).name = "숏끔溽搐䥄7¾厽숭끔播攮敁;\u0096厕刖棫\ud9e1ř";
					SelectCurrentGrid();
					CommonMaskViewLogic.Show(0.4f);
					EventManager.GetInstance().DispatchEvent(100133, num, 0.4f);
				}
			}
		}
		else if (goodsConfigById.type == 4)
		{
			int num2 = ObjectManager.GetInstance().independentMiningModel.GuideId_4();
			if (!MonoSingleton<GuideManager>.Instance.IsFinishByID(num2) && !IIndependentGoodsBaseVo.CannotDrag(mGameGoodsBase.GameGoods.GoodsState))
			{
				((Object)((Component)this).gameObject).name = "숏끔溽搐䥄7¾厽숭끔播攮敁;\u0096厕숇끎澼砈䥫\u0010Â叁";
				SelectCurrentGrid();
				EventManager.GetInstance().DispatchEvent(100133, num2, 0.2f);
			}
		}
	}

	private void IndependentFarmTriggerGuide()
	{
		if (ObjectManager.GetInstance().independentFarmModel.DragGuideFinish() || mGameGoodsBase == null || mGameGoodsBase.GameGoods == null || !IndependentDefine.IsUnlockGrid(gridType, mGameGoodsBase.GameGoods) || IIndependentGoodsBaseVo.CannotDrag(mGameGoodsBase.GameGoods.GoodsState))
		{
			return;
		}
		IIndependentGoodsBaseVo goodsConfigById = IndependentDefine.GetGoodsConfigById(gridType, mGameGoodsBase.GameGoods.goodsID);
		if (goodsConfigById == null || goodsConfigById.type != 2)
		{
			return;
		}
		IIndependentGoodsCollectVo collectConfigById = IndependentDefine.GetCollectConfigById(GetGridType(), goodsConfigById.goodsID);
		if (collectConfigById != null)
		{
			int num = 0;
			string name = "숏끔溽搐䥄7¾厽숭끔播攮敁;\u0096厕刖棫\ud9e1ř";
			if (collectConfigById.itemType == 20)
			{
				num = ObjectManager.GetInstance().independentFarmModel.GuideId_3();
				name = "숏끔溽搐䥄7¾厽숭끔播攮敁;\u0096厕숇끎憼椈䥫?\u008a厉뻲";
			}
			else if (collectConfigById.itemType == 21)
			{
				num = ObjectManager.GetInstance().independentFarmModel.GuideId_4();
				name = "숏끔溽搐䥄7¾厽숭끔播攮敁;\u0096厕숇끎疼戈䥫!Ú叙";
			}
			if (!MonoSingleton<GuideManager>.Instance.IsFinishByID(num))
			{
				((Object)((Component)this).gameObject).name = name;
				SelectCurrentGrid();
				ShowGridBg();
				CommonMaskViewLogic.Show(0.4f);
				EventManager.GetInstance().DispatchEvent(100133, num, 0.4f);
			}
		}
	}

	public void ShowLockBg(bool showLock = false, string resName = "")
	{
		//IL_0020: Unknown result type (might be due to invalid IL or missing references)
		//IL_0026: Expected Obj, but got Unknown
		if (!showLock || resName.IsNullOrEmpty())
		{
			HideLockBg();
		}
		else if ((Object)(object)lockBg == (Object)null)
		{
			GameObject val = new GameObject();
			lockBg = val.AddComponent<Image>();
			lockBg.sprite = resLoader.LoadSync<Sprite>(resName);
			((Graphic)lockBg).SetNativeSize();
			((Component)lockBg).transform.SetParent(EffectParent);
			lockBg.LocalIdentity<Image>();
			if ((Object)(object)gameLevelItem != (Object)null)
			{
				((Component)gameLevelItem).gameObject.SetSelfActive(active: false);
			}
		}
	}

	public void HideLockBg()
	{
		if ((Object)(object)lockBg != (Object)null)
		{
			((Component)lockBg).gameObject.DestroySelf<GameObject>();
		}
		lockBg = null;
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			((Component)gameLevelItem).gameObject.SetSelfActive(active: true);
		}
	}

	public override void Recovery()
	{
		//IL_00ca: Unknown result type (might be due to invalid IL or missing references)
		//IL_00cf: Unknown result type (might be due to invalid IL or missing references)
		//IL_0101: Unknown result type (might be due to invalid IL or missing references)
		if ((Object)(object)gameLevelItem != (Object)null)
		{
			gameLevelItem.Recovery();
			gameLevelItem = null;
		}
		SetSelectState(select: false);
		DestroyOnceGameObject();
		DestroyTrailGameObject();
		RemoveMergeHint();
		HideDesignatedEffect();
		HideOnceAnim();
		ResetUI();
		base.Recovery();
		EventManager.GetInstance().RemoveEventListener<bool>(100119, EventBanDrag);
		EventManager.GetInstance().RemoveEventListener<bool>(100057, ApplicationPause);
		isDrag = false;
		isBanDrag = false;
		mIsPlayDigging = false;
		mIsPlayBroken = false;
		mGameGoodsBase = null;
		GridId = 0;
		_canSaveData = true;
		TimeManager.Instance.ClearSchedule(this);
		mapPos = Vector2.zero;
		((Object)((Component)this).gameObject).name = "숏끔溽搐䥄7¾厽숭끔播⠮敆;\u0096厕녃剬㴰\0郙\ud92b";
		RectTransform component = ((Component)this).GetComponent<RectTransform>();
		if ((Object)(object)component != (Object)null)
		{
			component.sizeDelta = new Vector2((float)IndependentMergeViewBaseLogic.GridWidth, (float)IndependentMergeViewBaseLogic.GridHeight);
		}
	}

	private void ResetUI()
	{
		HideGridColorBg();
		HideLockBg();
		if ((Object)(object)gameLevelGridBg != (Object)null)
		{
			gameLevelGridBg.ResetBg();
		}
		DestroyTrailGameObject();
	}

	public void PlayOnceEffect(string effectName, float delay)
	{
		if ((Object)(object)EffectBottomParent == (Object)null)
		{
			EffectBottomParent = ((Component)this).transform.Find("숋끝溉琌䉆7¾厽");
		}
		DestroyOnceGameObject();
		if ((Object)(object)EffectBottomParent == (Object)null)
		{
			return;
		}
		if (delay > 0f)
		{
			TimeManager.GetInstance().Schedule(this, (float dt1) =>
			{
				mOnceGameObject = CreateGameObject(effectName, EffectBottomParent, effectName);
			}, delay, 1);
		}
		else
		{
			mOnceGameObject = CreateGameObject(effectName, EffectBottomParent, effectName);
		}
	}

	public void DestroyOnceGameObject()
	{
		if ((Object)(object)mOnceGameObject != (Object)null)
		{
			mOnceGameObject.DestroySelf<GameObject>();
		}
	}

	public void PlayTrailEffect(string effectName, float delay, float duration)
	{
		Transform effectTrailParent = null;
		if ((Object)(object)GetGameLevelItem() != (Object)null)
		{
			effectTrailParent = GetGameLevelItem().EffectParent;
		}
		DestroyTrailGameObject(duration);
		if ((Object)(object)effectTrailParent == (Object)null)
		{
			return;
		}
		if (delay > 0f)
		{
			TimeManager.GetInstance().Schedule(this, (float dt1) =>
			{
				mTrailGameObject = CreateGameObject(effectName, effectTrailParent, effectName);
				DestroyTrailGameObject(duration);
			}, delay, 1);
		}
		else
		{
			mTrailGameObject = CreateGameObject(effectName, effectTrailParent, effectName);
			DestroyTrailGameObject(duration);
		}
	}

	public void DestroyTrailGameObject(float duration = 0f)
	{
		if (!((Object)(object)mTrailGameObject != (Object)null))
		{
			return;
		}
		if (duration > 0f)
		{
			TimeManager.GetInstance().Schedule(this, (float dt1) =>
			{
				mTrailGameObject.DestroySelf<GameObject>();
				mTrailGameObject = null;
			}, duration, 1);
		}
		else
		{
			mTrailGameObject.DestroySelf<GameObject>();
			mTrailGameObject = null;
		}
	}

	[AsyncStateMachine(typeof(_003CPlayItemVanish_003Ed__128))]
	public UniTask PlayItemVanish(IIndependentGoodsBaseVo _goodsBaseVo, Vector3 _scale, Vector3 _pos, Vector3 _targetPos, Action _action = null, string animName = "", bool changePos = false, float delay = 0f)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_001e: Unknown result type (might be due to invalid IL or missing references)
		//IL_001f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0026: Unknown result type (might be due to invalid IL or missing references)
		//IL_0027: Unknown result type (might be due to invalid IL or missing references)
		//IL_002e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0030: Unknown result type (might be due to invalid IL or missing references)
		//IL_0076: Unknown result type (might be due to invalid IL or missing references)
		_003CPlayItemVanish_003Ed__128 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj._goodsBaseVo = _goodsBaseVo;
		obj._scale = _scale;
		obj._pos = _pos;
		obj._targetPos = _targetPos;
		obj._action = _action;
		obj.animName = animName;
		obj.changePos = changePos;
		obj.delay = delay;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CPlayItemVanish_003Ed__128>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	[AsyncStateMachine(typeof(_003CPlayItemSellVanish_003Ed__129))]
	public UniTask PlayItemSellVanish(IIndependentGoodsBaseVo _goodsBaseVo, Action _action = null, float delay = 0f)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0049: Unknown result type (might be due to invalid IL or missing references)
		_003CPlayItemSellVanish_003Ed__129 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj._goodsBaseVo = _goodsBaseVo;
		obj._action = _action;
		obj.delay = delay;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CPlayItemSellVanish_003Ed__129>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	public bool IsCurrentSelectGrid()
	{
		if ((Object)(object)parentLogic.CurrentSelectGrid == (Object)null)
		{
			return false;
		}
		return parentLogic.CurrentSelectGrid.GetGridId() == GetGridId();
	}

	public IndependentGrid()
	{
		//IL_000f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0014: Unknown result type (might be due to invalid IL or missing references)
	}
}
