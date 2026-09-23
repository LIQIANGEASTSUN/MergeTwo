using System;
using Newtonsoft.Json;

namespace Merger.MergeBoard.Data
{
	[Serializable]
	public class SerializedMergeBoardItemPositionComponent
	{
		[JsonProperty("index")]
		public int Index;
	}
}
