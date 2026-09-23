using Merger.ProducerExcitement.Compatibility.Payloads;
using Newtonsoft.Json;

namespace Merger.ItemGenerator.Backend.Responses.ProducerExcitement
{
	public class ProducerExcitementItemResponse
	{
		[JsonProperty("itemId")]
		public string ItemId;

		[JsonProperty("relatedOrderId")]
		public string RelatedOrderId;

		[JsonProperty("analyticsData")]
		public ProducerExcitementAnalyticsDataPayload AnalyticsData;
	}
}
