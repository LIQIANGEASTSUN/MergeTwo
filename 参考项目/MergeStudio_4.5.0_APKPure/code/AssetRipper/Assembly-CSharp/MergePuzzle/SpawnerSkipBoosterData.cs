using System;
using System.Collections.Generic;
using UnityEngine;

namespace MergePuzzle
{
	[CreateAssetMenu(fileName = "SpawnerSkipBoosterData", menuName = "Scriptable/Booster/SpawnerSkipBoosterData", order = 2)]
	public class SpawnerSkipBoosterData : BoosterItemData
	{
		[NonSerialized]
		public List<int> _blockedIds;

		public override List<BoardPositionEntity> GetAvailablePositions(BoardEntity boardEntity, EventEntity eventEntity, BoardData boardData, out string keySuffix)
		{
			keySuffix = null;
			return null;
		}

		public bool IsValidForTutorial(BoardEntity boardEntity, BoardData boardData)
		{
			return false;
		}
	}
}
