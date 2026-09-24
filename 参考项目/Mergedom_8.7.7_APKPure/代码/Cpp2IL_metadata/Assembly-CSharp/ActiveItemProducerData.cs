//Type is in global namespace

public class ActiveItemProducerData
{
	private const string CURRENT_CAPACITY_KEY = "cpcty"; //Field offset: 0x0
	private const string IS_RECHARGING_KEY = "rchrng"; //Field offset: 0x0
	private const string RECHARGE_COUNT_KEY = "rch_cnt"; //Field offset: 0x0
	private const string RECHARGE_START_TIME_KEY = "strt_t"; //Field offset: 0x0
	private const string RECHARGE_END_TIME_KEY = "end_t"; //Field offset: 0x0
	private const string PRODUCE_ORDER_INDEX_KEY = "poi"; //Field offset: 0x0
	public int CurrentCapacity; //Field offset: 0x10
	public bool IsRecharging; //Field offset: 0x14
	public int RechargeCount; //Field offset: 0x18
	public string RechargeStartTime; //Field offset: 0x20
	public string RechargeEndTime; //Field offset: 0x28
	public int ProduceOrderIndex; //Field offset: 0x30

	public ActiveItemProducerData() { }

	public ActiveItemProducerData(DataObjectProducer data) { }

	public ActiveItemProducerData(JSONNode json) { }

	public ActiveItemProducerData Clone() { }

	public JSONObject ToJsonObject() { }

}

