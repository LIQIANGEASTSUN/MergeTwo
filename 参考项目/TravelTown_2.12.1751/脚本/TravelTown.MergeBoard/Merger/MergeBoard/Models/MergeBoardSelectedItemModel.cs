using System;
using ContextualizedECS;
using Framework.Core.DataBinding;
using Framework.Core.MVVM.Model;
using MergeEngine.Configuration;

namespace Merger.MergeBoard.Models
{
	public class MergeBoardSelectedItemModel : ModelBase, IMergeBoardSelectedItemModel
	{
		[NonSerialized]
		public readonly MutableBindableProperty<(Entity, IMergeItem)> _selectedItem;

		public BindableProperty<(Entity, IMergeItem)> SelectedItem => null;

		public void SetSelectedItem(Entity entity, IMergeItem mergeItem)
		{
		}

		public void ClearSelectedItem()
		{
		}
	}
}
