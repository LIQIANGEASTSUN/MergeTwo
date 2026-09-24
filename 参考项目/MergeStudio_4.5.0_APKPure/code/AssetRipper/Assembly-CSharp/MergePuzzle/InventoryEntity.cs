using System;
using System.Collections.Generic;
using MergePuzzle.BoardEvents;

namespace MergePuzzle
{
	[Serializable]
	public class InventoryEntity
	{
		[Serializable]
		public class InventorySpawnerEntity
		{
			public int Index;

			public int LinkID;

			public ItemEntity ItemEntity;
		}

		[Serializable]
		public class ArchiveTaskEntity
		{
			public long EndTimeSeconds;

			public int LinkId;

			public bool Activated;

			public bool Removed;

			public ArchiveTaskEntity()
			{
			}

			public ArchiveTaskEntity(long endTimeSeconds, int linkId)
			{
			}

			public bool IsActive()
			{
				return false;
			}

			public bool IsWaitingForInitializing()
			{
				return false;
			}

			public bool IsWaitingForRemoval()
			{
				return false;
			}

			public bool IsReadyForRemoval()
			{
				return false;
			}
		}

		public List<ItemEntity> InventoryItems;

		public List<InventorySpawnerEntity> SpawnerItems;

		public List<ArchiveTaskEntity> ArchiveTaskItems;

		public int InventorySize;

		public bool InventoryUnlocked;

		public bool IsRemoveInventoryItem;

		public InventoryEntity()
		{
		}

		public InventoryEntity(EventBoardConfigItem conf)
		{
		}

		public InventoryEntity(BoardData boardData)
		{
		}

		public List<ItemEntity> PopIllegalSpawnerItems()
		{
			return null;
		}

		public void IncreaseInventorySize(int amount)
		{
		}

		public void AddToInventory(ItemEntity entity)
		{
		}

		public List<ItemEntity> GetSpawnerInventoryItemEntities()
		{
			return null;
		}

		public void AddToSpawnerInventory(ItemEntity entity, ItemLinkModel itemLink, ItemChainManager itemChainManager)
		{
		}

		public void AddBoardSlotFullCounter()
		{
		}

		public SlotFullCounter.BoardType GetFireSlotFullType()
		{
			return default(SlotFullCounter.BoardType);
		}

		public void RemoveFromInventoryWithGameplay(ItemEntity entity, bool spawnerInventory)
		{
		}

		public void RemoveFromInventory(ItemEntity entity, bool spawnerInventory)
		{
		}

		public void RemoveFromInventory(int setID, int level)
		{
		}

		public void RemoveFromInventory(int setID)
		{
		}

		public void Reset()
		{
		}

		public bool IsFull()
		{
			return false;
		}

		public void SendUpdateEvent()
		{
		}

		public bool ToSpawnerInventory(BoardItemData itemData)
		{
			return false;
		}
	}
}
