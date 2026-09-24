using System.Collections.Generic;
using DysonCore.DynamicJson.PolymorphicParser;
using MergeEngine.ECS.Systems.Triggers;
using Merger.RemoteLiveOps.Data;
using Merger.RemoteLiveOps.Data.EventData;
using Merger.RemotePromotions.Responses;
using Newtonsoft.Json;

namespace Merger.TimeLimitedItems.Data
{
	public class TimeLimitedItemsEventData : RemoteLiveOpData
	{
		[JsonProperty("displayTriggers")]
		public Dictionary<TriggerType, DisplayTriggerResponse> DisplayTriggers;

		[JsonProperty("graphIds")]
		public HashSet<string> TimeLimitedItemGraphIds;

		[PolymorphicProperty]
		public override RemoteEventType Type => default(RemoteEventType);

		public bool IsValid()
		{
			return false;
		}
	}
}
