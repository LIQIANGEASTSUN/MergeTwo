using Newtonsoft.Json;

namespace Framework.Core.Services.Backend.Remote.Payloads.BoardState
{
	public class BoardResourceRefill
	{
		[JsonProperty("type")]
		public string Type;

		[JsonProperty("date")]
		public long TimestampInMilliSeconds;

		[JsonProperty("interval")]
		public int IntervalInMilliSeconds;

		[JsonProperty("threshold")]
		public int Threshold;

		[JsonProperty("step")]
		public int Step;
	}
}
