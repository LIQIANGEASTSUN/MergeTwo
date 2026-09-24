using System;
using Newtonsoft.Json;

namespace MergeEngine.ECS.Systems
{
	[Serializable]
	public class ItemIdPayload
	{
		[JsonProperty("itemId")]
		public string ItemId;
	}
}
