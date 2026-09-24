namespace GameLogic.Player.Items.Bubble;

public class PlayerBasedBubbleSpawner : IBubbleSpawner
{
	[CompilerGenerated]
	private readonly IPlayer <Player>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private readonly MergeBoard <Board>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private readonly IBubbleLogic <Logic>k__BackingField; //Field offset: 0x20

	private MergeBoard Board
	{
		[CompilerGenerated]
		private get { } //Length: 8
	}

	private IBubbleLogic Logic
	{
		[CompilerGenerated]
		private get { } //Length: 8
	}

	private IPlayer Player
	{
		[CompilerGenerated]
		private get { } //Length: 8
	}

	public PlayerBasedBubbleSpawner(IPlayer player, MergeBoard board, IBubbleLogic bubbleLogic) { }

	[CompilerGenerated]
	private MergeBoard get_Board() { }

	[CompilerGenerated]
	private IBubbleLogic get_Logic() { }

	[CompilerGenerated]
	private IPlayer get_Player() { }

	public override IItemDefinition ShouldSpawn(IItemDefinition itemDefinition, MetacoreTime currentTime) { }

}

