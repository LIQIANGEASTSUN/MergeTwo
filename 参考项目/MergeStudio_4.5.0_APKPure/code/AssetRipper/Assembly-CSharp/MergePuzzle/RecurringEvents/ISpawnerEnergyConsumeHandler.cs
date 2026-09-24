namespace MergePuzzle.RecurringEvents
{
	public interface ISpawnerEnergyConsumeHandler : ISpawnerEnergyConsumeBaseHandler
	{
		bool IsCurrencyReadyForSpawn();

		void SetCurrencyReadyForSpawn(bool state);

		int GetCurrencySpawnLevel();

		void SetCurrencySpawnLevel(int level);

		int GetSpawnerEnergyConsumeAmount();

		void SetSpawnerEnergyConsumeAmount(int amount);
	}
}
