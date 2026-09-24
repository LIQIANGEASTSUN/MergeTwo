using System;
using fat.rawdata;

namespace FAT.Merge
{
	public class ItemJumpCDComponent : ItemComponentBase
	{
		[NonSerialized]
		public ComMergeJumpCD mConfig;

		public bool isCounting => false;

		public int countdown => 0;

		public ComMergeJumpCD config => null;

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
