using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using EL;
using EL.Resource;
using FAT.Merge;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT
{
	public class ActivityLongOrder : ActivityLike, IActivityOrderHandler, IActivityOrderGenerator, IOrderBindingActivity
	{
		public enum ParamKey
		{
			DetailId = 0,
			TaskIndex = 1,
			HasActiveOrder = 2,
			SpawnerIssued = 3,
			Muted = 4,
			InstanceToken = 5,
			TaskMergeIndex = 6,
			StartPopupShown = 7
		}

		[CompilerGenerated]
		public sealed class _003CResEnumerate_003Ed__102 : IEnumerable<(string, AssetTag)>, IEnumerable, IEnumerator<(string, AssetTag)>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public (string, AssetTag) _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public ActivityLongOrder _003C_003E4__this;

			[NonSerialized]
			public IEnumerator<(string, AssetTag)> _003C_003E7__wrap1;

			(string, AssetTag) IEnumerator<(string, AssetTag)>.Current
			{
				[DebuggerHidden]
				get
				{
					return default((string, AssetTag));
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CResEnumerate_003Ed__102(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			public void _003C_003Em__Finally1()
			{
			}

			public void _003C_003Em__Finally2()
			{
			}

			public void _003C_003Em__Finally3()
			{
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<(string, AssetTag)> IEnumerable<(string, AssetTag)>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CWaitAndQueueConvertPopup_003Ed__100 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

			public ActivityLongOrder _003C_003E4__this;

			public PoolMapping.Ref<List<RewardCommitData>> rewards;

			[NonSerialized]
			public UniTask.Awaiter _003C_003Eu__1;

			private void MoveNext()
			{
			}

			void IAsyncStateMachine.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				this.MoveNext();
			}

			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
			}

			void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
			{
				//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
				this.SetStateMachine(stateMachine);
			}
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CWaitAndQueueEndPopup_003Ed__98 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

			public ActivityLongOrder _003C_003E4__this;

			[NonSerialized]
			public UniTask.Awaiter _003C_003Eu__1;

			private void MoveNext()
			{
			}

			void IAsyncStateMachine.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				this.MoveNext();
			}

			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
			}

			void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
			{
				//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
				this.SetStateMachine(stateMachine);
			}
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CWaitReward_003Ed__101 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public ActivityLongOrder _003C_003E4__this;

			[NonSerialized]
			public UniTask.Awaiter _003C_003Eu__1;

			private void MoveNext()
			{
			}

			void IAsyncStateMachine.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				this.MoveNext();
			}

			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
			}

			void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
			{
				//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
				this.SetStateMachine(stateMachine);
			}
		}

		[NonSerialized]
		public bool _hasActiveOrder;

		[NonSerialized]
		public bool _spawnerIssued;

		[NonSerialized]
		public bool _muted;

		[NonSerialized]
		public int _instanceToken;

		[NonSerialized]
		public int _taskMergeIndex;

		[NonSerialized]
		public bool _startPopupShown;

		public static int s_instanceTokenSeed;

		[NonSerialized]
		public ActivityLongOrderTaskBonusHandler _taskBonusHandler;

		[NonSerialized]
		public readonly List<int> _taskOutputItems;

		[NonSerialized]
		public bool _taskOutputItemsResolved;

		[NonSerialized]
		public bool _taskMergeIndexOverflowLogged;

		public EventLongOrder Conf { get; set; }

		public LongOrderDetail Detail { get; set; }

		public override bool Valid => false;

		public int DetailId { get; set; }

		public int TaskIndex { get; set; }

		public bool Complete => false;

		public override ActivityVisual Visual => null;

		public VisualPopup MainPopup { get; }

		public VisualPopup EndPopup { get; }

		public VisualPopup ConvertPopup { get; }

		public void TryConvertExpireItems()
		{
		}

		public void CheckExpireItemCoverage(Dictionary<int, string> expireItems)
		{
		}

		public static void AddItems(HashSet<int> container, List<int> items)
		{
		}

		public ActivityLongOrder(ActivityLite lite_)
		{
		}

		public override void SetupFresh()
		{
		}

		public override void LoadSetup(ActivityInstance data_)
		{
		}

		public override void SaveSetup(ActivityInstance data_)
		{
		}

		public override void WhenActive(bool new_)
		{
		}

		public override void WhenEnd()
		{
		}

		public override void WhenReset()
		{
		}

		public void RefreshMuteState()
		{
		}

		public int GenerateInstanceToken()
		{
			return 0;
		}

		public static string GetOrderThemeRes(int eventId, int paramId)
		{
			return null;
		}

		[Conditional("UNITY_EDITOR")]
		[Conditional("BUILD_PIONEER")]
		[Conditional("DEVELOPMENT_BUILD")]
		[Conditional("BUILD_SANDBOX")]
		public void Log(string info)
		{
		}

		bool IActivityOrderHandler.IsValidForBoard(int boardId)
		{
			return false;
		}

		bool IActivityOrderGenerator.TryGeneratePassiveOrder(OrderRandomer cfg, IOrderHelper helper, MergeWorldTracer tracer, Func<OrderRandomer, OrderData> builder, out OrderData order)
		{
			order = null;
			return false;
		}

		public bool CanGenerateOrder(OrderRandomer cfg, MergeWorldTracer tracer)
		{
			return false;
		}

		public OrderData BuildLongOrder(OrderRandomer cfg, IOrderHelper helper, LongOrderTask task)
		{
			return null;
		}

		bool IActivityOrderHandler.OnPreUpdate(OrderData order, IOrderHelper helper, MergeWorldTracer tracer)
		{
			return false;
		}

		public void OnOrderRewarded(OrderData order)
		{
		}

		public void OnOrderExpired(OrderData order)
		{
		}

		bool IOrderBindingActivity.MatchOrderActivityInstance(IOrderData order)
		{
			return false;
		}

		public bool MatchOrderActivityInstance(IOrderData order)
		{
			return false;
		}

		public LongOrderTask GetCurrentTask()
		{
			return null;
		}

		public bool TryGetDisplayTask(bool useLast, out LongOrderTask task)
		{
			task = null;
			return false;
		}

		public bool TryGetDisplayReward(bool useLast, out int id, out int count)
		{
			id = default(int);
			count = default(int);
			return false;
		}

		public bool TryGetRandomer(out OrderRandomer randomer)
		{
			randomer = null;
			return false;
		}

		public int CalcOrderDuration(int realDifficulty)
		{
			return 0;
		}

		public void TryIssueSpawner()
		{
		}

		public void ClearSpawner()
		{
		}

		public void IssueSpawner(bool tryBoard = false)
		{
		}

		public void ResetTaskOutputCache()
		{
		}

		public void RegisterTaskListener()
		{
		}

		public void UnregisterTaskListener()
		{
		}

		public void TrackNewItemSpawned(Item item)
		{
		}

		public void GetTaskProgress(out int taskQueue, out int taskNum)
		{
			taskQueue = default(int);
			taskNum = default(int);
		}

		public bool TryResolveTaskOutputIndex(int itemId, out int outputIndex, out int taskNum)
		{
			outputIndex = default(int);
			taskNum = default(int);
			return false;
		}

		public void EnsureTaskOutputItemsResolved()
		{
		}

		public bool IsLongOrderSpawnerOutput(SpawnBonusContext context)
		{
			return false;
		}

		public bool IsSpawnerOutputType(ItemSpawnReason reason)
		{
			return false;
		}

		public bool IsLongOrderSpawnerItem(int itemId)
		{
			return false;
		}

		public void FillSpawnerOutputChainItems(List<int> container)
		{
		}

		public void FillSpawnerSourceItems(List<int> container)
		{
		}

		public void CollectSourceOutputCategoryIds(int sourceItemId, HashSet<int> categoryIds)
		{
		}

		public void AddOutputCategoryId(int outputItemId, HashSet<int> categoryIds)
		{
		}

		public bool IsItemOnLongOrderBoard(Item item)
		{
			return false;
		}

		public void InitTheme()
		{
		}

		public override void Open()
		{
		}

		public override void TryPopup(ScreenPopup popup_, PopupType state_)
		{
		}

		public void MarkStartPopupShown()
		{
		}

		public void OnStartPopupClosed()
		{
		}

		public void RefreshOrderAfterStartPopup()
		{
		}

		public int GetSpawnerId()
		{
			return 0;
		}

		public void TryQueueStartPopup()
		{
		}

		public void TryQueueEndPopup()
		{
		}

		[AsyncStateMachine(typeof(_003CWaitAndQueueEndPopup_003Ed__98))]
		public UniTaskVoid WaitAndQueueEndPopup()
		{
			return default(UniTaskVoid);
		}

		public void TryQueueConvertPopup(PoolMapping.Ref<List<RewardCommitData>> rewards)
		{
		}

		[AsyncStateMachine(typeof(_003CWaitAndQueueConvertPopup_003Ed__100))]
		public UniTaskVoid WaitAndQueueConvertPopup(PoolMapping.Ref<List<RewardCommitData>> rewards)
		{
			return default(UniTaskVoid);
		}

		[AsyncStateMachine(typeof(_003CWaitReward_003Ed__101))]
		public UniTask WaitReward()
		{
			return default(UniTask);
		}

		[IteratorStateMachine(typeof(_003CResEnumerate_003Ed__102))]
		public override IEnumerable<(string, AssetTag)> ResEnumerate()
		{
			return null;
		}

		public bool _003C_003EiFixBaseProxy_get_Valid()
		{
			return false;
		}

		public void _003C_003EiFixBaseProxy_SetupFresh()
		{
		}

		public void _003C_003EiFixBaseProxy_WhenActive(bool P0)
		{
		}

		public void _003C_003EiFixBaseProxy_WhenEnd()
		{
		}

		public void _003C_003EiFixBaseProxy_WhenReset()
		{
		}

		public ActivityVisual _003C_003EiFixBaseProxy_get_Visual()
		{
			return null;
		}

		public void _003C_003EiFixBaseProxy_TryPopup(ScreenPopup P0, PopupType P1)
		{
		}

		public IEnumerable<(string, AssetTag)> _003C_003EiFixBaseProxy_ResEnumerate()
		{
			return null;
		}
	}
}
