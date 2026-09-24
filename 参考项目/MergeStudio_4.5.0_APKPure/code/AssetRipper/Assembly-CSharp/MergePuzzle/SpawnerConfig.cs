using System;
using System.Collections.Generic;

namespace MergePuzzle
{
	[Serializable]
	public class SpawnerConfig
	{
		public bool UsesEnergy;

		public int SmallCapacity;

		public int BigCapacity;

		public int ChargeTime;

		public int GemSkipAmount;

		public int GemDecreaseCount;

		public int RewardedCapacity;

		public List<SpawnedItem> SpawnedItems;

		public List<SpawnedItem> TutorialItems;

		public SpawnerState SpawnerStartState;

		public SpawnerState SpawnerSkippedState;
	}
}
