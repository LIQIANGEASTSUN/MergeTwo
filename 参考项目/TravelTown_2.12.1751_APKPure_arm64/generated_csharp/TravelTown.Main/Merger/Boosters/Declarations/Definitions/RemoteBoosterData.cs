using System;
using System.Collections.Generic;
using Merger.Boosters.Declarations.Definitions.Abstractions;
using Merger.Boosters.Declarations.Enums;
using Merger.RemoteLiveOps.Data.EventData;
using Newtonsoft.Json;

namespace Merger.Boosters.Declarations.Definitions
{
	[Serializable]
	public class RemoteBoosterData : RemoteEventData
	{
		[JsonProperty("uniqueId")]
		public string UUID { get; set; }

		[JsonProperty("type")]
		public BoosterType Type { get; set; }

		[JsonProperty("id")]
		public string Id { get; set; }

		[JsonProperty("activationExpirationDate")]
		public long ActivationExpirationDate { get; set; }

		[JsonProperty("createdTimestamp")]
		public long CreatedTimestamp { get; set; }

		[JsonProperty("durationInMS")]
		public long DurationInMS { get; set; }

		[JsonProperty("eventId")]
		public string EventId { get; set; }

		[JsonProperty("progress")]
		public BoosterProgressBase Progress { get; set; }

		[JsonProperty("themeData")]
		public RemoteBoosterThemeData ThemeData { get; set; }

		[JsonProperty("creationAnalytics")]
		public Dictionary<string, object> CreationAnalytics { get; set; }

		[JsonIgnore]
		public double DurationInSeconds => 0.0;
	}
}
