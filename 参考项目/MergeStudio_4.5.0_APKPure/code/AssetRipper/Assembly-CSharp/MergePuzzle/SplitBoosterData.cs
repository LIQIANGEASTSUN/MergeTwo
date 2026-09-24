using System;
using System.Collections.Generic;
using UnityEngine;

namespace MergePuzzle
{
	[CreateAssetMenu(fileName = "SplitBoosterData", menuName = "Scriptable/Booster/SplitBoosterData", order = 3)]
	public class SplitBoosterData : BoosterItemData
	{
		public string NotEnoughSpaceText;

		[NonSerialized]
		public List<int> _blockedIds;

		public bool IsItemDataSplittable(BoardData boardData, BoardItemData itemData)
		{
			return false;
		}

		public override List<BoardPositionEntity> GetAvailablePositions(BoardEntity boardEntity, EventEntity eventEntity, BoardData boardData, out string keySuffix)
		{
			keySuffix = null;
			return null;
		}
	}
}
