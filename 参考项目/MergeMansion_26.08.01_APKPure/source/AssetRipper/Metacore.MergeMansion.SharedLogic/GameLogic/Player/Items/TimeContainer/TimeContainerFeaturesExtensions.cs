using GameLogic.Config.Types;

namespace GameLogic.Player.Items.TimeContainer
{
	public static class TimeContainerFeaturesExtensions
	{
		public static ITimeContainerState Combine(this ITimeContainerFeatures timeFeatures, ITimeContainerState sourceState, ITimeContainerState targetState, MetacoreTime timestamp)
		{
			return null;
		}

		public static bool IsTimeContainerStateOrNull(ITimeContainerState state)
		{
			return false;
		}

		public static ITimeContainerState FromExisting(this ITimeContainerFeatures timeContainerFeatures)
		{
			return null;
		}
	}
}
