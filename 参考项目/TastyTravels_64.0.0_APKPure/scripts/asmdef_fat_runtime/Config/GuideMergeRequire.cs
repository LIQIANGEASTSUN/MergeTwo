using System;
using fat.rawdata;

namespace Config
{
	[Serializable]
	public class GuideMergeRequire
	{
		public GuideMergeRequireType Type;

		public int Value;

		public int Extra;

		public string Key;
	}
}
