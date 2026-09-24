using System;
using System.Collections.Generic;
using FAT.Merge;
using UnityEngine;

namespace FAT
{
	public class MergeHelper
	{
		public enum MergeAction
		{
			None = 0,
			Merge = 1,
			Consume = 2,
			Mix = 3,
			Inventory = 4,
			Feed = 5,
			Skill = 6,
			Stack = 7,
			Custom = 8
		}

		public class AffectedCell
		{
			public int idx;

			public int col;

			public int row;

			public bool valid;

			public float squaredDist;

			public Vector2 screenPos;
		}

		[NonSerialized]
		public List<AffectedCell> _affectedCellList;

		[NonSerialized]
		public int width;

		[NonSerialized]
		public int height;

		public List<AffectedCell> affectedCellList => null;

		public (Item, MergeAction) CheckDragBehaviour(Vector2 pos, Item itemInDrag)
		{
			return default((Item, MergeAction));
		}

		public AffectedCell GetNearestCell()
		{
			return null;
		}

		public void _FillAffectedArea(Vector2 pos)
		{
		}

		public void _FillCell(AffectedCell cell, int idx, ref Vector2 anchor, float offset_x, float offset_y)
		{
		}

		public int _SortCell(AffectedCell a, AffectedCell b)
		{
			return 0;
		}
	}
}
