using System;
using System.Collections.Generic;
using Config;
using FAT.Merge;
using IFix.Core;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT
{
	public class ActivityFogScore : ActivityLike, IActivityComplete, IActivityOrderHandler, IBoardEntry, IActivitySlider
	{
		[NonSerialized]
		public EventFogScore _eventConf;

		[NonSerialized]
		public FogScoreDetail _detailConf;

		[NonSerialized]
		public int _detailId;

		[NonSerialized]
		public ScoreEntity _scoreEntity;

		[NonSerialized]
		public FogScoreSpawnBonusHandler _spawnBonusHandler;

		public List<RewardCommitData> commitRewardList;

		public int CurShowScore;

		public int CurMileStoneScore;

		public int PrevFinalMileStoneRewardId;

		public int PrevFinalMileStoneRewardCount;

		public int PrevScore;

		public EventFogScore EventConf => null;

		public FogScoreDetail DetailConf => null;

		public int TokenId => 0;

		public int BoardId => 0;

		public int CostId => 0;

		public override bool Valid => false;

		public bool IsActive => false;

		public int Score { get; set; }

		public int GrantedRewardOrdinal { get; set; }

		public int PendingRewardCount => 0;

		public int StandardCount => 0;

		public bool HasCycle => false;

		public int RoundLen => 0;

		public override bool EntryVisible => false;

		public bool BoardEntryVisible => false;

		public VisualRes VisualMain { get; }

		public override ActivityVisual Visual => null;

		public ActivityFogScore(ActivityLite lite_)
		{
		}

		public override void SetupFresh()
		{
		}

		public override void SetupClear()
		{
		}

		public override void SaveSetup(ActivityInstance data_)
		{
		}

		public override void LoadSetup(ActivityInstance data_)
		{
		}

		public void Init()
		{
		}

		public override void WhenActive(bool new_)
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

		public void AddListeners()
		{
		}

		public void RemoveListeners()
		{
		}

		public void RegisterScoreSources()
		{
		}

		public void UnregisterScoreSources()
		{
		}

		public void TryAddScore(int addNum, ReasonString reason = null)
		{
		}

		public void OnUpdateScore((int prev, int total, int coinId) data)
		{
		}

		public void OnUpdateScoreByShop()
		{
		}

		public void SettleMilestones()
		{
		}

		public RewardCommitData TryGetCommitReward(RewardConfig reward)
		{
			return null;
		}

		[IDTag(0)]
		public void TryCommitReward()
		{
		}

		[IDTag(1)]
		public void TryCommitReward(RewardCommitData removeData)
		{
		}

		public List<RewardCommitData> GetCommitRewardList()
		{
			return null;
		}

		public void RefreshDisplayScore()
		{
		}

		public int EligibleOrdinal(int score)
		{
			return 0;
		}

		public List<RewardConfig> RewardForOrdinal(int ordinal, out bool isCycle)
		{
			isCycle = default(bool);
			return null;
		}

		public bool HasComplete()
		{
			return false;
		}

		public void TryEndActivityIfComplete()
		{
		}

		public bool IsValidForBoard(int boardId)
		{
			return false;
		}

		bool IActivityOrderHandler.OnPreUpdate(OrderData order, IOrderHelper helper, MergeWorldTracer tracer)
		{
			return false;
		}

		public string BoardEntryAsset()
		{
			return null;
		}

		public string SliderPrefabAsset()
		{
			return null;
		}

		public void OpenUIMain()
		{
		}

		public bool _003C_003EiFixBaseProxy_get_Valid()
		{
			return false;
		}

		public void _003C_003EiFixBaseProxy_SetupFresh()
		{
		}

		public void _003C_003EiFixBaseProxy_SetupClear()
		{
		}

		public void _003C_003EiFixBaseProxy_WhenActive(bool P0)
		{
		}

		public void _003C_003EiFixBaseProxy_WhenEnd()
		{
		}

		public void _003C_003EiFixBaseProxy_WhenReset()
		{
		}

		public bool _003C_003EiFixBaseProxy_get_EntryVisible()
		{
			return false;
		}

		public ActivityVisual _003C_003EiFixBaseProxy_get_Visual()
		{
			return null;
		}
	}
}
