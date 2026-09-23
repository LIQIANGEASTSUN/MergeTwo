using MergeEngine.Configuration;
using Merger.MergeBoard.Components;
using Merger.MergeBoardInfoBar.Views;

namespace Merger.MergeBoardInfoBar.Logic.Labeling.Rules
{
	public class TimeLockLabelRule : IInfoBarLabelRule
	{
		public void Apply(InfoBarLabelContext context)
		{
		}

		public string GetTimeLockLabel(InfoBarItemLabelConfigurationView configuration, TimeLockComponent timeLockComponent, IMergeItem nextLevelItem)
		{
			return null;
		}

		public string GetNextLevelItemLabel(InfoBarItemLabelConfigurationView configuration, IMergeItem nextLevelItem)
		{
			return null;
		}
	}
}
