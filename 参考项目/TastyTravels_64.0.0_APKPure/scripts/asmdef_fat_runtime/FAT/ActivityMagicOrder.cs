using System;
using System.Collections.Generic;
using FAT.Merge;
using UnityEngine;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT
{
	public class ActivityMagicOrder : ActivityLike, IActivityOrderHandler, IActivityOrderGenerator
	{
		public EventMagicOrder EventConf;

		public EventMagicOrderRwd RewardConf;

		[NonSerialized]
		public int _gradeId;

		[NonSerialized]
		public bool _hasActiveOrder;

		[NonSerialized]
		public int _rewardRandomSeed;

		[NonSerialized]
		public List<RewardCommitData> _finalRewards;

		[NonSerialized]
		public bool _hasEnd;

		[NonSerialized]
		public bool _canClaimReward;

		public override bool Valid => false;

		public ActivityMagicOrder(ActivityLite lite_)
		{
		}

		public override void SetupFresh()
		{
		}

		public override void LoadSetup(ActivityInstance data_)
		{
		}

		public override void SaveSetup(ActivityInstance data_)
		{
		}

		public override void WhenEnd()
		{
		}

		public override void WhenReset()
		{
		}

		public override void Open()
		{
		}

		bool IActivityOrderHandler.IsValidForBoard(int boardId)
		{
			return false;
		}

		bool IActivityOrderHandler.OnPreUpdate(OrderData order, IOrderHelper helper, MergeWorldTracer tracer)
		{
			return false;
		}

		void IActivityOrderHandler.HandlerCollected()
		{
		}

		bool IActivityOrderGenerator.TryGeneratePassiveOrder(OrderRandomer cfg, IOrderHelper helper, MergeWorldTracer tracer, Func<OrderRandomer, OrderData> builder, out OrderData order)
		{
			order = null;
			return false;
		}

		public int ClaimReward(Vector3 startPos)
		{
			return 0;
		}

		public int ClaimExtraRewards(Vector3 pos)
		{
			return 0;
		}

		public int FillItemReward(List<int> rewardList)
		{
			return 0;
		}

		public void FillExtraRewards(List<int> rewardList)
		{
		}

		public bool _003C_003EiFixBaseProxy_get_Valid()
		{
			return false;
		}

		public void _003C_003EiFixBaseProxy_SetupFresh()
		{
		}

		public void _003C_003EiFixBaseProxy_WhenEnd()
		{
		}

		public void _003C_003EiFixBaseProxy_WhenReset()
		{
		}
	}
}
