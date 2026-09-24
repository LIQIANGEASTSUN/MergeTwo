using Framework.Core.DataBinding;
using MergeEngine.Data;

namespace Merger.Game.Model
{
	public interface IBoardSelectionModel
	{
		BindableProperty<SelectedBoardItem> SelectedItem { get; }

		BindableProperty<SelectedBoardItem> SelectedItemToSell { get; }
	}
}
