using System;
using Framework.Core.DataBinding;
using Framework.Core.MVVM.Model;
using MergeEngine.Data;
using Merger.Game.Signal;

namespace Merger.Game.Model
{
	public sealed class BoardSelectionModel : ModelBase, IBoardSelectionModel
	{
		[NonSerialized]
		public readonly MutableBindableProperty<SelectedBoardItem> _selectedItem;

		[NonSerialized]
		public readonly MutableBindableProperty<SelectedBoardItem> _selectedItemToSell;

		public BindableProperty<SelectedBoardItem> SelectedItem => null;

		public BindableProperty<SelectedBoardItem> SelectedItemToSell => null;

		public override void SubscribeToSignals()
		{
		}

		public override void DisposeModel()
		{
		}

		public void BoardItemSelectedSignalFired(BoardItemSelectedSignal signal)
		{
		}

		public void ClearItemSelectionSignalFired()
		{
		}

		public void OnBoardItemSellFinished()
		{
		}

		public void OnBoardItemSellClickButtonSignal()
		{
		}
	}
}
