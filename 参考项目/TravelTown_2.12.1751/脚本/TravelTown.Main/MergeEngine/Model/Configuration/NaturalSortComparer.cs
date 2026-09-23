using System.Collections.Generic;

namespace MergeEngine.Model.Configuration
{
	public class NaturalSortComparer : IComparer<string>
	{
		public int Compare(string x, string y)
		{
			return 0;
		}

		public static int PartCompare(string left, string right)
		{
			return 0;
		}
	}
}
