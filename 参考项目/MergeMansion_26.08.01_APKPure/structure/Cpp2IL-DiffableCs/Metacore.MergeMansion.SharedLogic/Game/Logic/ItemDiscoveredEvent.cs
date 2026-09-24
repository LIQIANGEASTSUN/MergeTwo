namespace Game.Logic;

public sealed class ItemDiscoveredEvent : CopyableEvent<ItemDiscoveredEvent, Int32>
{

	public ItemDiscoveredEvent() { }

	public void Invoke(int itemId) { }

}

