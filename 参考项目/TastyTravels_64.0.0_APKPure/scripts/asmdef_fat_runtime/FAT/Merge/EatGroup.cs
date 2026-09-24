using System.Collections.Generic;
using fat.rawdata;

namespace FAT.Merge
{
	public class EatGroup
	{
		public Dictionary<int, int> itemNeeded;

		public int changeId;

		public bool Parse(ComMergeEat conf, int idx)
		{
			return false;
		}

		public static void _ParseEatItem(string str, Dictionary<int, int> container)
		{
		}
	}
}
