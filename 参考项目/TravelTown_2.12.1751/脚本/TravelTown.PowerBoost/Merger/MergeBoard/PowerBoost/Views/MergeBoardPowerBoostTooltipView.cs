using System;
using Framework.Core.MVVM.View;
using Framework.Core.View.ReactiveComponents;
using Merger.MergeBoard.PowerBoost.ViewModel;
using UnityEngine;

namespace Merger.MergeBoard.PowerBoost.Views
{
	public class MergeBoardPowerBoostTooltipView : ViewBase<MergeBoardPowerBoostTooltipViewModel>
	{
		[SerializeField]
		public ReactiveText _powerBoostModeTextFormat;

		[SerializeField]
		public ReactiveText _powerBoostModeText;

		[SerializeField]
		public AnimationGraphPlayer _animator;

		[SerializeField]
		public ReactiveButton _tooltipClickableArea;

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

		public void SetBoostNumber(int powerBoostMode)
		{
		}

		public void ForceCloseTooltip()
		{
		}
	}
}
