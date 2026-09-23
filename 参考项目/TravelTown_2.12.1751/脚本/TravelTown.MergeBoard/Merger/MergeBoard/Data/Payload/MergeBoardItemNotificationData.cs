using System.Collections.Generic;
using Framework.Core.Services.Backend.Data.Payload;
using Merger.DynamicMergeItems;
using Merger.Services.Backend.Sync.Data.Payloads.Board;
using Newtonsoft.Json;

namespace Merger.MergeBoard.Data.Payload
{
	public class MergeBoardItemNotificationData : BaseNotificationData
	{
		[JsonProperty("origin", NullValueHandling = NullValueHandling.Ignore)]
		public string Origin;

		[JsonProperty("mergedTimestamp", DefaultValueHandling = DefaultValueHandling.Ignore)]
		public long MergedTimestamp;

		[JsonProperty("expirationTimestamp", DefaultValueHandling = DefaultValueHandling.Ignore)]
		public long ExpirationTimestamp;

		[JsonProperty("activationTimestamp", DefaultValueHandling = DefaultValueHandling.Ignore)]
		public long ActivationTimestamp;

		[JsonProperty("timerDuration", DefaultValueHandling = DefaultValueHandling.Ignore)]
		public long TimerDuration;

		[JsonProperty("reason", DefaultValueHandling = DefaultValueHandling.Ignore)]
		public string Reason;

		[JsonProperty("locked", NullValueHandling = NullValueHandling.Ignore)]
		public LockedNotificationData LockedNotificationData;

		[JsonProperty("position", NullValueHandling = NullValueHandling.Ignore)]
		public MergeBoardItemPositionNotificationData PositionNotificationData;

		[JsonProperty("collection", NullValueHandling = NullValueHandling.Ignore)]
		public CollectionNotificationData CollectionNotificationData;

		[JsonProperty("expandable", NullValueHandling = NullValueHandling.Ignore)]
		public ExpandableNotificationData ExpandableNotificationData;

		[JsonProperty("chargeable", NullValueHandling = NullValueHandling.Ignore)]
		public ChargeableComponentNotificationData ChargeableComponentNotificationData;

		[JsonProperty("timeLock", NullValueHandling = NullValueHandling.Ignore)]
		public TimeLockNotificationData TimeLockNotificationData;

		[JsonProperty("timeCycle", NullValueHandling = NullValueHandling.Ignore)]
		public TimeCycleNotificationData TimeCycleNotificationData;

		[JsonProperty("dynamicItemConfig", NullValueHandling = NullValueHandling.Ignore)]
		public DynamicMergeItemConfig DynamicItemConfig;

		[JsonProperty("pot", NullValueHandling = NullValueHandling.Ignore)]
		public List<ItemPayloadBase> FeedingData;
	}
}
