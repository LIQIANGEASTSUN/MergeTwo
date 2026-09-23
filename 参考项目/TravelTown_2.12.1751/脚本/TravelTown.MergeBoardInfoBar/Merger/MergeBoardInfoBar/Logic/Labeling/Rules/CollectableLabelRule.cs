using System;
using MergeEngine.Configuration;
using MergeEngine.Model;
using Merger.CollectibleItems.Models;
using Zenject;

namespace Merger.MergeBoardInfoBar.Logic.Labeling.Rules
{
	public class CollectableLabelRule : IInfoBarLabelRule
	{
		[NonSerialized]
		public readonly ICollectableRewardsModel _collectableRewardsModel;

		[NonSerialized]
		public readonly IResourcesConfigurationModel _resourcesConfigurationModel;

		[Inject]
		public CollectableLabelRule(ICollectableRewardsModel collectableRewardsModel, IResourcesConfigurationModel resourcesConfigurationModel)
		{
		}

		public void Apply(InfoBarLabelContext context)
		{
		}

		public bool TryGetCollectPointsText(InfoBarLabelContext context, out string text)
		{
			text = null;
			return false;
		}

		public bool IsCollectablePoints(IMergeItem mergeItem)
		{
			return false;
		}
	}
}
