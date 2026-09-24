using Framework.Core.Services.Backend.Data.Payload;

namespace MergeEngine.ECS.Components.Items
{
	public sealed class TimeLimitedActivationComponent : ComponentBase, ITimeLimitedActivationComponent
	{
		public long TimerDuration { get; set; }

		public long ExpirationTimeStamp { get; set; }

		public long ActivationTimeStamp { get; set; }

		public bool HasExpired { get; set; }

		public bool WasCreatedInPreviousSession { get; set; }

		public ExtraData ExtraData { get; set; }

		public TimeLimitedAnalyticsData AnalyticsData { get; set; }

		public bool ShouldIgnoreSendingData { get; set; }

		public bool NeedProcessCombiningProducer { get; set; }

		public bool SendForTheFirstTime { get; set; }

		public TimeLimitedActivationComponent(Entity entity)
			: base(null)
		{
		}
	}
}
