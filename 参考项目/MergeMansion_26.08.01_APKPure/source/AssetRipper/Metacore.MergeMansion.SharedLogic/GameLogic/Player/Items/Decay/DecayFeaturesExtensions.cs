using Metaplay.Core;

namespace GameLogic.Player.Items.Decay
{
	public static class DecayFeaturesExtensions
	{
		public static DecayState Combine(this IDecayFeatures decayFeatures, DecayState existingState, DecayState newState, MetaTime timestamp)
		{
			return null;
		}

		public static DecayState FromExisting(this IDecayFeatures decayFeatures, DecayState sourceItem, MetaTime timestamp)
		{
			return null;
		}
	}
}
