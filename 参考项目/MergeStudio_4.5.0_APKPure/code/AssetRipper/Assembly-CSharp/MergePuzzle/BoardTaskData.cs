using System;
using System.Collections.Generic;

namespace MergePuzzle
{
	[Serializable]
	public class BoardTaskData
	{
		public List<BoardTaskItem> TaskList;

		public int Mod;

		public int StartIndex;

		public BoardTaskItem GetBoardTaskItem(int taskNo)
		{
			return null;
		}

		public int GetLevelIncrease(int maxTaskLoop)
		{
			return 0;
		}

		public int GetModIndex(int taskNo)
		{
			return 0;
		}

		public bool IsModed(int taskNo)
		{
			return false;
		}

		public int FindMissingXpBecauseOfUnknownIssues(LevelData levelData, BoardEntity boardEntity)
		{
			return 0;
		}

		public int ArrangeRolloutXp(BoardEntity boardEntity, LevelData levelData)
		{
			return 0;
		}

		public void FixTotalXpAndLevelXp(BoardEntity boardEntity, LevelData levelData, int userTotalXpOld)
		{
		}

		public (int, int) FindClosestTaskBoundary(int targetTotalXP)
		{
			return default((int, int));
		}

		public void ArrangeRolloutFixCompletedTasks(BoardEntity boardEntity, LevelData levelData, int totalXP)
		{
		}
	}
}
