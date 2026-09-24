using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using IFix.Core;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT
{
	public class ScreenPopup : IGameModule, IUserDataHolder
	{
		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CWait_003Ed__83 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public int delay_;

			public ScreenPopup _003C_003E4__this;

			[NonSerialized]
			public UIManager _003Cui_003E5__2;

			[NonSerialized]
			public TaskAwaiter _003C_003Eu__1;

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

		public List<IScreenPopup> list;

		public readonly Stack<(List<IScreenPopup>, PopupType, int)> cache;

		[NonSerialized]
		public readonly Dictionary<PopupType, bool> state;

		public IScreenPopup active;

		public UIResource wait;

		public PopupType query;

		public bool changed;

		public Dictionary<PopupType, long> queryTS;

		[NonSerialized]
		public readonly Dictionary<int, int> record;

		[NonSerialized]
		public long refreshTS;

		[NonSerialized]
		public readonly Comparison<IScreenPopup> WeightSort;

		[NonSerialized]
		public int popupCount;

		[NonSerialized]
		public int popupLimit;

		[NonSerialized]
		public int queueFirstSeq;

		[NonSerialized]
		public bool blockIgnore;

		[NonSerialized]
		public bool blockDelay;

		[NonSerialized]
		public bool paused;

		[NonSerialized]
		public readonly List<ActivityEndPopupEntry> eventEndEntries;

		[NonSerialized]
		public readonly PopupActivityEndAggregate eventEndPopup;

		public bool QueueReady => false;

		public bool IsPaused => false;

		public PopupType PopupNone => default(PopupType);

		public bool HasPendingEventEndEntries => false;

		public IReadOnlyList<ActivityEndPopupEntry> GetPendingEventEndEntries()
		{
			return null;
		}

		public void DebugReset()
		{
		}

		[IDTag(1)]
		public bool HasPopup()
		{
			return false;
		}

		[IDTag(0)]
		public bool HasPopup(IScreenPopup target_)
		{
			return false;
		}

		void IUserDataHolder.FillData(LocalSaveData archive)
		{
		}

		void IUserDataHolder.SetData(LocalSaveData archive)
		{
		}

		public void ClearResetState()
		{
		}

		public void Reset()
		{
		}

		public void Startup()
		{
		}

		public void LoadConfig()
		{
		}

		public void Block(bool delay_ = false, bool ignore_ = false)
		{
		}

		public void CheckTick()
		{
		}

		public void CheckRefresh()
		{
		}

		public void CheckClose()
		{
		}

		public void Check(int c_ = 1)
		{
		}

		public void CheckIgnoreDelay(int c_)
		{
		}

		public void TryQueue(IScreenPopup target_, PopupType state_, object custom_ = null)
		{
		}

		public bool TryQueueFirst(IScreenPopup target_, PopupType state_, object custom_ = null)
		{
			return false;
		}

		public bool TryQueueInternal(IScreenPopup target_, PopupType state_, object custom_, bool queueFirst_)
		{
			return false;
		}

		public void Queue(IScreenPopup target_, object custom_ = null)
		{
		}

		public bool TryDequeue(IScreenPopup target_)
		{
			return false;
		}

		public bool TryCollectEventEndPopup(IScreenPopup target_, PopupType state_, object custom_)
		{
			return false;
		}

		public bool ShouldInterceptCollectedEventEndPopup()
		{
			return false;
		}

		public static int GetEventEndPopupIntegrationTypeId()
		{
			return 0;
		}

		public static string BuildEventEndPopupRewardInfo(IReadOnlyList<RewardCommitData> rewards_)
		{
			return null;
		}

		public static bool IsEventEndAggregateFeatureUnlocked()
		{
			return false;
		}

		public static string GetEventEndPopupTitleKey(EventTheme popupTheme_, ActivityVisual activityVisual_)
		{
			return null;
		}

		public static bool TryGetEventEndPopupTitleKey(EventTheme theme_, out string title_)
		{
			title_ = null;
			return false;
		}

		public void CommitEventEndRewards(object custom_, ActivityEndPopupEntry entry_, bool consumeRewardRef_)
		{
		}

		public void CommitEventEndRewardList(List<RewardCommitData> rewards_, ActivityEndPopupEntry entry_)
		{
		}

		public void CommitEventEndReward(RewardCommitData reward_, ActivityEndPopupEntry entry_)
		{
		}

		public void UpsertEventEndEntry(ActivityEndPopupEntry entry_)
		{
		}

		public static int CompareEventEndDisplay(ActivityEndPopupEntry a_, ActivityEndPopupEntry b_)
		{
			return 0;
		}

		public static void CopyEventEndDisplay(ActivityEndPopupEntry from_, ActivityEndPopupEntry to_)
		{
		}

		public void SortEventEndEntries()
		{
		}

		public void TryQueueEventEndAggregate(PopupType state_)
		{
		}

		public List<ActivityEndPopupEntry> ConsumeEventEndEntriesForPopup()
		{
			return null;
		}

		public void WhenClose(UIResource ui_)
		{
		}

		public void Next()
		{
		}

		public void LimitClear()
		{
		}

		public void EndClear(bool clearPopupState_ = true)
		{
		}

		public void Clear(bool clearPopupState_ = true)
		{
		}

		public void ResetState(PopupType state_)
		{
		}

		public bool CheckState(PopupType state_)
		{
			return false;
		}

		[IDTag(0)]
		public void Wait(UIResource ui_)
		{
		}

		public void Query(PopupType state_)
		{
		}

		public void TryQuery(PopupType state_)
		{
		}

		public bool TryResumeCache()
		{
			return false;
		}

		public void DropCache()
		{
		}

		[IDTag(1)]
		public void ClearPopupQueueState()
		{
		}

		[IDTag(0)]
		public static void ClearPopupQueueState(List<IScreenPopup> list_)
		{
		}

		public void WhenEnterGame()
		{
		}

		public void WhenOutOfEnergy()
		{
		}

		public void WhenOutOfDiamond()
		{
		}

		public void SetPause(bool paused_)
		{
		}

		[AsyncStateMachine(typeof(_003CWait_003Ed__83))]
		[IDTag(1)]
		public UniTask Wait(int delay_ = 1000)
		{
			return default(UniTask);
		}
	}
}
