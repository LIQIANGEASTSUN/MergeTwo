using Merger.DynamicMergeItems;

namespace MergeEngine.Configuration.Definitions.WeakReferences.References
{
	public class DynamicMergeItemWeakReference : MergeItemWeakReference
	{
		public DynamicMergeItemConfig DynamicConfig { get; }

		public DynamicMergeItemWeakReference(string uniqueId, DynamicMergeItemConfig dynamicMergeItemData)
		{
		}

		public override bool Equals(MergeItemWeakReference other)
		{
			return false;
		}
	}
}
