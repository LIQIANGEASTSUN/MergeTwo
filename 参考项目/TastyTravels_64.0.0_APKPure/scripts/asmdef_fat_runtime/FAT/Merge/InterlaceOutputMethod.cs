using System;
using System.Collections.Generic;
using EL;
using fat.gamekitdata;

namespace FAT.Merge
{
	public class InterlaceOutputMethod
	{
		[NonSerialized]
		public DeterministicRandom mRandomGenerator;

		[NonSerialized]
		public List<int> mCurrentSet;

		[NonSerialized]
		public int mNextItem;

		[NonSerialized]
		public Dictionary<int, int> mPreviousItemCount;

		[NonSerialized]
		public Dictionary<int, int> mWeightMap;

		[NonSerialized]
		public List<int> mWeightOrder;

		[NonSerialized]
		public int mSetCount;

		public override string ToString()
		{
			return null;
		}

		public void Serialize(RandomParam param)
		{
		}

		public void Deserialize(RandomParam param)
		{
		}

		public void InitConfig(IEnumerable<int> items, IEnumerable<int> weight)
		{
		}

		public int PeekNextItem()
		{
			return 0;
		}

		public int UseNextItem()
		{
			return 0;
		}

		public void _EnsureNext()
		{
		}

		public void _ArrangeItemByNeed(Dictionary<int, int> needCount, List<int> itemByOrder, List<int> container)
		{
		}

		public string _003C_003EiFixBaseProxy_ToString()
		{
			return null;
		}
	}
}
