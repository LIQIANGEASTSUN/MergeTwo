using System;
using System.Collections.Generic;

namespace MergePuzzle
{
	[Serializable]
	public class KiteNewSpawnerConfig
	{
		public bool IsDefault;

		public bool InventoryLogicActive;

		public int ArchiveTaskDurationSeconds;

		public List<KiteSpawnerBackupItem> SpawnerBackupItems;

		public List<KiteItemChain> ItemChains;

		public KiteNewSpawnerConfig GetValue()
		{
			return null;
		}

		public void Initialize()
		{
		}
	}
}
