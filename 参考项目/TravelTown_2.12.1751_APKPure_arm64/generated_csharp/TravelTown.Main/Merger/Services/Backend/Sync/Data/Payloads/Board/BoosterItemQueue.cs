using Merger.DynamicMergeItems;
using Newtonsoft.Json;

namespace Merger.Services.Backend.Sync.Data.Payloads.Board
{
	public class BoosterItemQueue : ItemQueue
	{
		[JsonProperty("boosterData", DefaultValueHandling = DefaultValueHandling.Ignore)]
		public BoosterData BoosterData { get; }

		public BoosterItemQueue(string itemId, BoosterData boosterData)
			: base(null, null, null, null, 0L)
		{
		}

		public BoosterItemQueue(string itemId, string uuid = null, ItemPayloadBase itemBaseData = null, DynamicMergeItemConfig dynamicMergeItemConfig = null)
			: base(null, null, null, null, 0L)
		{
		}
	}
}
