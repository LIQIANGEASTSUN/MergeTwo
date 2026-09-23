using System;
using Framework.Core.Services;
using MergeEngine.Configuration;
using MergeEngine.ECS.Components.Items;
using MergeEngine.Model.Configuration;
using Merger.Boosters.Declarations.Definitions.Interfaces;
using Zenject;

namespace MergeEngine.ECS
{
	public class EntityFactory : IEntityFactory
	{
		[Inject]
		[NonSerialized]
		public IGameConfigurationModel _gameConfigurationModel;

		[Inject]
		[NonSerialized]
		public IJsonService _jsonService;

		public Entity CreateBoardItemEntity(IMergeItem itemConfiguration, MergeItemInstanceConfiguration instanceConfiguration)
		{
			return null;
		}

		public Entity CreateBoosterItemEntity(IBoosterItem booster, string uuId)
		{
			return null;
		}

		public TComponent TryAddComponent<TComponent, TCapability>(Entity entity, TCapability capability) where TComponent : ComponentBase<TCapability>
		{
			return null;
		}

		public Entity CreateBoardEntity()
		{
			return null;
		}

		public Entity CreateInventoryEntity()
		{
			return null;
		}

		public Entity CreateOrdersEntity()
		{
			return null;
		}

		public Entity CreatePlayerEntity()
		{
			return null;
		}

		public Entity CreateCollectionBookEntity()
		{
			return null;
		}

		public Entity CreateNarrativeEntity()
		{
			return null;
		}

		public Entity CreateEmptyEntity()
		{
			return null;
		}
	}
}
