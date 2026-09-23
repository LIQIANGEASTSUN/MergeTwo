using System.Collections.Generic;
using UnityEngine;

namespace Merger.MergeBoard.View.Layout
{
	public interface IMergeBoardLayout
	{
		int GetPositionsCount { get; }

		Vector2 GetTileSize { get; }

		Vector2 GetScaledTileSize { get; }

		RectTransform GetTransformAtPosition(int index);

		bool TryGetEmptyPosition(IEnumerable<int> occupiedPositions, out int position);

		bool TryGetClosestEmptyPosition(IEnumerable<int> occupiedPositions, int refPosition, out int position);

		IEnumerable<int> GetAllEmptyPositions(IEnumerable<int> occupiedPositions);

		IEnumerable<int> GetAdjacentPositions(int position);

		IEnumerable<int> GetHorizontalVerticalAdjacentPositions(int position);
	}
}
