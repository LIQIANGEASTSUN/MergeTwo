using System;
using System.Collections.Generic;
using JetBrains.Annotations;
using Newtonsoft.Json;
using Paxie.MergeStudio.GameCore.Gameplay.BoardTask;

namespace MergePuzzle
{
	[Serializable]
	public class BoardTaskItem
	{
		[JsonProperty]
		public int TaskNo;

		[JsonProperty]
		public bool PreCondition;

		[JsonProperty]
		public int LevelCondition;

		[JsonProperty]
		[NonSerialized]
		public List<BoardTaskGoal> Goals;

		[JsonProperty]
		public BoardTaskType BoardTaskType;

		[JsonProperty]
		public BoardTaskDifficultyType Difficulty;

		[JsonProperty]
		public int SeasonPoint;

		[JsonProperty]
		public bool KeepOldItem;

		[JsonProperty]
		public bool IsStaticTask;

		[JsonProperty]
		public int IntroBatchLevel;

		[JsonProperty]
		public bool IsSweeperTask;

		[JsonProperty]
		public bool IsOrphanTask;

		public int SpecialTaskID;

		public int SourceTaskNo;

		public int XP;

		public int CoinReward;

		public int GemReward;

		public long Interval;

		[JsonProperty]
		public List<RegularReward> ItemRewards;

		[CanBeNull]
		public FeatureExtraTaskInfo FeatureExtraTaskInfo;

		public List<GameItemReward> ExtraItems;

		[JsonProperty]
		public float GemValue;

		[JsonProperty]
		public string TaskSource;

		[JsonProperty]
		public string TaskTrigger;

		[JsonProperty]
		public string TaskId;

		[JsonProperty]
		public string GemIndices;

		[JsonProperty]
		public int CreatedAtLevel;

		[JsonProperty]
		public int GeneratedAtTaskTier;

		[JsonProperty]
		public int GeneratedAtXpTier;

		[JsonProperty]
		public int GeneratedTaskTierVersion;

		[JsonProperty]
		public int GeneratedXpTierVersion;

		[JsonProperty]
		public string GeneratedConfigKey;

		public static readonly int MinTaskNoForDynamicTask;

		public static readonly int MaxTaskNoForDynamicTask;

		public const int TaskNoForSpecialTask = 1;

		public BoardTaskItem()
		{
		}

		public BoardTaskItem(int taskNo, bool preCondition, int levelCondition, List<BoardTaskGoal> goals, int seasonPoint, int xp, int coinReward)
		{
		}

		public BoardTaskItem(SpecialTaskData specialTaskData)
		{
		}

		public BoardTaskItem(TimeLimitedTaskData timeLimitedTaskData, int xp, List<BoardTaskGoal> boardTaskGoals, int coinReward, int gemReward, int seasonPoint)
		{
		}

		public BoardTaskItem(int taskNo, BoardTaskItem sourceBoardTask, int loopLevelIncrease = 0)
		{
		}

		public static BoardTaskItem GetDynamicBoardTaskItem(List<BoardTaskGoal> goals, int coinReward, long interval)
		{
			return null;
		}

		public void SetGoals(List<BoardTaskGoal> goals)
		{
		}

		public List<BoardTaskGoal> GetGoals()
		{
			return null;
		}

		public string GetFirebaseString()
		{
			return null;
		}

		public List<BoardTaskGoal> GetGoalsRaw()
		{
			return null;
		}

		public bool ReadyToDone(BoardEntity boardEntity)
		{
			return false;
		}

		public List<int[]> FindMissingItemForReadyToDone(BoardEntity boardEntity)
		{
			return null;
		}

		public bool ReadyToDone(EventEntity eventEntity)
		{
			return false;
		}

		public bool HasEventTaskInfo()
		{
			return false;
		}

		public bool HasEventTaskInfo(int id)
		{
			return false;
		}

		public int GetSeasonPoint()
		{
			return 0;
		}
	}
}
