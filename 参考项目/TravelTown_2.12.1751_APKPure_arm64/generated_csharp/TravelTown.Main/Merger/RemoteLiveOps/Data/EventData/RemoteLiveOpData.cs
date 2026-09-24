using System.Collections.Generic;
using DysonCore.DynamicJson.PolymorphicParser;
using Merger.DynamicWidgetSlots.Data;
using Newtonsoft.Json;

namespace Merger.RemoteLiveOps.Data.EventData
{
	public class RemoteLiveOpData : RemoteEventData
	{
		[JsonProperty("dynamicWidgetPlacementsHolder")]
		public Dictionary<DynamicWidgetSlotHostType, int> DynamicWidgetSlotKeys;

		public bool HasTheme => false;

		[JsonProperty("eventId")]
		public string eventId { get; set; }

		[JsonProperty("eventType")]
		[PolymorphicProperty]
		public virtual RemoteEventType Type { get; }

		[JsonProperty("configurationName")]
		public string ConfigurationName { get; set; }

		[JsonProperty("theme")]
		public RemoteLiveOpEventTheme Theme { get; set; }

		[JsonProperty("forceEnrollment")]
		public bool ForceEnrollment { get; set; }

		[JsonProperty("analytics")]
		public LiveOpsEventAnalyticsData Analytics { get; set; }

		public RemoteLiveOpData()
		{
		}

		public RemoteLiveOpData(RemoteFeatureStatus status, long startDate, long endDate)
		{
		}
	}
}
