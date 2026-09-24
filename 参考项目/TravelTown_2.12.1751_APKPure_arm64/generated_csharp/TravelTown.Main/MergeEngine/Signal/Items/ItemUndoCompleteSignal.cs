using MergeEngine.ECS;

namespace MergeEngine.Signal.Items
{
	public class ItemUndoCompleteSignal
	{
		public Entity Item { get; }

		public ItemUndoCompleteSignal(Entity item)
		{
		}
	}
}
