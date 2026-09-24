using ContextualizedECS;
using Framework.Core.DataBinding;
using MergeEngine.Configuration;

namespace Merger.MergeBoard.Models
{
	public interface IMergeBoardSelectedItemModel
	{
		BindableProperty<(Entity, IMergeItem)> SelectedItem { get; }

		void SetSelectedItem(Entity entity, IMergeItem mergeItem);

		void ClearSelectedItem();
	}
}
