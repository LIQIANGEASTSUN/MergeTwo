using System;
using UnityEngine;

namespace FAT.Merge
{
	public class MergeAdjacentEffect
	{
		[NonSerialized]
		public int mCols;

		[NonSerialized]
		public int mRows;

		[NonSerialized]
		public Vector2Int[] mAdjacentDir;

		public void Init(int col, int row)
		{
		}

		public int _ReverseDir(int dir)
		{
			return 0;
		}

		public void _RoundTraverse(Action<int, int> imp, Vector2Int coord)
		{
		}

		public void _SetAdjacentFlag(int[] flag, int idx, int dir)
		{
		}

		public void _ClearAdjacentFlag(int[] flag, int idx, int dir)
		{
		}

		public int _CalculateIdxByCoord(int col, int row)
		{
			return 0;
		}

		public bool _CalculateCoordByIdx(int idx, out int col, out int row)
		{
			col = default(int);
			row = default(int);
			return false;
		}
	}
}
