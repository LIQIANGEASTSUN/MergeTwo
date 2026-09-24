using System;
using Paxie.MergeStudio.GameCore.Reward;

namespace MergePuzzle
{
	[Serializable]
	public class ItemEntity : IItemEntity
	{
		public Coordinate BoardIndex;

		public int Level;

		public int SetID;

		public bool IsJelly;

		public bool IsBubbled;

		public long BubbleFinishAtTick;

		public float CurrentCapacity;

		public int ChargeAmount;

		public long ChargingFinishAtTick;

		public ChestState ChestState;

		public SpawnerState SpawnerState;

		public SpawnerState SkippedState;

		public int NoCapacityCounter;

		public TutorialState TutorialState;

		public long InventoryRemainingChargingTick;

		public long ShopRemainingChargingTick;

		public int CurrentTaskIndex;

		public bool IsBoxed;

		public int UnboxLevel;

		public PickBoxSelectedEntity PickBoxSelectedEntity;

		public string BubbleSpawnTrigger;

		public RewardHistoryEntity RewardHistoryEntity;

		public int GetLevel => 0;

		public int GetSetID => 0;

		public bool GetIsBubbled => false;

		public float GetCurrentCapacity => 0f;

		public long GetChargingFinishAtTick => 0L;

		public ChestState GetChestState => default(ChestState);

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

		public ItemEntity(int level, int setID, bool isJelly, Coordinate boardIndex, RewardHistoryRecord rewardHistoryRecord)
		{
		}

		public ItemEntity(ItemInfo itemInfo, bool isJelly, Coordinate boardIndex, RewardHistoryRecord rewardHistoryRecord)
		{
		}

		public ItemEntity(int level, int setID, bool isJelly, Coordinate boardIndex, RewardHistoryEntity rewardHistoryEntity)
		{
		}

		public ItemEntity(ItemInfo itemInfo, bool isJelly, Coordinate boardIndex, bool isBoxed, int unboxLevel, RewardHistoryRecord record)
		{
		}

		public ItemEntity(ItemInfo itemInfo, bool isJelly, Coordinate boardIndex, bool isBoxed, int unboxLevel, RewardHistoryEntity rewardHistoryEntity)
		{
		}

		public ItemEntity(int level, int setID, bool isJelly, Coordinate boardIndex, int currentTaskIndex, RewardHistoryEntity rewardHistoryEntity)
		{
		}

		public ItemEntity(ItemInfo itemInfo, bool isJelly, Coordinate boardIndex, int currentTaskIndex, RewardHistoryRecord record)
		{
		}

		public ItemEntity(int level, int setID, bool isJelly, bool isBubbled, Coordinate boardIndex, RewardHistoryRecord rewardHistoryRecord)
		{
		}

		public ItemEntity(int level, int setID, bool isJelly, RewardHistoryEntity rewardHistoryEntity)
		{
		}

		public ItemEntity(RewardEntity rewardEntity)
		{
		}

		public ItemEntity()
		{
		}

		public void RemoveBubble()
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

		public bool IsOnlyJelly()
		{
			return false;
		}

		public bool IsMovable()
		{
			return false;
		}

		public bool IsSpecialTaskItem(BoardData boardData)
		{
			return false;
		}

		public void ActivateTutorialState()
		{
		}

		public bool IsInTutorialState()
		{
			return false;
		}

		public void SetSpawnerState(IItemController item, BoardItemSpawnerData data, SpawnerState spawnerState, string label, bool animateClockDisappear = false)
		{
		}

		public bool IsInvalid()
		{
			return false;
		}

		public void SetBubbleData(bool isBubbled, long bubbleDeactivationTime, string spawnTrigger)
		{
		}

		public bool IsSameLevelAndSet(ItemEntity item)
		{
			return false;
		}

		public bool IsSameLevelAndSet(BoardTaskGoal goal, bool useCurrentID = false)
		{
			return false;
		}

		public void CreateEmptyHistoryEntityIfNull()
		{
		}
	}
}
