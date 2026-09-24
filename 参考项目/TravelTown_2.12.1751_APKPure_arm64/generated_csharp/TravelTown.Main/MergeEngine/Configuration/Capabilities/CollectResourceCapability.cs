using System;
using MergeEngine.Configuration.Definitions;
using Merger.Data.Assets;
using Newtonsoft.Json;

namespace MergeEngine.Configuration.Capabilities
{
	[Serializable]
	public class CollectResourceCapability : CapabilityBase
	{
		[JsonProperty("collectableType")]
		public CollectableType CollectableType;

		[JsonProperty("rewards")]
		public Reward Reward;

		[JsonProperty("clientAssets")]
		public ClientAsset[] Assets;

		[JsonProperty("afterCollectAnimation")]
		[NonSerialized]
		public string _afterCollectAnimation;

		[JsonIgnore]
		public AfterCollectAnimation AfterCollectAnimation => default(AfterCollectAnimation);
	}
}
