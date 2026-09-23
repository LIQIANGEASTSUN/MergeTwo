using System;
using System.Collections.Generic;
using ContextualizedECS;
using MergeEngine.Configuration;
using Merger.MergeBoardInfoBar.Views;

namespace Merger.MergeBoardInfoBar.Logic.Labeling
{
	public class InfoBarLabelBuilder
	{
		[NonSerialized]
		public readonly List<IInfoBarLabelRule> _rules;

		[NonSerialized]
		public readonly InfoBarItemLabelConfigurationView _configuration;

		public InfoBarLabelBuilder(IEnumerable<IInfoBarLabelRule> rules, InfoBarItemLabelConfigurationView configuration)
		{
		}

		public string BuildLabel(Entity entity, IMergeItem mergeItem, IMergeItem nextMergeItem)
		{
			return null;
		}
	}
}
