using System;

namespace FAT
{
	public class RewardCommitData
	{
		public int rewardId;

		public ObjConfigType rewardType;

		public int rewardCount;

		public ReasonString reason;

		public RewardContext context;

		public RewardFlags flags;

		public bool isFake;

		public int toolFragmentConvertedCoinId;

		public int toolFragmentConvertedCoinCount;

		public bool WaitCommit;

		[NonSerialized]
		public int _l;

		[NonSerialized]
		public string _f;

		[NonSerialized]
		public string _m;

		[NonSerialized]
		public long _ts;

		public RewardCommitData(int l_, string f_, string m_)
		{
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
