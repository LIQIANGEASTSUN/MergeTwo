using System;
using System.Collections.Generic;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT.Merge
{
	public class ItemBoxComponent : ItemComponentBase
	{
		[NonSerialized]
		public int mUsedCount;

		[NonSerialized]
		public List<int> mOutput;

		[NonSerialized]
		public ComMergeBox mBoxConfig;

		public int countLeft => 0;

		public ComMergeBox config => null;

		public int energyCost => 0;

		public static bool Validate(ItemComConfig config)
		{
			return false;
		}

		public override void OnSerialize(MergeItem itemData)
		{
		}

		public override void OnDeserialize(MergeItem itemData)
		{
		}

		public override void OnPostAttach()
		{
		}

		public int ConsumeNextItem()
		{
			return 0;
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
