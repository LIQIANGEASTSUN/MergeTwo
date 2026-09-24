namespace GameLogic.Player.Actions.Multi;

[ModelAction(10910)]
public class TryMasterFunctionsUndoSellItem : PlayerAction
{
	[CompilerGenerated]
	private MergeBoardId <MergeBoardId>k__BackingField; //Field offset: 0x10

	private MergeBoardId MergeBoardId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private TryMasterFunctionsUndoSellItem() { }

	public TryMasterFunctionsUndoSellItem(MergeBoardId boardId) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

	[CompilerGenerated]
	private MergeBoardId get_MergeBoardId() { }

	[CompilerGenerated]
	private void set_MergeBoardId(MergeBoardId value) { }

}

