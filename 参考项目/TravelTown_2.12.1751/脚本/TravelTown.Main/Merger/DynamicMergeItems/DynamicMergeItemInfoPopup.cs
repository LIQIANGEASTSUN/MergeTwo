using Newtonsoft.Json;
using Newtonsoft.Json.Linq;

namespace Merger.DynamicMergeItems
{
	public class DynamicMergeItemInfoPopup
	{
		[JsonProperty("type")]
		public string Type;

		[JsonProperty("data")]
		public JToken Data;

		[JsonProperty("analytics")]
		public ItemInfoPopupAnalyticsData Analytics;
	}
}
