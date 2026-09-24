using System;
using System.Collections.Generic;
using Config;
using IFix.Core;
using fat.rawdata;

namespace FAT.Merge
{
	public class Cloud
	{
		[NonSerialized]
		public List<CoordConfig> _coordConfigList;

		public bool CanShow => false;

		public HashSet<(int col, int row)> CloudArea { get; }

		public int UnlockLevel { get; set; }

		public bool IsUnlock { get; set; }

		public CloudType Type { get; set; }

		public int ConfId { get; set; }

		[IDTag(0)]
		public static bool CreateCloud(MergeCloud conf, CloudType type, out Cloud cloud)
		{
			cloud = null;
			return false;
		}

		[IDTag(1)]
		public static bool CreateCloud(MergeMainLvArea conf, CloudType type, out Cloud cloud)
		{
			cloud = null;
			return false;
		}

		public void RefreshCloudArea(int boardRowCount, int boardMoveOffset = 0)
		{
		}

		public void RefreshUnlockState(int curLevel)
		{
		}

		public void SetForceUnlock()
		{
		}

		public void _InitCoordConfigList(IList<string> coordConf)
		{
		}

		public void _InitCoordConfigList_TL(IList<string> coordConf)
		{
		}

		public bool _TransCoord(int oldCol, int oldRow, out int newCol, out int newRow, int boardRowCount, int boardMoveOffset = 0)
		{
			newCol = default(int);
			newRow = default(int);
			return false;
		}
	}
}
