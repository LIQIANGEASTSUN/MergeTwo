using System.Collections.Generic;
using MergePuzzle;

namespace Paxie.MergeStudio.GameCore.Gameplay.Board
{
	public class ItemSetLevelAvailability
	{
		public BoardItemSetData SetData;

		public Dictionary<int, int> DirectlyAvailableLevelByCount { get; set; }

		public Dictionary<int, int> AvailableThroughMerging { get; set; }

		public ItemSetLevelAvailability(BoardItemSetData setData)
		{
		}

		public bool IsAvailable(int level)
		{
			return false;
		}

		public bool IsAvailable(ItemInfo itemInfo)
		{
			return false;
		}
	}
}
