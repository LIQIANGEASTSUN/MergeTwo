using Framework.Core.MVVM.View;
using Framework.Core.View.ReactiveComponents;
using Merger.CurvedFlyingIconToObject;
using Merger.Game.Data;
using Merger.PowerBoost.Signals;
using Merger.PowerBoost.ViewModel;
using UnityEngine;

namespace Merger.PowerBoost.Views
{
	public class PowerBoostButtonView : ViewBase<PowerBoostViewModel>
	{
		[SerializeField]
		public ReactiveButton _button;

		[SerializeField]
		public Animator _animator;

		[SerializeField]
		public ReactiveText _boostModeText;

		[SerializeField]
		public PowerBoostButtonTooltipView _boostTooltip;

		public const string PowerBoostOnBool = "PowerBoostOn";

		public static readonly int PowerBoostOn;

		public const string PowerBoostTutorialTrigger = "Tutorial";

		public static readonly int TutorialTrigger;

		public const string IsMaxBoost = "IsMaxBoost";

		public static readonly int IsMaxBoostBoolean;

		public const string PowerBoostButtonBoostToggle = "BoostToggle";

		public static readonly int BoostToggle;

		public const string CurrentBoostModeParameter = "CurrentBoostMode";

		public static readonly int CurrentBoostMode;

		public const string PowerBoostBoostUnlockedClaimed = "NewBoostUnlock";

		public static readonly int BoostUnlockedClaimed;

		public virtual void OnEnable()
		{
		}

		public virtual void OnDisable()
		{
		}

		public void OnGameStateChanged(GameState newGameState)
		{
		}

		public void OnEnergyRefill()
		{
		}

		public void OnButtonClicked()
		{
		}

		public void UpdateButtonView(bool shouldEnable)
		{
		}

		public void UpdateMaxMode(bool showMaxIndication)
		{
		}

		public bool ShouldShowMaxIndication()
		{
			return false;
		}

		public void UpdateBoostMode()
		{
		}

		public void TryShowTooltip(int tooltipBoost)
		{
		}

		public bool IsButtonReadyForTooltip()
		{
			return false;
		}

		public void FlyingIconReachedPowerBoostButton(CurvedFlyingIconReachedTargetSignal signal)
		{
		}

		public void OnClaimedNewBoostMode(PowerBoostClaimedNewBoostModeSignal signal)
		{
		}

		public void UpdateBoostCompleted()
		{
		}

		public void OnBoostUnlockUpdated(PowerBoostModeUnlockSavedSignal signal)
		{
		}

		public void ShowTooltipAfterUnlock()
		{
		}
	}
}
