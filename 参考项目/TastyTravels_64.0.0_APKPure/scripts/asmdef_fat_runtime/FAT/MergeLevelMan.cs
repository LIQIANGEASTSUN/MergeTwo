using System;
using System.Collections.Generic;
using EL;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT
{
	public class MergeLevelMan : IGameModule, IUserDataHolder
	{
		[NonSerialized]
		public EncryptInt mExp;

		[NonSerialized]
		public int mFlyExp;

		[NonSerialized]
		public EncryptInt mLevel;

		[NonSerialized]
		public EncryptInt mExpDebt;

		[NonSerialized]
		public MergeLevel mNextLevel;

		[NonSerialized]
		public IDictionary<int, MergeLevelRate> mLevelRateMap;

		[NonSerialized]
		public List<RewardCommitData> _levelUpReward;

		[NonSerialized]
		public readonly Dictionary<int, long> record;

		public bool canLevelup => false;

		public bool canLevelupAfterFly => false;

		public MergeLevel nextLevelConfig => null;

		public int displayLevel => 0;

		public bool isLevelUp { get; set; }

		public int level => 0;

		public int realExp => 0;

		public int exp => 0;

		void IGameModule.Reset()
		{
		}

		void IGameModule.LoadConfig()
		{
		}

		void IGameModule.Startup()
		{
		}

		void IUserDataHolder.FillData(LocalSaveData archive)
		{
		}

		public void ClearResetState()
		{
		}

		void IUserDataHolder.SetData(LocalSaveData archive)
		{
		}

		public void _OnConfigLoaded()
		{
		}

		public void DebugReset()
		{
		}

		public long RecordOf(int lv)
		{
			return 0L;
		}

		public bool TryLevelup(List<RewardCommitData> rewards)
		{
			return false;
		}

		public void _OnMergeLevelChange(MergeLevel levelConfig)
		{
		}

		public void AddFlyExp(int addCount, ReasonString reason)
		{
		}

		public void FinishFlyExp(int addCount, bool check = true)
		{
		}

		public void CheckLevelup()
		{
		}

		public void AddExp(int addCount, ReasonString reason)
		{
		}

		public int GetCurrentLevelRate()
		{
			return 0;
		}

		public bool TryGetLevelRate(int level, out int rate)
		{
			rate = default(int);
			return false;
		}

		public void _RefreshLevel(int level)
		{
		}
	}
}
