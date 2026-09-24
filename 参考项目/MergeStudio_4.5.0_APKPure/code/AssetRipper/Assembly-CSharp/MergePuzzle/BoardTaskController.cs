using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using MergePuzzle.Abstract;
using MergePuzzle.RecurringEvents;
using Paxie;
using Paxie.MergePuzzle.HotSales.Model;
using UnityEngine;

namespace MergePuzzle
{
	public class BoardTaskController : ScrollableItem, IEventReceiver<TaskEvent.TaskDoneBoardTaskItemDisappearFinished>, IEventReceiverBase, IEventReceiver<EntityUpdateEvent.LevelUpdateEntity>, IEventReceiver<EntityUpdateEvent.LevelXPUpdate>, IEventReceiver<TaskEvent.LevelUpDismissed>, IEventReceiver<CameraEvent.CameraChangedRequest>, IEventReceiver<BoardEvent.DestroyItemAfterTaskComplete>, IEventReceiver<TaskEvent.TaskDoneProcessStarted>, IEventReceiver<CameraEvent.CameraChangeCompleted>, IEventReceiver<TaskEvent.TaskDoneXPAndRewardAnimationsComplete>, IEventReceiver<TaskEvent.LastBoardTaskMovementFinished>, IEventReceiver<BoardEvent.FillUpcomingTasksAfterXPRollout>, IEventReceiver<SrDebuggerEvent.SpawnDynamicBoardTask>, IEventReceiver<RecurringEvent.ActivateEvent>, IEventReceiver<RecurringEvent.InitializeEvent>, IEventReceiver<RecurringEvent.FinishEventOnUpdateTick>, IEventReceiver<TaskEvent.UpdateTaskUI>, IEventReceiver<TaskEvent.CreateTimeLimitedTask>, IEventReceiver<HotSalesEvents.SlotPurchased>, IEventReceiver<HotSalesEvents.Refresh>, IEventReceiver<HotSalesEvents.Activate>, IEventReceiver<TaskEvent.CheckTaskDiscoveryStatus>, IEventReceiver<MetaEvent.LastMetaAnimatedXPArrived>
	{
		[CompilerGenerated]
		public sealed class _003C_003Ec__DisplayClass50_0
		{
			public int taskNo;

			public bool _003CSpawnBoardTaskItems_003Eb__0(BoardTaskItemController c)
			{
				return false;
			}
		}

		[CompilerGenerated]
		public sealed class _003C_003Ec__DisplayClass77_0
		{
			public List<BoardTaskItem> newTasks;

			public void _003CProcessLevelUpDismissAndGenerateBoardTasks_003Eb__0(IEventPointsOnBoardTaskHandler handler)
			{
			}

			public void _003CProcessLevelUpDismissAndGenerateBoardTasks_003Eb__1(IExtraRewardItemOnBoardTaskHandler handler)
			{
			}
		}

		[CompilerGenerated]
		public sealed class _003C_003Ec__DisplayClass80_0
		{
			public BoardTaskController _003C_003E4__this;

			public List<BoardTaskItem> addedTasks;

			public bool _003CSetAddedTasksAfterTaskCompletion_003Eb__0()
			{
				return false;
			}

			public void _003CSetAddedTasksAfterTaskCompletion_003Eb__1(IEventPointsOnBoardTaskHandler handler)
			{
			}

			public void _003CSetAddedTasksAfterTaskCompletion_003Eb__2(IExtraRewardItemOnBoardTaskHandler handler)
			{
			}
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CProcessLevelUpDismissAndGenerateBoardTasks_003Ed__77 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

			public BoardTaskController _003C_003E4__this;

			[NonSerialized]
			public _003C_003Ec__DisplayClass77_0 _003C_003E8__1;

			[NonSerialized]
			public UniTask<bool>.Awaiter _003C_003Eu__1;

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
		public struct _003CProcessTaskAddition_003Ed__57 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder<bool> _003C_003Et__builder;

			public List<BoardTaskItem> newTasks;

			public BoardTaskController _003C_003E4__this;

			public BoardTaskItemController destroyItem;

			public bool canInterstitialBeShown;

			[NonSerialized]
			public UniTask<bool>.Awaiter _003C_003Eu__1;

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
		public struct _003CProcessTaskDoneBoardItemDisappearFinish_003Ed__69 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

			public BoardTaskItem completedTaskItem;

			public BoardTaskController _003C_003E4__this;

			[NonSerialized]
			public Cysharp.Threading.Tasks.YieldAwaitable.Awaiter _003C_003Eu__1;

			[NonSerialized]
			public int _003CcompletedTaskNo_003E5__2;

			[NonSerialized]
			public BoardTaskItemController _003CremovedItem_003E5__3;

			[NonSerialized]
			public bool _003CcanInterstitialBeShown_003E5__4;

			[NonSerialized]
			public bool _003CrateUsPopupWontBeShown_003E5__5;

			[NonSerialized]
			public TimeSpan _003CdelayForDoneButtonInteraction_003E5__6;

			[NonSerialized]
			public UniTask<bool>.Awaiter _003C_003Eu__2;

			[NonSerialized]
			public UniTask.Awaiter _003C_003Eu__3;

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
		public struct _003CSetAddedTasksAfterTaskCompletion_003Ed__80 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder<bool> _003C_003Et__builder;

			public BoardTaskController _003C_003E4__this;

			public List<BoardTaskItem> addedTasks;

			[NonSerialized]
			public _003C_003Ec__DisplayClass80_0 _003C_003E8__1;

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
		public struct _003CSpawnBoardTaskItems_003Ed__50 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder<bool> _003C_003Et__builder;

			public List<BoardTaskItem> taskList;

			public bool isInitialize;

			public BoardTaskController _003C_003E4__this;

			public bool triggerInterstitial;

			[NonSerialized]
			public _003C_003Ec__DisplayClass50_0 _003C_003E8__1;

			[NonSerialized]
			public bool _003CpreventRateUs_003E5__2;

			[NonSerialized]
			public bool _003CisFirst_003E5__3;

			[NonSerialized]
			public List<BoardTaskItem> _003CremovalTaskItems_003E5__4;

			[NonSerialized]
			public List<BoardTaskItemController> _003CaddedBoardTaskItemControllers_003E5__5;

			[NonSerialized]
			public bool _003CisEvent_003E5__6;

			[NonSerialized]
			public UniTask.Awaiter _003C_003Eu__1;

			[NonSerialized]
			public Cysharp.Threading.Tasks.YieldAwaitable.Awaiter _003C_003Eu__2;

			[NonSerialized]
			public UniTask<bool>.Awaiter _003C_003Eu__3;

			[NonSerialized]
			public List<BoardTaskItem>.Enumerator _003C_003E7__wrap6;

			[NonSerialized]
			public BoardTaskItem _003CboardTaskItem_003E5__8;

			[NonSerialized]
			public BoardTaskItemController _003CtaskItemController_003E5__9;

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
		public struct _003CSpawnDynamicTask_003Ed__40 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

			public BoardTaskController _003C_003E4__this;

			public BalanceBoardTaskConfigModel taskConfig;

			[NonSerialized]
			public UniTask<bool>.Awaiter _003C_003Eu__1;

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
		public struct _003CSpawnTask_003Ed__41 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncVoidMethodBuilder _003C_003Et__builder;

			public BoardTaskItem task;

			public BoardTaskController _003C_003E4__this;

			[NonSerialized]
			public List<BoardTaskItem> _003CtaskList_003E5__2;

			[NonSerialized]
			public UniTask.Awaiter _003C_003Eu__1;

			[NonSerialized]
			public UniTask<bool>.Awaiter _003C_003Eu__2;

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
		public struct _003CSpawnTasksAsyncAfterLevelUpDismiss_003Ed__64 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder<bool> _003C_003Et__builder;

			public BoardTaskController _003C_003E4__this;

			public List<BoardTaskItem> newTasks;

			public bool isInitialize;

			[NonSerialized]
			public UniTask<bool>.Awaiter _003C_003Eu__1;

			[NonSerialized]
			public Cysharp.Threading.Tasks.YieldAwaitable.Awaiter _003C_003Eu__2;

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
		public BoardScrollableAreaController _boardScrollableAreaController;

		public const float MARGIN = 0f;

		[NonSerialized]
		public BoardEntity _boardEntity;

		[NonSerialized]
		public EventEntity _eventEntity;

		[NonSerialized]
		public BoardData _boardData;

		[NonSerialized]
		public bool _levelUp;

		[NonSerialized]
		public Vector3 _tmpTaskPosition;

		[NonSerialized]
		public List<BoardTaskItem> _tmpNewTasks;

		[NonSerialized]
		public float _targetDoneWaitingSecondsLevel1;

		[NonSerialized]
		public CameraController _cameraController;

		[NonSerialized]
		public TaskDoneHintHandler _taskDoneHintHandler;

		[NonSerialized]
		public List<BoardTaskItem> _addedTasksAfterTaskCompletion;

		[NonSerialized]
		public bool _isSpawnReady;

		[NonSerialized]
		public bool _tasksInitialized;

		[NonSerialized]
		public bool _tasksSpawnLocked;

		[NonSerialized]
		public float _dynamicTaskTime;

		public const float DynamicTaskCheckTimePeriod = 0.5f;

		[NonSerialized]
		public HotSalesHandler _hotSalesHandler;

		public bool IsSpawnReady => false;

		public bool TasksSpawnLocked => false;

		public long LastDynamicTaskDoneAt { get; set; }

		public bool LockSpawningDynamicTask { get; set; }

		[HideInInspector]
		public List<BoardTaskItemController> BoardTaskItemControllers => null;

		public TaskDoneHintHandler TaskDoneHintHandler
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		public override void Awake()
		{
		}

		public override void Start()
		{
		}

		public override void UpdateTick()
		{
		}

		public void CheckDynamicTaskSpawn()
		{
		}

		public bool IsScrollable()
		{
			return false;
		}

		[AsyncStateMachine(typeof(_003CSpawnDynamicTask_003Ed__40))]
		public UniTaskVoid SpawnDynamicTask(BalanceBoardTaskConfigModel taskConfig)
		{
			return default(UniTaskVoid);
		}

		[AsyncStateMachine(typeof(_003CSpawnTask_003Ed__41))]
		public void SpawnTask(BoardTaskItem task)
		{
		}

		public void VerifyAndSpawnMissingTasks(List<BoardTaskItem> activeTasks)
		{
		}

		public bool IsDynamicTaskValidToSpawn(BalanceBoardTaskConfigModel taskConfig)
		{
			return false;
		}

		public void OnEvent(TaskEvent.CreateTimeLimitedTask e)
		{
		}

		public void OnEvent(TaskEvent.CheckTaskDiscoveryStatus e)
		{
		}

		public void InitializeTasks(List<BoardTaskItem> taskList, Action<bool> callback)
		{
		}

		public BoardTaskItemController InstantiateSpecialBoardTaskItemViaPopup(SpecialTaskInfo specialTaskInfo)
		{
			return null;
		}

		public BoardTimeLimitedTaskItemController InstantiateTimeLimitedTaskItem(TimeLimitedTaskInfo timeLimitedTaskInfo)
		{
			return null;
		}

		public BoardTaskEntity GetBoardTaskEntity()
		{
			return null;
		}

		[AsyncStateMachine(typeof(_003CSpawnBoardTaskItems_003Ed__50))]
		public UniTask<bool> SpawnBoardTaskItems(List<BoardTaskItem> taskList, bool isInitialize = false, bool triggerInterstitial = false)
		{
			return default(UniTask<bool>);
		}

		public void OnEvent(TaskEvent.LastBoardTaskMovementFinished e)
		{
		}

		public bool FinalizeTaskAddition(List<BoardTaskItemController> addedBoardTaskItemControllers, bool isInitialize)
		{
			return false;
		}

		public void RefreshScrollableArea(bool refreshImmediate, ScrollableItem scrollableItem = null, int boardTaskNo = -1)
		{
		}

		public void SetBoardEntity(BoardEntity boardEntity)
		{
		}

		public void ArrangeRateUsNative(bool rateUsPopupWontBeShown, int completedTaskNo)
		{
		}

		public BoardTaskItemController GetSpecialTaskItemController()
		{
			return null;
		}

		[AsyncStateMachine(typeof(_003CProcessTaskAddition_003Ed__57))]
		public UniTask<bool> ProcessTaskAddition(List<BoardTaskItem> newTasks, bool canInterstitialBeShown, BoardTaskItemController destroyItem)
		{
			return default(UniTask<bool>);
		}

		public void SetInteractableScrollableItemsStatus(bool enable)
		{
		}

		public override void ArrangeClickable(bool isInteractable)
		{
		}

		public void ArrangeDoneUIInteractionForLevelup()
		{
		}

		public BoardTaskItemController GetCompletedTaskItemController(int removedItemIndex)
		{
			return null;
		}

		public void KillCompletedTask(BoardTaskItemController itemToDestroy, bool destroyGameObject)
		{
		}

		public BoardController GetBoard()
		{
			return null;
		}

		[AsyncStateMachine(typeof(_003CSpawnTasksAsyncAfterLevelUpDismiss_003Ed__64))]
		public UniTask<bool> SpawnTasksAsyncAfterLevelUpDismiss(List<BoardTaskItem> newTasks, bool isInitialize)
		{
			return default(UniTask<bool>);
		}

		public bool IsItemInTask(ItemEntity itemEntity)
		{
			return false;
		}

		public TaskDoneHintHandler.TaskDoneTutorialHint ProcessTaskHandTapTutorialHint(float elapsedTime)
		{
			return default(TaskDoneHintHandler.TaskDoneTutorialHint);
		}

		public void UpdateTasksUI()
		{
		}

		public void RefreshTaskViews()
		{
		}

		[AsyncStateMachine(typeof(_003CProcessTaskDoneBoardItemDisappearFinish_003Ed__69))]
		public UniTaskVoid ProcessTaskDoneBoardItemDisappearFinish(BoardTaskItem completedTaskItem)
		{
			return default(UniTaskVoid);
		}

		public void Initialize(BoardEvent.InitializeBoard e, Action<bool> callback)
		{
		}

		public void Inject()
		{
		}

		public void ArrangeTempNewTasksForLevelUp()
		{
		}

		public void TryToShowInterstitial(bool canInterstitialBeShown, bool isDynamicTask)
		{
		}

		public int GetTaskIndex(int taskNo)
		{
			return 0;
		}

		public void SendFirebaseEventsAfterTaskCompletion(BoardTaskItem completedTask)
		{
		}

		public void CheckSeasonPointGetEvent(BoardTaskItem completedTask)
		{
		}

		[AsyncStateMachine(typeof(_003CProcessLevelUpDismissAndGenerateBoardTasks_003Ed__77))]
		public UniTaskVoid ProcessLevelUpDismissAndGenerateBoardTasks()
		{
			return default(UniTaskVoid);
		}

		public bool IsTickable(BoardTaskGoal boardTaskGoal)
		{
			return false;
		}

		public bool IsDoneable(ItemInfo itemInfo)
		{
			return false;
		}

		[AsyncStateMachine(typeof(_003CSetAddedTasksAfterTaskCompletion_003Ed__80))]
		public UniTask<bool> SetAddedTasksAfterTaskCompletion(List<BoardTaskItem> addedTasks)
		{
			return default(UniTask<bool>);
		}

		public void ArrangeHotSales()
		{
		}

		public void UpdateBoardTasks()
		{
		}

		public bool IsOpenHotSalesIcon(BoardTaskGoal boardTaskGoal)
		{
			return false;
		}

		public void OnEvent(TaskEvent.TaskDoneBoardTaskItemDisappearFinished e)
		{
		}

		public void OnEvent(BoardEvent.DestroyItemAfterTaskComplete e)
		{
		}

		public void OnEvent(EntityUpdateEvent.LevelUpdateEntity e)
		{
		}

		public void OnEvent(TaskEvent.LevelUpDismissed e)
		{
		}

		public void OnEvent(EntityUpdateEvent.LevelXPUpdate e)
		{
		}

		public void OnEvent(TaskEvent.TaskDoneProcessStarted e)
		{
		}

		public void OnEvent(CameraEvent.CameraChangedRequest e)
		{
		}

		public void OnEvent(CameraEvent.CameraChangeCompleted e)
		{
		}

		public void OnEvent(TaskEvent.TaskDoneXPAndRewardAnimationsComplete e)
		{
		}

		public void OnEvent(BoardEvent.FillUpcomingTasksAfterXPRollout e)
		{
		}

		public void OnEvent(SrDebuggerEvent.SpawnDynamicBoardTask e)
		{
		}

		public void OnEvent(RecurringEvent.ActivateEvent e)
		{
		}

		public void OnEvent(RecurringEvent.InitializeEvent e)
		{
		}

		public void OnEvent(RecurringEvent.FinishEventOnUpdateTick e)
		{
		}

		public void OnEvent(TaskEvent.UpdateTaskUI e)
		{
		}

		public void OnEvent(HotSalesEvents.SlotPurchased e)
		{
		}

		public void OnEvent(HotSalesEvents.Refresh e)
		{
		}

		public void OnEvent(HotSalesEvents.Activate e)
		{
		}

		public void OnEvent(MetaEvent.LastMetaAnimatedXPArrived e)
		{
		}
	}
}
