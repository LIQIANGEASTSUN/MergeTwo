using System;
using Framework.Core.View.ReactiveComponents;
using Merger.MergeBoardInfoBar.Logic.Labeling;
using Merger.MergeBoardInfoBar.ViewModels;
using UnityEngine;

namespace Merger.MergeBoardInfoBar.Views.Modifiers
{
	public class MergeBoardItemLabelModifierView : InfoBarModifierBaseView<MergeBoardItemLabelModifierViewModel>
	{
		[SerializeField]
		public InfoBarItemLabelConfigurationView _labelConfigurationView;

		[SerializeField]
		public ReactiveText _infoBarText;

		[NonSerialized]
		public InfoBarLabelBuilder _labelBuilder;

		public void Start()
		{
		}

		public override bool ShouldApply(InfoBarModifierContext context)
		{
			return false;
		}

		public override void Apply(InfoBarModifierContext context)
		{
		}

		public override void OnReset()
		{
		}
	}
}
