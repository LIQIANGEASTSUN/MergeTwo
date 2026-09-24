using System;
using fat.rawdata;

namespace FAT.Merge
{
	public class ItemOrderBoxComponent : ItemComponentBase
	{
		[NonSerialized]
		public ComMergeOrderBox mConfig;

		public ComMergeOrderBox config => null;

		public static bool Validate(ItemComConfig config)
		{
			return false;
		}

		public override void OnPostAttach()
		{
		}

		public void _003C_003EiFixBaseProxy_OnPostAttach()
		{
		}
	}
}
