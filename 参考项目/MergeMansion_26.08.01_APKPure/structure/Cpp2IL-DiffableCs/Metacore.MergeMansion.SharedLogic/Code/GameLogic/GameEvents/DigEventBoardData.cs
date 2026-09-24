namespace Code.GameLogic.GameEvents;

[MetaSerializable]
public struct DigEventBoardData
{
	[MetaMember(1, MetaMemberFlags::None (0))]
	public int GridWidth; //Field offset: 0x0
	[MetaMember(2, MetaMemberFlags::None (0))]
	public int GridHeight; //Field offset: 0x4
	[MetaMember(3, MetaMemberFlags::None (0))]
	public int CellSize; //Field offset: 0x8
	[MetaMember(4, MetaMemberFlags::None (0))]
	public int CellSpacing; //Field offset: 0xC

	public DigEventBoardData(int gridWidth, int gridHeight, int cellSize, int cellSpacing) { }

}

