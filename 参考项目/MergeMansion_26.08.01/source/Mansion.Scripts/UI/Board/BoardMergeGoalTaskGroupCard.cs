using System;
using System.Collections.Generic;
using CustomUI.TodoTasks;
using GameLogic.Area;
using GameLogic.Hotspots;
using GameLogic.Player;
using GameLogic.Player.MergeTasks;
using Metacore.MergeMansion.Common.Options;
using UI.DailyTodo;
using UI.Indicators;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UI;

namespace UI.Board
{
	public class BoardMergeGoalTaskGroupCard : BoardTaskCard, IUpdateableTask
	{
		[Header("General")]
		[SerializeField]
		public RectTransform _rect;

		[SerializeField]
		public RectTransform _taskContent;

		[SerializeField]
		public Transform _areaPreviewContainer;

		[SerializeField]
		public GameObject _areaInfoCard;

		[SerializeField]
		public GameObject _travelIndicator;

		[SerializeField]
		public GameObject _padlocklIndicator;

		[SerializeField]
		public BoardMergeGoalTaskGroupTask _taskGroupTaskPrefab;

		[SerializeField]
		public BoardMergeGoalTaskGroupTaskContainer _taskGroupTaskContainerPrefab;

		[SerializeField]
		public RectTransform _taskGroupTaskParent;

		[Header("Background")]
		[SerializeField]
		public Image _background;

		[FormerlySerializedAs("scrollAnimationDuration")]
		[Header("Animations")]
		[SerializeField]
		public float _scrollAnimationDuration;

		[SerializeField]
		public AnimationCurve _scrollAnimationEase;

		[SerializeField]
		public float _cardHorizontalResizeDuration;

		[SerializeField]
		public float _moveAnimationDuration;

		[SerializeField]
		public AnimationCurve _moveAnimationEase;

		[SerializeField]
		public float _completeableScaleAnimationDuration;

		[SerializeField]
		public AnimationCurve _completeableScaleAnimationEase;

		[SerializeField]
		public float _hideDuration;

		[NonSerialized]
		public List<BoardMergeGoalTaskGroupTask> _instantiatedTaskGroupTasks;

		[NonSerialized]
		public Dictionary<MultistepGroupId, List<BoardMergeGoalTaskGroupTask>> _simulTaskGroupTasks;

		[NonSerialized]
		public Dictionary<MultistepGroupId, BoardMergeGoalTaskGroupTaskContainer> _simulTaskGroupTasksContainer;

		[NonSerialized]
		public bool _hiddenFromTaskView;

		[NonSerialized]
		public IMenuController _menuController;

		[NonSerialized]
		public PlayerModel _player;

		[NonSerialized]
		public bool _isCompleted;

		[NonSerialized]
		public Action<HotspotMergeTask> _onTaskShow;

		[NonSerialized]
		public Action _onNotifyChange;

		[NonSerialized]
		public TaskCardType _taskCardType;

		[NonSerialized]
		public Action<ITaskCardView> _showCallback;

		[NonSerialized]
		public Option<Action> _updateExtraSpawnsCallbackOption;

		public const int INFO_CONTAINER_WIDTH = 142;

		[NonSerialized]
		public List<HotspotMergeTask> _taskViews;

		[NonSerialized]
		public List<HotspotId> _completableTasks;

		[NonSerialized]
		public Action<BoardMergeGoalTaskGroupTask> _onTaskCompleted;

		[NonSerialized]
		public Action _refreshTasksCallback;

		[NonSerialized]
		public HotspotController _hotspotController;

		[NonSerialized]
		public LocationLoader _locationLoader;

		[NonSerialized]
		public readonly HashSet<HotspotId> _initializedHotspots;

		[NonSerialized]
		public ScrollRect _scrollRect;

		[NonSerialized]
		public IUpdateableTask _updateableTaskImplementation;

		[NonSerialized]
		public RectTransform _areaInfoCardRect;

		[NonSerialized]
		public bool _initialized;

		[NonSerialized]
		public TaskCardTheme _taskCardTheme;

		[NonSerialized]
		public IAreaInfo _areaInfo;

		[NonSerialized]
		public string _miniGameThemeId;

		[NonSerialized]
		public float _previousPositionX;

		public bool HideFromView => false;

		public override MergeTask Task => null;

		public bool CanBeCompleted => false;

		public bool IsRepeatable => false;

		public bool HasBonusTime => false;

		public IAreaInfo Area => null;

		public RectTransform Rect => null;

		public List<BoardMergeGoalTaskGroupTask> TaskGroupTasks => null;

		public bool IsStoryEventTask => false;

		public bool IsCharacterTask => false;

		public bool IsMiniGameTask => false;

		public string MiniGameThemeId => null;

		public bool IsTaskLocked => false;

		public bool IsLockedArea => false;

		public bool IsLockedMergeTask => false;

		public Transform TaskContent => null;

		public Transform AreaPreviewContainer => null;

		public void OnEnable()
		{
		}

		public void UpdateTask()
		{
		}

		public void UpdateTask(BoardMergeGoalTaskGroupTask task)
		{
		}

		public void InitializeSingleTask(TaskCardType taskCardType, ITaskCardView state, Action<ITaskCardView> showAction, IMenuController menuController, Action notifyChange, bool completed, PlayerModel playerModel, LocationLoader locationLoader, TaskCardTheme taskCardTheme, Action refreshTask)
		{
		}

		public void UpdateTaskCardAreaInfo(BoardMergeGoalTaskGroupTask task)
		{
		}

		public override Option<RectTransform> GetTaskCardCompleteButtonRect()
		{
			return default(Option<RectTransform>);
		}

		public override Option<RectTransform> GetTaskCardUnlockButtonRect()
		{
			return default(Option<RectTransform>);
		}

		public void OnTaskCompleted(BoardMergeGoalTaskGroupTask task)
		{
		}

		public bool CompletesOnBoard(IHotspotDefinition hotspot)
		{
			return false;
		}

		public void CompleteTask(BoardMergeGoalTaskGroupTask task)
		{
		}

		public bool HasNewTaskAvailable()
		{
			return false;
		}

		public void TryAddNewTask(MultistepGroupId id, HotspotId oldHotspot)
		{
		}

		public void RemoveCompletedTask(BoardMergeGoalTaskGroupTask task, IHotspotDefinition hotspot, HotspotMergeTask mergeTask)
		{
		}

		public HotspotMergeTask FindHotspotMergeTask(HotspotId hotspotId)
		{
			return null;
		}

		public void InitializeNewTask(HotspotMergeTask newTask, HotspotId hotspotId)
		{
		}

		public void CompleteHotspot(IHotspotDefinition hotspot, BoardMergeGoalTaskGroupTask taskCard, Action callback)
		{
		}

		public void ResizeCardToContent(bool animate = false)
		{
		}

		public void ScrollToObject(RectTransform rectTransform, Action onComplete = null)
		{
		}

		public bool HasTask(MergeTask task)
		{
			return false;
		}

		public void CapturePreviousPosition()
		{
		}

		public void SetIndex(int newIndex, bool capturePreviousPosition = true)
		{
		}

		public void SetContainerSiblingIndex(BoardMergeGoalTaskGroupTaskContainer container, int index)
		{
		}

		public void MoveTaskCard(bool animate, bool scaleTaskToPlace)
		{
		}

		public bool AllTasksCanBeCompleted()
		{
			return false;
		}

		public MergeTask GetTask()
		{
			return null;
		}

		public IAreaInfo GetArea()
		{
			return null;
		}

		public string GetMiniGameThemeId(IHotspotDefinition hotspot)
		{
			return null;
		}

		public bool IsTaskRepeatable()
		{
			return false;
		}

		public void ShowContent(bool animate, Action callback = null, float delay = 0f)
		{
		}

		public void HideContent(bool animate, Action callback = null)
		{
		}

		public void ShowAreaInfoCard(bool show, bool animate)
		{
		}

		public Option<SpineInfoItemIndicator> GetFirstWildItemTaskRequirement()
		{
			return default(Option<SpineInfoItemIndicator>);
		}

		public void SetHiddenFromTaskView(bool hidden, bool animate = false)
		{
		}

		public void HideTaskCardGameObject(bool animate, Action callback = null)
		{
		}
	}
}
