using System;
using UnityEngine;

namespace MergeEngine.Data
{
	public struct BoardItemPosition : IEquatable<BoardItemPosition>
	{
		public int Col { get; }

		public int Row { get; }

		public BoardItemPosition(int col, int row)
		{
			Col = 0;
			Row = 0;
		}

		public float DistanceTo(BoardItemPosition other)
		{
			return 0f;
		}

		public bool Equals(BoardItemPosition other)
		{
			return false;
		}

		public Vector2 DirectionTo(BoardItemPosition other)
		{
			return default(Vector2);
		}

		public override bool Equals(object obj)
		{
			return false;
		}

		public override int GetHashCode()
		{
			return 0;
		}

		public override string ToString()
		{
			return null;
		}

		public static BoardItemPosition BottomLeftCorner()
		{
			return default(BoardItemPosition);
		}

		public static BoardItemPosition TopLeftCorner()
		{
			return default(BoardItemPosition);
		}
	}
}
