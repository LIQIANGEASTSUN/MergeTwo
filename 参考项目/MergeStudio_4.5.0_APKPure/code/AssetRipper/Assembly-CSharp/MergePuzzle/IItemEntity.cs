namespace MergePuzzle
{
	public interface IItemEntity
	{
		int GetLevel { get; }

		int GetSetID { get; }

		bool GetIsBubbled { get; }

		float GetCurrentCapacity { get; }

		long GetChargingFinishAtTick { get; }

		ChestState GetChestState { get; }

		bool IsSameLevelAndSet(IItemEntity item);

		void SetCurrentCapacity(float capacity);

		void SetChargingFinishAtTick(long chargingFinishAtTick);

		void SetSkippedState(SpawnerState state);

		void CalculateNextChargingTime(BoardItemSpawnerData data);

		void SetChestState(IItemController item, ChestState chestState, BoardItemChestSpawner chestSpawner, bool animateClockDisappear = false, bool init = false);
	}
}
