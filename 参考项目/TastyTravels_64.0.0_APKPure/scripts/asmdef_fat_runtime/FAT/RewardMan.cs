using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Config;
using IFix.Core;
using fat.rawdata;

namespace FAT
{
	public class RewardMan : IGameModule
	{
		[NonSerialized]
		public Stack<RewardContext> mContextStack;

		[NonSerialized]
		public List<RoundCoin> mRoundCoinList;

		[NonSerialized]
		public List<RoundTool> mRoundToolList;

		[NonSerialized]
		public List<RoundLifeTime> mRoundLifeTimeList;

		[NonSerialized]
		public List<RewardCommitData> _needCommitDataList;

		public const int kRewardStringNoCountMask = 524288;

		public void ReportCommit()
		{
		}

		public void PushContext(RewardContext cxt)
		{
		}

		public void PopContext()
		{
		}

		public void CommitReward(RewardCommitData data)
		{
		}

		public void CommitSplitReward(RewardCommitData data, int splitCount)
		{
		}

		public void _CommitReward(RewardCommitData data, int overrideCount = -1)
		{
		}

		public RewardCommitData _GenerateReward(int rewardId, int rewardCount, ReasonString reason, RewardFlags flags = RewardFlags.None, RewardContext context_ = default(RewardContext), [CallerLineNumber] int _l = 0, [CallerFilePath] string _f = null, [CallerMemberName] string _m = null)
		{
			return null;
		}

		public RewardCommitData _BeginReward(RewardCommitData data)
		{
			return null;
		}

		public RewardCommitData BeginReward(int rewardId, int rewardCount, ReasonString reason, RewardFlags flags = RewardFlags.None, RewardContext context_ = default(RewardContext), [CallerLineNumber] int _l = 0, [CallerFilePath] string _f = null, [CallerMemberName] string _m = null)
		{
			return null;
		}

		public string GetRewardName(int id)
		{
			return null;
		}

		public RewardFlySound GetRewardFlySound(int id, int count)
		{
			return default(RewardFlySound);
		}

		public string GetRewardCountString(int id, int count)
		{
			return null;
		}

		public string GetRewardString(int id, int count)
		{
			return null;
		}

		public string GetRewardDetail(int id, int count)
		{
			return null;
		}

		public AssetConfig GetShopRewardIcon(int id, int count)
		{
			return null;
		}

		public AssetConfig GetRewardIcon(int id, int count)
		{
			return null;
		}

		public AssetConfig GetRewardImage(int id, int count)
		{
			return null;
		}

		public bool IsRewardPossible(int rewardId, int rewardCount)
		{
			return false;
		}

		public bool IsRewardCountable(int rewardId)
		{
			return false;
		}

		public bool IsRewardTimed(int rewardId)
		{
			return false;
		}

		public bool IsRewardCountable_Resolved(int rewardId)
		{
			return false;
		}

		public bool IsRewardTimed_Resolved(int rewardId)
		{
			return false;
		}

		public bool IsRewardAlreadyHave(int rewardId, int rewardCount)
		{
			return false;
		}

		public (int, int) ResolveRplcReward(int id, int count)
		{
			return default((int, int));
		}

		public int ResolveRplcRewardId(int id)
		{
			return 0;
		}

		void IGameModule.Reset()
		{
		}

		void IGameModule.LoadConfig()
		{
		}

		void IGameModule.Startup()
		{
		}

		public void _CheckNeedCommitDataList()
		{
		}

		[IDTag(1)]
		public int CalcDailyEventTaskRequireCount(string param)
		{
			return 0;
		}

		[IDTag(0)]
		public int CalcDailyEventTaskRequireCount(int baseCount, int method, int levelRate = 0)
		{
			return 0;
		}

		public int CalcDynamicOrderLifeTime(int method, int baseTime, int realDifficulty)
		{
			return 0;
		}

		public (int, int) CalcDynamicReward(int id, int baseCount, int levelRate, int realDifficulty, int method)
		{
			return default((int, int));
		}

		public int _RoundLifeTime(float raw)
		{
			return 0;
		}

		public int _RoundCoin(float raw)
		{
			return 0;
		}

		public (int, int) _RoundTool(float raw)
		{
			return default((int, int));
		}

		public int _RoundLifeTimeVisitor(int idx)
		{
			return 0;
		}

		public int _RoundCoinVisitor(int idx)
		{
			return 0;
		}

		public int _RoundToolVisitor(int idx)
		{
			return 0;
		}

		public int _FindBoundIndex(float target, int count, Func<int, int> visitor)
		{
			return 0;
		}
	}
}
