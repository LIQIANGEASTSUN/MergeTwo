using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using MergePuzzle.ItemRewardBackup;
using UnityEngine.ResourceManagement.AsyncOperations;

namespace MergePuzzle.BoardEvents
{
	public abstract class BoardEventHandlerBase : INotificationHandler, IItemRewardConvertHandler
	{
		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CCheckAndDownloadRequiredRunningConfigAddressable_003Ed__16 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder<bool> _003C_003Et__builder;

			public BoardEventHandlerBase _003C_003E4__this;

			[NonSerialized]
			public EventBoardConfigItem _003CrunningConfig_003E5__2;

			[NonSerialized]
			public AddressableDownloader _003Cdownloader_003E5__3;

			[NonSerialized]
			public bool _003CisSuccess_003E5__4;

			[NonSerialized]
			public UniTask.Awaiter _003C_003Eu__1;

			[NonSerialized]
			public UniTask<bool>.Awaiter _003C_003Eu__2;

			[NonSerialized]
			public Cysharp.Threading.Tasks.YieldAwaitable.Awaiter _003C_003Eu__3;

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
		public struct _003CLoadBoardData_003Ed__11 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder<BoardEventBoardData> _003C_003Et__builder;

			public BoardEventHandlerBase _003C_003E4__this;

			public int index;

			[NonSerialized]
			public long _003CstartTime_003E5__2;

			[NonSerialized]
			public AsyncOperationHandle<BoardEventBoardData> _003Chandler_003E5__3;

			[NonSerialized]
			public BoardEventBoardData _003CboardEventBoardData_003E5__4;

			[NonSerialized]
			public UniTask<BoardEventBoardData>.Awaiter _003C_003Eu__1;

			[NonSerialized]
			public UniTask.Awaiter _003C_003Eu__2;

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
		public struct _003CLoadEventData_003Ed__10 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder<EventData> _003C_003Et__builder;

			public BoardEventHandlerBase _003C_003E4__this;

			public int index;

			[NonSerialized]
			public long _003CstartTime_003E5__2;

			[NonSerialized]
			public AsyncOperationHandle<EventData> _003Chandler_003E5__3;

			[NonSerialized]
			public UniTask<long>.Awaiter _003C_003Eu__1;

			[NonSerialized]
			public UniTask<EventData>.Awaiter _003C_003Eu__2;

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
		public struct _003CReleaseBoardData_003Ed__15 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder<bool> _003C_003Et__builder;

			public BoardEventHandlerBase _003C_003E4__this;

			public int index;

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
		public EventBoardConfigItem _finishWaitingEventBoardConfigItem;

		[NonSerialized]
		public Dictionary<int, EventBoardConfigItem> _runningEventBoardConfigItems;

		[NonSerialized]
		public KiteEventBoardConfig _remappedEventBoardConfig;

		public Dictionary<int, AsyncOperationHandle<EventData>> EventDataMap;

		public Dictionary<int, AsyncOperationHandle<BoardEventBoardData>> BoardDataMap;

		[NonSerialized]
		public List<EventBoardConfigItem> _allEvents;

		[NonSerialized]
		public int _runningEventBoardIndex;

		[NonSerialized]
		public bool _addressableDownloadLock;

		[NonSerialized]
		public bool _isAssetBundleReady;

		public long RemainingTime;

		[AsyncStateMachine(typeof(_003CLoadEventData_003Ed__10))]
		public UniTask<EventData> LoadEventData(int index)
		{
			return default(UniTask<EventData>);
		}

		[AsyncStateMachine(typeof(_003CLoadBoardData_003Ed__11))]
		public UniTask<BoardEventBoardData> LoadBoardData(int index)
		{
			return default(UniTask<BoardEventBoardData>);
		}

		public void FindActiveBoardEvent(BoardEntity boardEntity)
		{
		}

		public EventData GetEventData(int index)
		{
			return null;
		}

		public BoardData GetBoardData(int index)
		{
			return null;
		}

		[AsyncStateMachine(typeof(_003CReleaseBoardData_003Ed__15))]
		public UniTask<bool> ReleaseBoardData(int index)
		{
			return default(UniTask<bool>);
		}

		[AsyncStateMachine(typeof(_003CCheckAndDownloadRequiredRunningConfigAddressable_003Ed__16))]
		public UniTask<bool> CheckAndDownloadRequiredRunningConfigAddressable()
		{
			return default(UniTask<bool>);
		}

		public EventBoardConfigItem GetCurrentBoardEventConfigItem()
		{
			return null;
		}

		public long SetRemainingTime(long diff)
		{
			return 0L;
		}

		public EventBoardConfigItem GetActiveAndNonFinishedBoardConfigItem()
		{
			return null;
		}

		public void RemoveRunningBoardConfigItem()
		{
		}

		public EventEntity GetRunningEventEntity()
		{
			return null;
		}

		public void SetRunningBoardConfigItem(EventBoardConfigItem eventBoardConfigItem)
		{
		}

		public EventBoardConfigItem GetEventBoardConfigItem(int index)
		{
			return null;
		}

		public EventBoardConfigItem GetFinishWaitingEventBoardConfigItem()
		{
			return null;
		}

		public bool IsAddressableDownloaded()
		{
			return false;
		}

		public bool IsNotificationAvailable()
		{
			return false;
		}

		public int GetNotificationCount()
		{
			return 0;
		}

		public string GetTitle(int index)
		{
			return null;
		}

		public string GetDesc(int index)
		{
			return null;
		}

		public string GetTitleKey(int index)
		{
			return null;
		}

		public string GetDescKey(int index)
		{
			return null;
		}

		public long GetDateScheduledSeconds(int index)
		{
			return 0L;
		}

		public string GetTag()
		{
			return null;
		}

		public bool IsUseUTC()
		{
			return false;
		}

		public void InitializeItemRewardConversion()
		{
		}

		public void ItemRewardConvertUpdated(ItemRewardConvertEvent.FeatureStatusUpdated e)
		{
		}

		public void ProcessOfferRewards(ItemRewardConvertEvent.FeatureStatusUpdated e)
		{
		}

		public void ProcessLevelUpRewards(ItemRewardConvertEvent.FeatureStatusUpdated e)
		{
		}

		public BoardEventHandlerBase()
		{
		}
	}
}
