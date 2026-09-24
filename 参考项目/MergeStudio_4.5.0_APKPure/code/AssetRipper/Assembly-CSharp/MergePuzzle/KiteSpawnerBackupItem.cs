using System;
using System.Collections.Generic;

namespace MergePuzzle
{
	[Serializable]
	public class KiteSpawnerBackupItem : IComparable<KiteSpawnerBackupItem>
	{
		[Serializable]
		public class KiteBackupSpawnerModel
		{
			public int SetID;

			public int SpawnerLevel;
		}

		public int Level;

		public List<KiteBackupSpawnerModel> SpawnerList;

		public int CompareTo(KiteSpawnerBackupItem other)
		{
			return 0;
		}
	}
}
