using GameLogic.Config.Types;

namespace GameLogic.Player.Items.TimeContainer
{
	public static class TimeContainerStateExtensions
	{
		public static readonly ITimeContainerState empty;

		public static ITimeContainerState Combine(this ITimeContainerState original, ITimeContainerState merged, ITimeContainerFeatures features)
		{
			return null;
		}

		public static ITimeContainerState Create(MetacoreDuration remaining)
		{
			return null;
		}
	}
}
