//Type is in global namespace

public class DataObjectProducer
{
	[JsonProperty("cpcty")]
	[SerializeField]
	private int cpcty; //Field offset: 0x10
	[JsonProperty("rchrng")]
	[SerializeField]
	private bool rchrng; //Field offset: 0x14
	[JsonProperty("rch_cnt")]
	[SerializeField]
	private int rch_cnt; //Field offset: 0x18
	[JsonProperty("strt_t")]
	[SerializeField]
	private string strt_t; //Field offset: 0x20
	[JsonProperty("end_t")]
	[SerializeField]
	private string end_t; //Field offset: 0x28
	[JsonProperty("poi")]
	[SerializeField]
	private int poi; //Field offset: 0x30

	[JsonIgnore]
	public int currentCapacity
	{
		 get { } //Length: 8
	}

	[JsonIgnore]
	public bool isRecharging
	{
		 get { } //Length: 8
	}

	[JsonIgnore]
	public int produceOrderIndex
	{
		 get { } //Length: 8
	}

	[JsonIgnore]
	public int rechargeCount
	{
		 get { } //Length: 8
	}

	[JsonIgnore]
	public string rechargeEndTime
	{
		 get { } //Length: 8
	}

	[JsonIgnore]
	public string rechargeStartTime
	{
		 get { } //Length: 8
	}

	public DataObjectProducer() { }

	public DataObjectProducer(ActiveItemProducerData data) { }

	public int get_currentCapacity() { }

	public bool get_isRecharging() { }

	public int get_produceOrderIndex() { }

	public int get_rechargeCount() { }

	public string get_rechargeEndTime() { }

	public string get_rechargeStartTime() { }

}

