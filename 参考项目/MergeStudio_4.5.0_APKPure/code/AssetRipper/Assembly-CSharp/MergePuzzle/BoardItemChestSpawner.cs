using UnityEngine;

namespace MergePuzzle
{
	[CreateAssetMenu(fileName = "BoardItemChestSpawner", menuName = "Scriptable/BoardItem/ChestSpawner", order = 6)]
	public class BoardItemChestSpawner : BoardItemData, IConfigAdaptor<ChestSpawnerConfigAdaptor>, IConfigAdaptorBase
	{
		public ChestSpawnerConfig SpawnerConfig;

		public string SpineSkin;

		public Sprite OpenSprite;

		public bool UseDefaultSpriteForOpenedState;

		public bool IsBackupChest;

		public virtual SpawnedItem GetNonProbabilisticItem(int currentCapacity)
		{
			return null;
		}

		public virtual SpawnedItem GetRandomItem()
		{
			return null;
		}

		public override bool Initialize(BoardEntity boardEntity, IItemController item, long millisecondsPassed, bool isNewlyCreated)
		{
			return false;
		}

		public override int GetTimeRequiredToExitCharging()
		{
			return 0;
		}

		public override bool IsMergeable(IItemRuntimeData itself, IItemRuntimeData other)
		{
			return false;
		}

		public override bool IsMergeable(IItemRuntimeData itself)
		{
			return false;
		}

		public override bool IsMergeable(IItemEntity itemEntity)
		{
			return false;
		}

		public ChestSpawnerConfigAdaptor GetConfigAdaptor()
		{
			return null;
		}

		public AdaptorBase ConvertFromLocal()
		{
			return null;
		}

		public override bool PreventStoreToInventory(IItemEntity itemEntity)
		{
			return false;
		}
	}
}
