using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Analytics;
using Animations;
using Audio;
using Common;
using CustomUI.TodoTasks;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using GameAddressables;
using GameEvents;
using GameLogic;
using GameLogic.Player;
using GameLogic.Player.MergeTasks;
using JetBrains.Annotations;
using Merge;
using Metacore.MergeMansion.Common.Options.Unity;
using Metacore.MergeMansion.Common.Rollbacks;
using Metacore.MergeMansion.UI.Libraries;
using Metaplay.Core.Client;
using Navigation;
using UI.Areas;
using UI.Popups;
using UnityEngine;

namespace UI.DailyTodo
{
	public class ToDoItemFactory : MonoBehaviour
	{
		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CCreate_003Ed__17 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder<UnityOption<ToDoTaskItem>> _003C_003Et__builder;

			public ITaskActionListener iTaskActionListener;

			public MergeTask task;

			public ToDoItemFactory _003C_003E4__this;

			public IMenuController menuController;

			public PlayerModel playerModel;

			public Action notifyChange;

			public IBoardController boardController;

			public AddressablesSession addressablesSession;

			public LocationLoader locationLoader;

			public ToDoTaskUIElement incompletableTaskUIElement;

			public ToDoTaskUIElement completableTaskUIElement;

			public bool showRewards;

			public AreaIcons areaIcons;

			public IAudioPlayer audioPlayer;

			public IPlayerClientContext playerContext;

			public INavigationController navigationController;

			public CancellationToken ct;

			public ProgressionEventManager progressionEventManager;

			public IActionsExecutor actionsExecutor;

			public BoultonLeagueEventManager boultonLeagueEventManager;

			public ISafeRollback rollback;

			public IScheduler scheduler;

			public IAnalyticsCollector analyticsCollector;

			[NonSerialized]
			public ProgressionEventTask _003CprogressionEventState_003E5__2;

			[NonSerialized]
			public UniTask<UnityOption<ToDoTaskItem>>.Awaiter _003C_003Eu__1;

			[NonSerialized]
			public ProgressionEventPrefabs _003Cprefabs_003E5__3;

			[NonSerialized]
			public UniTask<Metacore.MergeMansion.Common.Options.Option<ProgressionEventPrefabs>>.Awaiter _003C_003Eu__2;

			[NonSerialized]
			public UniTask<UnityOption<GameObject>>.Awaiter _003C_003Eu__3;

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
		public struct _003CLoadCollectibleBoardEventTodoItem_003Ed__18 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder<UnityOption<ToDoTaskItem>> _003C_003Et__builder;

			public CollectibleBoardEventProgressTask cbeTask;

			public ToDoItemFactory _003C_003E4__this;

			public CancellationToken ct;

			public IPlayerClientContext playerContext;

			public IMenuController menuController;

			public INavigationController navigationController;

			public ITaskActionListener iTaskActionListener;

			public Action notifyChange;

			[NonSerialized]
			public UniTask<UnityOption<GameObject>>.Awaiter _003C_003Eu__1;

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
		public struct _003CLoadGarageCleanupTodoItem_003Ed__20 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder<UnityOption<ToDoTaskItem>> _003C_003Et__builder;

			public GarageCleanupTask gcTask;

			public ToDoItemFactory _003C_003E4__this;

			public CancellationToken ct;

			public PlayerModel playerModel;

			public IAudioPlayer audioPlayer;

			public Action notifyChange;

			[NonSerialized]
			public UniTask<UnityOption<GameObject>>.Awaiter _003C_003Eu__1;

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
		public struct _003CLoadLeaderboardEventTodoItem_003Ed__19 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder<UnityOption<ToDoTaskItem>> _003C_003Et__builder;

			public LeaderboardEventProgressTask lbeTask;

			public ToDoItemFactory _003C_003E4__this;

			public CancellationToken ct;

			public IPlayerClientContext playerContext;

			public IMenuController menuController;

			public INavigationController navigationController;

			public IActionsExecutor actionsExecutor;

			public Action notifyChange;

			[NonSerialized]
			public UniTask<UnityOption<GameObject>>.Awaiter _003C_003Eu__1;

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

		[SerializeField]
		public Transform targetParent;

		[SerializeField]
		public ToDoTaskItemTitle titleItem;

		[SerializeField]
		public SerializableUnityOption<AutoMergeEventToDoProgressItem> autoMergeFeatureItem;

		[SerializeField]
		public ToDoTaskMergeGoalItem mergeGoalItemItem;

		[SerializeField]
		public ToDoTaskScheduleLockedMergeGoalItem scheduleLockedMergeGoalItem;

		[SerializeField]
		public TasksLockedAreaItem unlockAreaItem;

		[SerializeField]
		public ToDoUndiscoveredAreasItem undiscoveredAreasItem;

		[SerializeField]
		public ToDoComingSoonItem comingSoonAreaItem;

		[SerializeField]
		public ToDoTaskRepeatingTaskItem repeatingTaskItem;

		[SerializeField]
		public ToDoTaskMergeGoalItem characterTaskItem;

		[SerializeField]
		public ToDoTaskMergeGoalItem cardStackTaskItem;

		[SerializeField]
		[CanBeNull]
		public IconLibrary iconLibrary;

		[SerializeField]
		public AreaIcons areaIcons;

		[SerializeField]
		public ToDoFeatureLockedTaskItem progressEventsLockedItem;

		[SerializeField]
		public ToDoFeatureLockedTaskItem boardEventsLockedItem;

		public Transform TargetParent => null;

		[AsyncStateMachine(typeof(_003CCreate_003Ed__17))]
		public UniTask<UnityOption<ToDoTaskItem>> Create(MergeTask task, ITaskActionListener iTaskActionListener, PlayerModel playerModel, IPlayerClientContext playerContext, IMenuController menuController, INavigationController navigationController, ProgressionEventManager progressionEventManager, BoultonLeagueEventManager boultonLeagueEventManager, IBoardController boardController, IRewardsAnimations rewardsAnimations, IAudioPlayer audioPlayer, IActionsExecutor actionsExecutor, IAnalyticsCollector analyticsCollector, IScheduler scheduler, AddressablesSession addressablesSession, LocationLoader locationLoader, ISafeRollback rollback, Action notifyChange, AreaIcons areaIcons, CancellationToken ct, ToDoTaskUIElement incompletableTaskUIElement = ToDoTaskUIElement.NoChange, ToDoTaskUIElement completableTaskUIElement = ToDoTaskUIElement.NoChange, bool showRewards = true, bool cleanOpen = true)
		{
			return default(UniTask<UnityOption<ToDoTaskItem>>);
		}

		[AsyncStateMachine(typeof(_003CLoadCollectibleBoardEventTodoItem_003Ed__18))]
		public UniTask<UnityOption<ToDoTaskItem>> LoadCollectibleBoardEventTodoItem(CollectibleBoardEventProgressTask cbeTask, IPlayerClientContext playerContext, IMenuController menuController, INavigationController navigationController, ITaskActionListener iTaskActionListener, Action notifyChange, CancellationToken ct)
		{
			return default(UniTask<UnityOption<ToDoTaskItem>>);
		}

		[AsyncStateMachine(typeof(_003CLoadLeaderboardEventTodoItem_003Ed__19))]
		public UniTask<UnityOption<ToDoTaskItem>> LoadLeaderboardEventTodoItem(LeaderboardEventProgressTask lbeTask, IPlayerClientContext playerContext, IMenuController menuController, INavigationController navigationController, IActionsExecutor actionsExecutor, Action notifyChange, CancellationToken ct)
		{
			return default(UniTask<UnityOption<ToDoTaskItem>>);
		}

		[AsyncStateMachine(typeof(_003CLoadGarageCleanupTodoItem_003Ed__20))]
		public UniTask<UnityOption<ToDoTaskItem>> LoadGarageCleanupTodoItem(GarageCleanupTask gcTask, PlayerModel playerModel, IAudioPlayer audioPlayer, Action notifyChange, CancellationToken ct)
		{
			return default(UniTask<UnityOption<ToDoTaskItem>>);
		}

		public ToDoTaskMergeGoalItem CreateMergeGoalItem(HotspotMergeTask mergeGoalState, ITaskActionListener tabContentTasks, IMenuController menuController, IBoardController boardController, AddressablesSession addressablesSession, LocationLoader locationLoader, Action notifyChange, bool completed, PlayerModel playerModel, ToDoTaskUIElement incompletableTaskUIElement = ToDoTaskUIElement.NoChange, ToDoTaskUIElement completableTaskUIElement = ToDoTaskUIElement.NoChange, bool showRewards = true)
		{
			return null;
		}
	}
}
