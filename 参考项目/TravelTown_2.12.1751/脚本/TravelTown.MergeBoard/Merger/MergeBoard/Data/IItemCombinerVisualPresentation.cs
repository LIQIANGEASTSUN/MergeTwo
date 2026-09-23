using MergeEngine.ECS.Components.Items;

namespace Merger.MergeBoard.Data
{
	public interface IItemCombinerVisualPresentation
	{
		void ToggleVisuals(IVisualComponent draggedItem, IVisualComponent overlapItemOnDragAction, bool toggle);
	}
}
