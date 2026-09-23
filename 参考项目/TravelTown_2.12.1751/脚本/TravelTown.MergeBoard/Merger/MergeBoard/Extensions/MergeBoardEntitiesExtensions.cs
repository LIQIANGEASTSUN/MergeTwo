using System.Collections.Generic;
using ContextualizedECS;
using ContextualizedECS.Context;
using Merger.MergeBoard.Components;

namespace Merger.MergeBoard.Extensions
{
	public static class MergeBoardEntitiesExtensions
	{
		public static Entity GetEntityAtPosition(this IEnumerable<Entity> entities, int position)
		{
			return null;
		}

		public static void AddEntity(this TickContext tickContext, Entity entity, Entity sourceEntity = null)
		{
		}

		public static void RemoveEntity(this TickContext tickContext, Entity entity)
		{
		}

		public static void BlockMovement(this TickContext context, Entity entity, int originalPosition)
		{
		}

		public static bool IsNotBeingConsumed(this Entity entity, PendingInteractionComponent pendingInteractionComponent)
		{
			return false;
		}
	}
}
