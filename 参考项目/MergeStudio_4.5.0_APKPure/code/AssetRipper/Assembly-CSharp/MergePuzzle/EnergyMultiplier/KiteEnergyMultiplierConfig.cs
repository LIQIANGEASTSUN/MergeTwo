using System;
using System.Collections.Generic;

namespace MergePuzzle.EnergyMultiplier
{
	[Serializable]
	public class KiteEnergyMultiplierConfig
	{
		public bool IsActive;

		public float CurrencyClosestLevelProbability;

		public List<int> EnabledSpawners;

		public List<EnergyMultiplierOptions> MultiplierOptions;

		[NonSerialized]
		public Dictionary<int, EnergyMultiplierOptions> _multiplierOptionsCache;

		public EnergyMultiplierOptions GetMultiplierOptions(int multiplier)
		{
			return null;
		}

		public void InitializeMultiplierOptionsCache()
		{
		}
	}
}
