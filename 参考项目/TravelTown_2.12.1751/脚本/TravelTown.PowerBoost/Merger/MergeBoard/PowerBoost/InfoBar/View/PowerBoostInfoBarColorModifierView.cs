using System;
using Framework.Core.View.ReactiveComponents;
using Merger.MergeBoard.PowerBoost.InfoBar.ViewModel;
using Merger.MergeBoardInfoBar.Views.Modifiers;
using UnityEngine;

namespace Merger.MergeBoard.PowerBoost.InfoBar.View
{
	public class PowerBoostInfoBarColorModifierView : InfoBarModifierBaseView<PowerBoostInfoBarColorModifierViewModel>
	{
		[SerializeField]
		public GameObject _powerBoostBackground;

		[SerializeField]
		public ReactiveText _powerBoostText;

		[SerializeField]
		public Color PowerBoostOn;

		[SerializeField]
		public Color PowerBoostOff;

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
	}
}
