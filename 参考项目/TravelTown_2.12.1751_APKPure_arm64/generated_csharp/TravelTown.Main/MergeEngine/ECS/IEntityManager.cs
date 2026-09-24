using System;
using System.Collections.ObjectModel;
using MergeEngine.ECS.Components.Items;

namespace MergeEngine.ECS
{
	public interface IEntityManager
	{
		ReadOnlyCollection<Entity> Entities { get; }

		event Action<Entity> EntityCreated;

		event Action<Entity> EntityRemoved;

		void AddEntity(Entity entity);

		bool RemoveEntity(Entity entity);

		ReadOnlyCollection<TComponent> GetComponents<TComponent>() where TComponent : IComponentBase;

		TComponent GetComponent<TComponent>() where TComponent : IComponentBase;
	}
}
