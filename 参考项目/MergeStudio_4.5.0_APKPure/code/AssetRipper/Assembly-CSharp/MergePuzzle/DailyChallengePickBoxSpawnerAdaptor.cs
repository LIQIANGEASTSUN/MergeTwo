using System;
using System.Collections.Generic;
using MergePuzzle.DailyChallenge;
using MergePuzzle.ItemRewardBackup;

namespace MergePuzzle
{
	public class DailyChallengePickBoxSpawnerAdaptor : AdaptorBase
	{
		[NonSerialized]
		public DailyChallengePickBoxConfig _activeConfig;

		public DailyChallengePickBoxSpawnerAdaptor(string setIDLevel, DailyChallengePickBoxConfig activeConfigBase)
			: base(null)
		{
		}

		public DailyChallengePickBoxSpawnerAdaptor(BoardItemDailyChallengePickBox boardItemDailyChallengePickBox)
			: base(null)
		{
		}

		public List<DailyChallengeRewardData> GetSpawnedItems()
		{
			return null;
		}

		public List<DailyChallengeRewardData> CreateSpawnedItemWithLocal(List<SpawnedItem> spawnedItemsList)
		{
			return null;
		}

		public void UpdateSpawnedItems(ItemRewardConvertEvent.FeatureStatusUpdated e)
		{
		}

		public void ConvertDailyChallengeReward(ItemRewardConvertEvent.FeatureStatusUpdated e, DailyChallengeRewardData rewardData)
		{
		}
	}
}
