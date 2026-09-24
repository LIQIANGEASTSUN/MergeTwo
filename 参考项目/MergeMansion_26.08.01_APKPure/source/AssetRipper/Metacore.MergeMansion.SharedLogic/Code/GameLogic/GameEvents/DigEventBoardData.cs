using Metaplay.Core.Model;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	public struct DigEventBoardData
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public int GridWidth;

		[MetaMember(2, MetaMemberFlags.None)]
		public int GridHeight;

		[MetaMember(3, MetaMemberFlags.None)]
		public int CellSize;

		[MetaMember(4, MetaMemberFlags.None)]
		public int CellSpacing;

		public DigEventBoardData(int gridWidth, int gridHeight, int cellSize, int cellSpacing)
		{
			GridWidth = 0;
			GridHeight = 0;
			CellSize = 0;
			CellSpacing = 0;
		}
	}
}
