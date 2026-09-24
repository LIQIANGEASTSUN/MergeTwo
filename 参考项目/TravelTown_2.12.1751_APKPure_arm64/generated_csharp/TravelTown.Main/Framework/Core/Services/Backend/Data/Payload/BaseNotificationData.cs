using Merger.Services.Backend.Sync.Data.Payloads.Board;
using Newtonsoft.Json;

namespace Framework.Core.Services.Backend.Data.Payload
{
	public class BaseNotificationData
	{
		[JsonIgnore]
		public string Action;

		[JsonIgnore]
		public string Destination;

		[JsonIgnore]
		public ExtraData ExtraData;

		[JsonProperty("id", NullValueHandling = NullValueHandling.Ignore)]
		public string ID;

		[JsonProperty("uuid", NullValueHandling = NullValueHandling.Ignore)]
		public string Uuid;

		[JsonProperty("createdTimestamp")]
		public long CreatedTimestamp;

		[JsonProperty("queueAddedTimestamp")]
		public long QueueAddedTimestamp;

		[JsonProperty("boosterData")]
		public BoosterData BoosterData;

		[JsonProperty("uuidInRewardQueue")]
		public string UUIDInRewardQueue;

		[JsonProperty("queueAddedLatestTimestamp")]
		public long QueueAddedLatestTimestamp;
	}
}
