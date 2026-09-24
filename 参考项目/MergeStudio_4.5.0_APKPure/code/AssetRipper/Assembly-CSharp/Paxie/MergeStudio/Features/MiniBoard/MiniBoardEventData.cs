using System.Collections.Generic;
using MergePuzzle;
using MergePuzzle.RecurringEvents;

namespace Paxie.MergeStudio.Features.MiniBoard
{
	public abstract class MiniBoardEventData : RecurringEventData
	{
		public MiniBoardEventData(KiteRecurringEventConfigItem remoteConfig)
			: base(null)
		{
		}

		public abstract bool GetUseSpawnerForItemGet();

		public abstract bool GetTasksForItemGet();

		public abstract int GetBoardTaskEventPoint(int boardTaskCoinReward);

		public abstract List<KiteMiniBoardItemReward> GetTaskItemRewards(int taskCoin);

		public abstract List<KiteMiniBoardItemReward> GetItemMergeRewards(string setIDLevel);

		public abstract List<BalancePerishableConfigModelItem> GetPerishableSpawnerConfigList();
	}
}
