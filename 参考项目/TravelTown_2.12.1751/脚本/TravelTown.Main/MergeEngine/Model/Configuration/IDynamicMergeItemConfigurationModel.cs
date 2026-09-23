using MergeEngine.Configuration;
using MergeEngine.ECS.Components.Items;

namespace MergeEngine.Model.Configuration
{
	public interface IDynamicMergeItemConfigurationModel
	{
		void AddDynamicMergeItem(string id, IMergeItem mergeItem);

		IMergeItem GetDynamicMergeItem(string id);

		IMergeItem GetDynamicMergeItemFromComponent(IComponentBase component);

		IMergeItem GetDynamicMergeItemWithItemId(string itemId);
	}
}
