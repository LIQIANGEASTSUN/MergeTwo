using System.Collections.Generic;
using UnityEngine;

namespace MergePuzzle
{
	[CreateAssetMenu(fileName = "LevelBasedChestSpawner", menuName = "Scriptable/BoardItem/LevelBasedChestSpawner", order = 4)]
	public class LevelBasedChestSpawner : BoardItemChestSpawner, IConfigAdaptor<LevelBasedChestSpawnerConfigAdaptor>, IConfigAdaptorBase
	{
		public LevelBasedChestSpawnerConfig LevelBasedSpawnerConfig;

		public override bool Initialize(BoardEntity boardEntity, IItemController item, long millisecondsPassed, bool isNewlyCreated)
		{
			return false;
		}

		public List<SpawnedItem> GetCurrentSpawnedItems()
		{
			return null;
		}

		public override SpawnedItem GetNonProbabilisticItem(int currentCapacity)
		{
			return null;
		}

		public override SpawnedItem GetRandomItem()
		{
			return null;
		}

		public bool IsUseEnergySprite()
		{
			return false;
		}

		public new LevelBasedChestSpawnerConfigAdaptor GetConfigAdaptor()
		{
			return null;
		}

		public new AdaptorBase ConvertFromLocal()
		{
			return null;
		}
	}
}
