using ContextualizedECS;

namespace Merger.MergeBoard.Components
{
	public struct BoardTilePositionComponent : IComponent
	{
		public int Position { get; set; }

		public BoardTilePositionComponent(int position)
		{
			Position = 0;
		}
	}
}
