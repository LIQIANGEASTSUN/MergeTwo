using MergePuzzle.Tutorial.Core;

namespace MergePuzzle
{
	public abstract class BoardItemSpawnerData : BoardItemData, IConfigAdaptor<SpawnerConfigAdaptor>, IConfigAdaptorBase
	{
		public SpawnerConfig SpawnerConfig;

		public SpawnerConfigAdaptor GetConfigAdaptor()
		{
			return null;
		}

		public override int GetTimeRequiredToExitCharging()
		{
			return 0;
		}

		public int GetTimeBetweenSmallAndBigCapacity()
		{
			return 0;
		}

		public SpawnedItem GetRandomItem()
		{
			return null;
		}

		public SpawnedItem GetTutorialItem(ItemEntity itemEntity, TutorialIndex activeTutorialStep)
		{
			return null;
		}

		public void ConsumeTutorialItem(ItemEntity itemEntity)
		{
		}

		public override bool Initialize(BoardEntity boardEntity, IItemController item, long millisecondsPassed, bool isNewlyCreated)
		{
			return false;
		}

		public void ProcessOfflineCapacity(IItemController item, long millisecondsPassed, bool isFromPause)
		{
		}

		public int GetStartCapacity(SpawnerState startState)
		{
			return 0;
		}

		public bool IsUseEnergySprite()
		{
			return false;
		}

		public AdaptorBase ConvertFromLocal()
		{
			return null;
		}

		public BoardItemSpawnerData()
		{
		}
	}
}
