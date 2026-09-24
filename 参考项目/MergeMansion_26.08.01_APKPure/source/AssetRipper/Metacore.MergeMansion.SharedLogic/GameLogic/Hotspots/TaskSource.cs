using Metacore.MergeMansion.Common.Options;

namespace GameLogic.Hotspots
{
	public readonly struct TaskSource
	{
		public OriginScreen OriginScreen { get; }

		public Option<int> TaskCardPosition { get; }

		public Option<int> TaskCardPositionForAnalytics => default(Option<int>);

		public TaskSource(OriginScreen originScreen, Option<int> taskCardPosition = default(Option<int>))
		{
			OriginScreen = default(OriginScreen);
			TaskCardPosition = default(Option<int>);
		}
	}
}
