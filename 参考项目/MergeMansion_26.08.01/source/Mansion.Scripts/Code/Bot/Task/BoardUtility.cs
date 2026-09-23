using GameLogic.Player.Board;

namespace Code.Bot.Task
{
	public static class BoardUtility
	{
		public static int FreeCellsCountOnBoard(this MergeBoard board)
		{
			return 0;
		}

		public static bool HasFreePlaceOnBoard(this MergeBoard board)
		{
			return false;
		}

		public static Coordinate? GetFreeCoordinateOnBoard(this MergeBoard board)
		{
			return null;
		}

		public static bool HasPlaceAround(MergeBoard board, Coordinate itemCoordinate)
		{
			return false;
		}

		public static bool IsValidCoordinate(MergeBoard board, Coordinate coordinate)
		{
			return false;
		}
	}
}
