namespace Game.Logic;

[AnalyticsEvent(11, "Item moved from pocket to board", 1, null, True, True, False)]
[AnalyticsEventKeywords(new IL2CPP_TYPE_STRING[] {"item", "pocket"})]
public class PlayerMovedItemFromPocketToBoard : AnalyticsServersideEventBase
{
	[CompilerGenerated]
	private int <Item>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private MergeBoardId <BoardId>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private string <ItemName>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private int <GarageEmptyBoardSlots>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private int <GarageFreeInventorySlots>k__BackingField; //Field offset: 0x2C
	[CompilerGenerated]
	private int <FreeProducerInventorySlots>k__BackingField; //Field offset: 0x30

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private MergeBoardId BoardId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public virtual string EventDescription
	{
		 get { } //Length: 76
	}

	public virtual AnalyticsEventType EventType
	{
		 get { } //Length: 8
	}

	[MetaMember(6, MetaMemberFlags::None (0))]
	public private int FreeProducerInventorySlots
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private int GarageEmptyBoardSlots
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	public private int GarageFreeInventorySlots
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private int Item
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private string ItemName
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private PlayerMovedItemFromPocketToBoard() { }

	public PlayerMovedItemFromPocketToBoard(int item, MergeBoardId boardId, string itemName, Option<IPlayer> player = null) { }

	[CompilerGenerated]
	public MergeBoardId get_BoardId() { }

	public virtual string get_EventDescription() { }

	public virtual AnalyticsEventType get_EventType() { }

	[CompilerGenerated]
	public int get_FreeProducerInventorySlots() { }

	[CompilerGenerated]
	public int get_GarageEmptyBoardSlots() { }

	[CompilerGenerated]
	public int get_GarageFreeInventorySlots() { }

	[CompilerGenerated]
	public int get_Item() { }

	[CompilerGenerated]
	public string get_ItemName() { }

	[CompilerGenerated]
	private void set_BoardId(MergeBoardId value) { }

	[CompilerGenerated]
	private void set_FreeProducerInventorySlots(int value) { }

	[CompilerGenerated]
	private void set_GarageEmptyBoardSlots(int value) { }

	[CompilerGenerated]
	private void set_GarageFreeInventorySlots(int value) { }

	[CompilerGenerated]
	private void set_Item(int value) { }

	[CompilerGenerated]
	private void set_ItemName(string value) { }

}

