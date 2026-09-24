using System;

namespace Config
{
	[Serializable]
	public class AssetConfig
	{
		public string Group;

		public string Asset;

		[NonSerialized]
		public string mKey;

		public string Key
		{
			get
			{
				return null;
			}
			set
			{
			}
		}
	}
}
