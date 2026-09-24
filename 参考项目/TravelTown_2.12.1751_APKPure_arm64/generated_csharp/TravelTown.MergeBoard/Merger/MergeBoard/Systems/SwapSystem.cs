using ContextualizedECS;
using ContextualizedECS.Context;
using ContextualizedECS.Systems;
using Merger.MergeBoard.Components;

namespace Merger.MergeBoard.Systems
{
	public class SwapSystem : ISystem
	{
		public void Tick(TickContext context)
		{
		}

		public static bool IsSwappable((Entity e, BoardTilePositionComponent position) entity, (Entity entity, ItemMovedComponent movedItemComponent) movedEntity)
		{
			return false;
		}
	}
}
