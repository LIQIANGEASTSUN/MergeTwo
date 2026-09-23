using System;
using Framework.Core.View.ReactiveComponents;
using Framework.Localisation.Data;
using Merger.MergeBoard.PowerBoost.InfoBar.ViewModel;
using Merger.MergeBoardInfoBar.Views.Modifiers;
using UnityEngine;

namespace Merger.MergeBoard.PowerBoost.InfoBar.View
{
	public class PowerBoostInfoBarTextModifierView : InfoBarModifierBaseView<PowerBoostInfoBarTextModifierViewModel>
	{
		[SerializeField]
		public ReactiveText _infoBarText;

		[SerializeField]
		public GameObject _infoButtonContainer;

		[SerializeField]
		public LocalisationKey PowerBoostOn;

		[SerializeField]
		public LocalisationKey MaxPowerBoostOn;

		[SerializeField]
		public LocalisationKey PowerBoostOff;

		[NonSerialized]
		public bool _powerBoostChangeTrigger;

		public void OnEnable()
		{
		}

		public void OnDisable()
		{
		}

		public void OnPowerBoostChanged()
		{
		}

		public override bool ShouldApply(InfoBarModifierContext context)
		{
			return false;
		}

		public override void OnReset()
		{
		}

		public override void Apply(InfoBarModifierContext context)
		{
		}

		public LocalisationKey GetLocalizationText()
		{
			return null;
		}
	}
}
