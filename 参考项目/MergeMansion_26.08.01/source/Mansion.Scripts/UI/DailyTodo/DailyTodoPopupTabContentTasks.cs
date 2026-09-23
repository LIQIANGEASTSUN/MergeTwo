using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Code.GameLogic.GameEvents;
using CustomUI.TodoTasks;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using GameLogic.Area;
using GameLogic.Hotspots;
using GameLogic.Player;
using GameLogic.Player.MergeTasks;
using GameLogic.Player.Rewards;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.Common.Options.Unity;
using Metacore.MergeMansion.Common.Rollbacks;
using Metaplay.Core;
using UI.Areas;
using UI.Popups;
using UI.Tabs;
using UnityEngine;
using UnityEngine.UI;

namespace UI.DailyTodo
{
	public class DailyTodoPopupTabContentTasks : TabContent<DailyToDoMenuState>, ITabContent, ITaskActionListener
	{
		[Serializable]
		public struct References
		{
			public ScrollRect scrollRect;

			public RectTransform scrollContent;

			public RectTransform mask;

			public LayoutGroup contentLayoutGroup;

			public RectTransform contentLayoutGroupRectTransform;

			public TasksAreaCompletionSequence areaCompletionSequence;
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CCreateItemFromFactory_003Ed__60 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder<UnityOption<ToDoTaskItem>> _003C_003Et__builder;

			public DailyTodoPopupTabContentTasks _003C_003E4__this;

			public MergeTask taskState;

			public Rollback rollback;

			public Action notify;

			public CancellationToken ct;

			public ToDoTaskUIElement completableTaskUIElement;

			public bool showRewards;

			public Action<UnityOption<ToDoTaskItem>> onItemLoaded;

			[NonSerialized]
			public UniTask<UnityOption<ToDoTaskItem>>.Awaiter _003C_003Eu__1;

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
		public struct _003CDisableOverlayIfNeeded_003Ed__43 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public DailyTodoPopupTabContentTasks _003C_003E4__this;

			public CancellationToken ct;

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
		public struct _003CPopulateLockedItemsContent_003Ed__29 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public DailyTodoPopupTabContentTasks _003C_003E4__this;

			public Rollback rollback;

			public CancellationToken ct;

			[NonSerialized]
			public PlayerModel _003CplayerModel_003E5__2;

			[NonSerialized]
			public IEnumerator<KeyValuePair<ProgressionEventId, ProgressionEventInfo>> _003C_003E7__wrap2;

			[NonSerialized]
			public UniTask<UnityOption<ToDoTaskItem>>.Awaiter _003C_003Eu__1;

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
		public struct _003CPopulateToDoItems_003Ed__28 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public DailyTodoPopupTabContentTasks _003C_003E4__this;

			public Rollback rollback;

			public CancellationToken ct;

			[NonSerialized]
			public int? _003Cpadding_003E5__2;

			[NonSerialized]
			public TasksUnlockedAreaItem _003CareaToCompleteUnlockedAreaItem_003E5__3;

			[NonSerialized]
			public IEnumerator<MergeTask> _003C_003E7__wrap3;

			[NonSerialized]
			public MergeTask _003CtoDoTaskState_003E5__5;

			[NonSerialized]
			public UniTask<UnityOption<ToDoTaskItem>>.Awaiter _003C_003Eu__1;

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

		[SerializeField]
		public References refs;

		[SerializeField]
		public ToDoItemFactory itemFactory;

		[SerializeField]
		public TasksUnlockedAreaItem unlockedAreaItemPrefab;

		[SerializeField]
		public TasksStoryEventItem storyEventItemPrefab;

		[SerializeField]
		public TasksRepeatingTasksItem repeatingTasksItemPrefab;

		[SerializeField]
		public AreaIcons areaIcons;

		[SerializeField]
		public StoryEventsUI storyEventsUI;

		[NonSerialized]
		public readonly List<ToDoTaskItem> instantiatedItems;

		[NonSerialized]
		public bool runningRewardsAnimation;

		[NonSerialized]
		public int activeCurrencyClaims;

		[NonSerialized]
		public float overlayDisableDelay;

		[NonSerialized]
		public DailyTodoPopupContentState contentState;

		[NonSerialized]
		public readonly Dictionary<AreaId, ITasksUnlockedAreaItem> unlockedAreaItemsByAreaId;

		[NonSerialized]
		public ITasksRepeatingTasksItem repeatingTasksItem;

		[NonSerialized]
		public Option<Rollback> cachedRollback;

		[NonSerialized]
		public readonly List<IPlayerReward> _difficultyRewardBuffer;

		public AreaIcons AreaIcons => null;

		public IEnumerable<ToDoTaskItem> InstantiatedItems => null;

		public override ScrollRect ScrollRect => null;

		public ulong Flags { get; set; }

		public override void PopulateContent()
		{
		}

		[AsyncStateMachine(typeof(_003CPopulateToDoItems_003Ed__28))]
		public UniTask PopulateToDoItems(Rollback rollback, CancellationToken ct)
		{
			return default(UniTask);
		}

		[AsyncStateMachine(typeof(_003CPopulateLockedItemsContent_003Ed__29))]
		public UniTask PopulateLockedItemsContent(Rollback rollback, CancellationToken ct)
		{
			return default(UniTask);
		}

		public override void DisposeContent(DisposeContentReason reason)
		{
		}

		public override bool ShouldResetSavedScrollPositionOnCleanOpen()
		{
			return false;
		}

		public void ReInitTasks()
		{
		}

		public void UpdateTaskContents()
		{
		}

		public void HandleAreaCompletion(TasksUnlockedAreaItem areaItem)
		{
		}

		public void OnAreaCompletionSequenceFinished(TasksUnlockedAreaItem areaItem, IWalletState walletState, RandomPCG rewardContainerRandom)
		{
		}

		public void RefreshContent()
		{
		}

		public void OnTaskItemLoaded(UnityOption<ToDoTaskItem> itemOption)
		{
		}

		public bool CanCompleteBoardEventTask()
		{
			return false;
		}

		public void ProcessCompleteCollectibleBoardEventTaskTap(ToDoProgressCollectibleBoardEventItem item, CollectibleBoardEventMergeTask task, List<(Vector3, IPlayerReward)> visualRewards)
		{
		}

		public void CompleteCollectibleBoardEventTask(CollectibleBoardEventMergeTask task)
		{
		}

		public void AnimateCompletedTaskRewards(ToDoProgressCollectibleBoardEventItem item, CollectibleBoardEventMergeTask task, List<(Vector3, IPlayerReward)> visualRewards)
		{
		}

		public bool EnableOverlayIfNeeded(List<(Vector3, IPlayerReward)> rewardAnimations)
		{
			return false;
		}

		[AsyncStateMachine(typeof(_003CDisableOverlayIfNeeded_003Ed__43))]
		public UniTask DisableOverlayIfNeeded(CancellationToken ct)
		{
			return default(UniTask);
		}

		public void ProcessShowBoardEventTaskTap(MergeBoardId targetBoardId)
		{
		}

		public void ProcessShowCollectibleBoardEventTaskTap(CollectibleBoardEventMergeTask task)
		{
		}

		public void ProcessShowButtonTap(UnlockAreaTask task)
		{
		}

		public void HandleHotspotCompletion(HotspotMergeTask task)
		{
		}

		public void CompleteHotspot(IHotspotDefinition hotspot)
		{
		}

		public void ProcessShowButtonTap(HotspotMergeTask task)
		{
		}

		public void ProcessShowButtonTap(RepeatableTask task)
		{
		}

		public void ProcessShowButtonTap(HotspotId scrollToHotspot, Action onBeginScroll)
		{
		}

		public void OnShowHotspotFinished()
		{
		}

		public TasksUnlockedAreaItem CheckForAreaCompletion()
		{
			return null;
		}

		public ITasksUnlockedAreaItem EnsureUnlockedAreaItem(IAreaInfo area)
		{
			return null;
		}

		public ITasksRepeatingTasksItem EnsureRepeatingTasksItem()
		{
			return null;
		}

		public ITasksUnlockedAreaItem WrapTaskItemByAreaIfNecessary(ToDoTaskItem taskItem, MergeTask task)
		{
			return null;
		}

		public ITasksRepeatingTasksItem WrapRepeatingTaskItemIfNecessary(ToDoTaskItem taskItem, MergeTask task)
		{
			return null;
		}

		public Option<ITasksUnlockedAreaItem> GetTasksUnlockedAreaItem(MergeTask task)
		{
			return default(Option<ITasksUnlockedAreaItem>);
		}

		public bool IsTaskCategoryListDisabled(PlayerModel playerModel)
		{
			return false;
		}

		[AsyncStateMachine(typeof(_003CCreateItemFromFactory_003Ed__60))]
		public UniTask<UnityOption<ToDoTaskItem>> CreateItemFromFactory(MergeTask taskState, Rollback rollback, Action notify, ToDoTaskUIElement completableTaskUIElement, bool showRewards, Action<UnityOption<ToDoTaskItem>> onItemLoaded, CancellationToken ct)
		{
			return default(UniTask<UnityOption<ToDoTaskItem>>);
		}

		public void DebugRefresh()
		{
		}
	}
}
