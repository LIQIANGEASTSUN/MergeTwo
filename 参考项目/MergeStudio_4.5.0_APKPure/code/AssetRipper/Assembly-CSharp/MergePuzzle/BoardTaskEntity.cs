using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using Paxie.MergePuzzle.ItemCollections.Model;
using Paxie.MergeStudio.GameCore.Gameplay.BoardTask;

namespace MergePuzzle
{
	[Serializable]
	public class BoardTaskEntity
	{
		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003COptimizeCompletedTaskData_003Ed__65 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder<bool> _003C_003Et__builder;

			public BoardTaskEntity _003C_003E4__this;

			[NonSerialized]
			public long _003Cstart_003E5__2;

			[NonSerialized]
			public Dictionary<int, bool> _003CcompletedTaskMap_003E5__3;

			[NonSerialized]
			public int _003CmaxTask_003E5__4;

			[NonSerialized]
			public int _003CyieldCount_003E5__5;

			[NonSerialized]
			public int _003CmaxResult_003E5__6;

			[NonSerialized]
			public List<int>.Enumerator _003C_003E7__wrap6;

			[NonSerialized]
			public Cysharp.Threading.Tasks.YieldAwaitable.Awaiter _003C_003Eu__1;

			[NonSerialized]
			public int _003Ci_003E5__8;

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

		public List<BoardTaskItem> ActiveTasks;

		public List<BoardTaskItem> LeftoverDoubleTasks;

		public List<BoardTaskItem> LeftoverActiveTasks;

		public List<int> CompletedTasks;

		public int CompletedMaxTaskNoInRow;

		public int TaskSegment;

		public int DailyDynamicTaskCount;

		public int TotalCompletedTaskCount;

		public int XpRating;

		public int TaskRating;

		public int CurrentGroupId;

		public List<GroupRatingData> GroupRatings;

		public bool DynamicTaskEnabled;

		public SpecialTaskEntity SpecialTaskEntity;

		public TimeLimitedTaskEntity TimeLimitedTaskEntity;

		public int BackupTaskCount;

		public bool BackupsInitialized;

		public bool PendingLevelUpTaskGeneration;

		public long BackupRefillEndTime;

		public int BackupRefillDurationIndex;

		public bool HasHadCooldownSinceLastReset;

		public List<BoardTaskSlotCooldown> SlotCooldowns;

		public List<IntroTaskBatch> PendingIntroBatches;

		public List<int> UnlockedItemSetIds;

		public int LastProcessedControlVersion;

		public int CurrentLevelConfigVersion;

		public int LastProcessedLevel;

		public int LastLevelXPRequirement;

		public int LastAppliedGlobalResetTasksVersion;

		public int LastAppliedGlobalResetCountdownVersion;

		public Dictionary<string, int> AppliedResetTasksVersions;

		public Dictionary<string, int> AppliedResetCountdownVersions;

		public Dictionary<string, int> AppliedXpRolloutVersions;

		public int LastAppliedXpSettingsVersion;

		public int LastAppliedGlobalXpRolloutVersion;

		public Dictionary<string, int> AppliedPurgeLevelVersions;

		public float CurrentLevelTotalTaskGemValue;

		public int CurrentLevelTaskCount;

		public long CurrentLevelBoardTimeMs;

		public long BoardTimeTrackingStartMs;

		public bool LevelStartConfigEnabled;

		public int DynamicXpFromLevel;

		public List<PendingRatingUpdate> PendingRatingUpdates;

		public Dictionary<BoardTaskDifficultyType, int> CustomGemListIndices;

		public List<int> ItemCountBagRemaining;

		public int ItemCountBagLevelBucket;

		public List<int> ItemSetBagRemaining;

		public int ItemSetBagLevelBucket;

		public int LastProcessedBucketLevel;

		[NonSerialized]
		public BoardTaskData _boardTaskData;

		[NonSerialized]
		public LevelData _levelData;

		[NonSerialized]
		public BoardData _boardData;

		public Func<BoardTaskHandler> TaskHandlerProvider;

		public Func<ItemCollectionHandler> ItemCollectionHandlerProvider;

		public LevelData LevelData => null;

		public BoardTaskEntity(bool enableSpecialTask)
		{
		}

		public BoardTaskEntity()
		{
		}

		public GroupRatingData GetRatingForGroup(int groupId)
		{
			return null;
		}

		public int GetActiveXpRating()
		{
			return 0;
		}

		public int GetActiveTaskRating()
		{
			return 0;
		}

		public void SetActiveRatings(int xpRating, int taskRating)
		{
		}

		public void MigrateToGroup(int newGroupId, int defaultXpRating, int defaultTaskRating)
		{
		}

		public int GetCompletedTaskCount()
		{
			return 0;
		}

		public int GetTotalCompletedTaskCountForAds()
		{
			return 0;
		}

		public int GetTotalCompletedTaskCount()
		{
			return 0;
		}

		public bool ChangeBoardTaskSegment(int taskSegment)
		{
			return false;
		}

		[AsyncStateMachine(typeof(_003COptimizeCompletedTaskData_003Ed__65))]
		public UniTask<bool> OptimizeCompletedTaskData()
		{
			return default(UniTask<bool>);
		}

		public bool IsTaskCompleted(int taskNo)
		{
			return false;
		}

		public void RemoveCompletedTask(int taskNo)
		{
		}

		public int GetMaxCompletedBoardTask()
		{
			return 0;
		}

		public void InitializeActiveTaskLogic()
		{
		}

		public void Initialize(BoardTaskData boardTaskData, LevelData levelData, BoardData boardData, BoardEntity boardEntity, EventEntity eventEntity)
		{
		}

		public List<BoardTaskItem> FindUpcomingTasks(BoardTaskItemController taskController, BoardTaskItem completedTask, BoardEntity boardEntity, EventEntity eventEntity)
		{
			return null;
		}

		public (List<BoardTaskItem>, bool) CompleteDefaultGameplayTask(BoardTaskItemController taskController, BoardTaskItem completedTask, BoardEntity boardEntity)
		{
			return default((List<BoardTaskItem>, bool));
		}

		public bool IsLevelUp(BoardTaskItem completedTask, BoardEntity boardEntity)
		{
			return false;
		}

		public (List<BoardTaskItem>, bool) CompleteEventTask(BoardTaskItemController taskController, BoardTaskItem completedTask, BoardEntity boardEntity, EventEntity eventEntity)
		{
			return default((List<BoardTaskItem>, bool));
		}

		public bool IsNextStep(BoardTaskItem completedTask, EventEntity eventEntity)
		{
			return false;
		}

		public bool AddToCompletedTasks(int taskNo, BoardTaskType boardTaskType)
		{
			return false;
		}

		public bool AddCompletedTaskAndRemoveFromActiveTasks(int completedTaskNo, BoardTaskType boardTaskType, bool removeFromActiveTasks = true)
		{
			return false;
		}

		public void RemoveTaskBasedOnType(BoardTaskType boardTaskType)
		{
		}

		public int FindTaskLoop(int taskNo, int taskMod)
		{
			return 0;
		}

		public int FindMaxTaskLoop(HashSet<int> completedTaskIndexesUpdated, int taskMod)
		{
			return 0;
		}

		public int FindMaxTaskLoop(HashSet<int> completedTaskIndexesUpdated)
		{
			return 0;
		}

		public List<BoardTaskItem> FindActiveTasks(BoardTaskItem completedTask = null)
		{
			return null;
		}

		public int GetAvailableTaskCellCount(List<BoardTaskItem> activeTasks)
		{
			return 0;
		}

		public BoardTaskHandler GetTaskHandler()
		{
			return null;
		}

		public List<BoardTaskItem> FillFromUpcomingTasks(BoardEntity boardEntity, int newLevel, BoardTaskItem completedTask = null)
		{
			return null;
		}

		public List<BoardTaskItem> FillFromLegacyTasks(BoardEntity boardEntity, BoardTaskItem completedTask)
		{
			return null;
		}

		public void TransitionToLegacyMode(BoardEntity boardEntity, LevelData levelData)
		{
		}

		public ItemCollectionHandler GetItemCollectionHandler()
		{
			return null;
		}

		public void FixIfActiveTasksEmpty(BoardEntity boardEntity, HashSet<int> completedTaskIndexesUpdated, int taskMod, List<BoardTaskItem> allTasksData, int startIndexMinus1, List<BoardTaskItem> tasksFound)
		{
		}

		public void ArrangeActiveTasks(BoardEntity boardEntity, int newLevel, int availableTaskCellCount, List<BoardTaskItem> allTasksData, int maxTaskLoop, int taskMod, int startIndexMinus1, HashSet<int> completedTaskIndexesUpdated, List<BoardTaskItem> activeTasksUpdated, List<BoardTaskItem> tasksFound, int loopLevelIncrease)
		{
		}

		public bool ArrangeXpAndRewardsOfTaskCompletion(BoardData boardData, BoardEntity boardEntity, EventEntity eventEntity, BoardTaskItem completedTask)
		{
			return false;
		}

		public void RemoveTask(int completedTaskNo)
		{
		}

		public void RemoveTask(BoardTaskType boardTaskType)
		{
		}

		public void RemoveTask(BoardTaskItem boardTaskItem, bool saveBoard = false)
		{
		}

		public HashSet<int> GetCompletedTaskIndexes()
		{
			return null;
		}

		public int GetSmallestNonCompletedTaskNo()
		{
			return 0;
		}

		public IEnumerable<BoardTaskItem> GetDefaultActiveBoardTaskItems()
		{
			return null;
		}

		public IEnumerable<int> GetReadyToDoneTasks(BoardEntity boardEntity)
		{
			return null;
		}
	}
}
