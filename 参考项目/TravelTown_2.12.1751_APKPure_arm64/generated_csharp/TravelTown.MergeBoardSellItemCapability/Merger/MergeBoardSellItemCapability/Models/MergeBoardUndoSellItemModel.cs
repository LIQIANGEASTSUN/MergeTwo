using ContextualizedECS;
using Framework.Core.MVVM.Model;

namespace Merger.MergeBoardSellItemCapability.Models
{
	public class MergeBoardUndoSellItemModel : ModelBase, IMergeBoardUndoSellItemModel
	{
		public Entity ItemAvailableToUndo { get; set; }

		public void SetItemAvailableToUndo(Entity entity)
		{
		}

		public void ClearItemAvailableToUndo()
		{
		}
	}
}
