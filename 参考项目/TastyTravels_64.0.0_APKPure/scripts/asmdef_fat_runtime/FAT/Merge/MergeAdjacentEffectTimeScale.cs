using System;
using System.Collections.Generic;
using UnityEngine;

namespace FAT.Merge
{
	public class MergeAdjacentEffectTimeScale : MergeAdjacentEffect
	{
		[NonSerialized]
		public int[] mFlagTable;

		[NonSerialized]
		public int[] mTidTable;

		[NonSerialized]
		public int[] mScaleTable;

		[NonSerialized]
		public Dictionary<int, Vector2Int> mTimeScaleItemDict;

		[NonSerialized]
		public bool mRegistered;

		[NonSerialized]
		public Board mParent;

		public void Reset(int col, int row, Board parent)
		{
		}

		public void Deserialize(Item item)
		{
		}

		public void TriggerUseTimeScaleSource(Item item)
		{
		}

		public int CalculateTimeScale(Item item)
		{
			return 0;
		}

		public int GetNextTimeScaleItemLifeMilli()
		{
			return 0;
		}

		public bool _TryApplyTimeScaleEffect(Item item)
		{
			return false;
		}

		public bool _IsTimeScaleItem(Item item)
		{
			return false;
		}

		public void _SetFlag(Vector2Int coord)
		{
		}

		public void _ClearFlag(Vector2Int coord)
		{
		}

		public void _OnItemEnter(Item item)
		{
		}

		public void _OnItemLeave(Item item)
		{
		}

		public void _OnItemMove(Item item)
		{
		}
	}
}
