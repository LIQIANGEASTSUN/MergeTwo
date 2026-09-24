namespace GameLogic.Player.Board.Placement
{
	public static class PlacementExtensions
	{
		public static bool TryGetEmptySpot(this IPlacement placement, Coordinate startCoordinate, IBoardQuery boardQuery, out Coordinate result)
		{
			result = default(Coordinate);
			return false;
		}

		public static bool HasSpace(this IPlacement placement, Coordinate startCoordinate, IBoardQuery boardQuery)
		{
			return false;
		}
	}
}
