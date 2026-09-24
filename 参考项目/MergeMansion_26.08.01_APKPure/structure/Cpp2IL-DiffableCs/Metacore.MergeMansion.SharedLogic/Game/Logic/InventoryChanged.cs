namespace Game.Logic;

[AnalyticsEvent(23, "Inventory changed", 1, null, True, True, False)]
[AnalyticsEventKeywords(new IL2CPP_TYPE_STRING[] {"item"})]
public class InventoryChanged : AnalyticsServersideEventBase
{
	[CompilerGenerated]
	private string <ItemType>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private MergeBoardId <BoardId>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private int <Count>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private PlayerInventoryChangeEventType <ChangeType>k__BackingField; //Field offset: 0x24
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

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private PlayerInventoryChangeEventType ChangeType
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

	[MetaMember(7, MetaMemberFlags::None (0))]
	public private int FreeProducerInventorySlots
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	public private int GarageEmptyBoardSlots
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(6, MetaMemberFlags::None (0))]
	public private int GarageFreeInventorySlots
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private string ItemType
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private InventoryChanged() { }

	public InventoryChanged(string itemType, MergeBoardId boardId, int count, PlayerInventoryChangeEventType changeType, Option<IPlayer> player = null) { }

	[CompilerGenerated]
	public MergeBoardId get_BoardId() { }

	[CompilerGenerated]
	public PlayerInventoryChangeEventType get_ChangeType() { }

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
	public string get_ItemType() { }

	[CompilerGenerated]
	private void set_BoardId(MergeBoardId value) { }

	[CompilerGenerated]
	private void set_ChangeType(PlayerInventoryChangeEventType value) { }

	[CompilerGenerated]
	private void set_Count(int value) { }

	[CompilerGenerated]
	private void set_FreeProducerInventorySlots(int value) { }

	[CompilerGenerated]
	private void set_GarageEmptyBoardSlots(int value) { }

	[CompilerGenerated]
	private void set_GarageFreeInventorySlots(int value) { }

	[CompilerGenerated]
	private void set_ItemType(string value) { }

}

