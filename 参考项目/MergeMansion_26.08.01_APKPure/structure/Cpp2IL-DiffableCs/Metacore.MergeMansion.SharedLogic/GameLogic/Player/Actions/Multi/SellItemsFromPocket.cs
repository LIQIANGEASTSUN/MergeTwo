namespace GameLogic.Player.Actions.Multi;

[ModelAction(10973)]
public class SellItemsFromPocket : PlayerAction
{
	[CompilerGenerated]
	private MergeBoardId <MergeBoardId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private List<IItemDefinition> <ItemDefinitions>k__BackingField; //Field offset: 0x18

	private List<IItemDefinition> ItemDefinitions
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

	private SellItemsFromPocket() { }

	public SellItemsFromPocket(MergeBoardId boardId, List<IItemDefinition> itemDefinitions) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

	[CompilerGenerated]
	private List<IItemDefinition> get_ItemDefinitions() { }

	[CompilerGenerated]
	private MergeBoardId get_MergeBoardId() { }

	[CompilerGenerated]
	private void set_ItemDefinitions(List<IItemDefinition> value) { }

	[CompilerGenerated]
	private void set_MergeBoardId(MergeBoardId value) { }

}

