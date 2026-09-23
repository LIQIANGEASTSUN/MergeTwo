using System;
using MergeEngine.Configuration;
using MergeEngine.Data;
using MergeEngine.ECS.Components.Player;
using MergeEngine.ECS.Systems.Board;
using MergeEngine.ECS.Util;
using MergeEngine.Model;
using MergeEngine.Model.Configuration;
using Zenject;

namespace MergeEngine.ECS.Systems.Items
{
	public class ConsumableDropSystem : SystemBase
	{
		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IResourcesConfigurationModel _resourcesConfigurationModel;

		[Inject]
		[NonSerialized]
		public IGameConfigurationModel _gameConfigurationModel;

		[InjectComponent]
		[NonSerialized]
		public PlayerProgressionComponent _playerProgressionComponent;

		public BoardSystem BoardSystem => null;

		public IMergeItem TrySpawnConsumableFor(Entity entity, out Entity consumableEntity)
		{
			consumableEntity = null;
			return null;
		}

		public IMergeItem SpawnConsumable(PlayerResourceEnum resource, BoardItemPosition boardItemPosition, BoardItemPosition positionFrom, out Entity consumableEntity)
		{
			consumableEntity = null;
			return null;
		}
	}
}
