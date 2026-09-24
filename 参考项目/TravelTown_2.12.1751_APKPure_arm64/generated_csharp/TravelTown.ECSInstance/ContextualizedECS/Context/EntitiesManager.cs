using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;

namespace ContextualizedECS.Context
{
	public class EntitiesManager : IEntitiesHolder
	{
		[NonSerialized]
		public readonly List<Entity> _entities;

		public IEnumerable<Entity> Entities => null;

		public event Action<Entity> EntityAdded
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

		public event Action EntitiesCleared
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

		public Entity AddEntity(Entity entity)
		{
			return null;
		}

		public bool RemoveEntity(Entity entity)
		{
			return false;
		}

		public void ClearEntities()
		{
		}
	}
}
