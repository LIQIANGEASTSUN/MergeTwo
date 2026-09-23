using MergeEngine.Configuration;

namespace Merger.DynamicMergeItems.MergeItemModifiers
{
	public interface IDynamicMergeItemModifier
	{
		void Modify(IMergeItem mergeItem, DynamicMergeItemConfig dynamicMergeItemData);
	}
}
