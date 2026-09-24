namespace GameLogic.Player.Events;

public sealed class ItemMergedEvent : CopyableEvent<ItemMergedEvent, Int32>
{

	public ItemMergedEvent() { }

	public void Invoke(int itemId) { }

}

