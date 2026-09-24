using System.Collections.Generic;
using MergePuzzle;
using Paxie.MergeStudio.Features.RecurringEvents.MiniBoardProgression;

namespace Paxie.MergeStudio.Features.MiniBoard
{
	public interface IMiniBoardEntity
	{
		bool IsBoardFull();

		Coordinate GetItemCoordinate(MiniBoardItemEntity miniBoardItemEntity);

		List<MiniBoardRewardEntity> GetActiveRewards();

		void AddToActiveRewards(int setID, int level, int amount, bool updateBoardIcon);

		void AddToActiveRewards(int setID, int level, GameMainReward mainReward, int amount, bool updateBoardIcon);

		void AddRewardToActiveRewardsFromStart(int setID, int level);

		void AddRewardToActiveRewardsFromStart(int setID, int level, MiniBoardItemEntity itemEntity);

		void AddToActiveRewards(int setID, int level);

		void AddToActiveRewards(int setID, int level, GameMainReward mainReward);

		Queue<MiniBoardProgressionMergedRewards> GetMergedRewardsQueue();

		void AddToMergedRewardList(MiniBoardItemEntity itemEntity, int setID, int level);

		void AddToMergedRewardList(MiniBoardItemEntity itemEntity, int setID, int level, GameMainReward mainReward);

		void ConvertAndAddToMergedRewardList(List<MiniBoardItemEntity> convertedItemEntities, MiniBoardItemEntity createdItemEntity);

		void ConvertAllMergedRewardsToMaxLevelItem(int setID, int level);
	}
}
