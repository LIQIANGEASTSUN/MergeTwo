using System;
using System.Collections.Generic;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT.Merge
{
	public class ItemToolSourceComponent : ItemSourceComponentBase
	{
		[NonSerialized]
		public ComMergeToolSource mConfig;

		[NonSerialized]
		public int mItemTotalOutputToDead;

		[NonSerialized]
		public int mItemCount;

		[NonSerialized]
		public int mItemInRechargeCount;

		public int outputCountToDead => 0;

		public bool willDead => false;

		public int energyCost => 0;

		public int totalItemCount => 0;

		public int itemInRechargeCount => 0;

		public int itemCount => 0;

		public ComMergeToolSource config => null;

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

		public override void OnInitOutputSet(Dictionary<int, int> container)
		{
		}

		public int ConsumeNextItem()
		{
			return 0;
		}

		public bool IsNextItemReady()
		{
			return false;
		}

		public int ChooseOutputItemLevelByWeight(IDictionary<int, int> dict)
		{
			return 0;
		}

		public int SpawnTool()
		{
			return 0;
		}

		public override void OnPostMerge(Item src, Item dst)
		{
		}

		public override void OnPostAttach()
		{
		}

		public void _003C_003EiFixBaseProxy_OnSerialize(MergeItem P0)
		{
		}

		public void _003C_003EiFixBaseProxy_OnDeserialize(MergeItem P0)
		{
		}

		public void _003C_003EiFixBaseProxy_OnPostMerge(Item P0, Item P1)
		{
		}

		public new void _003C_003EiFixBaseProxy_OnPostAttach()
		{
		}
	}
}
