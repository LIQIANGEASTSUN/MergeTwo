using System.Collections.Generic;
using System.Runtime.InteropServices;
using MergePuzzle.Abstract;
using Paxie;
using UnityEngine;

namespace MergePuzzle
{
	public class TaskEvent
	{
		public struct TaskDoneProcessStarted : IEvent
		{
			public BoardTaskItem CompletedTask;

			public BoardTaskItemController TaskItemController;

			public List<BoardTaskItem> AddedTasks;

			public bool PhaseUpdate;
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct TaskDoneXPAndRewardAnimationsComplete : IEvent
		{
		}

		public struct SeasonPassPointAnimationComplete : IEvent
		{
			public bool IsFirst;

			public bool IsLast;
		}

		public struct BoardEventPointAnimationComplete : IEvent
		{
			public bool IsFirst;

			public bool IsLast;
		}

		public struct RefreshScrollableArea : IEvent
		{
			public ScrollableItem Item;

			public int BoardTaskNo;

			public bool RefreshImmediate;
		}

		public struct TaskDoneBoardItemsMoveCompleted : IEvent
		{
			public BoardTaskItem CompletedTask;

			public RectTransform TargetSpawnItem;

			public Vector3 InitialPos;
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct TaskDoneBoardItemsMoveFirstItemHit : IEvent
		{
		}

		public struct TaskLastCoinOut : IEvent
		{
			public BoardTaskItem CompletedTask;
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct TaskUpdateRewardUI : IEvent
		{
		}

		public struct LastCoinArrived : IEvent
		{
			public bool Sell;
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct LastEnergyArrived : IEvent
		{
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct LastGemArrived : IEvent
		{
		}

		public struct LastXPArrived : IEvent
		{
			public bool IsLevelUp;
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct TaskDoneBoardTaskItemDisappearStarted : IEvent
		{
		}

		public struct TaskDoneBoardTaskItemDisappearFinished : IEvent
		{
			public BoardTaskItem CompletedTask;
		}

		public struct TaskDoneNewTasksAppeared : IEvent
		{
			public BoardTaskItem CompletedTask;
		}

		public struct ItemsMovementToTaskCompleted : IEvent
		{
			public BoardTaskItem CompletedTask;
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct LastBoardTaskMovementFinished : IEvent
		{
		}

		public struct LevelUpDismissed : IEvent
		{
			public UserEntity UserEntity;

			public CanvasEvent.DismissLevelUpPopup FirstDismissEvent;

			public bool IsEvent;
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct EventLevelsFinished : IEvent
		{
		}

		public struct DailyJackpotDismissed : IEvent
		{
			public List<DailyJackpotItemData> RewardedItems;

			public bool PlayRewardedAnimations;
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct SetLevelUpOnItems : IEvent
		{
		}

		public struct CreateTimeLimitedTask : IEvent
		{
			public BoardTaskItem BoardTaskItem;
		}

		public struct AddScrollableItem : IEvent
		{
			public ScrollableInfoBase ScrollableInfoBase;
		}

		public struct RemoveScrollableItem : IEvent
		{
			public ScrollableItemType ScrollableInfoType;

			public int Index;
		}

		public struct FocusScrollableItem : IEvent
		{
			public Transform OptionalItem;

			public int OptionalIndex;

			public bool Force;
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct UpdateTaskUI : IEvent
		{
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct CheckTaskDiscoveryStatus : IEvent
		{
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct BoardTasksSpawned : IEvent
		{
		}
	}
}
