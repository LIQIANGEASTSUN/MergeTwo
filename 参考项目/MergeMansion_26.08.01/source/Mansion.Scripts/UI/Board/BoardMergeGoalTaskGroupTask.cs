using System;
using System.Collections.Generic;
using CustomUI.TodoTasks;
using GameLogic.Config.Shop;
using GameLogic.Hotspots;
using GameLogic.Player;
using GameLogic.Player.MergeTasks;
using GameLogic.Player.Requirements;
using GameLogic.Player.Rewards;
using JetBrains.Annotations;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.Common.Options.Unity;
using Metacore.MergeMansion.UI.Libraries;
using Metaplay.Core;
using TMPro;
using UI.Indicators;
using UI.Popups;
using UI.Popups.Shop;
using UnityEngine;
using UnityEngine.UI;

namespace UI.Board
{
	public class BoardMergeGoalTaskGroupTask : ToDoTaskItem, IUpdateableTask
	{
		[Header("General")]
		[SerializeField]
		public RectTransform _rect;

		[SerializeField]
		public RectTransform _taskContent;

		[SerializeField]
		public LayoutElement _layoutElement;

		[SerializeField]
		public SerializableOption<GameObject> _separator;

		[Header("Card States")]
		[SerializeField]
		public GameObject _statesParent;

		[SerializeField]
		public GameObject _lockedByPreviousArea;

		[SerializeField]
		public SpineInfoItemIndicator _lockedByPreviousAreaRequirement;

		[SerializeField]
		public TMP_Text _lockedAreaDescriptionText;

		[SerializeField]
		public GameObject _lockedByItem;

		[SerializeField]
		public TMP_Text _lockedByItemDescriptionText;

		[SerializeField]
		public GameObject _lockedByComingSoonArea;

		[SerializeField]
		public GameObject _lockedByTimer;

		[SerializeField]
		public TimerControl _lockedTimer;

		[SerializeField]
		public TMP_Text _lockedByTimerDescriptionText;

		[SerializeField]
		public GameObject _lockedByPlayerLevel;

		[SerializeField]
		public TMP_Text _requiredPlayerLevelLabel;

		[SerializeField]
		public GameObject _readyToBeUnlocked;

		[Header("Requirements")]
		[SerializeField]
		public GameObject _requirementParent;

		[SerializeField]
		public SpineInfoItemIndicator[] _requirementIndicators;

		[Header("Rewards")]
		[SerializeField]
		public GameObject _eventTokenIndicatorParent;

		[SerializeField]
		public SerializableUnityOption<ExtraSpawnsView> _extraSpawnsView;

		[Header("Complete task")]
		[SerializeField]
		public GameObject _completeTaskButtonParent;

		[SerializeField]
		public RectTransform _completeTaskButton;

		[SerializeField]
		public RectTransform _unlockTaskButton;

		[SerializeField]
		public GameObject _completeGreenCheckmark;

		[Header("Bonus")]
		[SerializeField]
		public TimerControl _bonusTimer;

		[SerializeField]
		public SpineRewardItemIndicator _bonusTokenIndicator;

		[SerializeField]
		public SpineRewardItemIndicator _bonusTokenIndicator2;

		[Header("Background")]
		[SerializeField]
		public Image _background;

		[Header("Animations")]
		[SerializeField]
		public float _moveAnimationDuration;

		[SerializeField]
		public AnimationCurve _moveAnimationEase;

		[SerializeField]
		public float _showAnimationDuration;

		[SerializeField]
		public AnimationCurve _showAnimationEase;

		[SerializeField]
		public float _hideAnimationDuration;

		[SerializeField]
		public AnimationCurve _hideAnimationEase;

		[SerializeField]
		public float _removeAnimationDuration;

		[SerializeField]
		public AnimationCurve _removeAnimationEase;

		public RedDotIndicator RedDotIndicator;

		[NonSerialized]
		public ITaskCardView _taskView;

		[NonSerialized]
		public BoardMergeGoalTaskGroupCard _taskGroupCard;

		[NonSerialized]
		public IMenuController _menus;

		[NonSerialized]
		public PlayerModel _player;

		[NonSerialized]
		public bool _isCompletable;

		[NonSerialized]
		public Action<HotspotMergeTask> _onTaskShow;

		[NonSerialized]
		public Action _onNotifyChange;

		[NonSerialized]
		public bool _hasBonusTime;

		[NonSerialized]
		public TaskCardType _taskCardType;

		[NonSerialized]
		public Action<BoardMergeGoalTaskGroupTask> _completedCallback;

		[NonSerialized]
		public Option<Action> _updateExtraSpawnsCallbackOption;

		public const int FULL_TASK_WIDTH = 285;

		public const int COMPACT_TASK_WIDTH = 285;

		[NonSerialized]
		public TaskGroupTaskState _taskState;

		[NonSerialized]
		public bool _firstInitialize;

		[NonSerialized]
		public int _currentSiblingIndex;

		[NonSerialized]
		public MetaDuration _timerShowDuration;

		[NonSerialized]
		public bool _taskIsLocked;

		[NonSerialized]
		public BoardMergeGoalTaskGroupTaskContainer _taskContainer;

		[NonSerialized]
		public Vector2 _previousPosition;

		public override MergeTask Task => null;

		public override int FirstElementTopPadding => 0;

		public RectTransform RectTransform => null;

		public string HotspotId => null;

		public ITaskCardView TaskView => null;

		public bool HasBonusTime => false;

		public TaskCardType TaskCardType => default(TaskCardType);

		public RectTransform CompleteButtonRect => null;

		public RectTransform UnlockingButtonRect => null;

		public BoardMergeGoalTaskGroupTaskContainer Container => null;

		public void Awake()
		{
		}

		public void OnDisable()
		{
		}

		[PublicAPI]
		public void ActionButtonPressed()
		{
		}

		public void UpdateTask()
		{
		}

		public void RefreshCanBeCompleted()
		{
		}

		public void Initialize(TaskCardType taskCardType, ITaskCardView state, Action<BoardMergeGoalTaskGroupTask> completedAction, IMenuController menuController, Action notifyChange, bool completed, PlayerModel playerModel, BoardMergeGoalTaskGroupCard groupCard, BoardMergeGoalTaskGroupTaskContainer taskContainer, bool isStoryEventTask = false)
		{
		}

		public void RefreshTasks()
		{
		}

		public void RefreshShopIndicators(List<PlayerRequirement> taskRequirements, List<IShopItemInfo> purchasableItems)
		{
		}

		public void RefreshFullCard()
		{
		}

		public void RefreshAreaUnlockCard()
		{
		}

		public void ShowLockedStateUI()
		{
		}

		public void ClearLockedStates()
		{
		}

		public void UpdateRequirements(List<PlayerRequirement> taskRequirements, List<IShopItemInfo> purchasableItems, IHotspotDefinition hotspot)
		{
		}

		public void SendFlashSaleImpressions(List<IShopItemInfo> purchasableItems)
		{
		}

		public void PopulateRewards(SpineRewardItemIndicator[] indicators, List<PlayerReward> rewards, bool isBonusReward, bool isAvailable = false)
		{
		}

		public void OnFlashSalePurchase(PlayerModel playerModel, IShopItemEntry shopItemEntry, Vector3 itemPosition)
		{
		}

		public void UpdateTaskCompletionEffects(bool isTaskCompletable)
		{
		}

		public void SetBonusTimer(PlayerModel playerModel, IHotspotDefinition hotspot)
		{
		}

		public void SetTaskIndex(int newIndex)
		{
		}

		public void MoveTaskToPlace()
		{
		}

		public void HideTaskGameObject(bool animate, Action callback = null)
		{
		}

		[PublicAPI]
		public void CompleteTask()
		{
		}

		public void HideContents(bool animate, Action callback = null)
		{
		}

		public void ShowContent(bool animate, Action callback = null, float delay = 0f)
		{
		}

		public void InitExtraSpawnsUpdateCallback(IHotspotDefinition hotspot, IIconLibrary iconLibrary)
		{
		}

		public void RemoveExtraSpawnsCallback()
		{
		}

		public void SetSeparatorVisible(bool visible)
		{
		}

		public void SetTaskState(TaskGroupTaskState newState)
		{
		}

		public void RefreshTaskSize()
		{
		}

		public List<Vector3> GetRequirementItemPositions()
		{
			return null;
		}

		public Option<SpineInfoItemIndicator> GetFirstWildItemTaskRequirement()
		{
			return default(Option<SpineInfoItemIndicator>);
		}

		public bool IsTaskLocked()
		{
			return false;
		}

		public void CompleteMultiStepTask()
		{
		}

		public void UpdateProgressBar()
		{
		}
	}
}
