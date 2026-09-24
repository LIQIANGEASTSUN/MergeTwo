namespace GameLogic.Player;

public sealed class PocketChangedEvent : CopyableEvent<PocketChangedEvent, Int32, String, MergeBoardId, Int32, Nullable`1<PlayerPocketChangeEventType>>
{

	public PocketChangedEvent() { }

	public void Invoke(int itemId, string itemType, MergeBoardId boardId, int count, PlayerPocketChangeEventType changeType) { }

}

