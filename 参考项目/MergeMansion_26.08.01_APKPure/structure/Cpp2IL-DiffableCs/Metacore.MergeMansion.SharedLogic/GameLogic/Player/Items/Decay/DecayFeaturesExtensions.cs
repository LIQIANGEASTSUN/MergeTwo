namespace GameLogic.Player.Items.Decay;

[Extension]
public static class DecayFeaturesExtensions
{

	[Extension]
	public static DecayState Combine(IDecayFeatures decayFeatures, DecayState existingState, DecayState newState, MetaTime timestamp) { }

	[Extension]
	public static DecayState FromExisting(IDecayFeatures decayFeatures, DecayState sourceItem, MetaTime timestamp) { }

}

