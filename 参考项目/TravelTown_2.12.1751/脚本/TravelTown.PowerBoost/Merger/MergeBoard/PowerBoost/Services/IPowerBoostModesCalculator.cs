using System.Collections.Generic;

namespace Merger.MergeBoard.PowerBoost.Services
{
	public interface IPowerBoostModesCalculator
	{
		int MaxAvailableBoost { get; }

		void Setup(string id);

		void RebuildBoosts();

		bool CalculateUnlockableBoost(out int unlockableBoost);

		void SwitchBoost();

		int CalculateNextBoost();

		void ResetCurrentPowerBoost();

		void ResetToMaxAvailableBoost();

		IReadOnlyList<int> GetUnlockableBoosts();

		IReadOnlyList<int> GetPlayablePowerBoosts();

		void OnConfigurationUpdated();
	}
}
