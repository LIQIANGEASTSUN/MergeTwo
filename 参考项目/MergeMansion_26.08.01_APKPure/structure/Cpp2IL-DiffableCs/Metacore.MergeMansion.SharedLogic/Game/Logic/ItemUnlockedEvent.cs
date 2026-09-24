namespace Game.Logic;

public sealed class ItemUnlockedEvent : CopyableEvent<ItemUnlockedEvent, Int32>
{

	public ItemUnlockedEvent() { }

	public void Invoke(int itemId) { }

}

