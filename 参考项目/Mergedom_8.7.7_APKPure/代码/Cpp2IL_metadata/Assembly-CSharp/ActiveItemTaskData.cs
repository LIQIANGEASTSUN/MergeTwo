//Type is in global namespace

public class ActiveItemTaskData
{
	[JsonProperty("no")]
	[SerializeField]
	private int ItemTaskNo; //Field offset: 0x10
	[JsonProperty("rno")]
	[SerializeField]
	private int RealItemTaskNo; //Field offset: 0x14
	[JsonProperty("pid")]
	[SerializeField]
	private int ProviderId; //Field offset: 0x18
	[JsonIgnore]
	public ItemTaskKind kind; //Field offset: 0x1C

	public int itemTaskNo
	{
		 get { } //Length: 8
	}

	public int providerId
	{
		 get { } //Length: 8
	}

	public int realItemTaskNo
	{
		 get { } //Length: 8
	}

	public ActiveItemTaskData() { }

	public ActiveItemTaskData(int no, int rNo, int pId, ItemTaskKind kind) { }

	public virtual bool Equals(object obj) { }

	protected bool Equals(ActiveItemTaskData other) { }

	public int get_itemTaskNo() { }

	public int get_providerId() { }

	public int get_realItemTaskNo() { }

	public virtual int GetHashCode() { }

	public static bool op_Equality(ActiveItemTaskData obj1, ActiveItemTaskData obj2) { }

	public static bool op_Inequality(ActiveItemTaskData obj1, ActiveItemTaskData obj2) { }

	public void SetNo(int n) { }

	public void SetRealNo(int n) { }

	public virtual string ToString() { }

}

