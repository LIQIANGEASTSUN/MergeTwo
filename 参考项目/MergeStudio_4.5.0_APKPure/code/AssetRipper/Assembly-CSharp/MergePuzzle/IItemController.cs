namespace MergePuzzle
{
	public interface IItemController
	{
		IBoardController GetBoardController { get; }

		IItemRuntimeData GetRuntimeData { get; }

		void ChangeCurrentCapacity(BoardItemSpawnerData spawnerData, float amount, bool isRewardedCapacity = false, bool animateClockDisappear = false, string changeReason = "", bool saveBoard = true);

		bool PreventRecharge(bool log = false);

		void ArrangeOpenChestSpawnerState();

		void BoardChangeState(bool animateClockDisappear);

		bool ProcessSpawn(BoardItemSpawnerData boardItemSpawnerData, int energyConsumeAmount);

		bool ProcessSpawn(BoardItemPerishableSpawner boardItemPerishableSpawner, int energyConsumeAmount);

		bool ProcessSpawn(BoardItemChestSpawner boardItemChestSpawner, int energyConsumeAmount);
	}
}
