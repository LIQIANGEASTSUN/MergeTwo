using MergeEngine.Configuration;
using MergeEngine.Data;

namespace MergeEngine.ECS.Systems.Items
{
	public class UndoDataBase
	{
		public Entity Entity;

		public IMergeItem MergeItem;

		public UndoDataBase(Entity entity, IMergeItem mergeItem)
		{
		}

		public void PrepareItemForUndo(BoardItemPosition position, Entity entity)
		{
		}
	}
}
