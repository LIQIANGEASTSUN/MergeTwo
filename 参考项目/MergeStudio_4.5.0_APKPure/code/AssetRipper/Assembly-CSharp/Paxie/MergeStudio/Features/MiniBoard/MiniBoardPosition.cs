using JetBrains.Annotations;
using MergePuzzle;

namespace Paxie.MergeStudio.Features.MiniBoard
{
	public class MiniBoardPosition
	{
		public Coordinate Index;

		public MiniBoardCellController Cell;

		[CanBeNull]
		public MiniBoardItemController Item;

		public MiniBoardPosition()
		{
		}

		public MiniBoardPosition(Coordinate index)
		{
		}

		public void SetItemToNull()
		{
		}
	}
}
