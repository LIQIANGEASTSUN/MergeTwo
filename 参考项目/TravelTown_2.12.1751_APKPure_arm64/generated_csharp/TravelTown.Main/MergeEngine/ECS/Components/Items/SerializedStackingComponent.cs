using System;
using Newtonsoft.Json;

namespace MergeEngine.ECS.Components.Items
{
	[Serializable]
	public class SerializedStackingComponent
	{
		[JsonProperty("usesAmount")]
		public int StackSize;
	}
}
