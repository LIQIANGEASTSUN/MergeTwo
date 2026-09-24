using MergeEngine.Data;

namespace Merger.Game.Signal
{
	public class ItemsStackingSignal
	{
		public BoardItemPosition Position { get; }

		public int StackSizeAdded { get; }

		public int TotalStackSize { get; }

		public ItemsStackingSignal(BoardItemPosition position, int stackSizeAdded, int totalStackSize)
		{
		}
	}
}
