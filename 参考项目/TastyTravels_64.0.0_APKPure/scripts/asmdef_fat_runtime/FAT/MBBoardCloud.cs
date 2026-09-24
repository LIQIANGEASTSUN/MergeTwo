using System;
using System.Collections.Generic;
using FAT.Merge;
using UnityEngine;

namespace FAT
{
	public abstract class MBBoardCloud : MonoBehaviour, IMergeBoard
	{
		public RectTransform mRoot;

		[NonSerialized]
		public int width;

		[NonSerialized]
		public int height;

		[NonSerialized]
		public List<Cloud> curClouds;

		[NonSerialized]
		public string pool_key_item;

		public abstract GameObject GetCloudViewPrefab();

		public abstract void SetPoolKeyItem();

		public void Init()
		{
		}

		public void Setup(int w, int h)
		{
		}

		public virtual void _SetupPool()
		{
		}

		public virtual void _OnSetUp()
		{
		}

		public void Cleanup()
		{
		}

		public abstract void _ReleaseGrid();

		public abstract void _PrepareGrid();

		public List<Cloud> GetCurClouds()
		{
			return null;
		}

		public Cloud GetNextCloud()
		{
			return null;
		}

		public bool TryGetBelongCloud(List<Cloud> clouds, int x, int y, out Cloud cloud)
		{
			cloud = null;
			return false;
		}

		public void FillCurShowCloud()
		{
		}

		public MBBoardCloud()
		{
		}
	}
}
