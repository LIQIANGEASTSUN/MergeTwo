using System;
using ContextualizedECS;
using MergeEngine.Configuration;
using Merger.MergeBoardInfoBar.Views;
using Merger.PowerBoost.Providers;
using Zenject;

namespace Merger.MergeBoardInfoBar.Logic.Labeling.Rules
{
	public class NextLevelItemLabelRule : IInfoBarLabelRule
	{
		[Inject]
		[NonSerialized]
		public IPowerBoostDataProvider _powerBoostDataProvider;

		public void Apply(InfoBarLabelContext context)
		{
		}

		public string GetNextLevelItemLabel(InfoBarItemLabelConfigurationView configuration, Entity entity, IMergeItem nextLevelItem)
		{
			return null;
		}

		public static bool IsCollectablePointsMaxLevel(InfoBarLabelContext context)
		{
			return false;
		}
	}
}
