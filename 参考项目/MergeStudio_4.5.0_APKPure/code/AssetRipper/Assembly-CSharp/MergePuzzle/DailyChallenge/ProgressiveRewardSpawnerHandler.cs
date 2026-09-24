using System.Collections.Generic;
using Paxie;
using UnityEngine;

namespace MergePuzzle.DailyChallenge
{
	public class ProgressiveRewardSpawnerHandler : DailyChallengeDayHandler<ProgressiveRewardSpawnerDayConfig>, IBoardItemHandler, IFeatureHandler
	{
		public ProgressiveRewardSpawnerHandler(BoardEntity boardEntity, BoardData boardData, ProgressiveRewardSpawnerDayConfig dayConfig, DailyChallengeHandlerManager dailyChallengeHandlerManager)
		{
		}

		public override void FinishCompletelyInner()
		{
		}

		public void DestroyBoardItems()
		{
		}

		public override void OnReceiveAddressable()
		{
		}

		public void AddItemsToItemCollection()
		{
		}

		public void UpdatePerishableConfig()
		{
		}

		public BoardItemSetData GetCurrencySet(int setID)
		{
			return null;
		}

		public SerializableDictionary<int, BoardItemSetData> GetBoardItemDictionary()
		{
			return null;
		}

		public List<BoardItemData> GetBoardItemSetItems(int setID)
		{
			return null;
		}

		public Sprite GetStep2Sprite()
		{
			return null;
		}

		public Sprite GetStep3Sprite()
		{
			return null;
		}
	}
}
