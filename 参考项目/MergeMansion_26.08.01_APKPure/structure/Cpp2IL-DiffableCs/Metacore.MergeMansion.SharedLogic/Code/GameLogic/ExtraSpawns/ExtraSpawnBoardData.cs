namespace Code.GameLogic.ExtraSpawns;

public struct ExtraSpawnBoardData
{
	public readonly MergeBoard Board; //Field offset: 0x0
	public readonly Coordinate Coordinate; //Field offset: 0x8
	public readonly IItemDefinition ItemDefinition; //Field offset: 0x10

	public ExtraSpawnBoardData(MergeBoard board, Coordinate coordinate, IItemDefinition itemDefinition) { }

}

