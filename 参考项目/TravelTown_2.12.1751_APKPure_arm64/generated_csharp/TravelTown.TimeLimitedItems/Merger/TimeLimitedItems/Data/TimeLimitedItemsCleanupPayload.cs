using System;
using Framework.Core.Services.Backend.Data.Payload;
using Newtonsoft.Json;

namespace Merger.TimeLimitedItems.Data
{
	[Serializable]
	public class TimeLimitedItemsCleanupPayload
	{
		[JsonProperty("eventId")]
		public string EventId { get; }

		[JsonProperty("boardOperations", NullValueHandling = NullValueHandling.Ignore)]
		public OperationNotificationData[] BoardOperations { get; }

		public TimeLimitedItemsCleanupPayload(string eventId, OperationNotificationData[] boardOperations)
		{
		}
	}
}
