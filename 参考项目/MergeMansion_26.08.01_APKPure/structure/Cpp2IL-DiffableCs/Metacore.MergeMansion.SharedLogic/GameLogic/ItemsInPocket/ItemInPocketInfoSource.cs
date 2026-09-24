namespace GameLogic.ItemsInPocket;

public class ItemInPocketInfoSource : IConfigItemSource<ItemInPocketInfo, ItemInPocketId>, IGameConfigSourceItem<ItemInPocketId, ItemInPocketInfo>, IHasGameConfigKey<ItemInPocketId>
{
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private ItemInPocketId <ConfigKey>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private string <Item>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private bool <IsNecessaryValidCoordinateToRunFromPocket>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private bool <CanMoveToBoard>k__BackingField; //Field offset: 0x29
	[CompilerGenerated]
	private int <PriorityInPocket>k__BackingField; //Field offset: 0x2C
	[CompilerGenerated]
	private List<String> <ActionsToRunFromPocket>k__BackingField; //Field offset: 0x30

	private List<String> ActionsToRunFromPocket
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private bool CanMoveToBoard
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public private override ItemInPocketId ConfigKey
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override int ExperimentPriority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	private bool IsNecessaryValidCoordinateToRunFromPocket
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string Item
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private int PriorityInPocket
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public ItemInPocketInfoSource() { }

	[CompilerGenerated]
	private List<String> get_ActionsToRunFromPocket() { }

	[CompilerGenerated]
	private bool get_CanMoveToBoard() { }

	[CompilerGenerated]
	public override ItemInPocketId get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	private bool get_IsNecessaryValidCoordinateToRunFromPocket() { }

	[CompilerGenerated]
	private string get_Item() { }

	[CompilerGenerated]
	private int get_PriorityInPocket() { }

	[CompilerGenerated]
	private void set_ActionsToRunFromPocket(List<String> value) { }

	[CompilerGenerated]
	private void set_CanMoveToBoard(bool value) { }

	[CompilerGenerated]
	private void set_ConfigKey(ItemInPocketId value) { }

	[CompilerGenerated]
	public void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_IsNecessaryValidCoordinateToRunFromPocket(bool value) { }

	[CompilerGenerated]
	private void set_Item(string value) { }

	[CompilerGenerated]
	private void set_PriorityInPocket(int value) { }

	public override ItemInPocketInfo ToConfigData(GameConfigBuildLog buildLog) { }

}

