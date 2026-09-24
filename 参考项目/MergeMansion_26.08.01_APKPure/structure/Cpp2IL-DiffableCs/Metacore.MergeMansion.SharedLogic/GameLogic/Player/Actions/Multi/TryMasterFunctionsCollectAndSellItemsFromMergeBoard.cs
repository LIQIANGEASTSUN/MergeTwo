namespace GameLogic.Player.Actions.Multi;

[ModelAction(10971)]
public class TryMasterFunctionsCollectAndSellItemsFromMergeBoard : PlayerAction
{
	[CompilerGenerated]
	private MergeBoardId <BoardId>k__BackingField; //Field offset: 0x10

	private MergeBoardId BoardId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public TryMasterFunctionsCollectAndSellItemsFromMergeBoard() { }

	public TryMasterFunctionsCollectAndSellItemsFromMergeBoard(MergeBoardId boardId) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

	[CompilerGenerated]
	private MergeBoardId get_BoardId() { }

	[CompilerGenerated]
	private void set_BoardId(MergeBoardId value) { }

}

