namespace GameLogic.Player.Actions.Multi;

[ModelAction(10920)]
public class TryToPurchaseBubble : PlayerAction
{
	[CompilerGenerated]
	private MergeBoardId <MergeBoardId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private Coordinate <BubblePosition>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private ICollection<MergeBoardAct> <ProducedActs>k__BackingField; //Field offset: 0x20

	private Coordinate BubblePosition
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
	private ICollection<MergeBoardAct> ProducedActs
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private TryToPurchaseBubble() { }

	public TryToPurchaseBubble(MergeBoardId boardId, Coordinate bubblePosition, ICollection<MergeBoardAct> producedActs) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

	[CompilerGenerated]
	private Coordinate get_BubblePosition() { }

	[CompilerGenerated]
	private MergeBoardId get_MergeBoardId() { }

	[CompilerGenerated]
	private ICollection<MergeBoardAct> get_ProducedActs() { }

	private static void GrantBubbleAuxEnergyBonus(BubbleAuxEnergyBonus auxEnergyBonus, PlayerModel player, MergeBoardId mergeBoardId, int itemInBubble) { }

	private static void GrantBubbleBonus(IBubbleBonus bubbleBonus, PlayerModel player, MergeBoardId mergeBoardId, int itemInBubble) { }

	private static void GrantBubbleProgressionEventProgressBonus(BubbleProgressionEventProgressBonus progressionEventProgressBonus, PlayerModel player) { }

	[CompilerGenerated]
	private void set_BubblePosition(Coordinate value) { }

	[CompilerGenerated]
	private void set_MergeBoardId(MergeBoardId value) { }

	[CompilerGenerated]
	private void set_ProducedActs(ICollection<MergeBoardAct> value) { }

}

