using System;
using ContextualizedECS;
using ContextualizedECS.Context;
using ContextualizedECS.Query;
using ContextualizedECS.Systems;
using MergeEngine.Configuration;
using MergeEngine.Model;
using MergeEngine.Model.Configuration;
using Merger.MergeBoard.Components;
using Zenject;

namespace Merger.MergeBoard.Systems
{
	public class ItemDiscoverySystem : ISystem
	{
		public struct DiscoverableItems : IComponentGroup<IdComponent, LockComponent, BoxComponent>
		{
			public Entity Entity;

			public IdComponent IdComponent;

			public LockComponent LockComponent;

			public BoxComponent BoxComponent;

			public DiscoverableItems((Entity, IdComponent, LockComponent, BoxComponent) tuple)
			{
				Entity = null;
				IdComponent = default(IdComponent);
				LockComponent = default(LockComponent);
				BoxComponent = default(BoxComponent);
			}

			public static implicit operator DiscoverableItems((Entity, IdComponent, LockComponent, BoxComponent) tuple)
			{
				return default(DiscoverableItems);
			}

			public static implicit operator (Entity, IdComponent, LockComponent, BoxComponent)(DiscoverableItems group)
			{
				return default((Entity, IdComponent, LockComponent, BoxComponent));
			}

			public void Deconstruct(out Entity entity, out IdComponent idComponent, out LockComponent lockComponent, out BoxComponent boxComponent)
			{
				entity = null;
				idComponent = default(IdComponent);
				lockComponent = default(LockComponent);
				boxComponent = default(BoxComponent);
			}

			public static Entities.MatchDelegate<(Entity, IdComponent, LockComponent, BoxComponent)> GetMatchMethod()
			{
				return null;
			}
		}

		[Inject]
		[NonSerialized]
		public IPlayerItemsCollectionModel _playerItemsCollectionModel;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		public void Tick(TickContext context)
		{
		}

		public void DiscoverNewCreatedItems(TickContext context)
		{
		}

		public void DiscoverUnboxedItems(TickContext context)
		{
		}

		public void DiscoverExistingItemsOnInitialize(TickContext context)
		{
		}

		public void HandleDiscoveryForEntity(DiscoverableItems discoverableNewItem, TickContext context)
		{
		}

		public void OnItemSpawnerDiscovered(IMergeItem mergeItem, TickContext context)
		{
		}

		public void OnItemDiscovered(IMergeItem item, TickContext context)
		{
		}

		public void OnItemCreated(IMergeItem item, Entity entity, TickContext context)
		{
		}
	}
}
