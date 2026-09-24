using System;
using FAT.Merge;

namespace FAT
{
	public class GuideActImpBoardMerge : GuideActImpBase
	{
		[NonSerialized]
		public int tidForMerge;

		public void _OnItemMerged(Item src, Item dst, Item result)
		{
		}

		public override void Play(string[] param)
		{
		}

		public void _003C_003EiFixBaseProxy_Play(string[] P0)
		{
		}
	}
}
