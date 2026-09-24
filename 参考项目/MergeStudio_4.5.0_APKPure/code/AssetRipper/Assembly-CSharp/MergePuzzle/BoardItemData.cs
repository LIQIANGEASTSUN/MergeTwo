using System;
using System.Collections.Generic;
using NaughtyAttributes;
using UnityEngine;

namespace MergePuzzle
{
	public abstract class BoardItemData : ScriptableObject
	{
		[Serializable]
		public struct ProgressTextData
		{
			public Vector3 position;

			public Vector3 rotation;

			public Vector2 rectSize;

			public Vector3 scale;
		}

		public string Name;

		[ShowAssetPreview(40, 40)]
		public Sprite LockItem;

		[ShowAssetPreview(150, 150)]
		public Sprite Image;

		public int SetID;

		public int Level;

		public bool IsLockDouble;

		public int FeatureID;

		public float OptionalGoalImageScale;

		public abstract bool Initialize(BoardEntity boardEntity, IItemController item, long millisecondsPassed, bool isNewlyCreated);

		public virtual bool Initialize(BoardEntity boardEntity, IItemController item, long millisecondsPassed, bool isNewlyCreated, float capacity)
		{
			return false;
		}

		public void OverrideImage(Sprite image)
		{
		}

		public abstract int GetTimeRequiredToExitCharging();

		public string GetStringValue()
		{
			return null;
		}

		public List<SpawnedItem> GetSpawnedItems(bool useOriginalSetID = false)
		{
			return null;
		}

		public bool IsNormalAutoPerishableSpawner()
		{
			return false;
		}

		public bool StoreInventoryRemainingTime()
		{
			return false;
		}

		public bool IsCollectableOrSpawner()
		{
			return false;
		}

		public bool IsAutoSpawner()
		{
			return false;
		}

		public bool CanSpawn()
		{
			return false;
		}

		public bool CanSpawnWithoutChest()
		{
			return false;
		}

		public bool IsSpawnerPart()
		{
			return false;
		}

		public bool IsSpawnerPartWithoutChest()
		{
			return false;
		}

		public List<SpawnedItem> GetPerishableSpawnedItems(BoardItemPerishableSpawner perishableSpawner, bool useOriginalSetID)
		{
			return null;
		}

		public bool IsDefaultBoardFeature()
		{
			return false;
		}

		public bool IsBoardEventFeature()
		{
			return false;
		}

		public virtual bool IsCardCollectionItem()
		{
			return false;
		}

		public bool IsRecurringEventFeature()
		{
			return false;
		}

		public bool IsDailyChallengeFeature()
		{
			return false;
		}

		public virtual bool IsMergeable(IItemRuntimeData itself, IItemRuntimeData other)
		{
			return false;
		}

		public virtual bool IsMergeable(IItemRuntimeData itself)
		{
			return false;
		}

		public virtual bool IsMergeable(IItemEntity itemEntity)
		{
			return false;
		}

		public virtual bool PreventStoreToInventory(IItemEntity itemEntity)
		{
			return false;
		}

		public virtual bool IsSpawnableFromRewardArea()
		{
			return false;
		}

		public virtual bool CanThrownIntoBoard()
		{
			return false;
		}

		public virtual bool IsDraggable()
		{
			return false;
		}

		public virtual bool IsClickable()
		{
			return false;
		}

		public virtual bool OpenBadgeAtMaxLevel()
		{
			return false;
		}

		public BoardItemData()
		{
		}
	}
}
