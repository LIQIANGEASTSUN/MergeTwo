namespace GameLogic.Player.Actions.Multi;

[ModelAction(10914)]
public class TryMasterFunctionsMoveItemFromInventoryToBoard : PlayerAction
{
	[CompilerGenerated]
	private MergeBoardId <MergeBoardId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private int <InventoryIndex>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private int <ItemIndex>k__BackingField; //Field offset: 0x1C

	private int InventoryIndex
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private int ItemIndex
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private MergeBoardId MergeBoardId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private TryMasterFunctionsMoveItemFromInventoryToBoard() { }

	public TryMasterFunctionsMoveItemFromInventoryToBoard(MergeBoardId boardId, int inventoryIndex, int itemIndex) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

	[CompilerGenerated]
	private int get_InventoryIndex() { }

	[CompilerGenerated]
	private int get_ItemIndex() { }

	[CompilerGenerated]
	private MergeBoardId get_MergeBoardId() { }

	[CompilerGenerated]
	private void set_InventoryIndex(int value) { }

	[CompilerGenerated]
	private void set_ItemIndex(int value) { }

	[CompilerGenerated]
	private void set_MergeBoardId(MergeBoardId value) { }

}

