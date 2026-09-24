using ContextualizedECS;
using MergeEngine.Configuration;

namespace Merger.MergeBoard.Logic
{
	public interface IItemSelectionBoxPickHandler
	{
		void OpenItemSelectionBoxPopup(Entity entity, IMergeItem mergeItem, string uuid, int boardIndex);
	}
}
