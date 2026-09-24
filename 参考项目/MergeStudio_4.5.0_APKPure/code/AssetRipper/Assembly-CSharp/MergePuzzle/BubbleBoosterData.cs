using System.Collections.Generic;
using UnityEngine;

namespace MergePuzzle
{
	[CreateAssetMenu(fileName = "BubbleBoosterData", menuName = "Scriptable/Booster/BubbleBoosterData", order = 4)]
	public class BubbleBoosterData : BoosterItemData
	{
		public readonly string BubbleBoosterWarningSuffix;

		public override List<BoardPositionEntity> GetAvailablePositions(BoardEntity boardEntity, EventEntity eventEntity, BoardData boardData, out string keySuffix)
		{
			keySuffix = null;
			return null;
		}
	}
}
