using System;
using MergeEngine.Model;
using MergeEngine.Model.Configuration;
using Zenject;

namespace Merger.MergeBoardInfoBar.Logic.Labeling.Rules
{
	public class ImmediateToolLabelRule : IInfoBarLabelRule
	{
		[NonSerialized]
		public readonly IResourcesConfigurationModel _resourcesConfigurationModel;

		[NonSerialized]
		public readonly IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		public ImmediateToolLabelRule(IResourcesConfigurationModel resourcesConfigurationModel, IMergingConfigurationModel mergingConfigurationModel)
		{
		}

		public void Apply(InfoBarLabelContext context)
		{
		}
	}
}
