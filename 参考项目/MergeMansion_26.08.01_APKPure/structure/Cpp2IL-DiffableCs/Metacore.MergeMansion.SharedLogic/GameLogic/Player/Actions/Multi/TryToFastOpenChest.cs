namespace GameLogic.Player.Actions.Multi;

[ModelAction(10907)]
public class TryToFastOpenChest : PlayerAction
{
	[CompilerGenerated]
	private MergeBoardId <MergeBoardId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private Coordinate <ChestPosition>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private List<CurrencyUsageResult> <ReturnList>k__BackingField; //Field offset: 0x20

	private Coordinate ChestPosition
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

	[IgnoreDataMember]
	private List<CurrencyUsageResult> ReturnList
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private TryToFastOpenChest() { }

	public TryToFastOpenChest(MergeBoardId boardId, Coordinate chestCoordinate, List<CurrencyUsageResult> returnList) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

	[CompilerGenerated]
	private Coordinate get_ChestPosition() { }

	[CompilerGenerated]
	private MergeBoardId get_MergeBoardId() { }

	[CompilerGenerated]
	private List<CurrencyUsageResult> get_ReturnList() { }

	[CompilerGenerated]
	private void set_ChestPosition(Coordinate value) { }

	[CompilerGenerated]
	private void set_MergeBoardId(MergeBoardId value) { }

	[CompilerGenerated]
	private void set_ReturnList(List<CurrencyUsageResult> value) { }

}

