using ContextualizedECS;

namespace Merger.MergeBoardSellItemCapability.Models
{
	public interface IMergeBoardUndoSellItemModel
	{
		Entity ItemAvailableToUndo { get; }

		void SetItemAvailableToUndo(Entity entity);

		void ClearItemAvailableToUndo();
	}
}
