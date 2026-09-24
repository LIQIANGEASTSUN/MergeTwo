using JetBrains.Annotations;

namespace MergePuzzle
{
	public class BoardPosition
	{
		public Coordinate Index;

		public CellController Cell;

		[CanBeNull]
		public ItemController Item;

		public BoardPosition()
		{
		}

		public BoardPosition(Coordinate index)
		{
		}

		public void SetItemToNull()
		{
		}
	}
}
