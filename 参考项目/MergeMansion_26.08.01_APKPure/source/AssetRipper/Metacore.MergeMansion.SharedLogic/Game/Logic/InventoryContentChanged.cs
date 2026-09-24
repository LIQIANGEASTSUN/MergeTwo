using Merge;
using Metaplay.Core;

namespace Game.Logic
{
	public sealed class InventoryContentChanged : CopyableEvent<InventoryContentChanged, int, MergeBoardId, int, PlayerInventoryChangeEventType>
	{
		public new void Invoke(int itemId, MergeBoardId boardId, int count, PlayerInventoryChangeEventType changeType)
		{
		}
	}
}
