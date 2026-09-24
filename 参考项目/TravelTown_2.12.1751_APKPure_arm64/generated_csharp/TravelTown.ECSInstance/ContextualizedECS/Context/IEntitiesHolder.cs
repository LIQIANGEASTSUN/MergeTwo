using System.Collections.Generic;

namespace ContextualizedECS.Context
{
	public interface IEntitiesHolder
	{
		IEnumerable<Entity> Entities { get; }

		Entity AddEntity(Entity entity);

		bool RemoveEntity(Entity entity);

		void ClearEntities();
	}
}
