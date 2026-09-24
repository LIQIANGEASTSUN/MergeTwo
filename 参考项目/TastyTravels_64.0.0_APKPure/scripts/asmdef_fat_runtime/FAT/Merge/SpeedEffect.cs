using System;
using System.Collections.Generic;
using UnityEngine;

namespace FAT.Merge
{
	public class SpeedEffect
	{
		public int mSpeedPercent;

		[NonSerialized]
		public Item mCreator;

		[NonSerialized]
		public List<Vector2Int> mGrids;

		[NonSerialized]
		public int mMilliLeft;

		[NonSerialized]
		public bool mDead;

		public bool isDead => false;

		public bool isDying => false;

		public int milliLeft => 0;

		public Item creator => null;

		public int speedPercent => 0;

		public SpeedEffect(Item c, int percent, int life)
		{
		}

		public bool IsGridAffected(Vector2Int coord)
		{
			return false;
		}

		public void Update(int milli)
		{
		}

		public void SetDead()
		{
		}
	}
}
