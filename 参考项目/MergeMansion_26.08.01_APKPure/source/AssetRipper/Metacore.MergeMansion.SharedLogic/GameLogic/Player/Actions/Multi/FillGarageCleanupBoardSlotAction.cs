using System.Collections.Generic;
using Code.GameLogic.GameEvents;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(1302)]
	public class FillGarageCleanupBoardSlotAction : PlayerAction
	{
		public GarageCleanupEventId EventId { get; set; }

		public int Level { get; set; }

		public int RowIndex { get; set; }

		public int SlotIndex { get; set; }

		public FillGarageCleanupBoardSlotAction()
		{
		}

		public FillGarageCleanupBoardSlotAction(GarageCleanupEventId eventId, int level, int rowIndex, int slotIndex)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}

		public static void TryClaimPatterns(List<GarageCleanupPatternInfo> patterns, PlayerModel player, GarageCleanupEventModel eventModel, ref List<GarageCleanupPatternInfo> claimedPatterns)
		{
		}
	}
}
