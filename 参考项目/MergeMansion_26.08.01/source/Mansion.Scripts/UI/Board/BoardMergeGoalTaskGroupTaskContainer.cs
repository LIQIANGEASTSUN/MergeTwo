using System;
using System.Collections.Generic;
using GameLogic.Hotspots;
using GameLogic.Player;
using Metacore.MergeMansion.Common.Options.Unity;
using UnityEngine;

namespace UI.Board
{
	public class BoardMergeGoalTaskGroupTaskContainer : MonoBehaviour
	{
		[SerializeField]
		public BoardMergeGoalTaskGroupTask _taskGroupTaskPrefab;

		[SerializeField]
		public RectTransform _taskGroupTaskParent;

		[SerializeField]
		public SerializableUnityOption<SliderProgressBar> _multistepSlider;

		[SerializeField]
		public GameObject _multiStepTaskContainer;

		[NonSerialized]
		public bool _animationInProgress;

		[NonSerialized]
		public List<BoardMergeGoalTaskGroupTask> _tasks;

		public BoardMergeGoalTaskGroupTask TaskGroupTaskPrefab => null;

		public RectTransform TaskGroupTaskParent => null;

		public IReadOnlyList<BoardMergeGoalTaskGroupTask> Tasks => null;

		public BoardMergeGoalTaskGroupTask InstantiateTaskGroupTask()
		{
			return null;
		}

		public void AddTask(BoardMergeGoalTaskGroupTask task)
		{
		}

		public void RemoveTask(BoardMergeGoalTaskGroupTask task)
		{
		}

		public void SetTaskSiblingIndex(BoardMergeGoalTaskGroupTask task, int index)
		{
		}

		public void RefreshSeparators()
		{
		}

		public void UpdateProgressBar(IHotspotDefinition hotspotDefinition, PlayerModel playerModel, bool show)
		{
		}

		public void AnimateProgressBar(float newValue)
		{
		}
	}
}
