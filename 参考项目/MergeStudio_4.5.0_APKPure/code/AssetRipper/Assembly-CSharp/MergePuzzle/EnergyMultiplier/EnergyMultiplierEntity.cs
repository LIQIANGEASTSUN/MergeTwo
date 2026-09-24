using System;
using System.Collections.Generic;

namespace MergePuzzle.EnergyMultiplier
{
	[Serializable]
	public class EnergyMultiplierEntity
	{
		public int Multiplier;

		public List<int> LevelUnlockedMultipliers;

		public List<int> LevelUnlockPopupShownMultipliers;

		public List<int> EnergyUnlockedMultipliers;

		public List<int> EnergyUnlockPopupShownMultipliers;

		public int TutorialStep103WorkaroundCount;

		public Dictionary<int, int> EnergySpends;

		public void ResetEnergySpends()
		{
		}

		public void AddEnergySpend(int multiplier, int energySpend)
		{
		}

		public void Reset()
		{
		}
	}
}
