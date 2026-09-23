using System;
using MergeEngine.Configuration;
using Merger.CollectibleItems.Models;
using Zenject;

namespace Merger.MergeBoardInfoBar.Logic.Labeling.Rules
{
	public class ItemNameLabelRule : IInfoBarLabelRule
	{
		[NonSerialized]
		public readonly ICollectableRewardsModel _collectableRewardsModel;

		[Inject]
		public ItemNameLabelRule(ICollectableRewardsModel collectableRewardsModel)
		{
		}

		public void Apply(InfoBarLabelContext context)
		{
		}

		public bool IsCollectablePoints(IMergeItem mergeItem)
		{
			return false;
		}
	}
}
