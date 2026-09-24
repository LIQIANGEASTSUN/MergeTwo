//Type is in global namespace

public class DataObjectBoard : ISerializableToJson
{
	private const int BOARD_ITEM_COUNT = 63; //Field offset: 0x0
	private const string RK_ITEM_ID = "id"; //Field offset: 0x0
	private const string RK_ITEM_LEVEL = "lvl"; //Field offset: 0x0
	private const string RK_IS_LOCKED = "is_lck"; //Field offset: 0x0
	private const string RK_IS_ITEM_LOCKED = "is_i_lck"; //Field offset: 0x0
	private const string RK_PRODUCERS_DATA = "prdr"; //Field offset: 0x0
	[JsonProperty("id")]
	[SerializeField]
	private List<Int32> id; //Field offset: 0x10
	[JsonProperty("lvl")]
	[SerializeField]
	private List<Int32> lvl; //Field offset: 0x18
	[JsonProperty("is_lck")]
	[SerializeField]
	private List<Int32> is_lck; //Field offset: 0x20
	[JsonProperty("is_i_lck")]
	[SerializeField]
	private List<Int32> is_i_lck; //Field offset: 0x28
	[JsonProperty("prdr")]
	[SerializeField]
	private List<List`1<DataObjectProducer>> prdr; //Field offset: 0x30
	[CompilerGenerated]
	private BoardData <boardData>k__BackingField; //Field offset: 0x38

	[JsonIgnore]
	public private BoardData boardData
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override SerializerMode mode
	{
		 get { } //Length: 8
	}

	public DataObjectBoard() { }

	public DataObjectBoard(BoardData data) { }

	public DataObjectBoard(JSONObject json) { }

	public void FillJsonObject(JSONObject json) { }

	[CompilerGenerated]
	public BoardData get_boardData() { }

	public override SerializerMode get_mode() { }

	public override void PostDeserialize() { }

	public override void PreSerialize() { }

	[CompilerGenerated]
	private void set_boardData(BoardData value) { }

}

