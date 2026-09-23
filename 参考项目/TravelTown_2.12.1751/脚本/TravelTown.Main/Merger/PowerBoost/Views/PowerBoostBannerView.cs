using Framework.Core.MVVM.View;
using Framework.Core.View.ReactiveComponents;
using Merger.PowerBoost.ViewModel;
using UnityEngine;

namespace Merger.PowerBoost.Views
{
	public class PowerBoostBannerView : ViewBase<PowerBoostViewModel>
	{
		[SerializeField]
		public Animator _animator;

		[SerializeField]
		public ReactiveText _boostModeText;

		[SerializeField]
		public bool _doNotAddEnergySymbol;

		public const string PowerBoostBannerResetTrigger = "BoostReset";

		public static readonly int BoostReset;

		public const string PowerBoostBannerIsMaxBoost = "IsMaxBoost";

		public static readonly int IsMaxBoost;

		public const string IsPowerBoostOff = "IsPowerBoostOff";

		public static readonly int PowerBoostOff;

		public const string PowerBoostBannerMultiBoostToggle = "MultiModeToggle";

		public static readonly int MultiModeToggle;

		public const string PowerBoostBannerOnTrigger = "ShowBanner";

		public static readonly int ShowBannerTrigger;

		public const string CurrentBoostModeParameter = "CurrentBoostMode";

		public static readonly int CurrentBoostMode;

		public bool DoNotAddEnergySymbol => false;

		public void OnEnable()
		{
		}

		public void UpdateMultiBoostToggle()
		{
		}

		public void ShowBanner(int boostMode, string eventId)
		{
		}

		public void UpdateBoostMode(int boostMode)
		{
		}

		public void UpdateMaxBoostIndication()
		{
		}
	}
}
