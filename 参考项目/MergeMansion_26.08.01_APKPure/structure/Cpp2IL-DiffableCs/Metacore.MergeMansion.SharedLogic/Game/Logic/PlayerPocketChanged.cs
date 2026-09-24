namespace Game.Logic;

[AnalyticsEvent(12, "Pocket changed", 1, null, True, True, False)]
[AnalyticsEventKeywords(new IL2CPP_TYPE_STRING[] {"item", "pocket"})]
public class PlayerPocketChanged : AnalyticsServersideEventBase
{
	[CompilerGenerated]
	private int <Item>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private MergeBoardId <BoardId>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private int <Count>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private PlayerPocketChangeEventType <ChangeType>k__BackingField; //Field offset: 0x24
	[CompilerGenerated]
	private string <ItemName>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private int <GarageEmptyBoardSlots>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private int <GarageFreeInventorySlots>k__BackingField; //Field offset: 0x34
	[CompilerGenerated]
	private int <FreeProducerInventorySlots>k__BackingField; //Field offset: 0x38

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private MergeBoardId BoardId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private PlayerPocketChangeEventType ChangeType
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private int Count
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public virtual string EventDescription
	{
		 get { } //Length: 436
	}

	public virtual AnalyticsEventType EventType
	{
		 get { } //Length: 8
	}

	[MetaMember(8, MetaMemberFlags::None (0))]
	public private int FreeProducerInventorySlots
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(6, MetaMemberFlags::None (0))]
	public private int GarageEmptyBoardSlots
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(7, MetaMemberFlags::None (0))]
	public private int GarageFreeInventorySlots
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	[Obsolete("Item information now stored in ItemName. Item Id kept for backwards compatibility")]
	public private int Item
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	public private string ItemName
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private PlayerPocketChanged() { }

	public PlayerPocketChanged(int itemId, string itemName, MergeBoardId boardId, int count, PlayerPocketChangeEventType changeType, Option<IPlayer> player = null) { }

	[CompilerGenerated]
	public MergeBoardId get_BoardId() { }

	[CompilerGenerated]
	public PlayerPocketChangeEventType get_ChangeType() { }

	[CompilerGenerated]
	public int get_Count() { }

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
	private void set_ChangeType(PlayerPocketChangeEventType value) { }

	[CompilerGenerated]
	private void set_Count(int value) { }

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

