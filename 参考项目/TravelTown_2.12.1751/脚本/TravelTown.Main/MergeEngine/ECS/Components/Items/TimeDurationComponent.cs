using MergeEngine.Configuration.Capabilities;

namespace MergeEngine.ECS.Components.Items
{
	public class TimeDurationComponent : ComponentBase<TimeDurationCapability>, ITimeDurationComponent
	{
		public double Timeleft { get; set; }

		public bool Active { get; set; }

		public bool IsActivating { get; set; }

		public double Duration { get; set; }

		public bool IgnoreBoardSecondsForThisTick { get; set; }

		public TimeDurationComponent(TimeDurationCapability capability, Entity entity)
			: base((TimeDurationCapability)default(_00210), (Entity)null)
		{
		}
	}
}
