using System;
using fat.rawdata;

namespace FAT.Merge
{
	public class ItemTimeSkipCompoent : ItemComponentBase
	{
		[NonSerialized]
		public ComMergeTimeSkip mConfig;

		public ComMergeTimeSkip config => null;

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
