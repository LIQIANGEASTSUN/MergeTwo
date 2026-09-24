namespace GameLogic.Player.Events;

public sealed class ItemActivatedEvent : CopyableEvent<ItemActivatedEvent, Int32>
{

	public ItemActivatedEvent() { }

	public void Invoke(int itemId) { }

}

