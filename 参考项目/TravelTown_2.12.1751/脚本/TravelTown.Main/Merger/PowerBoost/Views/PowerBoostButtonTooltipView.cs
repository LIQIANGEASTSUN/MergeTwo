using System;
using Framework.Core.MVVM.View;
using Framework.Core.View.ReactiveComponents;
using Merger.PowerBoost.ViewModel;
using UnityEngine;

namespace Merger.PowerBoost.Views
{
	public class PowerBoostButtonTooltipView : ViewBase<PowerBoostViewModel>
	{
		[SerializeField]
		public ReactiveText _powerBoostModeText;

		[SerializeField]
		public AnimationGraphPlayer _animator;

		[SerializeField]
		public ReactiveButton _tooltipClickableArea;

		[SerializeField]
		public bool _doNotAddEnergySymbol;

		public const string OpenTooltipTrigger = "Open";

		public const string CloseTooltipTrigger = "Close";

		public const string ForceCloseTooltipTrigger = "ForceClose";

		[NonSerialized]
		public bool _isShown;

		[NonSerialized]
		public bool _isClosingTooltip;

		public void Start()
		{
		}

		public void OnTooltipClicked()
		{
		}

		public void ShowAndAutoHideTooltip(int powerBoostMode)
		{
		}

		public void CloseTooltip()
		{
		}

		public void ForceCloseTooltip()
		{
		}

		public void SetBoostNumber(int powerBoostMode)
		{
		}

		public bool GetDoNotAddEnergySymbolOverride()
		{
			return false;
		}
	}
}
