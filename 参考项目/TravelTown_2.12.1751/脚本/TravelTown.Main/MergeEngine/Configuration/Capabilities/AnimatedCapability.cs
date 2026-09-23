using System;
using Merger.RemoteMergeItems.Configuration;

namespace MergeEngine.Configuration.Capabilities
{
	[Serializable]
	public class AnimatedCapability : CapabilityBase
	{
		public RemoteAnimatedAsset AnimatedAsset { get; }

		public AnimatedCapability(RemoteAnimatedAsset remoteAnimatedAsset)
		{
		}
	}
}
