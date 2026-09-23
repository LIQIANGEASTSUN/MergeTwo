using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Animations;
using Audio;
using Code.GameLogic.GameEvents;
using Common;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using GameAddressables;
using GameLogic;
using GameLogic.Area;
using GameLogic.Hotspots;
using GameLogic.Merge;
using GameLogic.Player;
using GameLogic.Player.MergeTasks;
using GameLogic.Player.Requirements;
using GameLogic.Player.Rewards;
using Merge;
using Metacore.MergeMansion;
using Metacore.MergeMansion.Common.Addressables;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.Common.Rollbacks;
using Metacore.MergeMansion.UI.Libraries;
using Metacore.MergeMansion.Utility;
using Metacore.Rendering;
using Metaplay.Core.Client;
using Navigation;
using UI.Areas;
using UI.Buttons;
using UI.Indicators;
using UI.Popups;
using UnityEngine;
using UnityEngine.UI;
using Utility;

namespace UI.Board
{
	public class BoardViewTaskHandler : MonoBehaviour, ITaskTab
	{
		public readonly struct TaskSortEntry
		{
			public readonly BoardMergeGoalTaskGroupCard Card;

			public readonly BoardMergeGoalTaskGroupTaskContainer Container;

			public readonly BoardMergeGoalTaskGroupTask Task;

			public readonly MergeTask MergeTask;

			public readonly int AreaRow;

			public readonly int TaskOrder;

			public readonly int TieBreak;

			public readonly bool IsStoryEvent;

			public readonly bool IsRepeatable;

			public readonly bool IsLockedArea;

			public readonly bool IsLockedMergeTask;

			public readonly bool IsMiniGame;

			public readonly string MiniGameThemeId;

			public readonly bool IsCharacter;

			public readonly bool CanBeCompleted;

			public readonly bool HasBonusTime;

			public TaskSortEntry(BoardMergeGoalTaskGroupCard card, BoardMergeGoalTaskGroupTask task, PlayerModel player, IReadOnlyDictionary<AreaId, int> areaPriorityOrder, IReadOnlyDictionary<MergeTask, int> taskIndexMap)
			{
				Card = null;
				Container = null;
				Task = null;
				MergeTask = null;
				AreaRow = 0;
				TaskOrder = 0;
				TieBreak = 0;
				IsStoryEvent = false;
				IsRepeatable = false;
				IsLockedArea = false;
				IsLockedMergeTask = false;
				IsMiniGame = false;
				MiniGameThemeId = null;
				IsCharacter = false;
				CanBeCompleted = false;
				HasBonusTime = false;
			}
		}

		public enum CardInfoGroup
		{
			None = 0,
			Area = 1,
			Character = 2,
			MiniGame = 3
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CDisableOverlayIfNeededAsync_003Ed__144 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public CancellationToken ct;

			public BoardViewTaskHandler _003C_003E4__this;

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
		public struct _003CLoadTaskItemsAsync_003Ed__128 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder<bool> _003C_003Et__builder;

			public BoardViewTaskHandler _003C_003E4__this;

			public CancellationToken ct;

			[NonSerialized]
			public GameObject _003CbasePrefab_003E5__2;

			[NonSerialized]
			public UniTask<IDisposableAssetHandle<GameObject>>.Awaiter _003C_003Eu__1;

			[NonSerialized]
			public List<MergeTask>.Enumerator _003C_003E7__wrap2;

			[NonSerialized]
			public MergeTask _003Ctask_003E5__4;

			[NonSerialized]
			public bool _003CisNewCardRoot_003E5__5;

			[NonSerialized]
			public UniTask<BoardMergeGoalTaskGroupCard>.Awaiter _003C_003Eu__2;

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
		public struct _003CPollSorting_003Ed__137 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public BoardViewTaskHandler _003C_003E4__this;

			public CancellationToken ct;

			[NonSerialized]
			public bool _003CeventsOnBoardEnabled_003E5__2;

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

		[Header("Info")]
		[SerializeField]
		public Transform taskParent;

		[SerializeField]
		public CanvasGroup taskCanvasGroup;

		[SerializeField]
		public CanvasGroup taskPanelContent;

		[SerializeField]
		public RectTransform _scrollerParentTransform;

		[Header("Items")]
		[SerializeField]
		public ScrollRect scrollRect;

		[SerializeField]
		public RectTransform mergeBoardPanelRect;

		[SerializeField]
		public RectTransform taskPanel;

		[SerializeField]
		public RectTransform highlightPanel;

		[SerializeField]
		public float _taskCardViewOffsetY;

		[Header("Board")]
		[SerializeField]
		public RectTransform boardTransform;

		[SerializeField]
		public Transform _infoPanelContainer;

		[SerializeField]
		public Transform _pocketParent;

		[Header("Task Group")]
		[SerializeField]
		public Image _fadeOverlay;

		[SerializeField]
		public BoardTaskCountIndicator _leftSideCountIndicator;

		[SerializeField]
		public BoardTaskCountIndicator _rightSideCountIndicator;

		[SerializeField]
		public GameObject _leftGradient;

		[SerializeField]
		public GameObject _rightGradient;

		[SerializeField]
		public RectTransform _taskGroupCompletionPanel;

		[SerializeField]
		public AnimationCurve _taskGroupCompletionPanelAppearEase;

		[SerializeField]
		public float _scrollAnimationDuration;

		[SerializeField]
		public AnimationCurve _scrollAnimationEase;

		[Header("Display Events on Board")]
		[SerializeField]
		public BoardViewEventHandler _eventHandler;

		[SerializeField]
		public TweenedButton _tradesButton;

		[SerializeField]
		public RedDotIndicator _tradesButtonRedDot;

		[SerializeField]
		public TweenedButton _tradesIndicator;

		[SerializeField]
		public RectTransform _resourcesPosition;

		[NonSerialized]
		public PlayerModel playerModel;

		[NonSerialized]
		public IPlayerClientContext playerContext;

		[NonSerialized]
		public MenuController menus;

		[NonSerialized]
		public INavigationController _navigationController;

		[NonSerialized]
		public HotspotController _hotspotController;

		[NonSerialized]
		public ICameraHotspotNavigator _cameraHotspotNavigator;

		[NonSerialized]
		public IBoardController board;

		[NonSerialized]
		public IScheduler scheduler;

		[NonSerialized]
		public AddressablesSession addressablesSession;

		[NonSerialized]
		public ITitleBarRewardWidgets titleBarRewardWidgets;

		[NonSerialized]
		public IAudioPlayer audio;

		public IRewardsAnimations rewardsAnimations;

		[NonSerialized]
		public IHotspotCompletableQuery _hotspotCompletableQuery;

		[NonSerialized]
		public LocationLoader _locationLoader;

		[NonSerialized]
		public List<MergeTask> _tasks;

		[NonSerialized]
		public CancellationTokenSource _disableCancellation;

		[NonSerialized]
		public CancellationTokenSource _destroyCancellation;

		[NonSerialized]
		public readonly List<BoardMergeGoalTaskGroupCard> _instantiatedItems;

		[NonSerialized]
		public readonly Dictionary<AreaId, GameObject> _areaGroupRoots;

		[NonSerialized]
		public readonly Dictionary<string, GameObject> _miniGameGroupRoots;

		[NonSerialized]
		public readonly Dictionary<MergeTask, BoardMergeGoalTaskGroupCard> _taskToCardMap;

		[NonSerialized]
		public readonly Dictionary<MergeTask, int> _taskIndexMap;

		[NonSerialized]
		public readonly List<TaskSortEntry> _sortEntries;

		[NonSerialized]
		public readonly List<BoardMergeGoalTaskGroupCard> _cardOrder;

		[NonSerialized]
		public readonly Dictionary<BoardMergeGoalTaskGroupTaskContainer, int> _taskIndexInContainer;

		[NonSerialized]
		public readonly Dictionary<BoardMergeGoalTaskGroupCard, int> _containerIndexInCard;

		[NonSerialized]
		public readonly HashSet<MergeTask> _completableTasksBefore;

		[NonSerialized]
		public readonly HashSet<BoardMergeGoalTaskGroupCard> _tasksToMove;

		[NonSerialized]
		public bool _runningRewardsAnimation;

		[NonSerialized]
		public Option<Rollback> _cachedRollback;

		[NonSerialized]
		public int _activeCurrencyClaims;

		public const float OVERLAY_DISABLE_DELAY = 0.5f;

		public const int DEFAULT_PANEL_POSITION_Y = 605;

		[NonSerialized]
		public readonly List<IDisposableAssetHandle<GameObject>> _prefabHandles;

		[NonSerialized]
		public bool _pendingSort;

		public const float SORTING_POLL_INTERVAL = 0.25f;

		[NonSerialized]
		public readonly Vector3[] _checkedObjectWorldCorners;

		[NonSerialized]
		public readonly Vector3[] _viewPortWorldCorners;

		[NonSerialized]
		public Option<(GameObject targetObject, Canvas canvas, GraphicRaycaster raycaster)> cardHighlight;

		[NonSerialized]
		public HashSet<MergeTask> _completableTasks;

		[NonSerialized]
		public bool _tasksInitialized;

		[NonSerialized]
		public float previousScrollPosition;

		[NonSerialized]
		public IReadOnlyDictionary<AreaId, int> _areaPriorityOrder;

		[NonSerialized]
		public Dictionary<HotspotId, int> _taskCardPositionAnalytics;

		[NonSerialized]
		public int _tasksStartingIndex;

		[NonSerialized]
		public HashSet<int> _requiredTradeItems;

		[NonSerialized]
		public bool _tradesExists;

		public static BoardViewTaskHandler Instance => null;

		public static bool HasInstance => false;

		public BoardViewEventHandler EventHandler => null;

		public TweenedButton TradesButton => null;

		public AreaIcons AreaIcons => null;

		public ScrollRect ScrollRect => null;

		public IIconLibrary EventIcons => null;

		public bool AreTasksInitialized => false;

		public bool Visible { get; set; }

		public Transform InfoPanelContainer => null;

		public bool TasksInitialized => false;

		public int EventsUnlockLevel { get; set; }

		public GameObject HighlightFirstTask()
		{
			return null;
		}

		public Option<BoardMergeGoalTaskGroupCard> GetAreaUnlockTaskCard(HotspotId hotspotId)
		{
			return default(Option<BoardMergeGoalTaskGroupCard>);
		}

		public Option<GameObject> HighlightTaskCard(BoardMergeGoalTaskGroupCard taskCard)
		{
			return default(Option<GameObject>);
		}

		public void RemoveHighlight()
		{
		}

		public void Init(PlayerModel model, IPlayerClientContext context, MenuController menuController, IBoardController boardController, IScheduler schedulerInt, IHotspotCompletableQuery hotspotCompletableQuery, INavigationController navigationController, ICameraHotspotNavigator cameraHotspotNavigator, GameConfigClientCache gameConfigClientCache, LocationLoader locationLoader, AddressablesSession addressablesSession, ITitleBarRewardWidgets titleBarRewardWidgets, BoardViewEventHandlerContext eventHandlerContext, IActionsExecutor actionsExecutor, HotspotController hotspotController)
		{
		}

		public void TradesIndicatorButtonOnPressed()
		{
		}

		public void RearrangeGameObjectForEventsOnBoard()
		{
		}

		public void TradesButtonOnPressed()
		{
		}

		public void OnCurrencyAdded(Currencies currency, long amountSoft, long amountHard, CurrencySource currencySource, int itemId, EventCurrencyId eventCurrencyId, AnalyticsContext context)
		{
		}

		public void OnEnable()
		{
		}

		public void OnDisable()
		{
		}

		public void OnDestroy()
		{
		}

		public void InitTasks()
		{
		}

		public void ForceInitHidden()
		{
		}

		public void SetTaskCanvasGroupAlpha(float alpha)
		{
		}

		public void Show()
		{
		}

		public void Hide()
		{
		}

		public void OnMenuVisibilityChange(bool isMenuOpen)
		{
		}

		public void RefreshPanelPosition(bool alignToBoard)
		{
		}

		public void RefreshContent()
		{
		}

		public void DisposeContent(DisposeContentReason clearDynamicContent)
		{
		}

		public void ReleasePrefabHandles()
		{
		}

		public void OnBoardAct(MergeBoardId boardId, ICollection<MergeBoardAct> boardActs)
		{
		}

		public void OnBoardAct(MergeBoardId boardId, MergeBoardAct boardAct)
		{
		}

		public void UpdateAllTaskCards()
		{
		}

		public void ReInitTasks()
		{
		}

		public void UpdateTaskContents()
		{
		}

		[AsyncStateMachine(typeof(_003CLoadTaskItemsAsync_003Ed__128))]
		public UniTask<bool> LoadTaskItemsAsync(CancellationToken ct)
		{
			return default(UniTask<bool>);
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

		public void ProcessShowButtonTap(ITaskCardView taskView)
		{
		}

		public void ProcessShowButtonTap(HotspotId scrollToHotspot, Action onBeginScroll)
		{
		}

		public void OnShowHotspotFinished()
		{
		}

		public void UpdateTasks()
		{
		}

		public bool IsHotspotCompletionRunning()
		{
			return false;
		}

		[AsyncStateMachine(typeof(_003CPollSorting_003Ed__137))]
		public UniTask PollSorting(CancellationToken ct)
		{
			return default(UniTask);
		}

		public void UpdateTradesButtonIndicator()
		{
		}

		public static int CompareTaskEntries(TaskSortEntry x, TaskSortEntry y)
		{
			return 0;
		}

		public static CardInfoGroup GetCardInfoGroup(BoardMergeGoalTaskGroupCard card)
		{
			return default(CardInfoGroup);
		}

		public void SortTaskCards(bool animate = true)
		{
		}

		[AsyncStateMachine(typeof(_003CDisableOverlayIfNeededAsync_003Ed__144))]
		public UniTask DisableOverlayIfNeededAsync(CancellationToken ct)
		{
			return default(UniTask);
		}

		public bool EnableOverlayIfNeeded(List<(Vector3, IPlayerReward)> rewardAnimations)
		{
			return false;
		}

		public Vector3 GetTaskPanelPosition()
		{
			return default(Vector3);
		}

		public Option<RectTransform> GetFirstTaskCardCompleteButtonPosition()
		{
			return default(Option<RectTransform>);
		}

		public Option<(BoardMergeGoalTaskGroupCard, SpineInfoItemIndicator)> GetWildItemFtueCardAndItem()
		{
			return default(Option<(BoardMergeGoalTaskGroupCard, SpineInfoItemIndicator)>);
		}

		public void ScrollToObject(RectTransform rectTransform, Action onComplete = null, ScrollRectSide scrollRectSide = ScrollRectSide.Left)
		{
		}

		public void CheckTasksOutsideScrollViewport()
		{
		}

		public void CheckTradesOutsideScrollViewport()
		{
		}

		public void ParseEventsUnlockLevel()
		{
		}

		public int GetEventsUnlockLevel(IPlayer player)
		{
			return 0;
		}

		public int CalculateMinimumLevel<T1, T2>(int minimumLevel, IReadOnlyDictionary<T1, T2> collection) where T1 : class where T2 : IHasRequirement
		{
			return 0;
		}

		public void CleanUpAnalyticsForRemovedTasks()
		{
		}

		public void ReplaceOrAddAnalyticsAfterTaskCompletion(HotspotId oldKey, HotspotId newKey)
		{
		}

		public bool IsRepeatableTaskNeeded(RepeatableTask repeatableTask)
		{
			return false;
		}
	}
}
