using System.Collections.Generic;
using FAT.Merge;
using IFix.Core;
using fat.gamekitdata;

namespace FAT
{
	public static class OrderUtility
	{
		public static bool sDebug;

		public static bool isDebug => false;

		public static void SetDebug(bool d)
		{
		}

		public static void ClearOrderRequires(OrderData order)
		{
		}

		public static bool UpdateOrderStatus(OrderData order, MergeWorldTracer tracer, IOrderHelper helper)
		{
			return false;
		}

		public static bool IsConsumeNeedConfirmation(OrderData order, MergeWorld world, List<Item> confirmList)
		{
			return false;
		}

		public static bool TryFinishOrder(OrderData order, MergeWorldTracer tracer, IOrderHelper helper, ReasonString reason, ICollection<RewardCommitData> rewards, RewardFlags flags = RewardFlags.None)
		{
			return false;
		}

		public static void CalOrderDifficulty(IOrderData order, out int totalAvg, out int totalAct)
		{
			totalAvg = default(int);
			totalAct = default(int);
		}

		public static int DecideOrderRole(int roleId, IOrderHelper helper)
		{
			return 0;
		}

		public static int CalcActDifficultyForRequires(IList<int> requireItemId)
		{
			return 0;
		}

		public static int CalcPayDffy(int actDffy, int holdDffy, int careDffy)
		{
			return 0;
		}

		[IDTag(1)]
		public static (int, int, int) CalcItemDifficulty(int itemId)
		{
			return default((int, int, int));
		}

		[IDTag(0)]
		public static (int, int, int) CalcItemDifficulty(int itemId, MergeWorldTracer tracer)
		{
			return default((int, int, int));
		}

		public static int CalcCategoryActDffy(int cid, MergeWorldTracer tracer, int maxItemId = 0)
		{
			return 0;
		}

		public static int CalcActDffyRound(int payDffy, int actDffy, int minDiffRate)
		{
			return 0;
		}

		public static OrderData MakeOrder_Init(IOrderHelper helper, OrderProviderType providerType, int id, int roleId, int unlockLevel)
		{
			return null;
		}

		public static void UpdateOrderDifficulty(OrderData order, int autoActDffy, int autoPayDffy, int restActDffy, int restPayDffy, bool alwaysAdd = false)
		{
		}

		public static void MakeOrder_Require(OrderData data, IList<int> requireItemId)
		{
		}

		public static void MakeOrder_Reward(OrderData data, IOrderHelper helper, int actDifficulty, IList<string> reward)
		{
		}

		public static void MakeOrder_Record(OrderData data)
		{
		}

		public static OrderData MakeOrderByConfig(IOrderHelper helper, OrderProviderType providerType, int id, int roleId, int unlockLevel, int actDifficulty, IList<int> requireItemId, IList<string> reward)
		{
			return null;
		}

		public static OrderData MakeOrderByRecord(OrderRecord orderRecord, IOrderHelper helper)
		{
			return null;
		}

		public static void SetOrderApiStatus(IOrderData order, OrderApiStatus status)
		{
		}

		public static void TryTrackOrderShow(IOrderData order)
		{
		}

		public static void ClearActivityRewarsForApiOrder(OrderData order)
		{
		}

		public static void ClearActivity_ExtraBonus(OrderData order)
		{
		}

		public static void ClearActivity_ExtraBonus_Mini(OrderData order)
		{
		}

		public static bool RemoveOrderRewardByStateKey(OrderData order, int keyId, int keyNum)
		{
			return false;
		}
	}
}
