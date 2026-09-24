using Paxie.MergeStudio.GameCore.Reward;

namespace MergePuzzle
{
	public static class ItemEntityFactory
	{
		public static ItemEntity GetFromRewardsArea(int level, int setID, RewardHistoryEntity rewardHistoryEntity)
		{
			return null;
		}

		public static ItemEntity GetFromMerge(ItemEntity mergeItem1, ItemEntity mergeItem2, ItemInfo targetItemInfo, Coordinate targetCoordinate)
		{
			return null;
		}

		public static ItemEntity GetFromMergeProgressiveTask(ItemEntity mergeItem1, ItemEntity mergeItem2, ItemInfo targetItemInfo, int taskIndex, Coordinate targetCoordinate)
		{
			return null;
		}

		public static ItemEntity GetBubbleItemEntity(ItemInfo itemInfo, Coordinate coordinate, string spawnTrigger)
		{
			return null;
		}

		public static ItemEntity GetBubbleItemEntityExtra(int setID, int level, Coordinate boardIndex, string trigger)
		{
			return null;
		}

		public static ItemEntity GetPerishableItem(int setID, int level, bool isLocked, Coordinate boardIndex, BoardItemPerishableSpawner boardItemPerishableSpawner)
		{
			return null;
		}

		public static ItemEntity GetBubbleItemFinished(int setID, int level, Coordinate boardIndex, RewardHistoryRecord record)
		{
			return null;
		}

		public static ItemEntity GetWandBoosterFrom(ItemInfo itemInfo, Coordinate boardIndex)
		{
			return null;
		}

		public static ItemEntity GetFromAxe(ItemInfo itemInfo, Coordinate boardIndex)
		{
			return null;
		}

		public static ItemEntity GetSpawn(ItemInfo itemInfo, bool isLocked, CellEntity cellEntity, ItemInfo spawnerInfo)
		{
			return null;
		}

		public static ItemEntity GetPerishedItemEntity(BoardItemData perishedItemData, ItemEntity perishableSpawnerEntity)
		{
			return null;
		}

		public static ItemEntity GetFromPickBox(ItemInfo itemInfo, Coordinate coordinate, ItemInfo pickBox)
		{
			return null;
		}

		public static ItemEntity GetFromSR(ItemInfo itemInfo)
		{
			return null;
		}

		public static ItemEntity GetFromCloud(ItemInfo itemInfo, CellEntity cellEntity)
		{
			return null;
		}

		public static ItemEntity GetFromExtra(ItemInfo itemInfo, Coordinate coordinate)
		{
			return null;
		}

		public static ItemEntity GetFromInitialBoardPosition(BoardPositionData initialPositionData, Coordinate coordinate, int unlockedLevel)
		{
			return null;
		}

		public static ItemEntity GetFromLoadBoard(ItemInfo itemInfo, BoardPositionEntity boardPositionEntity, Coordinate coordinate, int unlockedLevel)
		{
			return null;
		}
	}
}
