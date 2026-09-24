using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.CompilerServices;
using MergeEngine.ECS.Components.Items;

namespace MergeEngine.ECS
{
	public class EntityManager : IEntityManager
	{
		[NonSerialized]
		public List<Entity> _entities;

		[NonSerialized]
		public Dictionary<Type, IList> _componentsCache;

		[NonSerialized]
		public Dictionary<Type, IList> _emptyComponentsCache;

		public ReadOnlyCollection<Entity> Entities => null;

		public event Action<Entity> EntityCreated
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action<Entity> EntityRemoved
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public void AddEntity(Entity entity)
		{
		}

		public bool RemoveEntity(Entity entity)
		{
			return false;
		}

		public ReadOnlyCollection<TComponent> GetComponents<TComponent>() where TComponent : IComponentBase
		{
			return null;
		}

		public TComponent GetComponent<TComponent>() where TComponent : IComponentBase
		{
			return default(TComponent);
		}

		public void RemoveAllComponentsOfEntityFromCache(Entity entity)
		{
		}

		public void RemoveComponentFromCache(Type componentType, ComponentBase component)
		{
		}

		public IList GetComponents(Type componentType, bool createIfDoesNotExist = false)
		{
			return null;
		}

		public void CacheAllComponentsOfEntity(Entity entity)
		{
		}

		public void CacheComponent(Type componentType, IComponentBase component)
		{
		}

		public void TryCacheComponentAsSubtype(Type componentType, IComponentBase component)
		{
		}

		public void EntityComponentAdded(IComponentBase component)
		{
		}

		public void EntityComponentRemoved(IComponentBase component)
		{
		}
	}
}
