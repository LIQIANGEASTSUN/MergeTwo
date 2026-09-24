using System;

namespace MergePuzzle
{
	[Serializable]
	public class SlotFull
	{
		public enum SlotFullType
		{
			Board = 0,
			Inventory = 1
		}

		public SlotFullType SlotFullTypes;

		public int Count;

		public SlotFull(SlotFullType slotFullTypes)
		{
		}
	}
}
