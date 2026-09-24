using System;
using System.Collections.Generic;

namespace MergePuzzle.RecurringEvents
{
	public class RecurringEventData
	{
		[NonSerialized]
		public readonly KiteRecurringEventConfigItem _remoteConfig;

		[NonSerialized]
		public List<RecurringRewardData> _localSavedRewards;

		public int ID => 0;

		public int MinimumLevel => 0;

		public int MinimumLevelForTeaserShow => 0;

		public long TeaserStartTime => 0L;

		public long StartTime => 0L;

		public long EndTime => 0L;

		public bool Disable => false;

		public Dictionary<int, int> BoardTaskEventPointEconomy => null;

		public List<int> CurrencyRewardEconomy => null;

		public List<RecurringRewardData> KiteRewards => null;

		public List<RecurringRewardData> Rewards => null;

		public int InitialEventCurrency => 0;

		public string AddressableLabel => null;

		public RecurringEventData(KiteRecurringEventConfigItem remoteConfig)
		{
		}

		public int GetCurrencyReward(int itemLevel)
		{
			return 0;
		}

		public RecurringRewardData GetReward(int step)
		{
			return null;
		}

		public List<IRecurringEventReward> GetSupReward(int step, int progressPoint)
		{
			return null;
		}

		public List<IRecurringEventReward> GetSupReward(int step, int progressPoint, int lastSeenPoint)
		{
			return null;
		}

		public RecurringRewardData GetLastReward()
		{
			return null;
		}

		public RecurringRewardData GetFirstReward()
		{
			return null;
		}

		public void SetLocalSaveRewards(RecurringEventEntity recurringEventEntity)
		{
		}

		public void ResetLocalSavedRewards()
		{
		}

		public int GetRewardCount()
		{
			return 0;
		}

		public void SetEndTimeAsNow()
		{
		}
	}
}
