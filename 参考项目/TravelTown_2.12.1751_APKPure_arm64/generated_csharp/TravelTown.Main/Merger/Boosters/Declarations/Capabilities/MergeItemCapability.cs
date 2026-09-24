using System;
using MergeEngine.Configuration.Capabilities;
using MergeEngine.Configuration.Definitions.WeakReferences.References;
using Merger.Boosters.Declarations.Enums;
using Newtonsoft.Json;

namespace Merger.Boosters.Declarations.Capabilities
{
	[Serializable]
	public class MergeItemCapability : CapabilityBase
	{
		[JsonProperty("mergeItemRef")]
		public MergeItemWeakReference MergeItemReference;

		[JsonIgnore]
		public MergeItemSpawnBehaviour SpawnBehaviour;

		[JsonProperty("spawnBehaviour")]
		public string SerializedSpawnBehaviour
		{
			set
			{
			}
		}
	}
}
