using System.Collections.Generic;
using Framework.Core.View;
using UnityEngine;

namespace Merger.MergeBoard.View.Layout
{
	public abstract class MergeBoardLayout : ViewComponent, IMergeBoardLayout
	{
		[SerializeField]
		public Vector2 _tileSize;

		public Dictionary<int, RectTransform> Tiles { get; }

		public Vector2 GetTileSize => default(Vector2);

		public Vector2 GetScaledTileSize => default(Vector2);

		public abstract int GetPositionsCount { get; }

		public void CreateBoard(IEnumerable<int> configuredTileIndices = null)
		{
		}

		public int? GetIndexForTransform(Transform tileTransform)
		{
			return null;
		}

		public bool ContainsIndex(int index)
		{
			return false;
		}

		public RectTransform GetTransformAtPosition(int index)
		{
			return null;
		}

		public RectTransform GetTransformForPosition(Vector2 localPosition)
		{
			return null;
		}

		public abstract void PrepareBoard(IEnumerable<int> configuredTiles = null);

		public abstract bool TryGetEmptyPosition(IEnumerable<int> occupiedPositions, out int position);

		public abstract bool TryGetClosestEmptyPosition(IEnumerable<int> occupiedPositions, int refPosition, out int position);

		public abstract IEnumerable<int> GetAllEmptyPositions(IEnumerable<int> occupiedPositions);

		public abstract IEnumerable<int> GetAdjacentPositions(int position);

		public abstract IEnumerable<int> GetHorizontalVerticalAdjacentPositions(int position);

		public abstract float GetMaxDistanceFromNeighbors();

		public virtual void ToggleIndexText(bool isActive)
		{
		}

		public void ClearBoard()
		{
		}

		public MergeBoardLayout()
		{
		}
	}
}
