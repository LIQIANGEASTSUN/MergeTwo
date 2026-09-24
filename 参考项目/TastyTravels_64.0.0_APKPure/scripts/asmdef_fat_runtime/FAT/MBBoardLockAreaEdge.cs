using System;
using System.Collections.Generic;
using IFix.Core;
using UnityEngine;
using UnityEngine.UI;

namespace FAT
{
	public class MBBoardLockAreaEdge : BaseMeshEffect
	{
		public enum EdgeDir
		{
			Top = 1,
			Right = 2,
			Bottom = 4,
			Left = 8
		}

		[Flags]
		public enum InwardDir
		{
			None = 0,
			Left = 1,
			Right = 2,
			Up = 4,
			Down = 8
		}

		public enum CornerType
		{
			Inner = 0,
			Outer = 1,
			SingleH = 2,
			SingleV = 3
		}

		[NonSerialized]
		public readonly List<UIVertex> _vertices;

		[NonSerialized]
		public readonly List<int> _indices;

		[NonSerialized]
		public readonly Dictionary<int, EdgeDir> _edges;

		[NonSerialized]
		public readonly Dictionary<int, int> _cornerMaskByVertex;

		[NonSerialized]
		public readonly Dictionary<int, bool> _unlockedCache;

		[NonSerialized]
		public int width;

		[NonSerialized]
		public int height;

		[SerializeField]
		public float edgeExpand;

		[NonSerialized]
		public float _cachedCellSize;

		[NonSerialized]
		public float _cachedExpand;

		[NonSerialized]
		public Color _cachedColor;

		public override void ModifyMesh(VertexHelper vh)
		{
		}

		public void Setup(int w, int h)
		{
		}

		public void Cleanup()
		{
		}

		public void Refresh()
		{
		}

		public void _SetDirty()
		{
		}

		public void _Clear()
		{
		}

		public void BuildBoard()
		{
		}

		public void CacheUnlockedStates()
		{
		}

		public void CollectFromLockedCell(int col, int row)
		{
		}

		public bool IsUnlocked(int col, int row)
		{
			return false;
		}

		public void AddEdgeKey(int col, int row, EdgeDir dir)
		{
		}

		public void CollectCornersFromEdges()
		{
		}

		public void MarkCornerFromEdge(int key, EdgeDir dir)
		{
		}

		public void AddCornerMask(int vertexCol, int vertexRow, InwardDir dir)
		{
		}

		public void AddEdge(int key, EdgeDir dir)
		{
		}

		[IDTag(1)]
		public void AddCornerAtVertex(int vertexKey, int mask)
		{
		}

		public CornerType GetCornerType(bool hasHorizontalEdge, bool hasVerticalEdge)
		{
			return default(CornerType);
		}

		public bool HasHorizontalEdgeToLeft(int vc, int vr)
		{
			return false;
		}

		public bool HasHorizontalEdgeToRight(int vc, int vr)
		{
			return false;
		}

		public bool HasVerticalEdgeAbove(int vc, int vr)
		{
			return false;
		}

		public bool HasVerticalEdgeBelow(int vc, int vr)
		{
			return false;
		}

		public void AddQuad(Vector2 p0, Vector2 p1, Vector2 p2, Vector2 p3)
		{
		}

		[IDTag(0)]
		public void AddCornerAtVertex(Vector2 vertex, Vector2 dirX, Vector2 dirY, float expand, CornerType type)
		{
		}

		public void AddCornerTriangles(Vector2 inner, Vector2 alongX, Vector2 outer, Vector2 alongY, CornerType type)
		{
		}

		public void AddTriangle(Vector2 p0, Vector2 p1, Vector2 p2, Vector2 uv0, Vector2 uv1, Vector2 uv2, Color color)
		{
		}

		public int VertexToIndex(int col, int row)
		{
			return 0;
		}

		public int CoordToIndex(int col, int row)
		{
			return 0;
		}

		public int MakeKey(int index, int type)
		{
			return 0;
		}
	}
}
