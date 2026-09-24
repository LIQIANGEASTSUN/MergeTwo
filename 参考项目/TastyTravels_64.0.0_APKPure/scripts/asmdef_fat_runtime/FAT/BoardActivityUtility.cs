using System.Collections.Generic;
using FAT.Merge;

namespace FAT
{
	public static class BoardActivityUtility
	{
		public static string CollectAllBoardReward(List<RewardCommitData> rewards, MergeWorld world)
		{
			return null;
		}

		public static void _TryCollectReward(Item item, Dictionary<int, int> itemIdMap, Dictionary<int, int> rewardMap)
		{
		}

		public static void Collect(Dictionary<int, int> map, int id, int count, int maxCount = -1)
		{
		}

		public static string ConvertDictToString(Dictionary<int, int> dict)
		{
			return null;
		}

		public static bool FillBoardRowConfStr(IBoardActivityRowConf IRowConf, int detailId, IList<string> container, int startRow, int needRowCount)
		{
			return false;
		}

		public static void FillHighestLeveItemByCategory(IList<int> categoryIds, List<int> results, int defaultType = 0)
		{
		}

		public static int GetHighestLevelItemIdInCategory(int categoryId, int defaultType = 0)
		{
			return 0;
		}

		public static bool HasActiveItemInMainBoard(int itemId)
		{
			return false;
		}

		public static bool HasActiveItemInMainBoardAndInventory(int itemId)
		{
			return false;
		}

		public static bool HasItemInMainBoardRewardTrack(int itemId)
		{
			return false;
		}

		public static bool IsSupportOutputType(IBoardActivityOutput activityOutput, BoardActivityOutputType type)
		{
			return false;
		}

		public static bool IsSupportOutputMethod(IBoardActivityOutput activityOutput, BoardActivityOutputMethod method)
		{
			return false;
		}
	}
}
