using UnityEngine;

namespace FAT.Merge
{
	public class GirdRewardData
	{
		public Vector2Int Coord;

		public int RewardId;

		public int RewardCount;

		public bool HasReceive;

		public GirdRewardData(Vector2Int coord, int id, int count, bool hasReceive)
		{
		}

		public bool TryBeginReward(out RewardCommitData commitData)
		{
			commitData = null;
			return false;
		}

		public override string ToString()
		{
			return null;
		}

		public string _003C_003EiFixBaseProxy_ToString()
		{
			return null;
		}
	}
}
