using System.Collections.Generic;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;

namespace Merger.DynamicMergeItems.MergeItemModifiers
{
	public class ProduceCapabilityModifier : IDynamicMergeItemModifier
	{
		public void Modify(IMergeItem mergeItem, DynamicMergeItemConfig dynamicMergeItemData)
		{
		}

		public void ModifyFixedItems(IMergeItem mergeItem, List<FixedItemSpawnable> fixedItems)
		{
		}
	}
}
