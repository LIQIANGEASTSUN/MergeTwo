using System;
using System.Collections.Generic;

namespace MergePuzzle
{
	[Serializable]
	public class SlotFullCounter
	{
		public enum BoardType
		{
			Main = 0,
			MFS = 1
		}

		public BoardType BoardTypeTag;

		public List<SlotFull> SlotFulls;

		public static SlotFullCounter MainBoard => null;

		public static SlotFullCounter MFSBoard => null;

		public SlotFullCounter(BoardType boardTypeTag)
		{
		}

		public static SlotFullCounter GetSlotFullCounter(BoardType boardType)
		{
			return null;
		}
	}
}
