using Merger.Data.Assets;
using Merger.Meteor.Backend.Responses;
using Newtonsoft.Json;

namespace Merger.ItemGenerator.Backend.Responses.Meteor
{
	public class MeteorStateResponse
	{
		[JsonProperty("id")]
		public string Id;

		[JsonProperty("itemId")]
		public string ItemUniqueId;

		[JsonProperty("status")]
		public MeteorStatus Status;

		[JsonProperty("orderId")]
		public string OrderId;

		[JsonProperty("claimingEndDate")]
		public long ClaimingEndDate;

		[JsonProperty("durationInSeconds")]
		public int DurationInSeconds;

		[JsonProperty("relevantChains")]
		public string[] RelevantChains;

		[JsonProperty("index")]
		public int Index;

		[JsonProperty("cycleId")]
		public string CycleId;

		[JsonProperty("mergeItemsLeft")]
		public int? MergeItemsLeft;

		[JsonProperty("assets")]
		public ClientAsset[] Assets;

		[JsonProperty("clientConditions")]
		public MeteorClientCondition[] ClientConditions;
	}
}
