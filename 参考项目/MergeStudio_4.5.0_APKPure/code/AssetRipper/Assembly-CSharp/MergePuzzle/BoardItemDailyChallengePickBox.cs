using System.Collections.Generic;
using MergePuzzle.DailyChallenge;
using UnityEngine;

namespace MergePuzzle
{
	[CreateAssetMenu(fileName = "BoardItemDailyChallengePickBox", menuName = "Scriptable/BoardItem/BoardItemDailyChallengePickBox", order = 10)]
	public class BoardItemDailyChallengePickBox : BoardItemData, IConfigAdaptor<DailyChallengePickBoxSpawnerAdaptor>, IConfigAdaptorBase
	{
		public List<SpawnedItem> SpawnedItemsList;

		public override bool Initialize(BoardEntity boardEntity, IItemController item, long millisecondsPassed, bool isNewlyCreated)
		{
			return false;
		}

		public override int GetTimeRequiredToExitCharging()
		{
			return 0;
		}

		public DailyChallengePickBoxSpawnerAdaptor GetConfigAdaptor()
		{
			return null;
		}

		public List<DailyChallengeRewardData> GetSpawnedItems()
		{
			return null;
		}

		public AdaptorBase ConvertFromLocal()
		{
			return null;
		}
	}
}
