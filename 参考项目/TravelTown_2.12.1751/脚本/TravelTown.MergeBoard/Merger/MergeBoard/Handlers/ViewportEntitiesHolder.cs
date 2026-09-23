using System;
using System.Collections.Generic;
using ContextualizedECS;
using ContextualizedECS.Context;
using Merger.MergeBoard.Models;

namespace Merger.MergeBoard.Handlers
{
	public class ViewportEntitiesHolder : IEntitiesHolder, IDisposable
	{
		[NonSerialized]
		public readonly EntitiesManager _entitiesManager;

		[NonSerialized]
		public readonly IActiveTilesModel _activeTilesModel;

		[NonSerialized]
		public HashSet<int> _activeIndices;

		[NonSerialized]
		public List<Entity> _activeEntities;

		public IEnumerable<Entity> Entities => null;

		public ViewportEntitiesHolder(EntitiesManager entitiesManager, IActiveTilesModel activeTilesModel)
		{
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

		public void Dispose()
		{
		}

		public void OnActiveTilesChanged()
		{
		}

		public void OnEntityAdded(Entity entity)
		{
		}

		public void OnEntityRemoved(Entity entity)
		{
		}

		public void OnEntitiesCleared()
		{
		}

		public void RefreshActiveIndices()
		{
		}

		public void RebuildActiveEntities()
		{
		}
	}
}
