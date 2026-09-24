using System.Collections.Generic;

namespace FAT.Merge
{
	public class ClearBoardResult
	{
		public enum ItemResultType
		{
			Sell = 0,
			Destroy = 1,
			BubbleBreak = 2,
			RewardList = 3
		}

		public struct ItemDestroyType
		{
			public Item item;

			public ItemResultType type;

			public int coin;

			public override string ToString()
			{
				return null;
			}

			public string _003C_003EiFixBaseProxy_ToString()
			{
				return null;
			}
		}

		public struct RewardListDestroyType
		{
			public int idx;

			public int tid;

			public ItemResultType type;

			public int coin;

			public override string ToString()
			{
				return null;
			}

			public string _003C_003EiFixBaseProxy_ToString()
			{
				return null;
			}
		}

		public List<ItemDestroyType> allItemResult;

		public List<RewardListDestroyType> allRewardListResult;

		public List<RewardCommitData> rewardToCommit;

		public bool isNoReward => false;

		public override string ToString()
		{
			return null;
		}

		public int CalculateTotalMergeCoin()
		{
			return 0;
		}

		public int CalculateTotalGem()
		{
			return 0;
		}

		public int CalculateTotalEnergy()
		{
			return 0;
		}

		public string _003C_003EiFixBaseProxy_ToString()
		{
			return null;
		}
	}
}
