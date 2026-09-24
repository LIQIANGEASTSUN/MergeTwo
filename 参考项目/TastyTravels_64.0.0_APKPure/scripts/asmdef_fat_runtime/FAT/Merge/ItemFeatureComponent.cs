using System;
using fat.rawdata;

namespace FAT.Merge
{
	public class ItemFeatureComponent : ItemComponentBase
	{
		[NonSerialized]
		public ComMergeFeature mConfig;

		public FeatureEntry feature => default(FeatureEntry);

		public int intParam => 0;

		public override void OnPostAttach()
		{
		}

		public void _003C_003EiFixBaseProxy_OnPostAttach()
		{
		}
	}
}
