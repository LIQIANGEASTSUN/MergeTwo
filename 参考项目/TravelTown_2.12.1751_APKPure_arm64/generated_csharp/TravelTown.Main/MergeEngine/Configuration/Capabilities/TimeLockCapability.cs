using System;
using MergeEngine.Configuration.Definitions;
using Merger.RemoteSprite.JsonConverters;
using Newtonsoft.Json;

namespace MergeEngine.Configuration.Capabilities
{
	[Serializable]
	public class TimeLockCapability : CapabilityBase
	{
		public int LockTime;

		public TimeLockGroup LockGroup;

		[JsonConverter(typeof(AdminItemOriginJsonConverter))]
		public ItemOrigin LockOrigins;
	}
}
