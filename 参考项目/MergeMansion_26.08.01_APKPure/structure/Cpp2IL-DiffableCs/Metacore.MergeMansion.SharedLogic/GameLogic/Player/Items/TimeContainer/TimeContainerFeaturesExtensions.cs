namespace GameLogic.Player.Items.TimeContainer;

[Extension]
public static class TimeContainerFeaturesExtensions
{

	[Extension]
	public static ITimeContainerState Combine(ITimeContainerFeatures timeFeatures, ITimeContainerState sourceState, ITimeContainerState targetState, MetacoreTime timestamp) { }

	[Extension]
	public static ITimeContainerState FromExisting(ITimeContainerFeatures timeContainerFeatures) { }

	private static bool IsTimeContainerStateOrNull(ITimeContainerState state) { }

}

