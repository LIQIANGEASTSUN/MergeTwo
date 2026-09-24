using System.Collections.Generic;
using GameLogic.Player;
using Metaplay.Core.Model;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	public class GarageCleanupEventBoardModel
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public List<GarageCleanupEventBoardRowModel> Rows;

		[MetaMember(2, MetaMemberFlags.None)]
		public List<GarageCleanupPatternId> PatternsClaimed;

		public GarageCleanupEventBoardModel()
		{
		}

		public GarageCleanupEventBoardModel(PlayerModel player, GarageCleanupBoardInfo boardInfo)
		{
		}

		public bool IsFilled()
		{
			return false;
		}

		public bool IsPatternFilled(PlayerModel player, GarageCleanupPatternInfo patternInfo)
		{
			return false;
		}

		public bool WillPatternBeFilled(PlayerModel player, GarageCleanupPatternInfo patternInfo, int plannedFillIndex)
		{
			return false;
		}

		public void MarkPatternClaimed(GarageCleanupPatternId patternId)
		{
		}

		public bool IsPatternClaimed(GarageCleanupPatternId patternId)
		{
			return false;
		}

		public float GetProgress()
		{
			return 0f;
		}
	}
}
