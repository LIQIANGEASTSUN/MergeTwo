using System;
using Newtonsoft.Json;

namespace Merger.DynamicMergeItems
{
	[Serializable]
	public class DynamicMergeItemConfig
	{
		[JsonProperty("dynamicMergeItemId")]
		public string DynamicMergeItemId;

		[JsonProperty("produce")]
		public DynamicProduceCapability ProduceCapability;

		[JsonProperty("expend")]
		public DynamicExpendCapability ExpendCapability;

		[JsonProperty("infoPopup")]
		public DynamicMergeItemInfoPopup InfoPopup;
	}
}
