using System;
using System.Collections.Generic;
using FAT.Merge;
using IFix.Core;
using fat.gamekitdata;

namespace FAT
{
	public class RewardStagingArea
	{
		[NonSerialized]
		public MergeWorld _world;

		[NonSerialized]
		public List<StagingRewardData> _stagingList;

		public int Count => 0;

		public RewardStagingArea(MergeWorld world)
		{
		}

		public void Serialize(fat.gamekitdata.Merge data)
		{
		}

		public void Deserialize(fat.gamekitdata.Merge data)
		{
		}

		[IDTag(1)]
		public void AddStaging(int id)
		{
		}

		[IDTag(0)]
		public void AddStaging(StagingRewardData data)
		{
		}

		public List<StagingRewardData> PopRewards(Predicate<StagingRewardData> predicate)
		{
			return null;
		}

		public List<StagingRewardData> PopAll()
		{
			return null;
		}

		[IDTag(0)]
		public bool Contains(int id)
		{
			return false;
		}

		[IDTag(1)]
		public bool Contains(Predicate<StagingRewardData> predicate)
		{
			return false;
		}

		public void Clear()
		{
		}

		[IDTag(0)]
		public List<StagingRewardData> PeekRewards()
		{
			return null;
		}

		[IDTag(1)]
		public List<StagingRewardData> PeekRewards(Predicate<StagingRewardData> predicate)
		{
			return null;
		}
	}
}
