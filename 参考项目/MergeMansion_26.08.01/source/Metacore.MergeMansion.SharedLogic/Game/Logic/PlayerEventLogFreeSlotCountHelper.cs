using System.Collections.Generic;
using GameLogic.Player;
using GameLogic.Player.Board;

namespace Game.Logic
{
	public static class PlayerEventLogFreeSlotCountHelper
	{
		public class FreeSlots
		{
			public int BoardBoardEmptySlots { get; set; }

			public int InventoryEmptySlots { get; set; }

			public int ProducerEmptySlots { get; set; }

			public FreeSlots(int boardEmptySlots, int inventoryEmptySlots, int producerEmptySlots)
			{
			}
		}

		public class MergeBoardEqualityComparer : IEqualityComparer<MergeBoard>
		{
			public static readonly MergeBoardEqualityComparer Instance;

			public bool Equals(MergeBoard x, MergeBoard y)
			{
				return false;
			}

			public int GetHashCode(MergeBoard obj)
			{
				return 0;
			}
		}

		public static FreeSlots CalculateFreeSlots(IPlayer player)
		{
			return null;
		}

		public static bool IsValidMergeBoard(MergeBoard board, IPlayer player)
		{
			return false;
		}
	}
}
