using System;
using System.Collections.Generic;
using MergePuzzle;

namespace Paxie.MergeStudio.GameCore.Gameplay.Board
{
	public class ItemLevelChecker
	{
		[NonSerialized]
		public readonly BoardEntity _boardEntity;

		[NonSerialized]
		public readonly BoardData _boardData;

		public ItemLevelChecker(BoardEntity boardEntity, BoardData boardData)
		{
		}

		public Dictionary<int, ItemSetLevelAvailability> GetDetailedAvailableLevels()
		{
			return null;
		}

		public void CalculateAvailableThroughMerging(ItemSetLevelAvailability itemSetLevelAvailability)
		{
		}
	}
}
