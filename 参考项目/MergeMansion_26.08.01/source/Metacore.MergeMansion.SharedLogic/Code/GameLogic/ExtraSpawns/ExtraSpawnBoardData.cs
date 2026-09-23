using GameLogic.Player.Board;
using GameLogic.Player.Items;

namespace Code.GameLogic.ExtraSpawns
{
	public struct ExtraSpawnBoardData
	{
		public readonly MergeBoard Board;

		public readonly Coordinate Coordinate;

		public readonly IItemDefinition ItemDefinition;

		public ExtraSpawnBoardData(MergeBoard board, Coordinate coordinate, IItemDefinition itemDefinition)
		{
			Board = null;
			Coordinate = default(Coordinate);
			ItemDefinition = null;
		}
	}
}
