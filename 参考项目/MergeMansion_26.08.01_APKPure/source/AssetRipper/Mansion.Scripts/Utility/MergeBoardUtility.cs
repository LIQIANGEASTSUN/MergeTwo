using GameLogic.Player.Board;
using Merge;
using UnityEngine;

namespace Utility
{
	public static class MergeBoardUtility
	{
		public static bool IsNoMergeBoardId(MergeBoardId mergeBoardId)
		{
			return false;
		}

		public static Vector2 CalculateBoardDimensionsRatio((int width, int height) boardDimensions)
		{
			return default(Vector2);
		}

		public static bool IsDefaultSizeMergeBoard(MergeBoard board)
		{
			return false;
		}

		public static bool IsZeroSizeMergeBoard(MergeBoard board)
		{
			return false;
		}

		public static bool IsValidCoordinate(MergeBoard board, Coordinate coordinate)
		{
			return false;
		}

		public static bool IsValidCoordinate(BoardItemHandler[,] slots, Coordinate coordinate)
		{
			return false;
		}
	}
}
