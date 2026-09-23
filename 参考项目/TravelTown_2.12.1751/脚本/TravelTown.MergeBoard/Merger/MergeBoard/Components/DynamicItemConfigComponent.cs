using ContextualizedECS;
using Merger.DynamicMergeItems;

namespace Merger.MergeBoard.Components
{
	public struct DynamicItemConfigComponent : IComponent
	{
		public string DynamicMergeItemId { get; }

		public DynamicMergeItemInfoPopup InfoPopup { get; }

		public bool IsItemSelectionBox { get; }

		public DynamicItemConfigComponent(DynamicMergeItemConfig dynamicItemConfig)
		{
			DynamicMergeItemId = null;
			InfoPopup = null;
			IsItemSelectionBox = false;
		}
	}
}
