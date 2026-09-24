//Type is in global namespace

public class ConfigMergeFeverEvent
{
	[JsonProperty]
	[SerializeField]
	private string eventID; //Field offset: 0x10
	[JsonProperty]
	[SerializeField]
	private int durationH; //Field offset: 0x18
	[JsonProperty]
	[SerializeField]
	private string startDateTime; //Field offset: 0x20
	[JsonProperty]
	[SerializeField]
	private string endDateTime; //Field offset: 0x28
	[JsonProperty]
	[SerializeField]
	private int levelRequirement; //Field offset: 0x30
	[JsonProperty]
	[SerializeField]
	private int taskRequirement; //Field offset: 0x34
	[JsonProperty]
	[SerializeField]
	private List<MergeFeverLevel> levels; //Field offset: 0x38

	public ConfigMergeFeverEvent() { }

	public DateTime GetEndDateTime() { }

	public int GetEventDurationHours() { }

	public string GetEventID() { }

	public MergeFeverLevel GetLastLevel() { }

	public MergeFeverLevel GetLevel(int index) { }

	private MergeFeverLevel GetLevelByIndex(int index) { }

	public int GetLevelRequirement() { }

	public int GetLevelsCount() { }

	public DateTime GetStartDateTime() { }

	public int GetTaskRequirement() { }

	private DateTime GetTime(string timeStr) { }

	public bool TryGetLevelIndexByMergeCount(int mergeCount, out int levelIndex) { }

}

