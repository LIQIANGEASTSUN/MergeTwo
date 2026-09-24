using System;
using System.Collections.Generic;

namespace MergePuzzle
{
	[Serializable]
	public class SpawnIndexedItemGroup
	{
		public int Index;

		public List<SpawnedItem> SpawnedItems;
	}
}
