using System;
using System.Collections.Generic;
using MergePuzzle;
using MergePuzzle.RecurringEvents;
using Paxie.MergeStudio.Features.MiniBoard;

namespace Paxie.MergeStudio.Features.RecurringEvents.MiniBoardProgression
{
	public class MiniBoardProgressionEventData : MiniBoardEventData
	{
		[NonSerialized]
		public KiteMiniBoardProgressionExtraConfigItem _kiteMiniBoardProgressionExtraConfigItem;

		public int GetTotalBoardCount => 0;

		public int GetMainBoardItemSetID => 0;

		public List<int> GetTargetItemLevels => null;

		public List<BalancePerishableConfigModelItem> PerishableSpawnerList => null;

		public MiniBoardProgressionEventData(KiteMiniBoardProgressionConfigItem remoteConfig)
			: base(null)
		{
		}

		public List<KiteMiniBoardInitialBoardModel> GetInitialBoardModelList()
		{
			return null;
		}

		public KiteMiniBoardInitialBoardModel GetInitialBoardModel(int boardIndex)
		{
			return null;
		}

		public List<KiteMiniBoardItemReward> GetInitialActiveRewardList()
		{
			return null;
		}

		public int GetTargetItemLevel(int boardIndex)
		{
			return 0;
		}

		public int GetLastProgressItemLevel()
		{
			return 0;
		}

		public override bool GetUseSpawnerForItemGet()
		{
			return false;
		}

		public List<int> GetSpawnerList()
		{
			return null;
		}

		public List<KiteMiniBoardProgressionSpawnProbabilityConfig> GetSpawnerItemProbabilityList()
		{
			return null;
		}

		public string GetSpawnRewardItemString()
		{
			return null;
		}

		public override bool GetTasksForItemGet()
		{
			return false;
		}

		public override int GetBoardTaskEventPoint(int boardTaskCoinReward)
		{
			return 0;
		}

		public override List<KiteMiniBoardItemReward> GetTaskItemRewards(int taskCoin)
		{
			return null;
		}

		public override List<KiteMiniBoardItemReward> GetItemMergeRewards(string setIDLevel)
		{
			return null;
		}

		public override List<BalancePerishableConfigModelItem> GetPerishableSpawnerConfigList()
		{
			return null;
		}

		public List<RecurringConversionData> GetConversionDataList()
		{
			return null;
		}

		public int GetConversionDataCollectableID()
		{
			return 0;
		}

		public RecurringConversionData GetConversionData(int setID, int level)
		{
			return null;
		}
	}
}
