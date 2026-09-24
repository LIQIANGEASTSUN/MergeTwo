namespace GameLogic.Player.Items.Sink;

[MetaSerializable]
public interface ISinkState
{

	public bool DoesTakeIn(IPlayer player, int itemId) { }

	public IItemDefinition GetCompletionItem(IPlayer player, MergeItem item, MergeBoard board) { }

	public ValueTuple<Int32, Int32> GetProgress() { }

	public void GetProgressEntries(ref List<SinkProgressEntry>& outList) { }

	public SinkType GetSinkType() { }

	public bool IncreaseProgress(IPlayer player, int inputItem) { }

	public bool IsCompleted() { }

}

