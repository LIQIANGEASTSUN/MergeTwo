using System;
using MergeEngine.Model.Configuration;
using Zenject;

namespace Merger.MergeBoardInfoBar.Logic.Labeling.Rules
{
	public class CustomInfoTextLabelRule : IInfoBarLabelRule
	{
		[NonSerialized]
		public readonly IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		public CustomInfoTextLabelRule(IMergingConfigurationModel mergingConfigurationModel)
		{
		}

		public void Apply(InfoBarLabelContext context)
		{
		}
	}
}
