namespace GameLogic.Player.Board.Placement;

[Extension]
public static class PlacementExtensions
{

	[Extension]
	public static bool HasSpace(IPlacement placement, Coordinate startCoordinate, IBoardQuery boardQuery) { }

	[Extension]
	public static bool TryGetEmptySpot(IPlacement placement, Coordinate startCoordinate, IBoardQuery boardQuery, out Coordinate result) { }

}

