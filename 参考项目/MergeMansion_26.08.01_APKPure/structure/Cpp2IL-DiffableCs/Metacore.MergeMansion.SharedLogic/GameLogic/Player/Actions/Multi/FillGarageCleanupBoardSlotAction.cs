namespace GameLogic.Player.Actions.Multi;

[ModelAction(1302)]
public class FillGarageCleanupBoardSlotAction : PlayerAction
{
	[CompilerGenerated]
	private GarageCleanupEventId <EventId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private int <Level>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private int <RowIndex>k__BackingField; //Field offset: 0x1C
	[CompilerGenerated]
	private int <SlotIndex>k__BackingField; //Field offset: 0x20

	public private GarageCleanupEventId EventId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public private int Level
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public private int RowIndex
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public private int SlotIndex
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public FillGarageCleanupBoardSlotAction() { }

	public FillGarageCleanupBoardSlotAction(GarageCleanupEventId eventId, int level, int rowIndex, int slotIndex) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

	[CompilerGenerated]
	public GarageCleanupEventId get_EventId() { }

	[CompilerGenerated]
	public int get_Level() { }

	[CompilerGenerated]
	public int get_RowIndex() { }

	[CompilerGenerated]
	public int get_SlotIndex() { }

	[CompilerGenerated]
	private void set_EventId(GarageCleanupEventId value) { }

	[CompilerGenerated]
	private void set_Level(int value) { }

	[CompilerGenerated]
	private void set_RowIndex(int value) { }

	[CompilerGenerated]
	private void set_SlotIndex(int value) { }

	public static void TryClaimPatterns(List<GarageCleanupPatternInfo> patterns, PlayerModel player, GarageCleanupEventModel eventModel, ref List<GarageCleanupPatternInfo>& claimedPatterns) { }

}

