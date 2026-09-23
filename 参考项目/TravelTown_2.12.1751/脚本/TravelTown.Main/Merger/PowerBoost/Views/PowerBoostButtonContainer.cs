using System;
using Framework.Core.View.ReactiveComponents;
using JetBrains.Annotations;
using MergeEngine.Configuration;
using MergeEngine.Data;
using Merger.CurvedFlyingIconToObject;
using Merger.Game.Views;
using Merger.PowerBoost.Signals;
using Merger.PowerBoost.ViewModel;
using UnityEngine;

namespace Merger.PowerBoost.Views
{
	public class PowerBoostButtonContainer : GameViewBase<PowerBoostButtonContainerViewModel>
	{
		[Obsolete]
		[SerializeField]
		[CanBeNull]
		[Header("Power Boost")]
		public ReactiveButton _powerBoostButton;

		[SerializeField]
		[CanBeNull]
		public PowerBoostButtonView _powerBoostButtonView;

		[CanBeNull]
		[SerializeField]
		[Obsolete]
		public Animator _powerBoostButtonAnimator;

		[NonSerialized]
		public SelectedBoardItem _item;

		public const string PowerBoostOnBool = "PowerBoostOn";

		public static readonly int PowerBoostOn;

		public const string PowerBoostTutorialTrigger = "Tutorial";

		public static readonly int Tutorial1;

		public IMergeItem MergeItem => null;

		public bool IsPowerBoostButtonNextGen => false;

		public void Start()
		{
		}

		public override void OnDestroy()
		{
		}

		public override void GameStarted()
		{
		}

		public void SetupPowerBoost()
		{
		}

		public void TryResetPowerBoostMode()
		{
		}

		public void SetupEventPowerBoost()
		{
		}

		public void OnConfigUpdated()
		{
		}

		public void UpdatePowerBoostButton(bool isButtonActive)
		{
		}

		public void FlyingIconReachedPowerBoostButton(CurvedFlyingIconReachedTargetSignal signal)
		{
		}

		public void PlayerLevelChanged(int value)
		{
		}

		public void PowerBoostButtonClicked()
		{
		}

		public void ItemSelected(SelectedBoardItem selectedBoardItem)
		{
		}

		public void TryResetBoostAfterOoe()
		{
		}

		public void OnEnable()
		{
		}

		public void OnDisable()
		{
		}

		public void OnOutOfEnergy()
		{
		}

		public void UpdateUI()
		{
		}

		public void UpdatePowerBoostUI()
		{
		}

		public void UpdatePowerBoostButtonVisibility()
		{
		}

		public void OnPowerBoostChanged()
		{
		}

		public void OnPowerBoostPopupOpened(PowerBoostPopupOpenedSignal signal)
		{
		}
	}
}
