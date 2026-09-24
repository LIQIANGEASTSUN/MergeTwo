using System;
using System.Collections.Generic;
using FAT.Merge;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT
{
	public class ActivityFishing : ActivityLike, IBoardEntry, IBoardArchive, IExternalOutput, MergeWorld.IActivityHandler, IBoardActivityOutput, IActivityOrderHandler
	{
		public struct FishCaughtInfo
		{
			public int fishId;

			public int curWeight;

			public int maxWeight;

			public int preCount;

			public int nowCount;

			public int preStar;

			public int nowStar;
		}

		public ActivityVisual EndTheme;

		public UIResAlt EndResAlt;

		public PopupActivity EndPopup;

		public PopupActivity RewardPopup;

		[NonSerialized]
		public int _curMilestoneIdx;

		[NonSerialized]
		public int _curToken;

		[NonSerialized]
		public int _curTemplateId;

		[NonSerialized]
		public int _rewardMilestoneIdx;

		[NonSerialized]
		public List<(int fishId, int count, int maxWeight)> _fishCaughtList;

		[NonSerialized]
		public int fish_id_mod;

		[NonSerialized]
		public MergeWorld _world;

		[NonSerialized]
		public MergeWorldTracer _tracer;

		[NonSerialized]
		public FishingBoardItemSpawnBonusHandler _spawnBonusHandler;

		[NonSerialized]
		public EventFish _conf;

		[NonSerialized]
		public EventFishMilestone _confMilestoneCur;

		[NonSerialized]
		public EventFishDetail _confDetail;

		[NonSerialized]
		public FishRarity _confRarity;

		[NonSerialized]
		public readonly List<FishInfo> _fishInfoList;

		[NonSerialized]
		public readonly List<RewardCommitData> _rewardsMilestone;

		[NonSerialized]
		public readonly List<RewardCommitData> _rewardsConvert;

		[NonSerialized]
		public readonly List<(int itemId, int weight)> _itemOutputs;

		[NonSerialized]
		public readonly List<(int fishId, int weight, int minWeight, int maxWeight)> _fishOutputs;

		[NonSerialized]
		public readonly HashSet<int> _fishUnlockSet;

		public EventFish Conf => null;

		public EventFishDetail ConfDetail => null;

		public EventFishMilestone ConfMilestoneCur => null;

		public FishRarity RarityInfo => null;

		public MergeWorld World => null;

		public IList<FishInfo> FishInfoList => null;

		public int TokenId => 0;

		public int MilestoneIdx => 0;

		public int RewardMilestoneIdx => 0;

		public int CurToken => 0;

		public int MaxToken => 0;

		public bool IsFinalMilestone => false;

		public int ExtraCatchCount => 0;

		public override ActivityVisual Visual => null;

		public VisualRes VisualBoard { get; }

		public VisualRes VisualHelp { get; }

		public VisualRes VisualCollect { get; }

		public VisualRes VisualGet { get; }

		public VisualRes VisualTip { get; }

		public VisualRes VisualLoading { get; }

		public VisualRes VisualEnd { get; }

		public VisualRes VisualConvert { get; }

		public VisualRes VisualMilestone { get; }

		public VisualPopup StartPopup { get; }

		FeatureEntry IBoardArchive.Feature => default(FeatureEntry);

		public BoardActivityOutputType OutputType { get; set; }

		public BoardActivityOutputMethod OutputMethod { get; set; }

		public ActivityFishing(ActivityLite lite_)
		{
		}

		public override void Open()
		{
		}

		public void Close()
		{
		}

		public override void LoadSetup(ActivityInstance data_)
		{
		}

		public override void SaveSetup(ActivityInstance data_)
		{
		}

		public override void SetupFresh()
		{
		}

		public override void WhenReset()
		{
		}

		public override void WhenEnd()
		{
		}

		public void InitConf()
		{
		}

		public void InitTheme()
		{
		}

		public void InitFish(IList<int> targetFishIds)
		{
		}

		public void InitWorld(fat.gamekitdata.Merge data)
		{
		}

		public int FillMilestoneRewards(List<RewardCommitData> container)
		{
			return 0;
		}

		public int FillConvertRewards(List<RewardCommitData> container)
		{
			return 0;
		}

		public void Cleanup()
		{
		}

		public void EndConvert()
		{
		}

		public void RefreshMilestone()
		{
		}

		public bool CheckIsShowRedPoint(out int rpNum)
		{
			rpNum = default(int);
			return false;
		}

		public void AddToken(int id, int count)
		{
		}

		public void AddMilestoneReward()
		{
		}

		string IBoardEntry.BoardEntryAsset()
		{
			return null;
		}

		void IBoardArchive.SetBoardData(fat.gamekitdata.Merge data)
		{
		}

		void IBoardArchive.FillBoardData(fat.gamekitdata.Merge data)
		{
		}

		bool IExternalOutput.CanUseItem(Item source)
		{
			return false;
		}

		bool IExternalOutput.TrySpawnItem(Item source, out int outputId, out ItemSpawnContext context)
		{
			outputId = default(int);
			context = null;
			return false;
		}

		public bool IsFishUnlocked(int fishId)
		{
			return false;
		}

		public int GetFishCaughtCount(int fishId)
		{
			return 0;
		}

		public int GetFishMaxStarRequireCount(int fishId)
		{
			return 0;
		}

		public int CalcFishStarRequireCount(int fishId, int targetStar = int.MaxValue)
		{
			return 0;
		}

		public int GetFishMaxStar(int fishId)
		{
			return 0;
		}

		public int CalcFishStarByCount(int fishId, int count)
		{
			return 0;
		}

		public void ConvertFish(int fishId)
		{
		}

		public void UpdateFishCaughtInfo(int fishId, int count, int maxWeight)
		{
		}

		public void AddNewFish(int fishId, int count, int maxWeight)
		{
		}

		public void GenerateFish()
		{
		}

		public bool CollectAllBoardReward(List<RewardCommitData> rewards)
		{
			return false;
		}

		public void _Info(string msg)
		{
		}

		public void _Error(string msg)
		{
		}

		public void RefreshOutputType()
		{
		}

		public void RefreshOutputMethod()
		{
		}

		public bool _IsEnergyMethod()
		{
			return false;
		}

		public void _RefreshSpawnBonusHandler()
		{
		}

		public void _ClearSpawnBonusHandler()
		{
		}

		public void _SetBonusHandlerDirty()
		{
		}

		bool IActivityOrderHandler.OnPreUpdate(OrderData order, IOrderHelper helper, MergeWorldTracer tracer)
		{
			return false;
		}

		bool IBoardActivityOutput.IsValidForOrder()
		{
			return false;
		}

		FlyType IBoardActivityOutput.GetFlyType()
		{
			return default(FlyType);
		}

		ReasonString IBoardActivityOutput.GetReasonString()
		{
			return null;
		}

		void IBoardActivityOutput.TrackOrderGetItem(int rewardId, int rewardCount, int payDiff)
		{
		}

		public ActivityVisual _003C_003EiFixBaseProxy_get_Visual()
		{
			return null;
		}

		public void _003C_003EiFixBaseProxy_SetupFresh()
		{
		}

		public void _003C_003EiFixBaseProxy_WhenReset()
		{
		}

		public void _003C_003EiFixBaseProxy_WhenEnd()
		{
		}
	}
}
