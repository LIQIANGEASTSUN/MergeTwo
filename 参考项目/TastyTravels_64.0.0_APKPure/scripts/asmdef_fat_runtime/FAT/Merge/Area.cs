using System;
using UnityEngine;
using fat.rawdata;

namespace FAT.Merge
{
	public class Area
	{
		[NonSerialized]
		public MergeGridArea mConfig;

		[NonSerialized]
		public RectInt mRect;

		public MergeGridArea config => null;

		public RectInt rect => default(RectInt);

		public Area(MergeGridArea cfg)
		{
		}

		public void WalkGrid(Action<int, int, int> walkFunc)
		{
		}

		public void _RefreshArea()
		{
		}
	}
}
