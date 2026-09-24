namespace GameLogic.Player.Items.Bubble;

[MetaSerializableDerived(1)]
public class BubbleProgressionEventProgressBonus : IBubbleBonus
{
	[CompilerGenerated]
	private ProgressionEventId <EventId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private int <Progress>k__BackingField; //Field offset: 0x18

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private ProgressionEventId EventId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private int Progress
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public BubbleProgressionEventProgressBonus() { }

	public BubbleProgressionEventProgressBonus(ProgressionEventId eventId, int progress) { }

	[CompilerGenerated]
	public ProgressionEventId get_EventId() { }

	[CompilerGenerated]
	public int get_Progress() { }

	[CompilerGenerated]
	private void set_EventId(ProgressionEventId value) { }

	[CompilerGenerated]
	private void set_Progress(int value) { }

}

