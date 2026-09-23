using ContextualizedECS;
using MergeEngine.ECS.Components.Items;

namespace Merger.MergeBoard.Components
{
	public struct TimeLimitedActivationComponent : IComponent, ITimeLimitedActivationComponent
	{
		public long TimerDuration { get; set; }

		public long ExpirationTimeStamp { get; set; }

		public long ActivationTimeStamp { get; set; }

		public bool HasExpired { get; set; }
	}
}
