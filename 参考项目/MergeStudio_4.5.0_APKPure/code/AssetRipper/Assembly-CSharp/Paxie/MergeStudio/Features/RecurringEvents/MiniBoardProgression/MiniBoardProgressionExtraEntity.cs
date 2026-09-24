using System;
using System.Collections.Generic;
using MergePuzzle;
using Paxie.MergeStudio.Features.MiniBoard;
using Paxie.MergeStudio.GameCore.Gameplay.Board.Items;

namespace Paxie.MergeStudio.Features.RecurringEvents.MiniBoardProgression
{
	[Serializable]
	public class MiniBoardProgressionExtraEntity : IMiniBoardEntity
	{
		public MiniBoardAreaEntity MiniBoardAreaEntity;

		public List<MiniBoardRewardEntity> ActiveRewards;

		public int SpawnerEnergyConsumeAmount;

		public bool IsLastBoardCompleted;

		public List<PerishableSpawnerEntity> PerishableSpawnerEntityList;

		public int MaxLevelItemSeen;

		public List<MiniBoardProgressionSideItemProgress> SideItemProgressList;

		public Queue<MiniBoardProgressionMergedRewards> MergedRewardsQueue;

		public static MiniBoardProgressionExtraEntity Get()
		{
			return null;
		}

		public void ResetEntity()
		{
		}

		public void ChangeBoardIndex(int boardIndex)
		{
		}

		public bool IsBoardFull()
		{
			return false;
		}

		public Coordinate GetItemCoordinate(MiniBoardItemEntity miniBoardItemEntity)
		{
			return default(Coordinate);
		}

		public List<MiniBoardRewardEntity> GetActiveRewards()
		{
			return null;
		}

		public void AddToActiveRewards(int setID, int level, int amount, bool updateBoardIcon)
		{
		}

		public void AddToActiveRewards(int setID, int level, GameMainReward mainReward, int amount, bool updateBoardIcon)
		{
		}

		public void AddRewardToActiveRewardsFromStart(int setID, int level)
		{
		}

		public void AddRewardToActiveRewardsFromStart(int setID, int level, MiniBoardItemEntity itemEntity)
		{
		}

		public void AddToActiveRewards(int setID, int level)
		{
		}

		public void AddToActiveRewards(int setID, int level, GameMainReward mainReward)
		{
		}

		public Queue<MiniBoardProgressionMergedRewards> GetMergedRewardsQueue()
		{
			return null;
		}

		public void AddToMergedRewardList(MiniBoardItemEntity itemEntity, int setID, int level)
		{
		}

		public void AddToMergedRewardList(MiniBoardItemEntity itemEntity, int setID, int level, GameMainReward mainReward)
		{
		}

		public void ConvertAndAddToMergedRewardList(List<MiniBoardItemEntity> convertedItemEntities, MiniBoardItemEntity createdItemEntity)
		{
		}

		public void ConvertAllMergedRewardsToMaxLevelItem(int setID, int level)
		{
		}

		public bool IsEmptyCell(MiniBoardPositionEntity pos)
		{
			return false;
		}

		public bool IsItemNull(MiniBoardItemEntity item)
		{
			return false;
		}

		public void AddRewardToActiveRewards(int setID, int level)
		{
		}

		public void AddRewardToActiveRewards(int setID, int level, GameMainReward gameMainReward)
		{
		}

		public void TryAddPerishableSpawnerConfig(PerishableSpawnerEntity perishableSpawnerEntity)
		{
		}

		public bool IsSideItemProgressExist(int setID, int level)
		{
			return false;
		}

		public void TryAddSideItemProgress(int setID, int level)
		{
		}
	}
}
