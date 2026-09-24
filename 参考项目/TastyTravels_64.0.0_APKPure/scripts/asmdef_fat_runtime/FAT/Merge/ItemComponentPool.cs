using System;
using System.Collections.Generic;

namespace FAT.Merge
{
	public class ItemComponentPool<T> : IItemComponentPool where T : ItemComponentBase, new()
	{
		public static ItemComponentPool<T> Instance;

		[NonSerialized]
		public List<T> mAllCom;

		public ItemComponentBase AllocByType()
		{
			return null;
		}

		public T Alloc()
		{
			return null;
		}

		public void Free(ItemComponentBase com)
		{
		}
	}
}
