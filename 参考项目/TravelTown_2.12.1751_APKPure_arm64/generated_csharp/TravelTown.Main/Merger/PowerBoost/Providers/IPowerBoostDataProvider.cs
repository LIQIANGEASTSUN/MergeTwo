using System.Collections.Generic;

namespace Merger.PowerBoost.Providers
{
	public interface IPowerBoostDataProvider
	{
		bool IsPowerBoostAvailable { get; }

		bool IsPowerBoostActive { get; }

		int CurrentPowerBoost { get; }

		int MaxAvailableBoost { get; }

		bool IsMaxBoostActive { get; }

		bool IsPowerBoostable(string id);

		IEnumerable<int> GetPlayableBoosts();
	}
}
