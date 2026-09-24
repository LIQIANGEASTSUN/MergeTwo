using NaughtyAttributes;
using UnityEngine;

namespace MergePuzzle
{
	[CreateAssetMenu(fileName = "BoardItemPerishableSpawner", menuName = "Scriptable/BoardItem/PerishableSpawner", order = 3)]
	public class BoardItemPerishableSpawner : BoardItemData, IConfigAdaptor<PerishableSpawnerConfigAdaptor>, IConfigAdaptorBase
	{
		public PerishableSpawnerConfig SpawnerConfig;

		public BoardItemData PerishedSpawn;

		public int ChargeSetID;

		public int ChargedCapacity;

		public bool ShowItemPercentages;

		public bool IsTokenBased;

		public bool HasProgressBar;

		public bool HasProgressText;

		public int ChargeCountToCovertPerishable;

		[ShowIf("HasProgressText")]
		public ProgressTextData ProgressTextDataValue;

		public PerishableSpawnerConfigAdaptor GetConfigAdaptor()
		{
			return null;
		}

		public SpawnedItem GetNonProbabilisticItem(int currentCapacity)
		{
			return null;
		}

		public SpawnedItem GetIndexedSpawnedItem(int currentCapacity)
		{
			return null;
		}

		public SpawnedItem GetRandomItem()
		{
			return null;
		}

		public override bool Initialize(BoardEntity boardEntity, IItemController item, long millisecondsPassed, bool isNewlyCreated)
		{
			return false;
		}

		public override bool Initialize(BoardEntity boardEntity, IItemController item, long millisecondsPassed, bool isNewlyCreated, float capacity)
		{
			return false;
		}

		public override int GetTimeRequiredToExitCharging()
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
	}
}
