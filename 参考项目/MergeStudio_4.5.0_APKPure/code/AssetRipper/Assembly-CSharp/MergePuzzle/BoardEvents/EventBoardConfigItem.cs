using System;
using System.Collections.Generic;

namespace MergePuzzle.BoardEvents
{
	[Serializable]
	public class EventBoardConfigItem
	{
		public int Index;

		public string ActiveOfferPackageID;

		public bool Disabled;

		public List<string> RequiredAddressables;

		public long EventDurationUnix;

		public int OfferMaxPurchase;

		public long EventStartUnix;

		public int TeaserShowLevel;

		public long TeaserStartUnix;

		public int EventLevel;

		public int SpecialEnergyInitialCount;

		public bool UseDefaultEnergies;

		public string EventTag;

		public int InitInventorySize;

		public int TotalEnergyFillTime;

		public int MaxUserEnergy;

		public LevelData Levels;

		public BoardTaskData Tasks;

		public BalanceEnergyRefillCostModel EnergyRefillConfig;

		public List<int> InventoryPriceList;

		public List<BoardPositionData> InitialPositionData;

		public BalanceRewardedAdConfigModel AdConfig;

		public BalanceBubbleConfigModel BubbleConfig;

		public BalanceItemSetConfigModel ItemSetConfig;

		public List<BalanceProgressiveConfigModel> ProgressiveConfigs;

		public BalanceSpawnerConfigModel SpawnerConfig;

		public bool PreventCustomSound;

		public List<string> GetRequiredAddressables()
		{
			return null;
		}

		public bool IsSameEvent(EventBoardConfigItem eventItem)
		{
			return false;
		}

		public long EventFinishUnix()
		{
			return 0L;
		}
	}
}
