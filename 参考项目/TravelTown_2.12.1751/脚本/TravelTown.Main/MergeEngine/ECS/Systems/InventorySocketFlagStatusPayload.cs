using System;
using System.Collections.Generic;
using Newtonsoft.Json;

namespace MergeEngine.ECS.Systems
{
	[Serializable]
	public class InventorySocketFlagStatusPayload
	{
		[JsonProperty("slots")]
		public List<InventorySocketFlagStatus> Slots;
	}
}
