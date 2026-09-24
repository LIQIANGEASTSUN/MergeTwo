using System;
using System.Collections.Generic;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT.Merge
{
	public class ItemEatComponent : ItemComponentBase
	{
		[NonSerialized]
		public List<EatGroup> mEatGroups;

		[NonSerialized]
		public int mEatGroupId;

		[NonSerialized]
		public Dictionary<int, int> mItemsWithin;

		[NonSerialized]
		public ComMergeEat mConfig;

		[NonSerialized]
		public InterlaceOutputMethod mInterlaceRandom;

		public ComMergeEat config => null;

		public int eatGroupCount => 0;

		public static bool Validate(ItemComConfig config)
		{
			return false;
		}

		public override void OnStart()
		{
		}

		public override void OnSerialize(MergeItem itemData)
		{
		}

		public override void OnDeserialize(MergeItem itemData)
		{
		}

		public int GetItemCountInStomach(int tid)
		{
			return 0;
		}

		public Dictionary<int, int> GetEatItemNeeded(int idx)
		{
			return null;
		}

		public void GetMaxEatProgress(out int idx, out int total, out int current)
		{
			idx = default(int);
			total = default(int);
			current = default(int);
		}

		public void GetEatProgress(int idx, out int total, out int current)
		{
			total = default(int);
			current = default(int);
		}

		public override void OnPostAttach()
		{
		}

		public void _CreateRandomMethod()
		{
		}

		public bool EatItem(Item food)
		{
			return false;
		}

		public bool CanEatItemId(int tid)
		{
			return false;
		}

		public bool _CanEatItem(int tid)
		{
			return false;
		}

		public void _InitEatGroup(int idx)
		{
		}

		public bool _TryFinishEat()
		{
			return false;
		}

		public bool _EatItem(Item food)
		{
			return false;
		}

		public void _003C_003EiFixBaseProxy_OnStart()
		{
		}

		public void _003C_003EiFixBaseProxy_OnSerialize(MergeItem P0)
		{
		}

		public void _003C_003EiFixBaseProxy_OnDeserialize(MergeItem P0)
		{
		}

		public void _003C_003EiFixBaseProxy_OnPostAttach()
		{
		}
	}
}
