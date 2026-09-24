using Merger.DynamicMergeItems;

namespace MergeEngine.ECS.Components.Items
{
	public class DynamicItemConfigComponent : ComponentBase<DynamicMergeItemConfig>
	{
		public DynamicMergeItemConfig DynamicItemConfig => null;

		public string DynamicMergeItemId => null;

		public DynamicItemConfigComponent(DynamicMergeItemConfig capability, Entity entity)
			: base((DynamicMergeItemConfig)default(_00210), (Entity)null)
		{
		}
	}
}
