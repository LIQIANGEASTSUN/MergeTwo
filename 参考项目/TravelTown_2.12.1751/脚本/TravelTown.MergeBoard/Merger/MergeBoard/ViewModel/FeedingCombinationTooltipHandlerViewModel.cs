using System;
using ContextualizedECS;
using Framework.Core.MVVM.ViewModel;
using MergeEngine.Configuration;
using MergeEngine.Model.Configuration;
using Merger.MergeBoard.Controller;
using Zenject;

namespace Merger.MergeBoard.ViewModel
{
	public class FeedingCombinationTooltipHandlerViewModel : ViewModelBase
	{
		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public BoardController _boardController;

		public IMergeItem GetMergeItem(string itemId)
		{
			return null;
		}

		public void ExtractItem(Entity feedingCombinationItem, string itemId)
		{
		}
	}
}
