using System;
using System.Collections.Generic;

namespace MergePuzzle
{
	[Serializable]
	public class GameItemReward : IReward
	{
		public string SetIDLevel;

		public int Quantity;

		public int Sorting;

		public List<GameQuantityWeight> QuantityWeightList;

		public GameRewardType RewardType => default(GameRewardType);
	}
}
