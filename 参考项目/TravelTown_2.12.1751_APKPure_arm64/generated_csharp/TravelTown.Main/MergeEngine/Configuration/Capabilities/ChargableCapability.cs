using System;
using Newtonsoft.Json;
using RemoteSprites.Scripts.Runtime;

namespace MergeEngine.Configuration.Capabilities
{
	[Serializable]
	public class ChargableCapability : CapabilityBase
	{
		[JsonProperty("StateSpritesAssets")]
		[NonSerialized]
		public string[] _stateSpritesPaths;

		[JsonIgnore]
		[NonSerialized]
		public RemoteSpriteLocation[] _stateSpritesLocations;

		public RemoteSpriteLocation[] GetStateSpriteAssets()
		{
			return null;
		}
	}
}
