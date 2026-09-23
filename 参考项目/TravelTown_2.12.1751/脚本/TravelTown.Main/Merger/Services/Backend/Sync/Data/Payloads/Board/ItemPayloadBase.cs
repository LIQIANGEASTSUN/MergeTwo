using System;
using System.Collections.Generic;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Components.Items.Producers;
using MergeEngine.ECS.Systems.Items;
using Merger.DynamicMergeItems;
using Newtonsoft.Json;

namespace Merger.Services.Backend.Sync.Data.Payloads.Board
{
	[Serializable]
	public class ItemPayloadBase
	{
		public string id;

		public string uuid;

		public string origin;

		public long createdTimestamp;

		public long mergedTimestamp;

		public long queueAddedTimestamp;

		public long expirationTimeStamp;

		public long timerDuration;

		public string reason;

		public long activationTimestamp;

		[JsonProperty(DefaultValueHandling = DefaultValueHandling.Ignore)]
		public SerializedLockedComponent locked;

		[JsonProperty(DefaultValueHandling = DefaultValueHandling.Ignore)]
		public SerializedExpendableComponent expandable;

		[JsonProperty(DefaultValueHandling = DefaultValueHandling.Ignore)]
		public SerializedItemSpawningComponent timeCycle;

		[JsonProperty(DefaultValueHandling = DefaultValueHandling.Ignore)]
		public SerializedTimeLockComponent timeLock;

		[JsonProperty(DefaultValueHandling = DefaultValueHandling.Ignore)]
		public SerializedChargableComponent chargeable;

		[JsonProperty(DefaultValueHandling = DefaultValueHandling.Ignore)]
		public DynamicMergeItemConfig dynamicItemConfig;

		[JsonProperty(DefaultValueHandling = DefaultValueHandling.Ignore)]
		public SerializedMergeItemBoosterComponent mergeItemBoosterComponent;

		[JsonProperty(DefaultValueHandling = DefaultValueHandling.Ignore)]
		public List<ItemPayloadBase> pot;

		[JsonProperty(DefaultValueHandling = DefaultValueHandling.Ignore)]
		public SerializedStackingComponent stacking;
	}
}
