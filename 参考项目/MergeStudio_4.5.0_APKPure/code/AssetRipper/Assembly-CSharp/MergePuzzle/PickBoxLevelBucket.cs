using System;
using System.Collections.Generic;

namespace MergePuzzle
{
	[Serializable]
	public class PickBoxLevelBucket
	{
		public int MaxLevel;

		public List<SpawnedItem> SpawnedItems1;

		public List<SpawnedItem> SpawnedItems2;

		public List<SpawnedItem> SpawnedItems3;
	}
}
