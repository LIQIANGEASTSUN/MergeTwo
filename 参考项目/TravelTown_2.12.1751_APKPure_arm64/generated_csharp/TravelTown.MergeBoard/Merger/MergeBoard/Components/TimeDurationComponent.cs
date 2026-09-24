using ContextualizedECS;
using MergeEngine.ECS.Components.Items;

namespace Merger.MergeBoard.Components
{
	public struct TimeDurationComponent : IComponent, ITimeDurationComponent
	{
		public double Timeleft { get; set; }

		public bool Active { get; set; }

		public double Duration { get; set; }

		public bool IgnoreBoardSecondsForThisTick { get; set; }
	}
}
