using Framework.Core.View.ReactiveComponents;
using Framework.Localisation.Data;
using Merger.MergeBoardInfoBar.Views.Modifiers;
using Merger.MergeBoardSellItemCapability.ViewModels;
using UnityEngine;

namespace Merger.MergeBoardSellItemCapability.Views
{
	public class UndoSellInfoBarModifierView : InfoBarModifierBaseView<UndoSellInfoBarModifierViewModel>
	{
		[SerializeField]
		public ReactiveText _infoBarText;

		[SerializeField]
		public LocalisationKey UndoSellingLocalization;

		[SerializeField]
		public LocalisationKey UndoRemovingLocalization;

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
