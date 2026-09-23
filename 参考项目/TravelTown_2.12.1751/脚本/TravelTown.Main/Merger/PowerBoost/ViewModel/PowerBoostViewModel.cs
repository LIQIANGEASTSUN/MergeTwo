using System;
using Framework.Core.DataBinding;
using Merger.Game.Data;
using Merger.Game.ViewModel;

namespace Merger.PowerBoost.ViewModel
{
	public class PowerBoostViewModel : GameBaseViewModel
	{
		[NonSerialized]
		public PowerBoostSystem _powerBoostSystem;

		public PowerBoostSystem PowerBoostSystem => null;

		public int CurrentPowerBoostMode => 0;

		public bool IsMaxBoostMode => false;

		public int MaxAvailableBoost => 0;

		public bool ShouldShowModeNumber => false;

		public bool IsPowerBoostActive => false;

		public bool IsPowerBoostFeatureAvailable => false;

		public bool IsInBoardEvent => false;

		public PowerBoostMultiModesConfig CurrentPowerBoostConfig => null;

		public void OnButtonTooltipShown(int boost)
		{
		}

		public bool ShouldShowTooltip(int tooltipBoost)
		{
			return false;
		}

		public BindableProperty<int> GetEnergyResource()
		{
			return null;
		}

		public void PlaySound(string soundName)
		{
		}

		public void OnUnlockRewardClaimed()
		{
		}
	}
}
