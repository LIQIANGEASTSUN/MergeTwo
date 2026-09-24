using ContextualizedECS;
using ContextualizedECS.Context;
using Merger.MergeBoard.Components;
using Merger.MergeBoard.Factories;
using Merger.MergeBoard.View.Layout;

namespace Merger.MergeBoard.Utils
{
	public interface IExpendSpawnService
	{
		void TrySpawnExpendedItems(Entity sourceEntity, TickContext context, IEntityFactory entityFactory, IMergeBoardLayout layout, ExpendableComponent expendableComponent, int sourcePosition);

		void TransformAtSamePosition(Entity sourceEntity, TickContext context, IEntityFactory entityFactory, ExpendableComponent expendableComponent, int sourcePosition, string reason);
	}
}
