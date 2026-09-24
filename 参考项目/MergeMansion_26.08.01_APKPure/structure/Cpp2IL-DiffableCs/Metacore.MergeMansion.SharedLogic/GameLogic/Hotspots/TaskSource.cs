namespace GameLogic.Hotspots;

[IsReadOnly]
public struct TaskSource
{
	[CompilerGenerated]
	private readonly OriginScreen <OriginScreen>k__BackingField; //Field offset: 0x0
	[CompilerGenerated]
	private readonly Option<Int32> <TaskCardPosition>k__BackingField; //Field offset: 0x4

	public OriginScreen OriginScreen
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public Option<Int32> TaskCardPosition
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public Option<Int32> TaskCardPositionForAnalytics
	{
		 get { } //Length: 240
	}

	public TaskSource(OriginScreen originScreen, Option<Int32> taskCardPosition = null) { }

	[CompilerGenerated]
	public OriginScreen get_OriginScreen() { }

	[CompilerGenerated]
	public Option<Int32> get_TaskCardPosition() { }

	public Option<Int32> get_TaskCardPositionForAnalytics() { }

}

