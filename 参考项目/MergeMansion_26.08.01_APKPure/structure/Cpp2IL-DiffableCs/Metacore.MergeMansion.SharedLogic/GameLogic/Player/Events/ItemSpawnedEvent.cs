namespace GameLogic.Player.Events;

public sealed class ItemSpawnedEvent : CopyableEvent<ItemSpawnedEvent, Int32>
{

	public ItemSpawnedEvent() { }

	public void Invoke(int itemId) { }

}

