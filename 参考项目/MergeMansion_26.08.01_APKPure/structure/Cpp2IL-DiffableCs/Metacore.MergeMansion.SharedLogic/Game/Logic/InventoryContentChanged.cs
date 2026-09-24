namespace Game.Logic;

public sealed class InventoryContentChanged : CopyableEvent<InventoryContentChanged, Int32, MergeBoardId, Int32, PlayerInventoryChangeEventType>
{

	public InventoryContentChanged() { }

	public void Invoke(int itemId, MergeBoardId boardId, int count, PlayerInventoryChangeEventType changeType) { }

}

