using System;

namespace MergePuzzle
{
	[Serializable]
	public class RewardData : IComparable<RewardData>
	{
		public int Tier;

		public int SortingOrder;

		public int Id;

		public int Level;

		public int Count;

		public bool UnlimitedEnergy;

		public bool Last;

		public bool ForceAsItem;

		public static RewardData GetItemRewardData(BoardData boardData, int id, int level, int count, bool last, bool forceAsItem)
		{
			return null;
		}

		public static RewardData GetCollectableRewardData(BoardData boardData, int id, int level, int count, bool last)
		{
			return null;
		}

		public static RewardData GetBoosterRewardData(int id, int count, bool last)
		{
			return null;
		}

		public RewardData()
		{
		}

		public RewardData(bool unlimitedEnergy)
		{
		}

		public int CompareTo(RewardData other)
		{
			return 0;
		}
	}
}
