namespace GameLogic.Player.Items.Sink;

public struct SinkProgressEntry
{
	public bool IsAllowed; //Field offset: 0x0
	public int ItemId; //Field offset: 0x4
	public int Progress; //Field offset: 0x8
	public int Target; //Field offset: 0xC

	public SinkProgressEntry(int itemId, int progress, int target, bool isAllowed = true) { }

}

