using System;
using System.Collections.Generic;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT
{
	public class MainOrderMan : IGameModule, IUpdate, IUserDataHolder
	{
		public IReadOnlyDictionary<int, OrderCategory> OrderCategoryDict;

		[NonSerialized]
		public IOrderHelper orderHelper;

		[NonSerialized]
		public OrderGroupProxy orderGroupProxy;

		[NonSerialized]
		public IOrderPresentationChecker _orderPresentationChecker;

		public long TotalFinished => 0L;

		public IOrderHelper curOrderHelper => null;

		public IOrderPresentationChecker OrderPresentationChecker => null;

		public int DayFinishedCount => 0;

		void IGameModule.LoadConfig()
		{
		}

		void IGameModule.Reset()
		{
		}

		void IGameModule.Startup()
		{
		}

		void IUpdate.Update(float dt)
		{
		}

		void IUserDataHolder.SetData(LocalSaveData archive)
		{
		}

		void IUserDataHolder.FillData(LocalSaveData archive)
		{
		}

		public IOrderProvider GetProvider(OrderProviderType type)
		{
			return null;
		}

		public bool IsAutoGraph(int cid)
		{
			return false;
		}

		public int GetActiveOrderNum()
		{
			return 0;
		}

		public bool TryFinishOrder(IOrderData order, ICollection<RewardCommitData> rewards)
		{
			return false;
		}

		public void OnMergeLevelChange()
		{
		}

		public void SetDirty()
		{
		}

		public bool IsOrderCompleted(int id)
		{
			return false;
		}

		public int FillActiveOrders(List<IOrderData> container, int mask)
		{
			return 0;
		}

		public void ValidateOrderDisplayCache()
		{
		}

		public Dictionary<int, int> GetOrderRequireItemStateCache()
		{
			return null;
		}

		public IOrderData GetActiveCommonOrderById(int orderId)
		{
			return null;
		}

		public bool HasRandomOrder(int id)
		{
			return false;
		}

		public void DebugReset(int id)
		{
		}

		public void DebugLogOrderDayInfo()
		{
		}

		public void SetPresentationChecker(IOrderPresentationChecker checker)
		{
		}
	}
}
