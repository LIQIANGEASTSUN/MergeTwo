using System;
using Newtonsoft.Json;

namespace Merger.DynamicMergeItems
{
	[Serializable]
	public class DynamicExpendCapability
	{
		[JsonProperty("uses")]
		public int Uses;
	}
}
