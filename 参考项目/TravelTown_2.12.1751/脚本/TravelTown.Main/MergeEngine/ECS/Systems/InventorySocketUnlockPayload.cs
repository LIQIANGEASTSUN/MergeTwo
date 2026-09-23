using System;
using Newtonsoft.Json;

namespace MergeEngine.ECS.Systems
{
	[Serializable]
	public class InventorySocketUnlockPayload
	{
		[JsonProperty("slotId")]
		public string SlotId;
	}
}
