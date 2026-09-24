using System;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT.Merge
{
	public class ItemSpecialBoxComponent : ItemComponentBase
	{
		[NonSerialized]
		public ComMergeSpecialBox mConfig;

		[NonSerialized]
		public int mItemCount;

		public bool willDead => false;

		public bool canOutput => false;

		public ComMergeSpecialBox config => null;

		public static bool Validate(ItemComConfig config)
		{
			return false;
		}

		public override void OnPostAttach()
		{
		}

		public override void OnSerialize(MergeItem itemData)
		{
		}

		public override void OnDeserialize(MergeItem itemData)
		{
		}

		public int ConsumeNextItem()
		{
			return 0;
		}

		public void _003C_003EiFixBaseProxy_OnPostAttach()
		{
		}

		public void _003C_003EiFixBaseProxy_OnSerialize(MergeItem P0)
		{
		}

		public void _003C_003EiFixBaseProxy_OnDeserialize(MergeItem P0)
		{
		}
	}
}
