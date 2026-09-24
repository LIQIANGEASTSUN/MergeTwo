using System;
using IFix.Core;

namespace FAT.Merge
{
	public class ItemMergeComponent : ItemComponentBase
	{
		[NonSerialized]
		public int mNext;

		[IDTag(2)]
		public int PeekMergeResult(ItemMergeComponent src)
		{
			return 0;
		}

		[IDTag(1)]
		public int PeekMergeResult(ItemMergeComponent src, ItemSkillComponent skillSrc, ItemSkillComponent skillDst)
		{
			return 0;
		}

		[IDTag(0)]
		public int PeekMergeResult(int srcTid, int dstTid, ItemSkillComponent skillSrc, ItemSkillComponent skillDst)
		{
			return 0;
		}

		public override void OnPostAttach()
		{
		}

		public void _003C_003EiFixBaseProxy_OnPostAttach()
		{
		}
	}
}
