using System;
using System.Collections.Generic;
using FAT.Merge;
using UnityEngine;
using fat.rawdata;

namespace FAT
{
	public class ScoreEntity
	{
		[Flags]
		public enum ScoreType
		{
			None = 0,
			Shop = 1,
			OrderLeft = 2,
			OrderRight = 4,
			Bubble = 8,
			Merge = 0x10,
			Joker = 0x20,
			All = 0x3F,
			OnlyOrder = 6
		}

		public class ScoreFlyRewardData
		{
			public int rewardId;

			public int rewardCount;
		}

		[NonSerialized]
		public int RequireCoinId;

		[NonSerialized]
		public int BoardId;

		[NonSerialized]
		public int EventExtraScoreId;

		[NonSerialized]
		public ActivityLike Activity;

		[NonSerialized]
		public ReasonString ReasonString;

		[NonSerialized]
		public string MergeScorePrefab;

		public bool NeedFlyCenter;

		[NonSerialized]
		public ScoreType ScoreCalcTag;

		[NonSerialized]
		public int Score;

		[NonSerialized]
		public int PrevScore;

		[NonSerialized]
		public ScoreMergeBonusHandler mergeHandler;

		[NonSerialized]
		public ScoreFlyRewardData orderScoreReward;

		[NonSerialized]
		public ScoreFlyRewardData orderScoreRewardBR;

		[NonSerialized]
		public List<RoundScore> roundScoreList;

		[NonSerialized]
		public bool willCheckComplete;

		[NonSerialized]
		public Func<ScoreType, ReasonString> tokenChangeReasonResolver;

		[NonSerialized]
		public bool allowEquivalentMainBoardForShop;

		[NonSerialized]
		public Func<MergeWorld, bool> additionalBoardMatcher;

		public int roundScoreVisitor(int idx)
		{
			return 0;
		}

		public void Setup(int score, ActivityLike activity, int requireCoinId, int eventExtraScoreId, ReasonString r, string mergeScorePrefab, int boardId = 0, bool needFlyCenter = true, ScoreType scoreCalcTag = ScoreType.All, Func<ScoreType, ReasonString> tokenChangeReasonResolver = null, bool allowEquivalentMainBoardForShop = false, Func<MergeWorld, bool> additionalBoardMatcher = null)
		{
		}

		public void Clear()
		{
		}

		public void SetupBonusHandler()
		{
		}

		public void ClearBonusHandler()
		{
		}

		public void OnUseJokerItemTryAddScore(Item item, int score)
		{
		}

		public void OnUseSpeedUpItemTryAddScore(Item item, int score)
		{
		}

		public void OnMergeItemTryAddScore(Item item, int score)
		{
		}

		public void OnBuyShopItemTryAddScore(int price, int boardId)
		{
		}

		public void OnCommitOrderTryAddScore(int score)
		{
		}

		public void OnCommitOrderTryAddScoreV2(int activityId, int score)
		{
		}

		public void OnCommitOrderTryAddScoreBR(int score)
		{
		}

		public void OnCommitOrderAnimComplete(Vector3 from, bool isBottomLeft)
		{
		}

		public void OnCommitOrderAnimCompleteV2(Vector3 from, int activityId)
		{
		}

		public void TryFlyOrderScore(ScoreFlyRewardData r, Vector3 from)
		{
		}

		public void UpdateScore(int score)
		{
		}

		public bool _IsIgnoreScoreType(ScoreType type)
		{
			return false;
		}

		public ScoreFlyRewardData AddScore(ScoreType type, int param)
		{
			return null;
		}

		public int GetCalcScoreByType(ScoreType type, int score)
		{
			return 0;
		}

		public int CalculateScoreByType(ScoreType type, int score)
		{
			return 0;
		}

		public void CalcOrderScore(OrderData order, MergeWorldTracer tracer)
		{
		}

		public int CalcOrderScoreValue(OrderData order, MergeWorldTracer tracer, bool oldBRScore = false)
		{
			return 0;
		}

		public void CalcOrderScoreBR(OrderData order, MergeWorldTracer tracer, int rewardId = 0)
		{
		}

		public void CalcOrderScoreV2(OrderData order, MergeWorldTracer tracer, int rewardId = 0, bool oldBRScore = false)
		{
		}

		public bool IsEquivalentMainBoardShop(int boardId)
		{
			return false;
		}

		public int CalculateOrderScore(int diff, int rate)
		{
			return 0;
		}

		public int CalculateOrderScoreBR(int diff, int rate)
		{
			return 0;
		}

		public int CalculateOrderScoreBRFix(OrderData order, MergeWorldTracer tracer)
		{
			return 0;
		}

		public int CalculateOrderLowerRightScoreFix(int factor, int actDiff, int payDiff, int minDiffRate, int mode)
		{
			return 0;
		}

		public int RoundScore(float score)
		{
			return 0;
		}

		public int FindBoundIndex(float target, int count, Func<int, int> visitor)
		{
			return 0;
		}
	}
}
