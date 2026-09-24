using System.Collections.Generic;

namespace MergePuzzle.RecurringEvents
{
	public interface ISpawnerEnergyConsumeBaseHandler
	{
		public struct EnergyConsumeResult
		{
			public ItemController ItemController;

			public bool SpawnerUsedEnergy;

			public int EnergyConsumeAmount;
		}

		List<int> SpawnerList { get; set; }

		void SetSpawnerList();

		void OnEnergyConsumed(EnergyConsumeResult energyConsumeResult);
	}
}
