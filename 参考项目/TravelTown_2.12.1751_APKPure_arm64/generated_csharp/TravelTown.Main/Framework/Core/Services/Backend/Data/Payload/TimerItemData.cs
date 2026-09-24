using Newtonsoft.Json;

namespace Framework.Core.Services.Backend.Data.Payload
{
	public sealed class TimerItemData
	{
		[JsonProperty("timeLeft")]
		public long TimeLeft;

		[JsonProperty("isTimerActivated")]
		public bool IsTimerActivated;

		[JsonProperty("creationReason", NullValueHandling = NullValueHandling.Ignore)]
		public string CreationReason;

		[JsonProperty("triggerReason", NullValueHandling = NullValueHandling.Ignore)]
		public string TriggerReason;

		[JsonProperty("removeReason", NullValueHandling = NullValueHandling.Ignore)]
		public string RemoveReason;

		public bool ShouldIgnore { get; set; }
	}
}
