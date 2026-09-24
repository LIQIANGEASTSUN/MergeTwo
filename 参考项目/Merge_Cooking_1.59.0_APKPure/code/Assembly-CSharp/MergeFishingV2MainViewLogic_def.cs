using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using DG.Tweening;
using TLF;
using UniRx.Async;
using UniRx.Async.CompilerServices;
using UnityEngine;

[PrefabPath("MergeFishingV2View_def")]
public class MergeFishingV2MainViewLogic_def : IndependentMergeViewBaseLogic
{
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass32_0
	{
		[StructLayout(LayoutKind.Auto)]
		private struct _003C_003C_OnGoGoods_003Eb__0_003Ed : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public _003C_003Ec__DisplayClass32_0 _003C_003E4__this;

			private Awaiter _003C_003Eu__1;

			private void MoveNext()
			{
				//IL_0055: Unknown result type (might be due to invalid IL or missing references)
				//IL_005a: Unknown result type (might be due to invalid IL or missing references)
				//IL_0061: Unknown result type (might be due to invalid IL or missing references)
				//IL_001d: Unknown result type (might be due to invalid IL or missing references)
				//IL_0022: Unknown result type (might be due to invalid IL or missing references)
				//IL_0025: Unknown result type (might be due to invalid IL or missing references)
				//IL_002a: Unknown result type (might be due to invalid IL or missing references)
				//IL_003e: Unknown result type (might be due to invalid IL or missing references)
				//IL_003f: Unknown result type (might be due to invalid IL or missing references)
				int num = _003C_003E1__state;
				_003C_003Ec__DisplayClass32_0 obj = _003C_003E4__this;
				try
				{
					Awaiter val2;
					if (num != 0)
					{
						UniTask val = obj._003C_003E4__this._OnGoGoodsAsync(obj.grid);
						val2 = val.GetAwaiter();
						if (!val2.IsCompleted)
						{
							num = (_003C_003E1__state = 0);
							_003C_003Eu__1 = val2;
							_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003C_003C_OnGoGoods_003Eb__0_003Ed>(ref val2, ref this);
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

		public MergeFishingV2MainViewLogic_def _003C_003E4__this;

		public IndependentGrid grid;

		[AsyncStateMachine(typeof(_003C_003C_OnGoGoods_003Eb__0_003Ed))]
		internal UniTask _003C_OnGoGoods_003Eb__0()
		{
			//IL_0002: Unknown result type (might be due to invalid IL or missing references)
			//IL_0007: Unknown result type (might be due to invalid IL or missing references)
			//IL_0031: Unknown result type (might be due to invalid IL or missing references)
			_003C_003C_OnGoGoods_003Eb__0_003Ed obj = default;
			obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
			obj._003C_003E4__this = this;
			obj._003C_003E1__state = -1;
			obj._003C_003Et__builder.Start<_003C_003C_OnGoGoods_003Eb__0_003Ed>(ref obj);
			return obj._003C_003Et__builder.Task;
		}
	}

	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass34_0
	{
		[StructLayout(LayoutKind.Auto)]
		private struct _003C_003C_OnGoFishing_003Eb__0_003Ed : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public _003C_003Ec__DisplayClass34_0 _003C_003E4__this;

			private Awaiter _003C_003Eu__1;

			private void MoveNext()
			{
				//IL_0055: Unknown result type (might be due to invalid IL or missing references)
				//IL_005a: Unknown result type (might be due to invalid IL or missing references)
				//IL_0061: Unknown result type (might be due to invalid IL or missing references)
				//IL_001d: Unknown result type (might be due to invalid IL or missing references)
				//IL_0022: Unknown result type (might be due to invalid IL or missing references)
				//IL_0025: Unknown result type (might be due to invalid IL or missing references)
				//IL_002a: Unknown result type (might be due to invalid IL or missing references)
				//IL_003e: Unknown result type (might be due to invalid IL or missing references)
				//IL_003f: Unknown result type (might be due to invalid IL or missing references)
				int num = _003C_003E1__state;
				_003C_003Ec__DisplayClass34_0 obj = _003C_003E4__this;
				try
				{
					Awaiter val2;
					if (num != 0)
					{
						UniTask val = obj._003C_003E4__this._OnGoFishingAsync(obj.fishId);
						val2 = val.GetAwaiter();
						if (!val2.IsCompleted)
						{
							num = (_003C_003E1__state = 0);
							_003C_003Eu__1 = val2;
							_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003C_003C_OnGoFishing_003Eb__0_003Ed>(ref val2, ref this);
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

		public MergeFishingV2MainViewLogic_def _003C_003E4__this;

		public int fishId;

		[AsyncStateMachine(typeof(_003C_003C_OnGoFishing_003Eb__0_003Ed))]
		internal UniTask _003C_OnGoFishing_003Eb__0()
		{
			//IL_0002: Unknown result type (might be due to invalid IL or missing references)
			//IL_0007: Unknown result type (might be due to invalid IL or missing references)
			//IL_0031: Unknown result type (might be due to invalid IL or missing references)
			_003C_003C_OnGoFishing_003Eb__0_003Ed obj = default;
			obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
			obj._003C_003E4__this = this;
			obj._003C_003E1__state = -1;
			obj._003C_003Et__builder.Start<_003C_003C_OnGoFishing_003Eb__0_003Ed>(ref obj);
			return obj._003C_003Et__builder.Task;
		}
	}

	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass37_0
	{
		public CommonBlackOverlayViewLogic blackOverlayViewLogic;

		internal void _003C_OnFishFlyToTankAsync_003Eb__1()
		{
			blackOverlayViewLogic?.CloseViewAin();
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003C_OnFishFlyToTankAsync_003Ed__37 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public MergeFishingV2MainViewLogic_def _003C_003E4__this;

		public int fishId;

		public float initScale;

		public Vector3 startPos;

		private _003C_003Ec__DisplayClass37_0 _003C_003E8__1;

		private MergeFishingV2TankItemLogic_def _003CtankItemLogic_003E5__2;

		private MergeFishingV2.ShowData _003CshowData_003E5__3;

		private Vector3 _003CtankStarPos_003E5__4;

		private Awaiter<int> _003C_003Eu__1;

		private Awaiter<(bool, Vector3)> _003C_003Eu__2;

		private string _003CgiftBoxName_003E5__5;

		private Awaiter _003C_003Eu__3;

		private void MoveNext()
		{
			//IL_010a: Unknown result type (might be due to invalid IL or missing references)
			//IL_010f: Unknown result type (might be due to invalid IL or missing references)
			//IL_0116: Unknown result type (might be due to invalid IL or missing references)
			//IL_01b7: Unknown result type (might be due to invalid IL or missing references)
			//IL_01bc: Unknown result type (might be due to invalid IL or missing references)
			//IL_01c4: Unknown result type (might be due to invalid IL or missing references)
			//IL_024d: Unknown result type (might be due to invalid IL or missing references)
			//IL_0252: Unknown result type (might be due to invalid IL or missing references)
			//IL_025a: Unknown result type (might be due to invalid IL or missing references)
			//IL_02f4: Unknown result type (might be due to invalid IL or missing references)
			//IL_02f9: Unknown result type (might be due to invalid IL or missing references)
			//IL_0301: Unknown result type (might be due to invalid IL or missing references)
			//IL_0371: Unknown result type (might be due to invalid IL or missing references)
			//IL_0376: Unknown result type (might be due to invalid IL or missing references)
			//IL_037e: Unknown result type (might be due to invalid IL or missing references)
			//IL_049c: Unknown result type (might be due to invalid IL or missing references)
			//IL_04a1: Unknown result type (might be due to invalid IL or missing references)
			//IL_04a9: Unknown result type (might be due to invalid IL or missing references)
			//IL_013a: Unknown result type (might be due to invalid IL or missing references)
			//IL_0145: Unknown result type (might be due to invalid IL or missing references)
			//IL_014a: Unknown result type (might be due to invalid IL or missing references)
			//IL_0179: Unknown result type (might be due to invalid IL or missing references)
			//IL_017e: Unknown result type (might be due to invalid IL or missing references)
			//IL_0182: Unknown result type (might be due to invalid IL or missing references)
			//IL_0187: Unknown result type (might be due to invalid IL or missing references)
			//IL_01e6: Unknown result type (might be due to invalid IL or missing references)
			//IL_01eb: Unknown result type (might be due to invalid IL or missing references)
			//IL_0271: Unknown result type (might be due to invalid IL or missing references)
			//IL_027c: Unknown result type (might be due to invalid IL or missing references)
			//IL_0281: Unknown result type (might be due to invalid IL or missing references)
			//IL_02b6: Unknown result type (might be due to invalid IL or missing references)
			//IL_02bb: Unknown result type (might be due to invalid IL or missing references)
			//IL_02bf: Unknown result type (might be due to invalid IL or missing references)
			//IL_02c4: Unknown result type (might be due to invalid IL or missing references)
			//IL_0333: Unknown result type (might be due to invalid IL or missing references)
			//IL_0338: Unknown result type (might be due to invalid IL or missing references)
			//IL_033c: Unknown result type (might be due to invalid IL or missing references)
			//IL_0341: Unknown result type (might be due to invalid IL or missing references)
			//IL_00ce: Unknown result type (might be due to invalid IL or missing references)
			//IL_00d3: Unknown result type (might be due to invalid IL or missing references)
			//IL_00d7: Unknown result type (might be due to invalid IL or missing references)
			//IL_00dc: Unknown result type (might be due to invalid IL or missing references)
			//IL_019c: Unknown result type (might be due to invalid IL or missing references)
			//IL_019e: Unknown result type (might be due to invalid IL or missing references)
			//IL_0528: Unknown result type (might be due to invalid IL or missing references)
			//IL_020f: Unknown result type (might be due to invalid IL or missing references)
			//IL_0214: Unknown result type (might be due to invalid IL or missing references)
			//IL_0218: Unknown result type (might be due to invalid IL or missing references)
			//IL_021d: Unknown result type (might be due to invalid IL or missing references)
			//IL_02d9: Unknown result type (might be due to invalid IL or missing references)
			//IL_02db: Unknown result type (might be due to invalid IL or missing references)
			//IL_0356: Unknown result type (might be due to invalid IL or missing references)
			//IL_0358: Unknown result type (might be due to invalid IL or missing references)
			//IL_03c9: Unknown result type (might be due to invalid IL or missing references)
			//IL_03ce: Unknown result type (might be due to invalid IL or missing references)
			//IL_03f3: Unknown result type (might be due to invalid IL or missing references)
			//IL_03f8: Unknown result type (might be due to invalid IL or missing references)
			//IL_0428: Unknown result type (might be due to invalid IL or missing references)
			//IL_042d: Unknown result type (might be due to invalid IL or missing references)
			//IL_044e: Unknown result type (might be due to invalid IL or missing references)
			//IL_0453: Unknown result type (might be due to invalid IL or missing references)
			//IL_045e: Unknown result type (might be due to invalid IL or missing references)
			//IL_0463: Unknown result type (might be due to invalid IL or missing references)
			//IL_0467: Unknown result type (might be due to invalid IL or missing references)
			//IL_046c: Unknown result type (might be due to invalid IL or missing references)
			//IL_00f0: Unknown result type (might be due to invalid IL or missing references)
			//IL_00f1: Unknown result type (might be due to invalid IL or missing references)
			//IL_0232: Unknown result type (might be due to invalid IL or missing references)
			//IL_0234: Unknown result type (might be due to invalid IL or missing references)
			//IL_0481: Unknown result type (might be due to invalid IL or missing references)
			//IL_0483: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			MergeFishingV2MainViewLogic_def CS_0024_003C_003E8__locals9 = _003C_003E4__this;
			try
			{
				if ((uint)num <= 5u || CS_0024_003C_003E8__locals9.tankPoolLogic.TryGetTankItemLogic(fishId, out _003CtankItemLogic_003E5__2))
				{
					try
					{
						Awaiter<int> val3;
						Awaiter<(bool, Vector3)> val2;
						Awaiter val;
						UniTask val4;
						RandomRewardListData cacheAnimRewardListData;
						MergeFishingV2.ShowFishTankData value;
						bool flag;
						switch (num)
						{
						default:
							ViewManager.GetInstance().SetTouchMaskVisible(isVisible: true);
							_003CshowData_003E5__3 = ObjectManager.GetInstance().mergeFishingV2Model.vo.GetShowData();
							ObjectManager.GetInstance().mergeFishingV2Model.SyncStageAnimPoints();
							CS_0024_003C_003E8__locals9.tankPoolLogic.RestoreAllItemName();
							if (fishId == _003CshowData_003E5__3.guideData.lastGoFishingId)
							{
								_003CtankItemLogic_003E5__2.ModifyGuideNodeName();
							}
							CS_0024_003C_003E8__locals9.tankPoolLogic.LocaltionFishId(fishId);
							val3 = UniTask.DelayFrame(1, (PlayerLoopTiming)4, default(CancellationToken)).GetAwaiter();
							if (!val3.IsCompleted)
							{
								num = (_003C_003E1__state = 0);
								_003C_003Eu__1 = val3;
								_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter<int>, _003C_OnFishFlyToTankAsync_003Ed__37>(ref val3, ref this);
								return;
							}
							goto IL_0125;
						case 0:
							val3 = _003C_003Eu__1;
							_003C_003Eu__1 = default;
							num = (_003C_003E1__state = -1);
							goto IL_0125;
						case 1:
							val2 = _003C_003Eu__2;
							_003C_003Eu__2 = default;
							num = (_003C_003E1__state = -1);
							goto IL_01d3;
						case 2:
							val = _003C_003Eu__3;
							_003C_003Eu__3 = default;
							num = (_003C_003E1__state = -1);
							goto IL_0269;
						case 3:
							val = _003C_003Eu__3;
							_003C_003Eu__3 = default;
							num = (_003C_003E1__state = -1);
							goto IL_0310;
						case 4:
							val = _003C_003Eu__3;
							_003C_003Eu__3 = default;
							num = (_003C_003E1__state = -1);
							goto IL_038d;
						case 5:
							{
								val = _003C_003Eu__3;
								_003C_003Eu__3 = default;
								num = (_003C_003E1__state = -1);
								goto IL_04b8;
							}
							IL_0269:
							val.GetResult();
							UniTaskExtensions.Forget(MergeFishingV2FlyStarViewLogic_def.Show(_003CtankStarPos_003E5__4, CS_0024_003C_003E8__locals9.stageLogic.GetStageStarPos()));
							_003CgiftBoxName_003E5__5 = CS_0024_003C_003E8__locals9.stageLogic.GetGiftBoxResName();
							val4 = UniTask.Delay(TimeSpan.FromSeconds(0.43299999833106995), false, (PlayerLoopTiming)4, default(CancellationToken));
							val = val4.GetAwaiter();
							if (!val.IsCompleted)
							{
								num = (_003C_003E1__state = 3);
								_003C_003Eu__3 = val;
								_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003C_OnFishFlyToTankAsync_003Ed__37>(ref val, ref this);
								return;
							}
							goto IL_0310;
							IL_038d:
							val.GetResult();
							if (_003CshowData_003E5__3.hasUpgradeAnimation)
							{
								_003C_003E8__1 = new _003C_003Ec__DisplayClass37_0();
								CommonBlackOverlayViewData viewData = new CommonBlackOverlayViewData
								{
									initColor = new Color(0.098f, 0.1529f, 0.2117f, 0f),
									enterAnimTime = 0.5f,
									enterAnimTargetColor = new Color(0.098f, 0.1529f, 0.2117f, 0.8f),
									exitAnimDelay = 0.166f,
									exitAnimTime = 0.133f,
									exitAnimTargetColor = new Color(0.098f, 0.1529f, 0.2117f, 0f)
								};
								_003C_003E8__1.blackOverlayViewLogic = CommonBlackOverlayViewLogic.Show(viewData);
								val4 = MergeFishingV2FlyStageGiftBoxViewLogic_def.Show(CS_0024_003C_003E8__locals9.stageLogic.GetGiftBoxPos(), Vector3.zero, _003CgiftBoxName_003E5__5);
								val = val4.GetAwaiter();
								if (!val.IsCompleted)
								{
									num = (_003C_003E1__state = 5);
									_003C_003Eu__3 = val;
									_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003C_OnFishFlyToTankAsync_003Ed__37>(ref val, ref this);
									return;
								}
								goto IL_04b8;
							}
							CS_0024_003C_003E8__locals9.CheckGuideByFishTankReward(newFishing: true);
							goto IL_050f;
							IL_04b8:
							val.GetResult();
							cacheAnimRewardListData = ObjectManager.GetInstance().mergeFishingV2Model.GetCacheAnimRewardListData();
							ObjectManager.GetInstance().mergeFishingV2Model.OpenRewardFreeView(cacheAnimRewardListData, showBlackMask: false, () =>
							{
								if (!MonoSingleton<GuideManager>.Instance.IsFinishByID(MergeFishingV2.Guide.boxProgress.guideId))
								{
									EventManager.GetInstance().DispatchEvent(100133, MergeFishingV2.Guide.boxProgress.guideId, 0f);
								}
								else
								{
									CS_0024_003C_003E8__locals9.CheckGuideByFishTankReward(newFishing: true);
								}
							}, () =>
							{
								_003C_003E8__1.blackOverlayViewLogic?.CloseViewAin();
							});
							_003C_003E8__1 = null;
							goto IL_050f;
							IL_0125:
							val3.GetResult();
							UniTaskExtensions.Forget(MergeFishingV2FlyFishViewLogic_def.Show(fishId, initScale, startPos, _003CtankItemLogic_003E5__2.GetFishFlyEndPosition()));
							_003CshowData_003E5__3.fishTankPoolData.fishTankDataDict.TryGetValue(fishId, out value);
							val2 = _003CtankItemLogic_003E5__2.PlayGetFishAsync(value).GetAwaiter();
							if (!val2.IsCompleted)
							{
								num = (_003C_003E1__state = 1);
								_003C_003Eu__2 = val2;
								_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter<(bool, Vector3)>, _003C_OnFishFlyToTankAsync_003Ed__37>(ref val2, ref this);
								return;
							}
							goto IL_01d3;
							IL_0310:
							val.GetResult();
							val4 = CS_0024_003C_003E8__locals9.stageLogic.PlayProgressAsync(_003CshowData_003E5__3.stageData, _003CshowData_003E5__3.supporCardCollectionReward);
							val = val4.GetAwaiter();
							if (!val.IsCompleted)
							{
								num = (_003C_003E1__state = 4);
								_003C_003Eu__3 = val;
								_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003C_OnFishFlyToTankAsync_003Ed__37>(ref val, ref this);
								return;
							}
							goto IL_038d;
							IL_01d3:
							(flag, _003CtankStarPos_003E5__4) = val2.GetResult();
							if (!flag)
							{
								break;
							}
							val4 = UniTask.Delay(TimeSpan.FromSeconds(1.0), false, (PlayerLoopTiming)4, default(CancellationToken));
							val = val4.GetAwaiter();
							if (!val.IsCompleted)
							{
								num = (_003C_003E1__state = 2);
								_003C_003Eu__3 = val;
								_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003C_OnFishFlyToTankAsync_003Ed__37>(ref val, ref this);
								return;
							}
							goto IL_0269;
							IL_050f:
							_003CgiftBoxName_003E5__5 = null;
							break;
						}
						_003CshowData_003E5__3 = default;
						_003CtankStarPos_003E5__4 = default;
					}
					finally
					{
						if (num < 0)
						{
							ViewManager.GetInstance().SetTouchMaskVisible(isVisible: false);
						}
					}
				}
			}
			catch (Exception exception)
			{
				_003C_003E1__state = -2;
				_003CtankItemLogic_003E5__2 = null;
				_003C_003Et__builder.SetException(exception);
				return;
			}
			_003C_003E1__state = -2;
			_003CtankItemLogic_003E5__2 = null;
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
	private struct _003C_OnGoFishingAsync_003Ed__35 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public MergeFishingV2MainViewLogic_def _003C_003E4__this;

		public int fishId;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_0104: Unknown result type (might be due to invalid IL or missing references)
			//IL_0109: Unknown result type (might be due to invalid IL or missing references)
			//IL_0110: Unknown result type (might be due to invalid IL or missing references)
			//IL_006e: Unknown result type (might be due to invalid IL or missing references)
			//IL_0073: Unknown result type (might be due to invalid IL or missing references)
			//IL_007a: Unknown result type (might be due to invalid IL or missing references)
			//IL_0033: Unknown result type (might be due to invalid IL or missing references)
			//IL_0038: Unknown result type (might be due to invalid IL or missing references)
			//IL_003b: Unknown result type (might be due to invalid IL or missing references)
			//IL_0040: Unknown result type (might be due to invalid IL or missing references)
			//IL_0054: Unknown result type (might be due to invalid IL or missing references)
			//IL_0055: Unknown result type (might be due to invalid IL or missing references)
			//IL_00a8: Unknown result type (might be due to invalid IL or missing references)
			//IL_00cc: Unknown result type (might be due to invalid IL or missing references)
			//IL_00d1: Unknown result type (might be due to invalid IL or missing references)
			//IL_00d4: Unknown result type (might be due to invalid IL or missing references)
			//IL_00d9: Unknown result type (might be due to invalid IL or missing references)
			//IL_00ed: Unknown result type (might be due to invalid IL or missing references)
			//IL_00ee: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			MergeFishingV2MainViewLogic_def mergeFishingV2MainViewLogic_def = _003C_003E4__this;
			try
			{
				Awaiter val2;
				if (num == 0 || num != 1)
				{
					UniTask val;
					try
					{
						if (num != 0)
						{
							ViewManager.GetInstance().SetTouchMaskVisible(isVisible: true);
							val = mergeFishingV2MainViewLogic_def.rodLogic.PlayCatchFishAnim(fishId);
							val2 = val.GetAwaiter();
							if (!val2.IsCompleted)
							{
								num = (_003C_003E1__state = 0);
								_003C_003Eu__1 = val2;
								_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003C_OnGoFishingAsync_003Ed__35>(ref val2, ref this);
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
					finally
					{
						if (num < 0)
						{
							ViewManager.GetInstance().SetTouchMaskVisible(isVisible: false);
						}
					}
					UniTaskExtensions.Forget(MergeFishingV2FishGetViewLogic_def.Show(fishId));
					val = UniTask.Delay(TimeSpan.FromSeconds(0.20000000298023224), false, (PlayerLoopTiming)4, default(CancellationToken));
					val2 = val.GetAwaiter();
					if (!val2.IsCompleted)
					{
						num = (_003C_003E1__state = 1);
						_003C_003Eu__1 = val2;
						_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003C_OnGoFishingAsync_003Ed__35>(ref val2, ref this);
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
				mergeFishingV2MainViewLogic_def.rodLogic.PlayIdleAnim();
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
	private struct _003C_OnGoGoodsAsync_003Ed__33 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public MergeFishingV2MainViewLogic_def _003C_003E4__this;

		public IndependentGrid grid;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_0079: Unknown result type (might be due to invalid IL or missing references)
			//IL_007e: Unknown result type (might be due to invalid IL or missing references)
			//IL_0085: Unknown result type (might be due to invalid IL or missing references)
			//IL_001d: Unknown result type (might be due to invalid IL or missing references)
			//IL_0040: Unknown result type (might be due to invalid IL or missing references)
			//IL_0045: Unknown result type (might be due to invalid IL or missing references)
			//IL_0049: Unknown result type (might be due to invalid IL or missing references)
			//IL_004e: Unknown result type (might be due to invalid IL or missing references)
			//IL_0062: Unknown result type (might be due to invalid IL or missing references)
			//IL_0063: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			MergeFishingV2MainViewLogic_def mergeFishingV2MainViewLogic_def = _003C_003E4__this;
			try
			{
				Awaiter val2;
				if (num != 0)
				{
					UniTaskExtensions.Forget(mergeFishingV2MainViewLogic_def.rodLogic.PlayCatchGoods(grid));
					UniTask val = UniTask.Delay(TimeSpan.FromSeconds(0.15000000596046448), false, (PlayerLoopTiming)4, default(CancellationToken));
					val2 = val.GetAwaiter();
					if (!val2.IsCompleted)
					{
						num = (_003C_003E1__state = 0);
						_003C_003Eu__1 = val2;
						_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003C_OnGoGoodsAsync_003Ed__33>(ref val2, ref this);
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

	public static int FishRows = 5;

	public static int FishColumns = 6;

	private int mMergeFishingV2Columns = 6;

	private int mMergeFishingV2Rows = 6;

	private Queue<Func<UniTask>> mUniTaskQueue = new Queue<Func<UniTask>>();

	private bool isPorcessingUniTask;

	private bool isShowInfo;

	[Header("阶段逻辑")]
	public MergeFishingV2StageLogic_def stageLogic;

	[Header("鱼缸池逻辑")]
	public MergeFishingV2TankPoolLogic_def tankPoolLogic;

	[Header("鱼竿逻辑")]
	public MergeFishingV2RodLogic_def rodLogic;

	[Header("礼包Icon")]
	public RectTransform giftIcon;

	[Header("道具详情逻辑")]
	public IndependentGoodsInfoViewLogic goodsLogic;

	public Transform oriPos;

	public Transform outPos;

	public override int Columns => mMergeFishingV2Columns;

	public override int Rows => mMergeFishingV2Rows;

	public override IndependentType ViewLevelType => IndependentType.MergeFishingV2;

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
		AudioManager.GetInstance().PlayMusic("숵끝犴朶扙7Î反숙끜溰朚敜;¾厽");
		CheckGuideByFishTankReward();
		GuideEvent();
	}

	public override void OnExit()
	{
		GameManager.GetInstance().SetMultiTouchEnabled(enable: true);
		mCurrentSelect = null;
		RemoveMergeHint();
		RecoveryGrid();
		RecoveryGridBg();
		RemoveListener();
		if (MergeFishingV2.Model.LastScene == SceneType.LevelView)
		{
			AudioManager.GetInstance().PlayMusic("숟끝掴ㄠ扇;\u0092厑", isLoop: false);
		}
		else
		{
			GameManager.GetInstance().PlayRestaurantMusic();
		}
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

	protected override void AddListener()
	{
		EventManager.GetInstance().AddEventListener<int, Transform>(202059, OnAddFishingGoods);
		EventManager.GetInstance().AddEventListener(202060, OnRefreshGameMap);
		EventManager.GetInstance().AddEventListener<int, Vector3, float>(202061, _OnFishFlyToTank);
		EventManager.GetInstance().AddEventListener<int>(202062, _OnGoFishing);
		EventManager.GetInstance().AddEventListener<IndependentGrid>(202063, _OnGoGoods);
		EventManager.GetInstance().AddEventListener<bool>(202064, CheckGuideByFishTankReward);
		EventManager.GetInstance().AddEventListener<Action<Transform>>(202057, OnCollectAnim);
		EventManager.GetInstance().AddEventListener(202065, OnUpdateTemporary);
		EventManager.GetInstance().AddEventListener<ShopVO>(100178, UpdateGiftIcon);
	}

	protected override void RemoveListener()
	{
		EventManager.GetInstance().RemoveEventListener<int, Transform>(202059, OnAddFishingGoods);
		EventManager.GetInstance().RemoveEventListener(202060, OnRefreshGameMap);
		EventManager.GetInstance().RemoveEventListener<int, Vector3, float>(202061, _OnFishFlyToTank);
		EventManager.GetInstance().RemoveEventListener<int>(202062, _OnGoFishing);
		EventManager.GetInstance().RemoveEventListener<IndependentGrid>(202063, _OnGoGoods);
		EventManager.GetInstance().RemoveEventListener<bool>(202064, CheckGuideByFishTankReward);
		EventManager.GetInstance().RemoveEventListener<Action<Transform>>(202057, OnCollectAnim);
		EventManager.GetInstance().RemoveEventListener(202065, OnUpdateTemporary);
		EventManager.GetInstance().RemoveEventListener<ShopVO>(100178, UpdateGiftIcon);
	}

	protected override void GameLayoutFit()
	{
		//IL_0044: Unknown result type (might be due to invalid IL or missing references)
		//IL_006e: Unknown result type (might be due to invalid IL or missing references)
		mMergeFishingV2Columns = 6;
		mMergeFishingV2Rows = 6;
		FishRows = mMergeFishingV2Rows;
		FishColumns = mMergeFishingV2Columns;
		GridParent.sizeDelta = new Vector2((float)(mMergeFishingV2Columns * IndependentMergeViewBaseLogic.GridWidth), (float)(mMergeFishingV2Rows * IndependentMergeViewBaseLogic.GridHeight));
		GridBgParent.sizeDelta = new Vector2((float)(mMergeFishingV2Columns * IndependentMergeViewBaseLogic.GridWidth), (float)(mMergeFishingV2Rows * IndependentMergeViewBaseLogic.GridHeight));
	}

	protected override void InitView()
	{
		if ((Object)(object)TemporaryLogic != (Object)null)
		{
			TemporaryLogic.Init(this, ViewLevelType);
		}
		RefreshTimeDown();
		_InitOtherUI();
	}

	public override void SetLocalization(int tag = 0, object data = null)
	{
		LocalizedLang.SetUITextLocalization(TitleText, MergeFishingV2.LanguageKey.GetCurrentLanguageKey(MergeFishingV2.ELanguageId.Title));
		LocalizedLang.SetUITextLocalization(DescText, MergeFishingV2.LanguageKey.GetCurrentLanguageKey(MergeFishingV2.ELanguageId.GameDesc));
		LocalizedLang.SetLocalizationFontSize(TimeDownText);
	}

	private void OnUpdateTemporary()
	{
		if ((Object)(object)TemporaryLogic != (Object)null)
		{
			TemporaryLogic.UpdateTempprary();
		}
	}

	protected override void RefreshGiftTimeDown()
	{
	}

	public override void OnOpenHelpView()
	{
		ObjectManager.GetInstance().mergeFishingV2Model.OpenHelpView();
	}

	public override void OnOpenGiftView()
	{
		ObjectManager.GetInstance().mergeFishingV2Model.OpenGiftView();
	}

	private void CheckGuideByFishTankReward(bool newFishing = false)
	{
		MergeFishingV2.ShowData showData = ObjectManager.GetInstance().mergeFishingV2Model.GetShowData();
		bool flag = MonoSingleton<GuideManager>.Instance.IsFinishByID(MergeFishingV2.Guide.tankInfo.guideId);
		bool flag2 = MonoSingleton<GuideManager>.Instance.IsFinishByID(MergeFishingV2.Guide.tankReward.guideId);
		bool canGuideTankClickReward = showData.guideData.canGuideTankClickReward;
		if (flag && flag2 && !canGuideTankClickReward)
		{
			return;
		}
		int lastGoFishingId = showData.guideData.lastGoFishingId;
		if (showData.fishTankPoolData.fishTankDataDict.TryGetValue(lastGoFishingId, out var value))
		{
			if (value.newStarReward && !flag2)
			{
				EventManager.GetInstance().DispatchEvent(100133, MergeFishingV2.Guide.tankReward.guideId, 0f);
			}
			else if (!value.IsLock() && !flag)
			{
				EventManager.GetInstance().DispatchEvent(100133, MergeFishingV2.Guide.tankInfo.guideId, 0f);
			}
			if (((newFishing && value.newStarReward) & canGuideTankClickReward) && !MonoSingleton<GuideManager>.Instance.IsInGuide() && tankPoolLogic.TryGetTankItemLogic(lastGoFishingId, out var tankItemLogic))
			{
				MonoSingleton<GuideWeakManager>.Instance.OnlyRemoveShowingFinger(GuideWeakType.MergeFishingV2);
				EventManager.GetInstance().DispatchEvent(100163, new GuideWeakCmdData
				{
					guideTrans = ((Component)tankItemLogic.ani_fish).transform,
					guideTransParent = ((Component)tankItemLogic).transform.parent,
					guideType = GuideWeakType.MergeFishingV2
				});
				ObjectManager.GetInstance().mergeFishingV2Model.TriggerGuideClickTankReward();
			}
		}
	}

	private void GuideEvent()
	{
		MonoSingleton<GuideManager>.Instance.SetIndependentView(this);
	}

	private void OnAddFishingGoods(int goodsID, Transform startTransform)
	{
		//IL_00b3: Unknown result type (might be due to invalid IL or missing references)
		//IL_0072: Unknown result type (might be due to invalid IL or missing references)
		if (ObjectManager.GetInstance().mergeFishingV2GameModel.GetGoodsConfigById(goodsID) == null)
		{
			return;
		}
		IndependentGrid nearbyEmptyGrid = GetNearbyEmptyGrid(GetCenterGridID(), showEnoughTip: false, null, goodsID);
		if ((Object)(object)nearbyEmptyGrid != (Object)null)
		{
			IndGoodsBase indGameBaseById = IndependentDefine.GetIndGameBaseById(ViewLevelType, goodsID, nearbyEmptyGrid);
			nearbyEmptyGrid.ChangeGameGoodsVo(indGameBaseById);
			if ((Object)(object)startTransform != (Object)null)
			{
				nearbyEmptyGrid.GetGameLevelItem()?.PlayItemFly(startTransform, 0.4f, isPlayDownEffect: false, isPlayDoubleUp: false, 0f, isBreakAudio: false, "숏끜徿䤐敗&\u0082厁숚끞撼攛湑<\u0096厕숞끎徐氟湑?\u0082厁刕枇\ud9ddŝ");
			}
		}
		else
		{
			ObjectManager.GetInstance().mergeFishingV2GameModel.AddGoodsToTemporary(goodsID, 1);
			if ((Object)(object)TemporaryLogic != (Object)null)
			{
				TemporaryLogic.PlayItemFly(goodsID, startTransform, 0f, "숏끜徿䤐敗&\u0082厁숚끞撼攛湑<\u0096厕숞끎徐氟湑?\u0082厁刕枇\ud9ddŝ");
			}
		}
	}

	public void EnueueTask(Func<UniTask> func)
	{
		mUniTaskQueue.Enqueue(func);
		ProcessUniTask();
	}

	public async void ProcessUniTask()
	{
		if (!isPorcessingUniTask)
		{
			isPorcessingUniTask = true;
			while (mUniTaskQueue.Count > 0)
			{
				await mUniTaskQueue.Dequeue()();
			}
			isPorcessingUniTask = false;
		}
	}

	private void OnRefreshGameMap()
	{
		if ((Object)(object)CurrentSelectGrid != (Object)null)
		{
			CurrentSelectGrid = null;
		}
		RecoveryGrid();
		CreateGameGrid();
	}

	private void _OnGoGoods(IndependentGrid grid)
	{
		_003C_003Ec__DisplayClass32_0 CS_0024_003C_003E8__locals3 = new _003C_003Ec__DisplayClass32_0();
		CS_0024_003C_003E8__locals3._003C_003E4__this = this;
		CS_0024_003C_003E8__locals3.grid = grid;
		EnueueTask([AsyncStateMachine(typeof(_003C_003Ec__DisplayClass32_0._003C_003C_OnGoGoods_003Eb__0_003Ed))] () =>
		{
			//IL_0002: Unknown result type (might be due to invalid IL or missing references)
			//IL_0007: Unknown result type (might be due to invalid IL or missing references)
			//IL_0031: Unknown result type (might be due to invalid IL or missing references)
			_003C_003Ec__DisplayClass32_0._003C_003C_OnGoGoods_003Eb__0_003Ed obj = default;
			obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
			obj._003C_003E4__this = CS_0024_003C_003E8__locals3;
			obj._003C_003E1__state = -1;
			obj._003C_003Et__builder.Start<_003C_003Ec__DisplayClass32_0._003C_003C_OnGoGoods_003Eb__0_003Ed>(ref obj);
			return obj._003C_003Et__builder.Task;
		});
	}

	[AsyncStateMachine(typeof(_003C_OnGoGoodsAsync_003Ed__33))]
	private UniTask _OnGoGoodsAsync(IndependentGrid grid)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0039: Unknown result type (might be due to invalid IL or missing references)
		_003C_OnGoGoodsAsync_003Ed__33 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj.grid = grid;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003C_OnGoGoodsAsync_003Ed__33>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	private void _OnGoFishing(int fishId)
	{
		_003C_003Ec__DisplayClass34_0 CS_0024_003C_003E8__locals3 = new _003C_003Ec__DisplayClass34_0();
		CS_0024_003C_003E8__locals3._003C_003E4__this = this;
		CS_0024_003C_003E8__locals3.fishId = fishId;
		EnueueTask([AsyncStateMachine(typeof(_003C_003Ec__DisplayClass34_0._003C_003C_OnGoFishing_003Eb__0_003Ed))] () =>
		{
			//IL_0002: Unknown result type (might be due to invalid IL or missing references)
			//IL_0007: Unknown result type (might be due to invalid IL or missing references)
			//IL_0031: Unknown result type (might be due to invalid IL or missing references)
			_003C_003Ec__DisplayClass34_0._003C_003C_OnGoFishing_003Eb__0_003Ed obj = default;
			obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
			obj._003C_003E4__this = CS_0024_003C_003E8__locals3;
			obj._003C_003E1__state = -1;
			obj._003C_003Et__builder.Start<_003C_003Ec__DisplayClass34_0._003C_003C_OnGoFishing_003Eb__0_003Ed>(ref obj);
			return obj._003C_003Et__builder.Task;
		});
	}

	[AsyncStateMachine(typeof(_003C_OnGoFishingAsync_003Ed__35))]
	private UniTask _OnGoFishingAsync(int fishId)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0039: Unknown result type (might be due to invalid IL or missing references)
		_003C_OnGoFishingAsync_003Ed__35 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj.fishId = fishId;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003C_OnGoFishingAsync_003Ed__35>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	private void _OnFishFlyToTank(int fishiId, Vector3 startPos, float initScale)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0004: Unknown result type (might be due to invalid IL or missing references)
		UniTaskExtensions.Forget(_OnFishFlyToTankAsync(fishiId, startPos, initScale));
	}

	[AsyncStateMachine(typeof(_003C_OnFishFlyToTankAsync_003Ed__37))]
	private UniTask _OnFishFlyToTankAsync(int fishId, Vector3 startPos, float initScale)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_001e: Unknown result type (might be due to invalid IL or missing references)
		//IL_001f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0049: Unknown result type (might be due to invalid IL or missing references)
		_003C_OnFishFlyToTankAsync_003Ed__37 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj.fishId = fishId;
		obj.startPos = startPos;
		obj.initScale = initScale;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003C_OnFishFlyToTankAsync_003Ed__37>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	private void _InitOtherUI()
	{
		ObjectManager.GetInstance().mergeFishingV2Model.SyncStageAnimPoints();
		MergeFishingV2.ShowData showData = ObjectManager.GetInstance().mergeFishingV2Model.vo.GetShowData();
		stageLogic.Init(resLoader);
		stageLogic.Refresh(showData.stageData, showData.supporCardCollectionReward);
		tankPoolLogic.Init(resLoader);
		tankPoolLogic.Refresh(showData.fishTankPoolData, showData.guideData);
		rodLogic.Init(resLoader);
		rodLogic.Refresh();
		InitGiftIcon();
	}

	public void OnClickTest()
	{
	}

	private void OnCollectAnim(Action<Transform> action)
	{
		action?.Invoke(((Component)TemporaryLogic).transform);
	}

	public void InitGiftIcon()
	{
		bool active = ObjectManager.GetInstance().mergeFishingV2Model.CanBuyGift();
		if ((Object)(object)giftIcon != (Object)null)
		{
			giftIcon.SetSelfActive<RectTransform>(active);
		}
	}

	public void UpdateGiftIcon(ShopVO shopVo)
	{
		if (shopVo != null && shopVo.type == 142)
		{
			bool active = ObjectManager.GetInstance().mergeFishingV2Model.CanBuyGift();
			if ((Object)(object)giftIcon != (Object)null)
			{
				giftIcon.SetSelfActive<RectTransform>(active);
			}
		}
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
		//IL_0086: Unknown result type (might be due to invalid IL or missing references)
		//IL_00be: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c9: Expected Obj, but got Unknown
		//IL_00f7: Unknown result type (might be due to invalid IL or missing references)
		//IL_0102: Expected Obj, but got Unknown
		CommonMaskViewLogic.Show(0.45f);
		Transform val = null;
		Transform trans2 = null;
		if (isShow)
		{
			val = ((Component)tankPoolLogic).transform;
			trans2 = ((Component)goodsLogic).transform;
			isShowInfo = true;
		}
		else
		{
			val = ((Component)goodsLogic).transform;
			trans2 = ((Component)tankPoolLogic).transform;
			isShowInfo = false;
		}
		CanvasGroup canvasGroup_pool = ((Component)val).GetComponent<CanvasGroup>();
		TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOLocalMoveY(((Component)val).transform, outPos.localPosition.y, 0.166f, false), (Ease)1);
		canvasGroup_pool.alpha = 1f;
		TweenCallback val4 = default;
		TweenCallback val5 = default;
		DOVirtual.DelayedCall(0.1f, (TweenCallback)(() =>
		{
			//IL_002d: Unknown result type (might be due to invalid IL or missing references)
			//IL_0032: Unknown result type (might be due to invalid IL or missing references)
			//IL_0034: Expected Obj, but got Unknown
			//IL_0039: Expected Obj, but got Unknown
			Tweener val2 = TweenSettingsExtensions.SetEase<Tweener>(DOTweenModuleUI.DOFade(canvasGroup_pool, 0f, 0.166f), (Ease)1);
			TweenCallback val3 = val4;
			if (val3 == null)
			{
				val5 = () =>
				{
					canvasGroup_pool.alpha = 0f;
				};
				TweenCallback val6 = val5;
				val4 = val5;
				val3 = val6;
			}
			TweenSettingsExtensions.OnComplete<Tweener>(val2, val3);
		}), true);
		CanvasGroup canvasGroup_goods = ((Component)trans2).GetComponent<CanvasGroup>();
		canvasGroup_goods.alpha = 0f;
		DOVirtual.DelayedCall(0.266f, (TweenCallback)(() =>
		{
			//IL_001c: Unknown result type (might be due to invalid IL or missing references)
			//IL_0059: Unknown result type (might be due to invalid IL or missing references)
			//IL_00a7: Unknown result type (might be due to invalid IL or missing references)
			//IL_00ac: Unknown result type (might be due to invalid IL or missing references)
			//IL_00ae: Expected Obj, but got Unknown
			//IL_00b3: Expected Obj, but got Unknown
			Sequence val2 = DOTween.Sequence();
			TweenSettingsExtensions.Append(val2, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOLocalMoveY(((Component)trans2).transform, oriPos.localPosition.y + 6f, 0.12449999f, false), (Ease)1));
			TweenSettingsExtensions.Append(val2, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOLocalMoveY(((Component)trans2).transform, oriPos.localPosition.y, 0.0415f, false), (Ease)1));
			Tweener val3 = TweenSettingsExtensions.SetEase<Tweener>(DOTweenModuleUI.DOFade(canvasGroup_goods, 1f, 0.166f), (Ease)1);
			val4 = val5;
			if (val4 == null)
			{
				TweenCallback val6 = () =>
				{
					canvasGroup_goods.alpha = 1f;
				};
				TweenCallback val7 = val6;
				val5 = val6;
				val4 = val7;
			}
			TweenSettingsExtensions.OnComplete<Tweener>(val3, val4);
		}), true);
	}
}
