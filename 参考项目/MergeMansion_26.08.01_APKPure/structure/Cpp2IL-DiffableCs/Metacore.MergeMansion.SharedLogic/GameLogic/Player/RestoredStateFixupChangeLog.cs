namespace GameLogic.Player;

public class RestoredStateFixupChangeLog
{
	public const int MaxRecordedEntriesPerSource = 20; //Field offset: 0x0
	private readonly List<FixupEntry> _entries; //Field offset: 0x10
	private readonly MetaDictionary<String, Int32> _totalCountsBySource; //Field offset: 0x18

	public bool HasChanges
	{
		 get { } //Length: 80
	}

	public RestoredStateFixupChangeLog() { }

	public bool get_HasChanges() { }

	public void Record(string source, string change) { }

	public PlayerEventRestoredStateFixup ToEvent() { }

}

