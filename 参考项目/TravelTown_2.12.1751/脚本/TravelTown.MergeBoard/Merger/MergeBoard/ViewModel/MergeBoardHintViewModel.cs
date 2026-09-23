using System;
using Framework.Core.MVVM.ViewModel;
using MergeEngine.Model.Configuration;
using Merger.MergeBoard.Logic.CombineValidators;
using Merger.MergeBoard.View.Layout;
using Zenject;

namespace Merger.MergeBoard.ViewModel
{
	public class MergeBoardHintViewModel : ViewModelBase
	{
		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IMergeBoardLayout _layout;

		[Inject]
		public AnyItemCombinerValidator AnyItemCombinerValidator;

		[Inject]
		public MergeItemCombinerValidator MergeItemCombinerValidator;

		[Inject]
		public ItemConsumableCombinerValidator ItemConsumableCombinerValidator;

		public IMergeBoardLayout BoardLayout => null;

		public bool IsItemMaxLevel(string itemId)
		{
			return false;
		}

		public object GetItemLevel(string itemId)
		{
			return null;
		}

		public bool IsPrioritizeHinting(string id)
		{
			return false;
		}
	}
}
