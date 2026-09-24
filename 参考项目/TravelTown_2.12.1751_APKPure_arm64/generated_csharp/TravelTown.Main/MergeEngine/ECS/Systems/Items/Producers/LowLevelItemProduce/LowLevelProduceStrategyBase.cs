using System;
using MergeEngine.ECS.Components.Items.Producers;
using MergeEngine.ECS.Systems.Board;
using MergeEngine.Model.Configuration;
using Merger.Game.Model;
using Merger.PowerBoost;
using Zenject;

namespace MergeEngine.ECS.Systems.Items.Producers.LowLevelItemProduce
{
	public abstract class LowLevelProduceStrategyBase : ILowLevelProduceStrategy
	{
		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel MergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IGameSessionModel GameSessionModel;

		[Inject]
		[NonSerialized]
		public ISystemManager _systemManager;

		[NonSerialized]
		public PowerBoostSystem _powerBoostSystem;

		[NonSerialized]
		public BoardSystem _boardSystem;

		[NonSerialized]
		public InventorySystem _inventorySystem;

		public PowerBoostSystem PowerBoostSystem => null;

		public BoardSystem BoardSystem => null;

		public InventorySystem InventorySystem => null;

		public abstract int SpawnPercentage { get; }

		public abstract bool TryGetProduceData(IItemSpawningComponent itemSpawningComponent, out LowLevelItemProduceData result);

		public bool CanPowerBoostItemSpawn(IItemSpawningComponent itemSpawningComponent)
		{
			return false;
		}

		public LowLevelProduceStrategyBase()
		{
		}
	}
}
