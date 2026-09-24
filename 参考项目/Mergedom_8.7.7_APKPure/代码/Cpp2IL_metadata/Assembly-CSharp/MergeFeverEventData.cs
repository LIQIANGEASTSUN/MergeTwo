//Type is in global namespace

public class MergeFeverEventData
{
	private readonly DataObjectMergeFeverEvent eventDataObject; //Field offset: 0x10
	private readonly ITimeProvider timeProvider; //Field offset: 0x18

	public MergeFeverEventData(DataObjectMergeFeverEvent eventDataObject, ITimeProvider timeProvider) { }

	public bool CanStart() { }

	public DataObjectMergeFeverEvent GetDataObject() { }

	public string GetId() { }

	public TimeSpan GetRemainingTime() { }

	public int GetVersion() { }

	public bool HasEnded() { }

	public bool IsActive() { }

	public void SetActive(bool isActive) { }

}

