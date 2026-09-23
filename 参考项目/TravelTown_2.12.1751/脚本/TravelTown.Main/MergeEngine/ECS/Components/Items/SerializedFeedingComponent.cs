using System;
using System.Collections.Generic;
using Merger.Services.Backend.Sync.Data.Payloads.Board;

namespace MergeEngine.ECS.Components.Items
{
	[Serializable]
	public class SerializedFeedingComponent
	{
		public List<ItemPayloadBase> ConsumedItems;
	}
}
