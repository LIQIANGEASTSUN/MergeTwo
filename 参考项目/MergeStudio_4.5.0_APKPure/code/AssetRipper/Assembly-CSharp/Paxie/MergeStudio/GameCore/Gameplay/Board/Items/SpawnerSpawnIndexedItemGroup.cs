using System;
using System.Collections.Generic;

namespace Paxie.MergeStudio.GameCore.Gameplay.Board.Items
{
	[Serializable]
	public class SpawnerSpawnIndexedItemGroup
	{
		public int Index;

		public List<SpawnerSpawnedItem> SpawnedItems;
	}
}
