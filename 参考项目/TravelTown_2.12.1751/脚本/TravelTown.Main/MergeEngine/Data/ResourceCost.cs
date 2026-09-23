using System;
using MergeEngine.Model;
using Newtonsoft.Json;

namespace MergeEngine.Data
{
	[Serializable]
	public class ResourceCost
	{
		[JsonProperty("name")]
		public PlayerResourceEnum Resource;

		[JsonProperty("value")]
		public int Cost;
	}
}
