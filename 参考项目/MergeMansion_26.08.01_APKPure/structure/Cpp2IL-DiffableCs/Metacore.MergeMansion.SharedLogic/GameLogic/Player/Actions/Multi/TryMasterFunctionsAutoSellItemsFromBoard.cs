namespace GameLogic.Player.Actions.Multi;

[ModelAction(10974)]
public class TryMasterFunctionsAutoSellItemsFromBoard : PlayerAction
{
	[CompilerGenerated]
	private MergeBoardId <MergeBoardId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private List<Coordinate> <SellPositions>k__BackingField; //Field offset: 0x18

	private MergeBoardId MergeBoardId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<Coordinate> SellPositions
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private TryMasterFunctionsAutoSellItemsFromBoard() { }

	public TryMasterFunctionsAutoSellItemsFromBoard(MergeBoardId boardId, List<Coordinate> sellCoordinates) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

	[CompilerGenerated]
	private MergeBoardId get_MergeBoardId() { }

	[CompilerGenerated]
	private List<Coordinate> get_SellPositions() { }

	[CompilerGenerated]
	private void set_MergeBoardId(MergeBoardId value) { }

	[CompilerGenerated]
	private void set_SellPositions(List<Coordinate> value) { }

}

