using System;
using System.Collections.Generic;

namespace ContextualizedECS
{
	public sealed class Entity
	{
		[NonSerialized]
		public readonly Dictionary<Type, IComponent> _components;

		public Entity()
		{
		}

		public Entity(Entity otherEntity)
		{
		}

		public void SetComponent<T>(T component) where T : struct, IComponent
		{
		}

		public bool TryGetComponent<T>(out T component) where T : struct, IComponent
		{
			component = default(T);
			return false;
		}

		public T GetComponent<T>() where T : struct, IComponent
		{
			return default(T);
		}

		public Entity WithComponent<T>(T component) where T : struct, IComponent
		{
			return null;
		}

		public bool HasComponent<T>() where T : struct, IComponent
		{
			return false;
		}

		public bool HasComponent(Type componentType)
		{
			return false;
		}

		public bool RemoveComponent<T>() where T : struct, IComponent
		{
			return false;
		}

		public bool RemoveComponent(Type type)
		{
			return false;
		}

		public void OverrideComponents(Entity otherEntity)
		{
		}
	}
}
