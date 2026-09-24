namespace GameLogic.ItemsInPocket;

[MetaSerializable]
public class ItemInPocketInfo : IGameConfigData<ItemInPocketId>, IGameConfigData, IHasGameConfigKey<ItemInPocketId>
{
	[CompilerGenerated]
	private ItemInPocketId <ConfigKey>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private ItemDef <ItemDef>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private bool <IsNecessaryValidCoordinateToRunFromPocket>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private bool <CanMoveToBoard>k__BackingField; //Field offset: 0x21
	[CompilerGenerated]
	private int <PriorityInPocket>k__BackingField; //Field offset: 0x24
	[CompilerGenerated]
	private List<IDirectorAction> <ActionsToRunFromPocket>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x30

	[MetaMember(6, MetaMemberFlags::None (0))]
	public private List<IDirectorAction> ActionsToRunFromPocket
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private bool CanMoveToBoard
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override ItemInPocketId ConfigKey
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(999, MetaMemberFlags::None (0))]
	[MetaSerializerOmitNull]
	public private override int ExperimentPriority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private bool IsNecessaryValidCoordinateToRunFromPocket
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixRef")]
	public private ItemDef ItemDef
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	public private int PriorityInPocket
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public ItemInPocketInfo() { }

	public ItemInPocketInfo(ItemInPocketId itemInPocketId, int itemRef, bool isNecessaryValidCoordinateToRunFromPocket, bool canMoveToBoard, int priorityInPocket, List<IDirectorAction> actionsToRunFromPocket, int experimentPriority) { }

	public static ItemDef FixRef(MetaMemberDeserializationFailureParams failureParams) { }

	[CompilerGenerated]
	public List<IDirectorAction> get_ActionsToRunFromPocket() { }

	[CompilerGenerated]
	public bool get_CanMoveToBoard() { }

	[CompilerGenerated]
	public override ItemInPocketId get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	public bool get_IsNecessaryValidCoordinateToRunFromPocket() { }

	[CompilerGenerated]
	public ItemDef get_ItemDef() { }

	[CompilerGenerated]
	public int get_PriorityInPocket() { }

	[CompilerGenerated]
	private void set_ActionsToRunFromPocket(List<IDirectorAction> value) { }

	[CompilerGenerated]
	private void set_CanMoveToBoard(bool value) { }

	[CompilerGenerated]
	private void set_ConfigKey(ItemInPocketId value) { }

	[CompilerGenerated]
	private void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_IsNecessaryValidCoordinateToRunFromPocket(bool value) { }

	[CompilerGenerated]
	private void set_ItemDef(ItemDef value) { }

	[CompilerGenerated]
	private void set_PriorityInPocket(int value) { }

}

