using System;
using System.Collections.Generic;
using UnityEngine;

namespace MergePuzzle
{
	[CreateAssetMenu(fileName = "LevelBoosterData", menuName = "Scriptable/Booster/LevelBoosterData", order = 1)]
	public class LevelBoosterData : BoosterItemData
	{
		[NonSerialized]
		public List<int> _blockedIds;

		public override List<BoardPositionEntity> GetAvailablePositions(BoardEntity boardEntity, EventEntity eventEntity, BoardData boardData, out string keySuffix)
		{
			keySuffix = null;
			return null;
		}
	}
}
