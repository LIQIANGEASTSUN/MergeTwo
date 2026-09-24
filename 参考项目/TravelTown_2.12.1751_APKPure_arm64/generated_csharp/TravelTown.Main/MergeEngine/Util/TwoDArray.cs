using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using MergeEngine.Data;

namespace MergeEngine.Util
{
	public class TwoDArray<T> where T : class
	{
		[NonSerialized]
		public readonly int _cols;

		[NonSerialized]
		public readonly int _rows;

		[NonSerialized]
		public T[][] _array;

		[NonSerialized]
		public List<BoardItemPosition> _emptyPositions;

		[NonSerialized]
		public BoardItemPosition[] _adjacentTiles;

		[NonSerialized]
		public BoardItemPosition[] _adjacentAndDiagonalTiles;

		public bool IsFull => false;

		public ReadOnlyCollection<BoardItemPosition> EmptyPositions => null;

		public TwoDArray(int cols, int rows)
		{
		}

		public void FillEmptyPositions()
		{
		}

		public void CreateArray()
		{
		}

		public T GetItem(BoardItemPosition position)
		{
			return null;
		}

		public bool SetItem(BoardItemPosition position, T item)
		{
			return false;
		}

		public List<BoardItemPosition> GetAdjacentPositions(BoardItemPosition position, bool includeDiagonal)
		{
			return null;
		}

		public bool IsInBounds(BoardItemPosition boardItemPosition)
		{
			return false;
		}

		public void ForEach(Action<T> action)
		{
		}
	}
}
