using System.Collections.Generic;
using FAT.Merge;
using fat.rawdata;

namespace FAT
{
	public static class BoardViewWrapper
	{
		public enum ParamType
		{
			CompItemInfo = 0,
			CompRewardTrack = 1
		}

		public static MergeWorld world;

		public static int activityId;

		public static Dictionary<ParamType, object> globalParamHolder;

		public static List<RewardCommitData> modalRewardList;

		public static void PushWorld(MergeWorld w, int actId = -1)
		{
		}

		public static void PopWorld()
		{
		}

		public static MergeWorld GetCurrentWorld()
		{
			return null;
		}

		public static void SetParam(ParamType pt, object obj)
		{
		}

		public static object GetParam(ParamType pt)
		{
			return null;
		}

		public static string GetBoardName()
		{
			return null;
		}

		public static bool IsMainBoard()
		{
			return false;
		}

		public static bool _IsMain()
		{
			return false;
		}

		public static bool IsNeededByTopBarOrder(int tid)
		{
			return false;
		}

		public static bool TryFinishOrder(IOrderData order, ICollection<RewardCommitData> orderRewards, ICollection<RewardCommitData> boxRewards, bool needConfirm)
		{
			return false;
		}

		public static bool TryFinishOrderInner(IOrderData order, ICollection<RewardCommitData> orderRewards, ICollection<RewardCommitData> boxRewards)
		{
			return false;
		}

		public static bool TryGetOrderBoxDetail(int randomOrderId, out int totalMilli, out int countMilli, out OrderBoxDetail detail)
		{
			totalMilli = default(int);
			countMilli = default(int);
			detail = null;
			return false;
		}

		public static void ShowModalReward(RewardCommitData reward)
		{
		}

		public static void FillBoardOrderExcept(List<IOrderData> container, int exceptMask)
		{
		}

		public static void FillBoardOrder(List<IOrderData> container, int mask = 7)
		{
		}

		public static void ValidateOrderDisplayCache()
		{
		}

		public static Dictionary<int, int> GetBoardOrderRequireItemStateCache()
		{
			return null;
		}

		public static int GetItemRequireState(Item item)
		{
			return 0;
		}

		public static bool TryFinishOrderByItem(Item item)
		{
			return false;
		}
	}
}
