using System;
using System.Collections.Generic;
using Config;
using EL;
using FAT.Merge;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT
{
	public class ActivityScoreMic : ActivityLike, IBoardEntry, IActivityOrderHandler
	{
		[NonSerialized]
		public int _detailId;

		public static string scoreKey;

		public static string scoreMultiKey;

		[NonSerialized]
		public ScoreEntity _scoreEntity;

		[NonSerialized]
		public bool _hasLevelUp;

		[NonSerialized]
		public List<RewardCommitData> _commitRewardList;

		[NonSerialized]
		public ScoreMicSpawnBonusHandler spawnBonusHandler;

		[NonSerialized]
		public ScoreMicDisposeBonusHandler disposeBonusHandler;

		[NonSerialized]
		public Dictionary<int, IntRangeConfig> _bubbleScoreRange;

		[NonSerialized]
		public Dictionary<int, IntRangeConfig> _shopScoreRange;

		public override bool Valid => false;

		public MicMilestone Conf { get; set; }

		public override ActivityVisual Visual => null;

		public VisualPopup MainPopup { get; }

		public VisualPopup SettlePopup { get; }

		public int TotalScore { get; set; }

		public int CurMilestoneLevel { get; set; }

		public int CurMilestoneNum { get; set; }

		public int LastMilestoneLevel { get; set; }

		public int LastMilestoneNum { get; set; }

		public MicMilestoneDetail GetCurDetailConfig()
		{
			return null;
		}

		public ActivityScoreMic(ActivityLite lite_)
		{
		}

		public override void SetupFresh()
		{
		}

		public override void SaveSetup(ActivityInstance data_)
		{
		}

		public override void LoadSetup(ActivityInstance data_)
		{
		}

		public override void WhenActive(bool new_)
		{
		}

		public override void WhenReset()
		{
		}

		public override void WhenEnd()
		{
		}

		public override void Open()
		{
		}

		public void _RefreshPopupInfo()
		{
		}

		string IBoardEntry.BoardEntryAsset()
		{
			return null;
		}

		public string GetScoreTextStyleKey(bool isMulti)
		{
			return null;
		}

		public PoolMapping.Ref<List<RewardCommitData>> PopCommitDataList()
		{
			return default(PoolMapping.Ref<List<RewardCommitData>>);
		}

		public void OnMainUIClose()
		{
		}

		public void TryPopupLevelUp()
		{
		}

		public void CheckCanEnd()
		{
		}

		public void _CheckEndWhenActive()
		{
		}

		public void _TryCommitReward()
		{
		}

		public void TryAddToken(int id, int num, ReasonString reason)
		{
		}

		public bool _TryAddScore(int addNum)
		{
			return false;
		}

		public void _RefreshScoreEntity()
		{
		}

		public void _ClearScoreEntity()
		{
		}

		bool IActivityOrderHandler.OnPreUpdate(OrderData order, IOrderHelper helper, MergeWorldTracer tracer)
		{
			return false;
		}

		public MicMilestoneGroup GetMilestoneInfo(int milestoneLevel)
		{
			return null;
		}

		public MicMilestoneGroup GetCurMilestoneInfo()
		{
			return null;
		}

		public int GetCurMilestoneNumMax(int curMilestoneLevel)
		{
			return 0;
		}

		public bool IsComplete()
		{
			return false;
		}

		public void _UpdateMilestoneInfo(int scoreNum)
		{
		}

		public void _RefreshSpawnBonusHandler()
		{
		}

		public void _ClearSpawnBonusHandler()
		{
		}

		public void _RefreshDisposeBonusHandler()
		{
		}

		public void _ClearDisposeBonusHandler()
		{
		}

		public bool CheckTokenMultiRate(int tokenId, out int rate)
		{
			rate = default(int);
			return false;
		}

		public bool CheckMainBoardTokenMultiRate(int tokenId, out int rate)
		{
			rate = default(int);
			return false;
		}

		public int GetTokenIdForBubbleItem(Item item)
		{
			return 0;
		}

		public int GetTokenIdForShopItem(ShopChessOrderData shopChessOrderData)
		{
			return 0;
		}

		public bool CheckCanSpawnOnBubble()
		{
			return false;
		}

		public void _RefreshAllRangeInfo()
		{
		}

		public void _RefreshRangeInfo(IDictionary<int, IntRangeConfig> dict, IEnumerable<string> conf)
		{
		}

		public bool _003C_003EiFixBaseProxy_get_Valid()
		{
			return false;
		}

		public void _003C_003EiFixBaseProxy_SetupFresh()
		{
		}

		public void _003C_003EiFixBaseProxy_WhenActive(bool P0)
		{
		}

		public void _003C_003EiFixBaseProxy_WhenReset()
		{
		}

		public void _003C_003EiFixBaseProxy_WhenEnd()
		{
		}

		public ActivityVisual _003C_003EiFixBaseProxy_get_Visual()
		{
			return null;
		}
	}
}
