using MergeEngine.ECS;

namespace Merger.Game.Views.BoardItem
{
	public interface IBoardItemViewBehaviourFactory
	{
		void AddBehaviours(Entity entity, BoardItemView2 boardItemView2);
	}
}
