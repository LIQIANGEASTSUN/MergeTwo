using System;
using System.Collections.Generic;

namespace MergePuzzle.EnergyMultiplier
{
	[Serializable]
	public class EnergyMultiplierOptions
	{
		public int Multiplier;

		public int UnlockLevel;

		public int UnlockEnergy;

		public float DefaultCapacityReduceAmount;

		public List<SpawnerOptions> SpawnerOptions;

		[NonSerialized]
		public Dictionary<int, float> _capacityReduceAmountCache;

		public float GetCapacityReduceAmount(int setID)
		{
			return 0f;
		}

		public void InitializeCapacityReduceAmountCache()
		{
		}
	}
}
