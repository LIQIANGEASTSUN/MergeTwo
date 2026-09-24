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
using UnityEngine.UI;

[PrefabPath("IndependentStage_Basic_MergeView")]
public class IndependentStageBasicMergeViewLogic : IndependentMergeViewBaseLogic, IBaseViewAnimation
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CHideMaskNode_003Ed__39 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public bool playAnim;

		public IndependentStageBasicMergeViewLogic _003C_003E4__this;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_00be: Unknown result type (might be due to invalid IL or missing references)
			//IL_00c3: Unknown result type (might be due to invalid IL or missing references)
			//IL_00ca: Unknown result type (might be due to invalid IL or missing references)
			//IL_0085: Unknown result type (might be due to invalid IL or missing references)
			//IL_008a: Unknown result type (might be due to invalid IL or missing references)
			//IL_008e: Unknown result type (might be due to invalid IL or missing references)
			//IL_0093: Unknown result type (might be due to invalid IL or missing references)
			//IL_00a7: Unknown result type (might be due to invalid IL or missing references)
			//IL_00a8: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			IndependentStageBasicMergeViewLogic independentStageBasicMergeViewLogic = _003C_003E4__this;
			try
			{
				Awaiter val;
				if (num == 0)
				{
					val = _003C_003Eu__1;
					_003C_003Eu__1 = default;
					num = (_003C_003E1__state = -1);
					goto IL_00d9;
				}
				if (ObjectManager.GetInstance().idnStageBasicModel.ThemeID != 3)
				{
					if (playAnim)
					{
						string configSuffix = ObjectManager.GetInstance().idnStageBasicModel.GetConfigSuffix();
						if ((Object)(object)independentStageBasicMergeViewLogic.MaskNodeAnimation != (Object)null)
						{
							independentStageBasicMergeViewLogic.MaskNodeAnimation.Play("숍끎憸猎卑\u0010\u008a厉숞끙斊弟楕5\u009a厙숁끛澪搂浫<Â叁녥兟㨾\0逕\ud966" + configSuffix);
						}
						UniTask val2 = UniTask.Delay(TimeSpan.FromSeconds(0.30000001192092896), false, (PlayerLoopTiming)4, default(CancellationToken));
						val = val2.GetAwaiter();
						if (!val.IsCompleted)
						{
							num = (_003C_003E1__state = 0);
							_003C_003Eu__1 = val;
							_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CHideMaskNode_003Ed__39>(ref val, ref this);
							return;
						}
						goto IL_00d9;
					}
					independentStageBasicMergeViewLogic.MaskNode.SetSelfActive<Transform>(false);
				}
				goto end_IL_000e;
				IL_00d9:
				val.GetResult();
				independentStageBasicMergeViewLogic.MaskNode.SetSelfActive<Transform>(false);
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
	private struct _003CHideStageGoods_003Ed__45 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public IndependentStageBasicMergeViewLogic _003C_003E4__this;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_0066: Unknown result type (might be due to invalid IL or missing references)
			//IL_006b: Unknown result type (might be due to invalid IL or missing references)
			//IL_0072: Unknown result type (might be due to invalid IL or missing references)
			//IL_002a: Unknown result type (might be due to invalid IL or missing references)
			//IL_002f: Unknown result type (might be due to invalid IL or missing references)
			//IL_0033: Unknown result type (might be due to invalid IL or missing references)
			//IL_0038: Unknown result type (might be due to invalid IL or missing references)
			//IL_004c: Unknown result type (might be due to invalid IL or missing references)
			//IL_004d: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			IndependentStageBasicMergeViewLogic independentStageBasicMergeViewLogic = _003C_003E4__this;
			try
			{
				Awaiter val2;
				if (num != 0)
				{
					UniTask val = UniTask.Delay(TimeSpan.FromSeconds(0.30000001192092896), false, (PlayerLoopTiming)4, default(CancellationToken));
					val2 = val.GetAwaiter();
					if (!val2.IsCompleted)
					{
						num = (_003C_003E1__state = 0);
						_003C_003Eu__1 = val2;
						_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CHideStageGoods_003Ed__45>(ref val2, ref this);
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
				if (independentStageBasicMergeViewLogic.mShowStageGoods != null && independentStageBasicMergeViewLogic.mShowStageGoods.Count != 0)
				{
					for (int i = 0; i < independentStageBasicMergeViewLogic.mShowStageGoods.Count; i++)
					{
						independentStageBasicMergeViewLogic.mShowStageGoods[i].GridBg.SetSelfActive<Image>(false);
						((Component)independentStageBasicMergeViewLogic.mShowStageGoods[i]).transform.SetParent((Transform)(object)independentStageBasicMergeViewLogic.GridParent);
					}
					independentStageBasicMergeViewLogic.mShowStageGoods.Clear();
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
	private struct _003CHideTransferGate_003Ed__37 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public IndependentStageBasicMergeViewLogic _003C_003E4__this;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_0066: Unknown result type (might be due to invalid IL or missing references)
			//IL_006b: Unknown result type (might be due to invalid IL or missing references)
			//IL_0072: Unknown result type (might be due to invalid IL or missing references)
			//IL_002a: Unknown result type (might be due to invalid IL or missing references)
			//IL_002f: Unknown result type (might be due to invalid IL or missing references)
			//IL_0033: Unknown result type (might be due to invalid IL or missing references)
			//IL_0038: Unknown result type (might be due to invalid IL or missing references)
			//IL_004c: Unknown result type (might be due to invalid IL or missing references)
			//IL_004d: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			IndependentStageBasicMergeViewLogic independentStageBasicMergeViewLogic = _003C_003E4__this;
			try
			{
				Awaiter val2;
				if (num != 0)
				{
					UniTask val = UniTask.Delay(TimeSpan.FromSeconds(0.30000001192092896), false, (PlayerLoopTiming)4, default(CancellationToken));
					val2 = val.GetAwaiter();
					if (!val2.IsCompleted)
					{
						num = (_003C_003E1__state = 0);
						_003C_003Eu__1 = val2;
						_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CHideTransferGate_003Ed__37>(ref val2, ref this);
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
				if (independentStageBasicMergeViewLogic.mShowTransferGates != null && independentStageBasicMergeViewLogic.mShowTransferGates.Count != 0)
				{
					for (int i = 0; i < independentStageBasicMergeViewLogic.mShowTransferGates.Count; i++)
					{
						independentStageBasicMergeViewLogic.mShowTransferGates[i].GridBg.SetSelfActive<Image>(false);
						((Component)independentStageBasicMergeViewLogic.mShowTransferGates[i]).transform.SetParent((Transform)(object)independentStageBasicMergeViewLogic.GridParent);
					}
					independentStageBasicMergeViewLogic.mShowTransferGates.Clear();
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
	private struct _003CPlayNextStageAnim_003Ed__42 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public IndependentStageBasicMergeViewLogic _003C_003E4__this;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_020f: Unknown result type (might be due to invalid IL or missing references)
			//IL_0214: Unknown result type (might be due to invalid IL or missing references)
			//IL_021c: Unknown result type (might be due to invalid IL or missing references)
			//IL_02d8: Unknown result type (might be due to invalid IL or missing references)
			//IL_02dd: Unknown result type (might be due to invalid IL or missing references)
			//IL_02e5: Unknown result type (might be due to invalid IL or missing references)
			//IL_03ba: Unknown result type (might be due to invalid IL or missing references)
			//IL_03bf: Unknown result type (might be due to invalid IL or missing references)
			//IL_03c7: Unknown result type (might be due to invalid IL or missing references)
			//IL_04f7: Unknown result type (might be due to invalid IL or missing references)
			//IL_04fc: Unknown result type (might be due to invalid IL or missing references)
			//IL_0504: Unknown result type (might be due to invalid IL or missing references)
			//IL_0243: Unknown result type (might be due to invalid IL or missing references)
			//IL_026c: Unknown result type (might be due to invalid IL or missing references)
			//IL_0276: Expected Obj, but got Unknown
			//IL_0276: Unknown result type (might be due to invalid IL or missing references)
			//IL_0280: Expected Obj, but got Unknown
			//IL_029a: Unknown result type (might be due to invalid IL or missing references)
			//IL_029f: Unknown result type (might be due to invalid IL or missing references)
			//IL_02a3: Unknown result type (might be due to invalid IL or missing references)
			//IL_02a8: Unknown result type (might be due to invalid IL or missing references)
			//IL_03df: Unknown result type (might be due to invalid IL or missing references)
			//IL_03e6: Unknown result type (might be due to invalid IL or missing references)
			//IL_02bd: Unknown result type (might be due to invalid IL or missing references)
			//IL_02bf: Unknown result type (might be due to invalid IL or missing references)
			//IL_037c: Unknown result type (might be due to invalid IL or missing references)
			//IL_0381: Unknown result type (might be due to invalid IL or missing references)
			//IL_0385: Unknown result type (might be due to invalid IL or missing references)
			//IL_038a: Unknown result type (might be due to invalid IL or missing references)
			//IL_039f: Unknown result type (might be due to invalid IL or missing references)
			//IL_03a1: Unknown result type (might be due to invalid IL or missing references)
			//IL_04bc: Unknown result type (might be due to invalid IL or missing references)
			//IL_04c1: Unknown result type (might be due to invalid IL or missing references)
			//IL_04c5: Unknown result type (might be due to invalid IL or missing references)
			//IL_04ca: Unknown result type (might be due to invalid IL or missing references)
			//IL_04df: Unknown result type (might be due to invalid IL or missing references)
			//IL_04e1: Unknown result type (might be due to invalid IL or missing references)
			//IL_0136: Unknown result type (might be due to invalid IL or missing references)
			//IL_015c: Unknown result type (might be due to invalid IL or missing references)
			//IL_033e: Unknown result type (might be due to invalid IL or missing references)
			//IL_01d1: Unknown result type (might be due to invalid IL or missing references)
			//IL_01d6: Unknown result type (might be due to invalid IL or missing references)
			//IL_01da: Unknown result type (might be due to invalid IL or missing references)
			//IL_01df: Unknown result type (might be due to invalid IL or missing references)
			//IL_01a5: Unknown result type (might be due to invalid IL or missing references)
			//IL_01b0: Expected Obj, but got Unknown
			//IL_01f4: Unknown result type (might be due to invalid IL or missing references)
			//IL_01f6: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			IndependentStageBasicMergeViewLogic CS_0024_003C_003E8__locals40 = _003C_003E4__this;
			try
			{
				UniTask val3;
				Awaiter val;
				Tweener val4;
				string name;
				GameObject val5;
				switch (num)
				{
				default:
				{
					IndependentGrid independentGrid = null;
					Dictionary<int, IndependentGrid>.Enumerator enumerator = CS_0024_003C_003E8__locals40.mGridObjectDic.GetEnumerator();
					try
					{
						while (enumerator.MoveNext())
						{
							KeyValuePair<int, IndependentGrid> current = enumerator.Current;
							if (!((Object)(object)current.Value == (Object)null) && current.Value.GetGoodsBaseVo() != null && current.Value.GetGoodsBaseVo().type == 10)
							{
								independentGrid = current.Value;
								break;
							}
						}
					}
					finally
					{
						if (num < 0)
						{
							((IDisposable)enumerator/*cast due to constrained. prefix*/).Dispose();
						}
					}
					if (!((Object)(object)independentGrid == (Object)null))
					{
						MonoSingleton<GuideWeakManager>.Instance.ShowIndependentTransferGate_Consume();
						CommonMaskViewLogic.Show(2.7f);
						CS_0024_003C_003E8__locals40.PlayAnimation = true;
						independentGrid.GetGameLevelItem().SetSelfActive<IndependentItem>(false);
						string configSuffix = ObjectManager.GetInstance().idnStageBasicModel.GetConfigSuffix();
						GameObject val2 = ((BaseViewLogic)CS_0024_003C_003E8__locals40).Load<GameObject>("숵끜憡朶癧&\u008a厉숋끥掛弌敇;\u0092厑숄끊璼愅佫\u0001Ö叕椵䁽" + configSuffix);
						CS_0024_003C_003E8__locals40.NextStageEffectGo = Object.Instantiate<GameObject>(val2);
						CS_0024_003C_003E8__locals40.NextStageEffectGo.transform.SetParent(CS_0024_003C_003E8__locals40.DragItemParent, false);
						CS_0024_003C_003E8__locals40.NextStageEffectGo.transform.LocalIdentity<Transform>();
						CS_0024_003C_003E8__locals40.NextStageEffectGo.transform.position = independentGrid.GameItemParent.position;
						AudioManager.GetInstance().PlayEffect("숍끎涸攎獑\rº厹숵끝璼愶牆=Ö叕桴e4끩i퀼䃜");
						CS_0024_003C_003E8__locals40.ShowMaskNode();
						CS_0024_003C_003E8__locals40.ShowStageGoods(independentGrid);
						if (ObjectManager.GetInstance().idnStageBasicModel.ThemeID == 3)
						{
							CS_0024_003C_003E8__locals40.SetBottomEntranceLayer(isChange: true);
							DOTweenTools.UIDOCanvasGroup((Transform)(object)CS_0024_003C_003E8__locals40.gridTitleNode, 0f, 0.5f, (Ease)1);
							TweenSettingsExtensions.SetAutoKill<Tween>(DOVirtual.DelayedCall(2.25f, (TweenCallback)(() =>
							{
								CS_0024_003C_003E8__locals40.SetBottomEntranceLayer(isChange: false);
								DOTweenTools.UIDOCanvasGroup((Transform)(object)CS_0024_003C_003E8__locals40.gridTitleNode, 1f, 0f, (Ease)1);
							}), true), true);
						}
						val3 = UniTask.Delay(TimeSpan.FromSeconds(0.30000001192092896), false, (PlayerLoopTiming)4, default(CancellationToken));
						val = val3.GetAwaiter();
						if (!val.IsCompleted)
						{
							num = (_003C_003E1__state = 0);
							_003C_003Eu__1 = val;
							_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CPlayNextStageAnim_003Ed__42>(ref val, ref this);
							return;
						}
						goto IL_022b;
					}
					goto end_IL_000e;
				}
				case 0:
					val = _003C_003Eu__1;
					_003C_003Eu__1 = default;
					num = (_003C_003E1__state = -1);
					goto IL_022b;
				case 1:
					val = _003C_003Eu__1;
					_003C_003Eu__1 = default;
					num = (_003C_003E1__state = -1);
					goto IL_02f4;
				case 2:
					val = _003C_003Eu__1;
					_003C_003Eu__1 = default;
					num = (_003C_003E1__state = -1);
					goto IL_03d6;
				case 3:
					{
						val = _003C_003Eu__1;
						_003C_003Eu__1 = default;
						num = (_003C_003E1__state = -1);
						break;
					}
					IL_022b:
					val.GetResult();
					val4 = TweenSettingsExtensions.SetAutoKill<Tweener>(TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOMove(CS_0024_003C_003E8__locals40.NextStageEffectGo.transform, CS_0024_003C_003E8__locals40.DragItemParent.position, 0.366f, false), (Ease)1), true);
					((Tween)val4).onComplete = (TweenCallback)Delegate.Combine((Delegate?)(object)((Tween)val4).onComplete, (Delegate?)(TweenCallback)(() =>
					{
						CS_0024_003C_003E8__locals40.NextStageEffectGo.transform.LocalIdentity<Transform>();
					}));
					val3 = UniTask.Delay(TimeSpan.FromSeconds(0.6700000166893005), false, (PlayerLoopTiming)4, default(CancellationToken));
					val = val3.GetAwaiter();
					if (!val.IsCompleted)
					{
						num = (_003C_003E1__state = 1);
						_003C_003Eu__1 = val;
						_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CPlayNextStageAnim_003Ed__42>(ref val, ref this);
						return;
					}
					goto IL_02f4;
					IL_02f4:
					val.GetResult();
					if (CS_0024_003C_003E8__locals40.mShowStageGoods != null && CS_0024_003C_003E8__locals40.mShowStageGoods.Count > 0)
					{
						for (int num2 = 0; num2 < CS_0024_003C_003E8__locals40.mShowStageGoods.Count; num2++)
						{
							if (!((Object)(object)CS_0024_003C_003E8__locals40.mShowStageGoods[num2] == (Object)null))
							{
								CS_0024_003C_003E8__locals40.mShowStageGoods[num2].CollectGoodsToTarget(CS_0024_003C_003E8__locals40.DragItemParent.position);
							}
						}
					}
					val3 = UniTask.Delay(TimeSpan.FromSeconds(1.2999999523162842), false, (PlayerLoopTiming)4, default(CancellationToken));
					val = val3.GetAwaiter();
					if (!val.IsCompleted)
					{
						num = (_003C_003E1__state = 2);
						_003C_003Eu__1 = val;
						_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CPlayNextStageAnim_003Ed__42>(ref val, ref this);
						return;
					}
					goto IL_03d6;
					IL_03d6:
					val.GetResult();
					CS_0024_003C_003E8__locals40.HideMaskNode(playAnim: false);
					CS_0024_003C_003E8__locals40.HideStageGoods();
					CS_0024_003C_003E8__locals40.mStageConfig = ObjectManager.GetInstance().idnStageBasicModel.GetStageConfig();
					CS_0024_003C_003E8__locals40.GameLayoutFit();
					CS_0024_003C_003E8__locals40.RefreshStageTitle();
					if ((Object)(object)CS_0024_003C_003E8__locals40.IndependentProgress != (Object)null)
					{
						CS_0024_003C_003E8__locals40.IndependentProgress.OnResetView();
					}
					CS_0024_003C_003E8__locals40.ResetGameMapBg();
					CS_0024_003C_003E8__locals40.ResetGameMap();
					if ((Object)(object)CS_0024_003C_003E8__locals40.TemporaryLogic != (Object)null)
					{
						CS_0024_003C_003E8__locals40.TemporaryLogic.RefreshLockNodeState();
						CS_0024_003C_003E8__locals40.TemporaryLogic.UpdateTempprary();
					}
					name = "숵끜憡朶癧&\u008a厉숋끥掛弌敇;\u0092厑숄끊璼愅佫\u0001Ö叕숯끟斆挰杒4\u009a厙뻨" + ObjectManager.GetInstance().idnStageBasicModel.GetIndependentMergeTheme().skinSuffix;
					val5 = Object.Instantiate<GameObject>(((BaseViewLogic)CS_0024_003C_003E8__locals40).Load<GameObject>(name));
					val5.transform.SetParent(((Component)CS_0024_003C_003E8__locals40).transform, false);
					val5.transform.LocalIdentity<Transform>();
					val3 = UniTask.Delay(TimeSpan.FromSeconds(0.44999998807907104), false, (PlayerLoopTiming)4, default(CancellationToken));
					val = val3.GetAwaiter();
					if (!val.IsCompleted)
					{
						num = (_003C_003E1__state = 3);
						_003C_003Eu__1 = val;
						_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CPlayNextStageAnim_003Ed__42>(ref val, ref this);
						return;
					}
					break;
				}
				val.GetResult();
				CS_0024_003C_003E8__locals40.NextStageEffectGo.DestroySelf<GameObject>();
				CS_0024_003C_003E8__locals40.PlayAnimation = false;
				CS_0024_003C_003E8__locals40.CheckCompleteTarget();
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
	private struct _003CShowMaskNode_003Ed__38 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public IndependentStageBasicMergeViewLogic _003C_003E4__this;

		private void MoveNext()
		{
			IndependentStageBasicMergeViewLogic independentStageBasicMergeViewLogic = _003C_003E4__this;
			try
			{
				if (ObjectManager.GetInstance().idnStageBasicModel.ThemeID != 3)
				{
					string configSuffix = ObjectManager.GetInstance().idnStageBasicModel.GetConfigSuffix();
					independentStageBasicMergeViewLogic.MaskNode.SetSelfActive<Transform>(true);
					if ((Object)(object)independentStageBasicMergeViewLogic.MaskNodeAnimation != (Object)null)
					{
						independentStageBasicMergeViewLogic.MaskNodeAnimation.Play("숍끎憸猎卑\u0010\u008a厉숞끙斊弟楕5\u009a厙숁끛澪搂浫<Â叁녥屟㬈\0逧\ud983" + configSuffix);
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

	private int mIndependentColumns = 5;

	private int mIndependentRows = 5;

	private IIndependentStageBasicStageConfigVO mStageConfig;

	private GameObject TemparyFankuiPrefab;

	private List<IndependentGrid> mShowTransferGates;

	private GameObject NextStageEffectGo;

	private List<IndependentGrid> mShowStageGoods;

	private Transform originParent;

	private bool PlayAnimation;

	private bool isShowInfo;

	public Text GiftTimeDownText;

	public GameObject GiftButtonGo;

	public RectTransform gridTitleNode;

	public Text gridTitleTxt;

	public IndependentStageBasicProgressView IndependentProgress;

	public Text IllustratedProcessTxt;

	public RectTransform illuRedPointTrans;

	public RectTransform illuTrans;

	public Transform MaskNode;

	public Animation MaskNodeAnimation;

	public RectTransform GrayBg;

	public RectTransform BgNode;

	public Text tag_info;

	public Image FlyImg;

	[Header("道具详情逻辑")]
	public IndependentGoodsInfoViewLogic goodsLogic;

	[Header("TMP")]
	public TextMeshProUGUI titleTmp;

	public TextMeshProUGUI descTmp;

	public override int Columns => mIndependentColumns;

	public override int Rows => mIndependentRows;

	public override IndependentType ViewLevelType => IndependentType.StageMergeBasic;

	public override void OnEnter()
	{
		Data = (viewData as IndependentMergeViewBaseData) ?? new IndependentMergeViewBaseData();
		GameManager.GetInstance().SetMultiTouchEnabled(enable: false);
		mStageConfig = ObjectManager.GetInstance().idnStageBasicModel.GetStageConfig();
		GameLayoutFit();
		InitView();
		InitActivityGift();
		CreateMapBg();
		CreateGameGrid();
		AddListener();
		CheckCompleteTarget();
		TriggerGuide();
		IsEnter = true;
		InitIllustrationBtnState();
		InitDebug();
		FlyImg.SetSelfActive<Image>(false);
	}

	public override void OnExit()
	{
		GameManager.GetInstance().SetMultiTouchEnabled(enable: true);
		mCurrentSelect = null;
		PlayAnimation = false;
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
		mStageConfig = ObjectManager.GetInstance().idnStageBasicModel.GetStageConfig();
		GameLayoutFit();
		if ((Object)(object)mCurrentSelect != (Object)null)
		{
			mCurrentSelect.SetSelectState(select: false);
			mCurrentSelect = null;
		}
		CheckCompleteTarget();
		TriggerGuide();
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
		PlayAnimation = false;
		RemoveMergeHint();
		TimeManager.GetInstance().ClearSchedule(this);
	}

	protected override void AddListener()
	{
		EventManager.GetInstance().AddEventListener<int>(203123, UnlockGoods);
		EventManager.GetInstance().AddEventListener(203128, OnGiftSwitch);
		EventManager.GetInstance().AddEventListener(202018, OnGiftBuySuccess);
		EventManager.GetInstance().AddEventListener(203124, OpenNextStage);
		EventManager.GetInstance().AddEventListener(203127, RefreshRedState);
	}

	protected override void RemoveListener()
	{
		EventManager.GetInstance().RemoveEventListener<int>(203123, UnlockGoods);
		EventManager.GetInstance().RemoveEventListener(203128, OnGiftSwitch);
		EventManager.GetInstance().RemoveEventListener(202018, OnGiftBuySuccess);
		EventManager.GetInstance().RemoveEventListener(203124, OpenNextStage);
		EventManager.GetInstance().RemoveEventListener(203127, RefreshRedState);
		MonoSingleton<GuideWeakManager>.Instance.ShowIndependentTransferGate_Consume();
	}

	protected override void GameLayoutFit()
	{
		//IL_0053: Unknown result type (might be due to invalid IL or missing references)
		//IL_007d: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a7: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b7: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c7: Unknown result type (might be due to invalid IL or missing references)
		//IL_00de: Unknown result type (might be due to invalid IL or missing references)
		if (mStageConfig != null)
		{
			mIndependentColumns = mStageConfig.column;
			mIndependentRows = mStageConfig.row;
			ContentBg.sizeDelta = new Vector2((float)(mIndependentColumns * IndependentMergeViewBaseLogic.GridWidth + 22), (float)(mIndependentRows * IndependentMergeViewBaseLogic.GridHeight + 22));
			GridParent.sizeDelta = new Vector2((float)(mIndependentColumns * IndependentMergeViewBaseLogic.GridWidth), (float)(mIndependentRows * IndependentMergeViewBaseLogic.GridHeight));
			GridBgParent.sizeDelta = new Vector2((float)(mIndependentColumns * IndependentMergeViewBaseLogic.GridWidth), (float)(mIndependentRows * IndependentMergeViewBaseLogic.GridHeight));
			float y = ((Transform)ContentBg).localPosition.y + ContentBg.sizeDelta.y / 2f + gridTitleNode.sizeDelta.y / 2f - 3f;
			((Transform)(object)gridTitleNode).setLocalPosition(0f, y);
		}
	}

	protected override void InitView()
	{
		if ((Object)(object)TemporaryLogic != (Object)null)
		{
			TemporaryLogic.Init(this, ViewLevelType);
			TemporaryLogic.RefreshLockNodeState();
		}
		IIndependentStageBasicTheme independentMergeTheme = ObjectManager.GetInstance().idnStageBasicModel.GetIndependentMergeTheme();
		if (independentMergeTheme != null && (Object)(object)IndependentProgress != (Object)null)
		{
			IndependentProgress.Init(independentMergeTheme.themeSeriesID, this);
		}
		RefreshStageTitle();
		RefreshTimeDown();
		((Component)goodsLogic).transform.SetSelfActive<Transform>(false);
	}

	protected override void FlyToIllutrate(IIndependentGoodsBaseVo goodsBaseVo, Transform startTrans)
	{
		//IL_00ad: Unknown result type (might be due to invalid IL or missing references)
		//IL_00d4: Unknown result type (might be due to invalid IL or missing references)
		//IL_00eb: Unknown result type (might be due to invalid IL or missing references)
		//IL_00f5: Expected Obj, but got Unknown
		if (goodsBaseVo == null || (Object)(object)startTrans == (Object)null || ObjectManager.GetInstance().idnStageBasicModel.GetGoodsUnlockState(goodsBaseVo) != 0 || (ObjectManager.GetInstance().idnStageBasicModel.GetIndependentMergeTheme().themeSeriesID != goodsBaseVo.series && ObjectManager.GetInstance().idnStageBasicModel.GetIndependentMergeTheme().branchSeriesID != goodsBaseVo.series))
		{
			return;
		}
		FlyImg.sprite = ((BaseViewLogic)this).Load<Sprite>(goodsBaseVo.GetIcon(ViewLevelType));
		((Graphic)FlyImg).SetNativeSize();
		((Component)FlyImg).transform.setScale(0.65f, 0.65f, 0.5f);
		((Component)FlyImg).transform.position = startTrans.position;
		FlyImg.SetSelfActive<Image>(true);
		TweenSettingsExtensions.OnComplete<Tweener>(ShortcutExtensions.DOLocalMove(((Component)FlyImg).transform, ((Transform)illuTrans).localPosition, 0.75f, false), (TweenCallback)(() =>
		{
			if ((Object)(object)FlyImg != (Object)null)
			{
				FlyImg.SetSelfActive<Image>(false);
				Animation component = ((Component)illuTrans).GetComponent<Animation>();
				if (Object.op_Implicit((Object)(object)component))
				{
					component.Play();
					AudioManager.GetInstance().PlayEffect("숵끏碽弶慇4æ句숙끈斸氚杇1\u009a厙녥䅢㈊\0逕\ud956");
				}
			}
		}));
	}

	public override void CheckUnlock(IIndependentGoodsBaseVo vo)
	{
		if (vo != null && vo.series == 1003 && ObjectManager.GetInstance().idnStageBasicModel.GetGoodsUnlockState(vo) == 0)
		{
			ObjectManager.GetInstance().idnStageBasicModel.RefreshIllustratedUnlockState(vo.series, vo.goodsID, 1);
			RefreshRedState();
		}
	}

	private void RefreshStageTitle()
	{
		IIndependentStageBasicTheme independentMergeTheme = ObjectManager.GetInstance().idnStageBasicModel.GetIndependentMergeTheme();
		if (independentMergeTheme != null && mStageConfig != null)
		{
			LocalizedLang.SetUITextLocalization(gridTitleTxt, ObjectManager.GetInstance().idnStageBasicModel.GetUILanguageKey("숍끟皫椎浑\rÞ叝숙끍枆攚敀3¢厡医橤ā词鵣"), new List<string>
			{
				mStageConfig.stage.ToString(),
				independentMergeTheme.totalStage.ToString()
			});
		}
		else
		{
			LocalizedLang.SetUITextLocalization(gridTitleTxt, ObjectManager.GetInstance().idnStageBasicModel.GetUILanguageKey("숍끟皫椎浑\rÞ叝숙끍枆攚敀3¢厡医橤ā词鵣"), new List<string> { "뺭", "뺭" });
		}
	}

	public override void SetLocalization(int tag = 0, object data = null)
	{
		if ((Object)(object)titleTmp != (Object)null)
		{
			LocalizedLang.SetUITextLocalization(titleTmp, ObjectManager.GetInstance().idnStageBasicModel.GetUILanguageKey("숍끟皫椎浑\rÞ叝숞끍沆攟敝&¶厵"));
		}
		else
		{
			LocalizedLang.SetUITextLocalization(TitleText, ObjectManager.GetInstance().idnStageBasicModel.GetUILanguageKey("숍끟皫椎浑\rÞ叝숞끍沆攟敝&¶厵"));
		}
		if ((Object)(object)descTmp != (Object)null)
		{
			LocalizedLang.SetUITextLocalization(descTmp, ObjectManager.GetInstance().idnStageBasicModel.GetUILanguageKey("숍끟皫椎浑\rÞ叝晥w4끤g갡㻋"));
		}
		else
		{
			LocalizedLang.SetUITextLocalization(DescText, ObjectManager.GetInstance().idnStageBasicModel.GetUILanguageKey("숍끟皫椎浑\rÞ叝晥w4끤g갡㻋"));
		}
		LocalizedLang.SetLocalizationFontSize(TimeDownText);
		LocalizedLang.SetLocalizationFontSize(GiftTimeDownText);
	}

	private void InitActivityGift()
	{
		if (MonoSingleton<GuideManager>.Instance.IsInGuide())
		{
			GiftButtonGo.SetSelfActive(ObjectManager.GetInstance().idnStageBasicModel.GetGiftOpenState);
			return;
		}
		if (ObjectManager.GetInstance().idnStageBasicModel.GetGiftOpenState)
		{
			ObjectManager.GetInstance().idnStageBasicModel.CheckCloseGift();
			ObjectManager.GetInstance().idnStageBasicModel.CheckPopGiftView();
		}
		else
		{
			ObjectManager.GetInstance().idnStageBasicModel.CheckOpenGift();
		}
		GiftButtonGo.SetSelfActive(ObjectManager.GetInstance().idnStageBasicModel.GetGiftOpenState);
		RefreshGiftTimeDown();
	}

	private void OnGiftSwitch()
	{
		GiftButtonGo.SetSelfActive(ObjectManager.GetInstance().idnStageBasicModel.GetGiftOpenState);
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
		if (ObjectManager.GetInstance().idnStageBasicModel.GetGiftOpenState)
		{
			int giftTimedown = ObjectManager.GetInstance().idnStageBasicModel.GetGiftTimedown();
			if (giftTimedown > 0)
			{
				GiftTimeDownText.text = TimeManager.GetInstance().GetTimeDownBySecond(giftTimedown);
				return;
			}
			GiftTimeDownText.text = TimeManager.GetInstance().GetTimeDownBySecond(0);
			ObjectManager.GetInstance().idnStageBasicModel.CheckCloseGift();
		}
	}

	private void UnlockGoods(int goodsID)
	{
		IIndependentGoodsBaseVo goodsConfigById = ObjectManager.GetInstance().idnStageBasicModel.GetGoodsConfigById(goodsID);
		IIndependentStageBasicTheme independentMergeTheme = ObjectManager.GetInstance().idnStageBasicModel.GetIndependentMergeTheme();
		if (independentMergeTheme != null && goodsConfigById != null && (Object)(object)IndependentProgress != (Object)null && goodsConfigById.series == independentMergeTheme.themeSeriesID)
		{
			IndependentProgress.UpdateIcon(goodsID, CheckCompleteTarget);
		}
	}

	private void InitIllustrationBtnState()
	{
		RedPoint.RedpointAni((Transform)(object)illuRedPointTrans);
		IndependentStageBasicModel idnStageBasicModel = ObjectManager.GetInstance().idnStageBasicModel;
		illuRedPointTrans.SetSelfActive<RectTransform>(idnStageBasicModel.IsIllustratedWaitingReward());
		IllustratedProcessTxt.text = string.Format(string.Format("类04뀯}ﱣ哕", idnStageBasicModel.GetUnlockIllsustratedCount(), idnStageBasicModel.GetAllIllsustratedCount()), Array.Empty<object>());
	}

	private void RefreshRedState()
	{
		IndependentStageBasicModel idnStageBasicModel = ObjectManager.GetInstance().idnStageBasicModel;
		illuRedPointTrans.SetSelfActive<RectTransform>(idnStageBasicModel.IsIllustratedWaitingReward());
		IllustratedProcessTxt.text = string.Format(string.Format("类04뀯}ﱣ哕", idnStageBasicModel.GetUnlockIllsustratedCount(), idnStageBasicModel.GetAllIllsustratedCount()), Array.Empty<object>());
	}

	public override void GoodsToTempary(IIndependentGoodsBaseVo goodsBaseVo, Transform startTrans)
	{
		//IL_0021: Unknown result type (might be due to invalid IL or missing references)
		//IL_002b: Expected Obj, but got Unknown
		//IL_008a: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a0: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c5: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ee: Unknown result type (might be due to invalid IL or missing references)
		//IL_00f8: Expected Obj, but got Unknown
		//IL_00f8: Unknown result type (might be due to invalid IL or missing references)
		//IL_0102: Expected Obj, but got Unknown
		if ((Object)(object)TemporaryLogic == (Object)null || goodsBaseVo == null)
		{
			return;
		}
		GameObject flyTransform = new GameObject();
		Image val = flyTransform.AddComponent<Image>();
		val.sprite = ((BaseViewLogic)this).Load<Sprite>(goodsBaseVo.GetIcon(ViewLevelType));
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

	public override void OnOpenHelpView()
	{
		ObjectManager.GetInstance().idnStageBasicModel.OpenIndependentHelpView();
	}

	public override void OnOpenGiftView()
	{
		ObjectManager.GetInstance().idnStageBasicModel.OpenActivityGiftView();
	}

	public void OnOpenIllustrationView()
	{
		ObjectManager.GetInstance().idnStageBasicModel.OpenActivityIllustrationView();
	}

	private void CheckCompleteTarget()
	{
		//IL_0046: Unknown result type (might be due to invalid IL or missing references)
		if (!ObjectManager.GetInstance().idnStageBasicModel.IsCompleteCurrentStage())
		{
			return;
		}
		TemporaryLogic.RefreshLockNodeState();
		if (ObjectManager.GetInstance().idnStageBasicModel.IsPlayKeyAnimtion || (Object)(object)IndependentProgress == (Object)null)
		{
			return;
		}
		PlayAnimation = true;
		ShowMaskNode();
		ShowTransferGate();
		foreach (KeyValuePair<int, IndependentGrid> item in mGridObjectDic)
		{
			if (!((Object)(object)item.Value == (Object)null) && item.Value.GetGoodsBaseVo() != null && item.Value.GetGoodsBaseVo().type == 10)
			{
				IndependentProgress.OpenTransferGateAnim(item.Value, UpdateTransferGate);
				break;
			}
		}
	}

	private void UpdateTransferGate()
	{
		//IL_0071: Unknown result type (might be due to invalid IL or missing references)
		//IL_0078: Unknown result type (might be due to invalid IL or missing references)
		foreach (KeyValuePair<int, IndependentGrid> item in mGridObjectDic)
		{
			if (!((Object)(object)item.Value == (Object)null) && item.Value.GetGoodsBaseVo() != null && item.Value.GetGoodsBaseVo().type == 10)
			{
				item.Value.UpdateGameLevelItem();
				break;
			}
		}
		HideMaskNode();
		HideTransferGate();
		TriggerGuide();
		PlayAnimation = false;
	}

	private void ShowTransferGate()
	{
		if (mShowTransferGates == null)
		{
			mShowTransferGates = new List<IndependentGrid>();
		}
		mShowTransferGates.Clear();
		mGridObjectDic.Values.ToList();
		foreach (KeyValuePair<int, IndependentGrid> item in mGridObjectDic)
		{
			IndependentGrid value = item.Value;
			if (!((Object)(object)value == (Object)null) && value.GetGoodsBaseVo() != null && value.GetGoodsBaseVo().type == 10)
			{
				mShowTransferGates.Add(value);
				((Component)value).transform.SetParent(DragItemParent);
				((Component)value).transform.SetSiblingIndex(0);
				break;
			}
		}
	}

	[AsyncStateMachine(typeof(_003CHideTransferGate_003Ed__37))]
	private UniTask HideTransferGate()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0031: Unknown result type (might be due to invalid IL or missing references)
		_003CHideTransferGate_003Ed__37 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CHideTransferGate_003Ed__37>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	[AsyncStateMachine(typeof(_003CShowMaskNode_003Ed__38))]
	private UniTask ShowMaskNode()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0031: Unknown result type (might be due to invalid IL or missing references)
		_003CShowMaskNode_003Ed__38 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CShowMaskNode_003Ed__38>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	[AsyncStateMachine(typeof(_003CHideMaskNode_003Ed__39))]
	private UniTask HideMaskNode(bool playAnim = true)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0039: Unknown result type (might be due to invalid IL or missing references)
		_003CHideMaskNode_003Ed__39 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj.playAnim = playAnim;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CHideMaskNode_003Ed__39>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	private void OpenNextStage()
	{
		//IL_0001: Unknown result type (might be due to invalid IL or missing references)
		PlayNextStageAnim();
	}

	[AsyncStateMachine(typeof(_003CPlayNextStageAnim_003Ed__42))]
	private UniTask PlayNextStageAnim()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0031: Unknown result type (might be due to invalid IL or missing references)
		_003CPlayNextStageAnim_003Ed__42 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CPlayNextStageAnim_003Ed__42>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	private void ShowStageGoods(IndependentGrid transferGateGrid)
	{
		int num = 10;
		int num2 = 1;
		int num3 = 10;
		int num4 = 1;
		int num5 = mIndependentRows / 2;
		if ((Object)(object)transferGateGrid != (Object)null)
		{
			int gridId = transferGateGrid.GetGridId();
			int num6 = gridId / 10;
			int num7 = gridId % 10;
			num4 = ((num7 - 1 <= 1) ? 1 : (num7 - 1));
			num3 = num7 + 1;
			num2 = num6;
			num = num6 + num5;
		}
		if (mShowStageGoods == null)
		{
			mShowStageGoods = new List<IndependentGrid>();
		}
		mShowStageGoods.Clear();
		mGridObjectDic.Values.ToList();
		foreach (KeyValuePair<int, IndependentGrid> item in mGridObjectDic)
		{
			IndependentGrid value = item.Value;
			if ((Object)(object)value == (Object)null || value.GetGoodsBaseVo() == null || value.GetGoodsBaseVo().type == 10)
			{
				continue;
			}
			int num8 = value.GetGridId() / 10;
			int num9 = value.GetGridId() % 10;
			if (num8 >= num2 && num8 <= num && num9 >= num4 && num9 <= num3)
			{
				if ((Object)(object)value.GetGameLevelItem() != (Object)null)
				{
					value.GetGameLevelItem().ShowGoodsIcon();
				}
				mShowStageGoods.Add(value);
				((Component)value).transform.SetParent(DragItemParent);
				((Component)value).transform.SetSiblingIndex(0);
			}
			else
			{
				if ((Object)(object)value.GetGameLevelItem() != (Object)null)
				{
					value.GetGameLevelItem().ShowGoodsIcon();
				}
				mShowStageGoods.Add(value);
				((Component)value).transform.SetParent(DragItemParent);
			}
		}
	}

	[AsyncStateMachine(typeof(_003CHideStageGoods_003Ed__45))]
	private UniTask HideStageGoods()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0031: Unknown result type (might be due to invalid IL or missing references)
		_003CHideStageGoods_003Ed__45 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CHideStageGoods_003Ed__45>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	private void SetBottomEntranceLayer(bool isChange)
	{
		if (isChange)
		{
			originParent = GiftButtonGo.transform.parent;
			GiftButtonGo.transform.SetParent((Transform)(object)BgNode);
			((Component)TemporaryLogic).transform.SetParent((Transform)(object)BgNode);
			((Component)illuTrans).transform.SetParent((Transform)(object)BgNode);
		}
		else
		{
			((Component)TemporaryLogic).transform.SetParent(originParent);
			GiftButtonGo.transform.SetParent(originParent);
			((Component)illuTrans).transform.SetParent(originParent);
			((Component)illuTrans).transform.SetSiblingIndex(4);
			GiftButtonGo.transform.SetSiblingIndex(4);
			((Component)TemporaryLogic).transform.SetSiblingIndex(4);
		}
	}

	private void TriggerGuide()
	{
		if (MonoSingleton<GuideManager>.Instance.IsInGuide())
		{
			return;
		}
		int num = ObjectManager.GetInstance().idnStageBasicModel.GuideId_2();
		if (MonoSingleton<GuideManager>.Instance.IsFinishByID(num) || !ObjectManager.GetInstance().idnStageBasicModel.IsCompleteCurrentStage() || !ObjectManager.GetInstance().idnStageBasicModel.IsPlayKeyAnimtion)
		{
			return;
		}
		IndependentGrid independentGrid = null;
		foreach (KeyValuePair<int, IndependentGrid> item in mGridObjectDic)
		{
			if (!((Object)(object)item.Value == (Object)null) && item.Value.GetGoodsBaseVo() != null && item.Value.GetGoodsBaseVo().type == 10)
			{
				independentGrid = item.Value;
				break;
			}
		}
		if ((Object)(object)independentGrid != (Object)null)
		{
			((Object)((Component)independentGrid).gameObject).name = "숏끔溽搐䥄7¾厽숹끔枭攺敀3¢厡숄끈斸爅呇4\u009a厙參橵ā讑酥";
			EventManager.GetInstance().DispatchEvent(100133, num, 0.2f);
		}
	}

	public override bool ShowPriorityGuideWeak()
	{
		IndependentGrid guideWeakTransferGate = GetGuideWeakTransferGate();
		if ((Object)(object)guideWeakTransferGate != (Object)null)
		{
			MonoSingleton<GuideWeakManager>.Instance.ShowIndependentTransferGate(guideWeakTransferGate.GameItemParent, DragItemParent);
			return true;
		}
		return false;
	}

	public IndependentGrid GetGuideWeakTransferGate()
	{
		if (DragGoods)
		{
			return null;
		}
		if (PlayAnimation)
		{
			return null;
		}
		if (!ObjectManager.GetInstance().idnStageBasicModel.IsCompleteCurrentStage())
		{
			return null;
		}
		if (!ObjectManager.GetInstance().idnStageBasicModel.IsPlayKeyAnimtion)
		{
			return null;
		}
		foreach (KeyValuePair<int, IndependentGrid> item in mGridObjectDic)
		{
			if (!((Object)(object)item.Value == (Object)null) && item.Value.GetGoodsBaseVo() != null && item.Value.GetGoodsBaseVo().type == 10)
			{
				return item.Value;
			}
		}
		return null;
	}

	private void InitDebug()
	{
		tag_info.SetSelfActive<Text>(false);
	}

	public override bool OnBackPressed()
	{
		if (DragGoods)
		{
			return true;
		}
		if (PlayAnimation)
		{
			return true;
		}
		OnCloseView();
		return true;
	}

	public void EnterAnimation(Action onComplete)
	{
		DOTweenUITools.DoEnterPopUIAnimation((Transform)(object)BgNode, (Transform)(object)GrayBg, null, onComplete);
	}

	public void ExitAnimation(Action onComplete)
	{
		DOTweenUITools.DoExitPopUIAnimation((Transform)(object)BgNode, (Transform)(object)GrayBg, onComplete, isPlayAlpha: true, "숎끓德挏睛%\u0082厁判皇\ud9c4ő");
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
		//IL_00a3: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ae: Expected Obj, but got Unknown
		//IL_00dc: Unknown result type (might be due to invalid IL or missing references)
		//IL_00e7: Expected Obj, but got Unknown
		CommonMaskViewLogic.Show(0.3f);
		Transform trans1 = null;
		Transform trans2 = null;
		if (isShow)
		{
			trans1 = ((Component)TemporaryLogic).transform;
			trans2 = ((Component)goodsLogic).transform;
			isShowInfo = true;
		}
		else
		{
			trans1 = ((Component)goodsLogic).transform;
			trans2 = ((Component)TemporaryLogic).transform;
			isShowInfo = false;
		}
		CanvasGroup canvasGroup_pool = ((Component)trans1).GetComponent<CanvasGroup>();
		canvasGroup_pool.alpha = 1f;
		TweenCallback val3 = default;
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
					trans1.SetSelfActive<Transform>(false);
				};
				TweenCallback val5 = val4;
				val3 = val4;
				val2 = val5;
			}
			TweenSettingsExtensions.OnComplete<Tweener>(val, val2);
		}), true);
		CanvasGroup canvasGroup_goods = ((Component)trans2).GetComponent<CanvasGroup>();
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
					trans2.SetSelfActive<Transform>(true);
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
		}
	}

	public override bool CheckGoodsCanDelete(IndependentGameGoodsVo gameGoodsVo)
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
		if (goodsConfigById.type == 10)
		{
			return false;
		}
		if (goodsConfigById.type == 4)
		{
			IIndependentProduceVo produceConfigById = IndependentDefine.GetProduceConfigById(ViewLevelType, gameGoodsVo.goodsID);
			if (produceConfigById != null && produceConfigById.GetConversions().Count > 0)
			{
				return false;
			}
		}
		return true;
	}
}
