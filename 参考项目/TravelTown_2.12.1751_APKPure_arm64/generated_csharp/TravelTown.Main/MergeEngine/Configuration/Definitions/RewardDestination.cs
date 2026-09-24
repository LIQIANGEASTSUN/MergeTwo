using System;
using Newtonsoft.Json;

namespace MergeEngine.Configuration.Definitions
{
	[Serializable]
	public class RewardDestination
	{
		[JsonProperty("EventId")]
		public string EventId;

		[JsonProperty("type")]
		public string typeString
		{
			set
			{
			}
		}

		public RewardDestinationType DestinationType { get; set; }
	}
}
