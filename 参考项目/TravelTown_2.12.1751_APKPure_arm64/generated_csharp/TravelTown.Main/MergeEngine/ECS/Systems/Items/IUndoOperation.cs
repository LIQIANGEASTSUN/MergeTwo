using MergeEngine.Configuration;
using MergeEngine.ECS.Components.Items;

namespace MergeEngine.ECS.Systems.Items
{
	public interface IUndoOperation
	{
		void PerformUndo();

		IMergeItem GetMergeItem();

		Entity GetEntity();

		bool ShouldClearUndoOnSelection(PositionComponent selectedItem);

		string GetLocalisationString();

		string[] GetLocalisationParameters();
	}
}
