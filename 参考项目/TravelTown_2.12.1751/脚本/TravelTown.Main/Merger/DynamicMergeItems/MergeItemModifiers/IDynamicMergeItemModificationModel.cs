using MergeEngine.Configuration;

namespace Merger.DynamicMergeItems.MergeItemModifiers
{
	public interface IDynamicMergeItemModificationModel
	{
		void ModifyMergeItem(IMergeItem mergeItem, DynamicMergeItemConfig dynamicMergeItemData);
	}
}
