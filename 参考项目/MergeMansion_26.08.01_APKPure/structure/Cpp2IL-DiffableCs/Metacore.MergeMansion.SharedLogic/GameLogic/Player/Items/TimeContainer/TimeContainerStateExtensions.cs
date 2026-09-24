namespace GameLogic.Player.Items.TimeContainer;

[Extension]
public static class TimeContainerStateExtensions
{
	private static readonly ITimeContainerState empty; //Field offset: 0x0

	private static TimeContainerStateExtensions() { }

	[Extension]
	public static ITimeContainerState Combine(ITimeContainerState original, ITimeContainerState merged, ITimeContainerFeatures features) { }

	private static ITimeContainerState Create(MetacoreDuration remaining) { }

}

