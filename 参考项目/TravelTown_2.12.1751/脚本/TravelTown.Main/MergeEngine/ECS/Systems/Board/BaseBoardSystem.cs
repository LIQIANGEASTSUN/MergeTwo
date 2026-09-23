using MergeEngine.ECS.Components.Items;
using Merger.Game.Views;

namespace MergeEngine.ECS.Systems.Board
{
	public abstract class BaseBoardSystem : SystemBase
	{
		public abstract IBoardView BoardView { get; }

		public abstract void RemoveItem(PositionComponent positionComponent, string source, bool killEntity = true, bool removeItemCount = true);

		public BaseBoardSystem()
		{
		}
	}
}
