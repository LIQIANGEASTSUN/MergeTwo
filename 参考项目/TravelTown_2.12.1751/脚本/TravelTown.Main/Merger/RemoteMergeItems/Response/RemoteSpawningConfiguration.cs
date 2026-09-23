using System;
using Newtonsoft.Json;

namespace Merger.RemoteMergeItems.Response
{
	[Serializable]
	public class RemoteSpawningConfiguration
	{
		[JsonProperty("newStacksMechanism")]
		public bool IsRemoteSpawning;
	}
}
