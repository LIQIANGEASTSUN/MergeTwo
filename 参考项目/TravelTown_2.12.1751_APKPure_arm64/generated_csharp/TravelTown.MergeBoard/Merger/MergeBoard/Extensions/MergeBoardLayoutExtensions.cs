using ContextualizedECS.Context;
using MergeEngine.Data;
using Merger.MergeBoard.Components;
using Merger.MergeBoard.View.Layout;
using UnityEngine;

namespace Merger.MergeBoard.Extensions
{
	public static class MergeBoardLayoutExtensions
	{
		public static BoardItemPosition GetItemPositionForIndex(this IMergeBoardLayout layout, int index)
		{
			return default(BoardItemPosition);
		}

		public static int GetIndexFromBoardItemPosition(this IMergeBoardLayout layout, BoardItemPosition position)
		{
			return 0;
		}

		public static Transform GetTransformForPosition(this IMergeBoardLayout layout, BoardItemPosition position)
		{
			return null;
		}

		public static bool TryGetClosestEmptyPositionFromContext(this IMergeBoardLayout layout, TickContext context, BoardTilePositionComponent producerPositionComponent, out int emptyPosition)
		{
			emptyPosition = default(int);
			return false;
		}

		public static bool TryGetRandomEmptyPositionIncludingDeadPosition(this IMergeBoardLayout layout, TickContext context, int deadPosition, out int emptyPosition)
		{
			emptyPosition = default(int);
			return false;
		}

		public static bool TryGetRandomEmptyPositionFromContext(this IMergeBoardLayout layout, TickContext context, out int emptyPosition)
		{
			emptyPosition = default(int);
			return false;
		}
	}
}
