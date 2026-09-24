using MergeEngine.ECS.Components.Items;

namespace MergeEngine.ECS.Components
{
	public class TimeComponent : ComponentBase
	{
		public double DeltaTimeToProcess;

		public bool TickProcessed;

		public double TimeMultiplier { get; set; }

		public TimeComponent(Entity entity)
			: base(null)
		{
		}
	}
}
