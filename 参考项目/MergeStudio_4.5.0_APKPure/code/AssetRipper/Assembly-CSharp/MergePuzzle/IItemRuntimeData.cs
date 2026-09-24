namespace MergePuzzle
{
	public interface IItemRuntimeData
	{
		IItemEntity GetItemEntity { get; }

		int GetUpdateStepMs { get; }

		void SetUpdateStepMs(int updateStepMs);

		void SetTimeRequiredToExitNoCapacity(int time);

		void SetNextSpawnerUpdateMs(long spawnerUpdateMs);

		void ChangeNextSpawnerUpdateMs(long spawnerUpdateMs);

		void SetSkipPrice(int skipPrice);
	}
}
