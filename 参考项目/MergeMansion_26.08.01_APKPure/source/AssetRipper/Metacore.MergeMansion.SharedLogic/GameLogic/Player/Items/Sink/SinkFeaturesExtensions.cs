using GameLogic.Config;
using Metaplay.Core;

namespace GameLogic.Player.Items.Sink
{
	public static class SinkFeaturesExtensions
	{
		public static ISinkState Combine(this ISinkFeatures sinkFeatures, IMergeMansionGameConfig config, ISinkState sourceState, ISinkState targetState, MetaTime timestamp)
		{
			return null;
		}

		public static ISinkState FromExisting(this ISinkFeatures sinkFeatures)
		{
			return null;
		}
	}
}
