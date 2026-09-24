using System.Collections.Generic;

namespace FAT
{
	public interface IOrderHelper
	{
		OrderGroupProxy proxy { get; set; }

		List<int> ImmediateSlotRequests { get; }

		Dictionary<int, int> RequireItemStateCache { get; }

		int ActiveOrderCount { get; set; }

		Dictionary<int, int> RequireItemTargetCountDict { get; }

		Dictionary<int, int> NpcInUseCountDict { get; }

		int GetBoardLevel();

		bool IsOrderCompleted(int id);

		long GetTotalFinished();

		bool CheckCond_Level(int level)
		{
			return false;
		}

		bool CheckCond_OrderCompleted(IList<int> orders)
		{
			return false;
		}

		bool CheckCond_ItemUnlocked(IList<int> items)
		{
			return false;
		}

		bool CheckStateByConditionGroup(int level_on, int level_off, IList<int> order_on, IList<int> order_off, IList<int> item_on, IList<int> item_off)
		{
			return false;
		}

		void OnOrderDisplayChange(List<IOrderData> orders)
		{
		}

		void OnOrderListUpdated(List<IOrderData> orders)
		{
		}

		void ClearCache()
		{
		}

		void UpdateOrderStatisticInfo(OrderData order, int flag_item, int flag_npc)
		{
		}

		sealed void _UpdateDictSum(Dictionary<int, int> dict, int key, int change)
		{
		}
	}
}
