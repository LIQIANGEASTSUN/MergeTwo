using System;
using Newtonsoft.Json;

namespace Merger.RemoteMergeItems.Configuration
{
	[Serializable]
	public class RemoteAnimatedAsset
	{
		[JsonProperty("android")]
		public string AndroidPath;

		[JsonProperty("ios")]
		public string iOSPath;
	}
}
