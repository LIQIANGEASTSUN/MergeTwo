using System;

namespace FAT.Merge
{
	public class ItemFrozenOverrideComponent : ItemComponentBase
	{
		[NonSerialized]
		public int mUnfrozenPrice;

		public int unfrozenPrice => 0;
	}
}
