using System;
using Merger.DynamicMergeItems;
using Newtonsoft.Json;

namespace Merger.Services.Backend.Sync.Data.Payloads.Board
{
	[Serializable]
	public class ItemQueue
	{
		public string id;

		[JsonProperty("uuid")]
		public string UUID;

		[JsonProperty(DefaultValueHandling = DefaultValueHandling.Ignore)]
		public ItemPayloadBase itemData;

		[JsonProperty("dynamicConfig", DefaultValueHandling = DefaultValueHandling.Ignore)]
		public DynamicMergeItemConfig DynamicMergeItemConfig;

		[JsonProperty("queueAddedLatestTimestamp", DefaultValueHandling = DefaultValueHandling.Ignore)]
		public long ItemAdditionTimestamp;

		public ItemQueue(string itemId, string uuid = null, ItemPayloadBase itemBaseData = null, DynamicMergeItemConfig dynamicMergeItemConfig = null, long addedTimestamp = 0L)
		{
		}
	}
}
