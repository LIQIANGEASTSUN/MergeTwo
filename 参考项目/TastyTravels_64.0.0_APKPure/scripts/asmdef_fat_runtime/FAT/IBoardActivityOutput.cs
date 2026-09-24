using System.Collections.Generic;
using UnityEngine;

namespace FAT
{
	public interface IBoardActivityOutput
	{
		BoardActivityOutputType OutputType { get; }

		BoardActivityOutputMethod OutputMethod { get; }

		void RefreshOutputType();

		void RefreshOutputMethod();

		bool IsSupportOutputType(BoardActivityOutputType type)
		{
			return false;
		}

		bool IsSupportOutputMethod(BoardActivityOutputMethod method)
		{
			return false;
		}

		bool TryUpdateOrderRewardBR(OrderData order, int orderRateConfId, IList<int> orderGetItemIdList)
		{
			return false;
		}

		bool TryUpdateOrderRewardV2(OrderData order, int orderRateConfId, IList<int> orderGetItemIdList)
		{
			return false;
		}

		bool TryGetOrderRewardBRInfo(int diff, int orderRateConfId, IList<int> orderGetItemIdList, out int rewardId, out int rewardNum)
		{
			rewardId = default(int);
			rewardNum = default(int);
			return false;
		}

		bool TryGetOrderRewardBRInfoAct(int diff, int orderRateConfId, IList<int> orderGetItemIdList, out int rewardId, out int rewardNum)
		{
			rewardId = default(int);
			rewardNum = default(int);
			return false;
		}

		bool IsValidForOrder()
		{
			return false;
		}

		FlyType GetFlyType()
		{
			return default(FlyType);
		}

		ReasonString GetReasonString()
		{
			return null;
		}

		void TrackOrderGetItem(int rewardId, int rewardCount, int payDiff)
		{
		}

		void FlyAndCommitOrderReward(IOrderData mData, Vector3 from)
		{
		}

		void FlyAndCommitOrderRewardV2(IOrderData mData, int rewardId, int rewardCount, Vector3 from)
		{
		}
	}
}
