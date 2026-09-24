using System;
using System.Collections.Generic;

namespace MergePuzzle
{
	[Serializable]
	public class GameMainReward : IReward
	{
		public List<GameItemReward> Items;

		public List<GameCollectableReward> Collectables;

		public List<GameBoosterReward> Boosters;

		public GameUnlimitedEnergyReward UnlimitedEnergy;

		public GameRecurringEventCurrencyReward EventCurrencyReward;

		public List<GameSupReward> SupRewards;

		public List<GameRangeBasedChestReward> RangeBasedChests;

		public List<GameRewardBoxReward> RewardBoxItems;

		public GameRewardType RewardType => default(GameRewardType);
	}
}
