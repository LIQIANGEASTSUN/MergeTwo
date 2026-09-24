using System;
using MergePuzzle;

namespace Paxie.MergeStudio.Features.MiniBoard
{
	[Serializable]
	public class MiniBoardItemEntity : IItemEntity
	{
		public Coordinate BoardIndex;

		public int SetID;

		public int Level;

		public bool IsJelly;

		public bool IsBubbled;

		public float CurrentCapacity;

		public long ChargingFinishAtTick;

		public int NoCapacityCounter;

		public bool IsBoxed;

		public int UnboxLevel;

		public ChestState ChestState;

		public SpawnerState SpawnerState;

		public GameMainReward GameMainReward;

		public int GetLevel => 0;

		public int GetSetID => 0;

		public bool GetIsBubbled => false;

		public float GetCurrentCapacity => 0f;

		public long GetChargingFinishAtTick => 0L;

		public ChestState GetChestState => default(ChestState);

		public override string ToString()
		{
			return null;
		}

		public bool IsSameLevelAndSet(IItemEntity item)
		{
			return false;
		}

		public void SetCurrentCapacity(float capacity)
		{
		}

		public void SetChargingFinishAtTick(long chargingFinishAtTick)
		{
		}

		public void SetSkippedState(SpawnerState state)
		{
		}

		public void CalculateNextChargingTime(BoardItemSpawnerData data)
		{
		}

		public void SetChestState(IItemController item, ChestState chestState, BoardItemChestSpawner chestSpawner, bool animateClockDisappear = false, bool init = false)
		{
		}

		public MiniBoardItemEntity()
		{
		}

		public MiniBoardItemEntity(int level, int setID, bool isJelly, Coordinate boardIndex)
		{
		}

		public MiniBoardItemEntity(int level, int setID, bool isJelly, Coordinate boardIndex, bool isBoxed, int unboxLevel)
		{
		}

		public MiniBoardItemEntity(int level, int setID, bool isJelly)
		{
		}

		public MiniBoardItemEntity(int level, int setID, bool isJelly, GameMainReward gameMainReward, Coordinate boardIndex)
		{
		}

		public MiniBoardItemEntity(int level, int setID, GameMainReward gameMainReward, Coordinate boardIndex)
		{
		}

		public MiniBoardItemEntity(int level, int setID, GameMainReward gameMainReward)
		{
		}

		public bool IsInactiveItem()
		{
			return false;
		}

		public bool IsInActiveAndNonMergeableItem()
		{
			return false;
		}

		public bool IsJellyOrBoxedItem()
		{
			return false;
		}

		public bool IsMovable()
		{
			return false;
		}

		public void SetSpawnerState(IItemController item, BoardItemSpawnerData data, SpawnerState spawnerState, bool animateClockDisappear = false)
		{
		}

		public bool IsInvalid()
		{
			return false;
		}

		public bool IsSameLevelAndSet(MiniBoardItemEntity item)
		{
			return false;
		}

		public bool IsSameLevelAndSet(BoardTaskGoal goal)
		{
			return false;
		}
	}
}
