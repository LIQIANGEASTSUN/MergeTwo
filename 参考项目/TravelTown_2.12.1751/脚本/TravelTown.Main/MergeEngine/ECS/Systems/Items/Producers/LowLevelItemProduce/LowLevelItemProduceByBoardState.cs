using System;
using MergeEngine.Configuration;
using MergeEngine.ECS.Components.Board;
using MergeEngine.ECS.Components.Items.Producers;
using MergeEngine.Model.RemoteSpawning;
using Merger.Services;
using Merger.Services.User;
using Zenject;

namespace MergeEngine.ECS.Systems.Items.Producers.LowLevelItemProduce
{
	public class LowLevelItemProduceByBoardState : LowLevelProduceStrategyBase
	{
		public class SpawnedItemSettings
		{
			public int BaseItemIndex { get; }

			public int BoostedItemIndex { get; }

			public IMergeGraphItem ItemChain { get; }

			public SpawnedItemSettings(int baseItemIndex, int boostedItemIndex, IMergeGraphItem itemChain)
			{
			}
		}

		[Inject]
		[NonSerialized]
		public IUserProfileService _userProfileService;

		[Inject]
		[NonSerialized]
		public IRemoteSpawningModel _remoteSpawningModel;

		[Inject]
		[NonSerialized]
		public IBoardConfigService _boardConfigService;

		[Inject]
		[NonSerialized]
		public IEntityManager _entityManager;

		public bool IsRemoteSpawning => false;

		public int PowerBoostIndex => 0;

		public override int SpawnPercentage => 0;

		public override bool TryGetProduceData(IItemSpawningComponent itemSpawningComponent, out LowLevelItemProduceData result)
		{
			result = null;
			return false;
		}

		public bool TryGetLowLevelItemByBoardState(IItemSpawningComponent itemSpawningComponent, out LowLevelItemProduceData lowLevelData)
		{
			lowLevelData = null;
			return false;
		}

		public bool TryResolveSpawnedItemSettings(IItemSpawningComponent itemSpawningComponent, out SpawnedItemSettings spawnedItemSettings)
		{
			spawnedItemSettings = null;
			return false;
		}

		public bool TryPeekRemoteSpawnedItem(int boostOption, IMergeItem producer, out SpawnedItemSettings spawnedItemSettings)
		{
			spawnedItemSettings = null;
			return false;
		}

		public bool TryPeekLocalSpawnedItem(int boostOption, IItemSpawningComponent itemSpawningComponent, out SpawnedItemSettings spawnedItemSettings)
		{
			spawnedItemSettings = null;
			return false;
		}

		public int GetBoardAndInventoryCount(string itemId, BoardQueueComponent boardQueueComponent)
		{
			return 0;
		}
	}
}
