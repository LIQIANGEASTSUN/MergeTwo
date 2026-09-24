using System.Collections.Generic;
using Paxie;
using UnityEngine;

namespace MergePuzzle.DailyChallenge
{
	public class NonProgressiveRewardSpawnerHandler : DailyChallengeDayHandler<NonProgressiveRewardSpawnerDayConfig>, IBoardItemHandler, IFeatureHandler
	{
		public NonProgressiveRewardSpawnerHandler(BoardEntity boardEntity, BoardData boardData, NonProgressiveRewardSpawnerDayConfig dayConfig, DailyChallengeHandlerManager dailyChallengeHandlerManager)
		{
		}

		public override void FinishCompletelyInner()
		{
		}

		public override void OnReceiveAddressable()
		{
		}

		public void DestroyBoardItems()
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

		public void AddItemsToItemCollection()
		{
		}

		public Sprite GetChallengeCurrencySprite()
		{
			return null;
		}

		public Sprite GetStep3Sprite()
		{
			return null;
		}
	}
}
