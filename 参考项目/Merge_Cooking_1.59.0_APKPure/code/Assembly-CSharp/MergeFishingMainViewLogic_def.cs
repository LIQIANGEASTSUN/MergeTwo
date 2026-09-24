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

[PrefabPath("MergeFishingView_def")]
public class MergeFishingMainViewLogic_def : IndependentMergeViewBaseLogic
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

		public MergeFishingMainViewLogic_def _003C_003E4__this;

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

		public MergeFishingMainViewLogic_def _003C_003E4__this;

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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003C_OnFishFlyToTankAsync_003Ed__37 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public MergeFishingMainViewLogic_def _003C_003E4__this;

		public int fishId;

		public float initScale;

		public Vector3 startPos;

		private MergeFishing.ShowData _003CshowData_003E5__2;

		private Vector3 _003CtankStarPos_003E5__3;

		private Awaiter<(bool, Vector3)> _003C_003Eu__1;

		private string _003CgiftBoxName_003E5__4;

		private Awaiter _003C_003Eu__2;

		private void MoveNext()
		{
			//IL_0119: Unknown result type (might be due to invalid IL or missing references)
			//IL_011e: Unknown result type (might be due to invalid IL or missing references)
			//IL_0126: Unknown result type (might be due to invalid IL or missing references)
			//IL_01af: Unknown result type (might be due to invalid IL or missing references)
			//IL_01b4: Unknown result type (might be due to invalid IL or missing references)
			//IL_01bc: Unknown result type (might be due to invalid IL or missing references)
			//IL_0256: Unknown result type (might be due to invalid IL or missing references)
			//IL_025b: Unknown result type (might be due to invalid IL or missing references)
			//IL_0263: Unknown result type (might be due to invalid IL or missing references)
			//IL_02d3: Unknown result type (might be due to invalid IL or missing references)
			//IL_02d8: Unknown result type (might be due to invalid IL or missing references)
			//IL_02e0: Unknown result type (might be due to invalid IL or missing references)
			//IL_035a: Unknown result type (might be due to invalid IL or missing references)
			//IL_035f: Unknown result type (might be due to invalid IL or missing references)
			//IL_0367: Unknown result type (might be due to invalid IL or missing references)
			//IL_0148: Unknown result type (might be due to invalid IL or missing references)
			//IL_014d: Unknown result type (might be due to invalid IL or missing references)
			//IL_01d3: Unknown result type (might be due to invalid IL or missing references)
			//IL_01de: Unknown result type (might be due to invalid IL or missing references)
			//IL_01e3: Unknown result type (might be due to invalid IL or missing references)
			//IL_0218: Unknown result type (might be due to invalid IL or missing references)
			//IL_021d: Unknown result type (might be due to invalid IL or missing references)
			//IL_0221: Unknown result type (might be due to invalid IL or missing references)
			//IL_0226: Unknown result type (might be due to invalid IL or missing references)
			//IL_0295: Unknown result type (might be due to invalid IL or missing references)
			//IL_029a: Unknown result type (might be due to invalid IL or missing references)
			//IL_029e: Unknown result type (might be due to invalid IL or missing references)
			//IL_02a3: Unknown result type (might be due to invalid IL or missing references)
			//IL_00a6: Unknown result type (might be due to invalid IL or missing references)
			//IL_00ac: Unknown result type (might be due to invalid IL or missing references)
			//IL_00b1: Unknown result type (might be due to invalid IL or missing references)
			//IL_00db: Unknown result type (might be due to invalid IL or missing references)
			//IL_00e0: Unknown result type (might be due to invalid IL or missing references)
			//IL_00e4: Unknown result type (might be due to invalid IL or missing references)
			//IL_00e9: Unknown result type (might be due to invalid IL or missing references)
			//IL_03f2: Unknown result type (might be due to invalid IL or missing references)
			//IL_0171: Unknown result type (might be due to invalid IL or missing references)
			//IL_0176: Unknown result type (might be due to invalid IL or missing references)
			//IL_017a: Unknown result type (might be due to invalid IL or missing references)
			//IL_017f: Unknown result type (might be due to invalid IL or missing references)
			//IL_023b: Unknown result type (might be due to invalid IL or missing references)
			//IL_023d: Unknown result type (might be due to invalid IL or missing references)
			//IL_02b8: Unknown result type (might be due to invalid IL or missing references)
			//IL_02ba: Unknown result type (might be due to invalid IL or missing references)
			//IL_030c: Unknown result type (might be due to invalid IL or missing references)
			//IL_0311: Unknown result type (might be due to invalid IL or missing references)
			//IL_031c: Unknown result type (might be due to invalid IL or missing references)
			//IL_0321: Unknown result type (might be due to invalid IL or missing references)
			//IL_0325: Unknown result type (might be due to invalid IL or missing references)
			//IL_032a: Unknown result type (might be due to invalid IL or missing references)
			//IL_00fe: Unknown result type (might be due to invalid IL or missing references)
			//IL_0100: Unknown result type (might be due to invalid IL or missing references)
			//IL_0194: Unknown result type (might be due to invalid IL or missing references)
			//IL_0196: Unknown result type (might be due to invalid IL or missing references)
			//IL_033f: Unknown result type (might be due to invalid IL or missing references)
			//IL_0341: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			MergeFishingMainViewLogic_def mergeFishingMainViewLogic_def = _003C_003E4__this;
			try
			{
				MergeFishingTankItemLogic_def tankItemLogic = default;
				if ((uint)num <= 4u || mergeFishingMainViewLogic_def.tankPoolLogic.TryGetTankItemLogic(fishId, out tankItemLogic))
				{
					try
					{
						Awaiter<(bool, Vector3)> val2;
						Awaiter val;
						RandomRewardListData cacheAnimRewardListData;
						UniTask val3;
						bool flag;
						switch (num)
						{
						default:
						{
							ViewManager.GetInstance().SetTouchMaskVisible(isVisible: true);
							_003CshowData_003E5__2 = ObjectManager.GetInstance().mergeFishingModel.vo.GetShowData();
							ObjectManager.GetInstance().mergeFishingModel.SyncStageAnimPoints();
							if (fishId == _003CshowData_003E5__2.guideData.firstGoFishingId)
							{
								tankItemLogic.ModifyGuideNodeName();
							}
							UniTaskExtensions.Forget(MergeFishingFlyFishViewLogic_def.Show(fishId, initScale, startPos, tankItemLogic.GetFishFlyEndPosition()));
							_003CshowData_003E5__2.fishTankPoolData.fishTankDataDict.TryGetValue(fishId, out var value);
							val2 = tankItemLogic.PlayGetFishAsync(value).GetAwaiter();
							if (!val2.IsCompleted)
							{
								num = (_003C_003E1__state = 0);
								_003C_003Eu__1 = val2;
								_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter<(bool, Vector3)>, _003C_OnFishFlyToTankAsync_003Ed__37>(ref val2, ref this);
								return;
							}
							goto IL_0135;
						}
						case 0:
							val2 = _003C_003Eu__1;
							_003C_003Eu__1 = default;
							num = (_003C_003E1__state = -1);
							goto IL_0135;
						case 1:
							val = _003C_003Eu__2;
							_003C_003Eu__2 = default;
							num = (_003C_003E1__state = -1);
							goto IL_01cb;
						case 2:
							val = _003C_003Eu__2;
							_003C_003Eu__2 = default;
							num = (_003C_003E1__state = -1);
							goto IL_0272;
						case 3:
							val = _003C_003Eu__2;
							_003C_003Eu__2 = default;
							num = (_003C_003E1__state = -1);
							goto IL_02ef;
						case 4:
							{
								val = _003C_003Eu__2;
								_003C_003Eu__2 = default;
								num = (_003C_003E1__state = -1);
								goto IL_0376;
							}
							IL_0376:
							val.GetResult();
							cacheAnimRewardListData = ObjectManager.GetInstance().mergeFishingModel.GetCacheAnimRewardListData();
							ObjectManager.GetInstance().mergeFishingModel.OpenRewardFreeView(cacheAnimRewardListData, () =>
							{
								EventManager.GetInstance().DispatchEvent(100133, 180, 0f);
							});
							goto IL_03d9;
							IL_01cb:
							val.GetResult();
							UniTaskExtensions.Forget(MergeFishingFlyStarViewLogic_def.Show(_003CtankStarPos_003E5__3, mergeFishingMainViewLogic_def.stageLogic.GetStageStarPos()));
							_003CgiftBoxName_003E5__4 = mergeFishingMainViewLogic_def.stageLogic.GetGiftBoxResName();
							val3 = UniTask.Delay(TimeSpan.FromSeconds(0.43299999833106995), false, (PlayerLoopTiming)4, default(CancellationToken));
							val = val3.GetAwaiter();
							if (!val.IsCompleted)
							{
								num = (_003C_003E1__state = 2);
								_003C_003Eu__2 = val;
								_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003C_OnFishFlyToTankAsync_003Ed__37>(ref val, ref this);
								return;
							}
							goto IL_0272;
							IL_0272:
							val.GetResult();
							val3 = mergeFishingMainViewLogic_def.stageLogic.PlayProgressAsync(_003CshowData_003E5__2.stageData, _003CshowData_003E5__2.supporCardCollectionReward);
							val = val3.GetAwaiter();
							if (!val.IsCompleted)
							{
								num = (_003C_003E1__state = 3);
								_003C_003Eu__2 = val;
								_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003C_OnFishFlyToTankAsync_003Ed__37>(ref val, ref this);
								return;
							}
							goto IL_02ef;
							IL_0135:
							(flag, _003CtankStarPos_003E5__3) = val2.GetResult();
							if (!flag)
							{
								break;
							}
							val3 = UniTask.Delay(TimeSpan.FromSeconds(1.0), false, (PlayerLoopTiming)4, default(CancellationToken));
							val = val3.GetAwaiter();
							if (!val.IsCompleted)
							{
								num = (_003C_003E1__state = 1);
								_003C_003Eu__2 = val;
								_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003C_OnFishFlyToTankAsync_003Ed__37>(ref val, ref this);
								return;
							}
							goto IL_01cb;
							IL_03d9:
							_003CgiftBoxName_003E5__4 = null;
							break;
							IL_02ef:
							val.GetResult();
							if (_003CshowData_003E5__2.hasUpgradeAnimation)
							{
								val3 = MergeFishingFlyStageGiftBoxViewLogic_def.Show(mergeFishingMainViewLogic_def.stageLogic.GetGiftBoxPos(), Vector3.zero, _003CgiftBoxName_003E5__4);
								val = val3.GetAwaiter();
								if (!val.IsCompleted)
								{
									num = (_003C_003E1__state = 4);
									_003C_003Eu__2 = val;
									_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003C_OnFishFlyToTankAsync_003Ed__37>(ref val, ref this);
									return;
								}
								goto IL_0376;
							}
							EventManager.GetInstance().DispatchEvent(100133, 180, 0f);
							goto IL_03d9;
						}
						_003CshowData_003E5__2 = default;
						_003CtankStarPos_003E5__3 = default;
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
	private struct _003C_OnGoFishingAsync_003Ed__35 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public MergeFishingMainViewLogic_def _003C_003E4__this;

		public int fishId;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_0063: Unknown result type (might be due to invalid IL or missing references)
			//IL_0068: Unknown result type (might be due to invalid IL or missing references)
			//IL_006f: Unknown result type (might be due to invalid IL or missing references)
			//IL_002b: Unknown result type (might be due to invalid IL or missing references)
			//IL_0030: Unknown result type (might be due to invalid IL or missing references)
			//IL_0033: Unknown result type (might be due to invalid IL or missing references)
			//IL_0038: Unknown result type (might be due to invalid IL or missing references)
			//IL_004c: Unknown result type (might be due to invalid IL or missing references)
			//IL_004d: Unknown result type (might be due to invalid IL or missing references)
			//IL_009d: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			MergeFishingMainViewLogic_def mergeFishingMainViewLogic_def = _003C_003E4__this;
			try
			{
				try
				{
					Awaiter val2;
					if (num != 0)
					{
						ViewManager.GetInstance().SetTouchMaskVisible(isVisible: true);
						UniTask val = mergeFishingMainViewLogic_def.rodLogic.PlayCatchFishAnim(fishId);
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
				UniTaskExtensions.Forget(MergeFishingFishGetViewLogic_def.Show(fishId));
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

		public MergeFishingMainViewLogic_def _003C_003E4__this;

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
			MergeFishingMainViewLogic_def mergeFishingMainViewLogic_def = _003C_003E4__this;
			try
			{
				Awaiter val2;
				if (num != 0)
				{
					UniTaskExtensions.Forget(mergeFishingMainViewLogic_def.rodLogic.PlayCatchGoods(grid));
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

	private int mMergeFishingColumns = 6;

	private int mMergeFishingRows = 5;

	private Queue<Func<UniTask>> mUniTaskQueue = new Queue<Func<UniTask>>();

	private bool isPorcessingUniTask;

	private bool isShowInfo;

	[Header("阶段逻辑")]
	public MergeFishingStageLogic_def stageLogic;

	[Header("鱼缸池逻辑")]
	public MergeFishingTankPoolLogic_def tankPoolLogic;

	[Header("鱼竿逻辑")]
	public MergeFishingRodLogic_def rodLogic;

	[Header("道具详情逻辑")]
	public IndependentGoodsInfoViewLogic goodsLogic;

	public Transform oriPos;

	public Transform outPos;

	public override int Columns => mMergeFishingColumns;

	public override int Rows => mMergeFishingRows;

	public override IndependentType ViewLevelType => IndependentType.MergeFishing;

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
		if (MergeFishing.Model.LastScene == SceneType.LevelView)
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
		EventManager.GetInstance().AddEventListener<int, Transform>(202049, OnAddFishingGoods);
		EventManager.GetInstance().AddEventListener(202050, OnRefreshGameMap);
		EventManager.GetInstance().AddEventListener<int, Vector3, float>(202051, _OnFishFlyToTank);
		EventManager.GetInstance().AddEventListener<int>(202052, _OnGoFishing);
		EventManager.GetInstance().AddEventListener<IndependentGrid>(202053, _OnGoGoods);
		EventManager.GetInstance().AddEventListener(202054, CheckGuideByFishTankReward);
		EventManager.GetInstance().AddEventListener<Action<Transform>>(202047, OnCollectAnim);
		EventManager.GetInstance().AddEventListener(202055, OnUpdateTemporary);
	}

	protected override void RemoveListener()
	{
		EventManager.GetInstance().RemoveEventListener<int, Transform>(202049, OnAddFishingGoods);
		EventManager.GetInstance().RemoveEventListener(202050, OnRefreshGameMap);
		EventManager.GetInstance().RemoveEventListener<int, Vector3, float>(202051, _OnFishFlyToTank);
		EventManager.GetInstance().RemoveEventListener<int>(202052, _OnGoFishing);
		EventManager.GetInstance().RemoveEventListener<IndependentGrid>(202053, _OnGoGoods);
		EventManager.GetInstance().RemoveEventListener(202054, CheckGuideByFishTankReward);
		EventManager.GetInstance().RemoveEventListener<Action<Transform>>(202047, OnCollectAnim);
		EventManager.GetInstance().RemoveEventListener(202055, OnUpdateTemporary);
	}

	protected override void GameLayoutFit()
	{
		//IL_0044: Unknown result type (might be due to invalid IL or missing references)
		//IL_006e: Unknown result type (might be due to invalid IL or missing references)
		mMergeFishingColumns = 6;
		mMergeFishingRows = 5;
		FishRows = mMergeFishingRows;
		FishColumns = mMergeFishingColumns;
		GridParent.sizeDelta = new Vector2((float)(mMergeFishingColumns * IndependentMergeViewBaseLogic.GridWidth), (float)(mMergeFishingRows * IndependentMergeViewBaseLogic.GridHeight));
		GridBgParent.sizeDelta = new Vector2((float)(mMergeFishingColumns * IndependentMergeViewBaseLogic.GridWidth), (float)(mMergeFishingRows * IndependentMergeViewBaseLogic.GridHeight));
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
		LocalizedLang.SetUITextLocalization(TitleText, MergeFishing.LanguageKey.GetCurrentLanguageKey(MergeFishing.ELanguageId.Title));
		LocalizedLang.SetUITextLocalization(DescText, MergeFishing.LanguageKey.GetCurrentLanguageKey(MergeFishing.ELanguageId.GameDesc));
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
		ObjectManager.GetInstance().mergeFishingModel.OpenHelpView();
	}

	public override void OnOpenGiftView()
	{
		ObjectManager.GetInstance().mergeFishingModel.OpenGiftView();
	}

	private void CheckGuideByFishTankReward()
	{
		if (MonoSingleton<GuideManager>.Instance.IsFinishByID(181) && MonoSingleton<GuideManager>.Instance.IsFinishByID(182))
		{
			return;
		}
		MergeFishing.ShowData showData = ObjectManager.GetInstance().mergeFishingModel.GetShowData();
		int firstGoFishingId = showData.guideData.firstGoFishingId;
		if (showData.fishTankPoolData.fishTankDataDict.TryGetValue(firstGoFishingId, out var value))
		{
			if (value.CheckReward())
			{
				EventManager.GetInstance().DispatchEvent(100133, 181, 0f);
			}
			else if (!value.IsLock())
			{
				EventManager.GetInstance().DispatchEvent(100133, 182, 0f);
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
		if (ObjectManager.GetInstance().mergeFishingGameModel.GetGoodsConfigById(goodsID) == null)
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
			ObjectManager.GetInstance().mergeFishingGameModel.AddGoodsToTemporary(goodsID, 1);
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
		ObjectManager.GetInstance().mergeFishingModel.SyncStageAnimPoints();
		MergeFishing.ShowData showData = ObjectManager.GetInstance().mergeFishingModel.vo.GetShowData();
		stageLogic.Init(resLoader);
		stageLogic.Refresh(showData.stageData, showData.supporCardCollectionReward);
		tankPoolLogic.Init(resLoader);
		tankPoolLogic.Refresh(showData.fishTankPoolData, showData.guideData);
		rodLogic.Init(resLoader);
		rodLogic.Refresh();
	}

	public void OnClickTest()
	{
	}

	private void OnCollectAnim(Action<Transform> action)
	{
		action?.Invoke(((Component)TemporaryLogic).transform);
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
