using System;
using MergeEngine.Configuration;
using Merger.ItemSelectionBox.ViewModels;
using Zenject;

namespace Merger.MergeBoard.ViewModel
{
	public class MergeBoardItemSelectionBoxViewModel : ItemSelectionBoxViewModel
	{
		[Inject]
		[NonSerialized]
		public new DiContainer _container;

		public override void TransitionToMergeGraph(IMergeItem mergeItem)
		{
		}
	}
}
