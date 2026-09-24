using System;
using Paxie.MergeStudio.GameCore.Reward;

namespace MergePuzzle
{
	[Serializable]
	public class RewardEntity : IComparable<RewardEntity>
	{
		public enum RewardType
		{
			RegularItem = 0,
			RegularSpawner = 1,
			DailyChallengeItem = 2,
			DailyChallengeSpawner = 3,
			DiscoveryBox = 4
		}

		public int Level;

		public int SetID;

		public int FeatureID;

		public RewardHistoryEntity RewardHistoryEntity;

		public RewardEntity()
		{
		}

		public RewardEntity(int setID, int level, RewardHistoryRecord historyRecord)
		{
		}

		public RewardEntity(int setID, int level, int featureID, RewardHistoryRecord historyRecord)
		{
		}

		public RewardEntity(int setID, int level)
		{
		}

		public void CreateEmptyHistoryEntityIfNull()
		{
		}

		public bool IsFeature()
		{
			return false;
		}

		public RewardType GetRewardType()
		{
			return default(RewardType);
		}

		public int CompareTo(RewardEntity other)
		{
			return 0;
		}

		public static RewardEntity GetPickBoxEntity(ItemInfo itemInfo)
		{
			return null;
		}

		public RewardHistoryEntity GetRewardHistoryEntity()
		{
			return null;
		}
	}
}
