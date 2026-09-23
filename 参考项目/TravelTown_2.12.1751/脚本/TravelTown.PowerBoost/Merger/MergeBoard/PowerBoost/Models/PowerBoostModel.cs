using System;
using Framework.Core.DataBinding;
using MergeEngine.Model.Configuration;
using Merger.Game.Data;
using Zenject;

namespace Merger.MergeBoard.PowerBoost.Models
{
	public class PowerBoostModel : IPowerBoostModel, IInitializable
	{
		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[NonSerialized]
		public bool _unlockPopupOpening;

		public int DefaultPowerBoostMode => 0;

		public int MinUnlockableBoost => 0;

		public int MaxBoostIndicationThreshold => 0;

		public PowerBoostMultiModesConfig Configuration { get; set; }

		public int CurrentConfigLevel { get; set; }

		public bool HasConfiguration => false;

		public bool IsPowerBoostEnabled => false;

		public int LastGrantedBoostRemote => 0;

		public BindableProperty<int> CurrentPowerBoostMode => null;

		public string EventId { get; set; }

		public int EventIndex { get; set; }

		public MutableBindableProperty<int> BoostMode { get; set; }

		public void Initialize()
		{
		}

		public void UpdateConfiguration(string eventId, int eventIndex, int configLevel, PowerBoostMultiModesConfig configuration)
		{
		}

		public void SetPowerBoostMode(int mode)
		{
		}

		public void SetPowerBoostModeAndNotify(int mode)
		{
		}

		public int GetEnergyThreshold(int boost)
		{
			return 0;
		}

		public void OnStartUnlockPopup()
		{
		}

		public void OnUnlockPopupOpened()
		{
		}

		public bool IsUnlockPopupOpening()
		{
			return false;
		}
	}
}
