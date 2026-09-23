using Framework.Core.DataBinding;
using Merger.Game.Data;

namespace Merger.MergeBoard.PowerBoost.Models
{
	public interface IPowerBoostModel
	{
		BindableProperty<int> CurrentPowerBoostMode { get; }

		int DefaultPowerBoostMode { get; }

		int MinUnlockableBoost { get; }

		int MaxBoostIndicationThreshold { get; }

		PowerBoostMultiModesConfig Configuration { get; }

		bool IsPowerBoostEnabled { get; }

		bool HasConfiguration { get; }

		int LastGrantedBoostRemote { get; }

		string EventId { get; }

		int EventIndex { get; }

		int CurrentConfigLevel { get; }

		void UpdateConfiguration(string eventId, int eventIndex, int configLevel, PowerBoostMultiModesConfig configuration);

		int GetEnergyThreshold(int boost);

		void SetPowerBoostMode(int mode);

		void SetPowerBoostModeAndNotify(int mode);

		void OnStartUnlockPopup();

		void OnUnlockPopupOpened();

		bool IsUnlockPopupOpening();
	}
}
