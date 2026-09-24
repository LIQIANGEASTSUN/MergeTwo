namespace GameLogic.Player.Items.Sink;

[Extension]
public static class SinkFeaturesExtensions
{

	[Extension]
	public static ISinkState Combine(ISinkFeatures sinkFeatures, IMergeMansionGameConfig config, ISinkState sourceState, ISinkState targetState, MetaTime timestamp) { }

	[Extension]
	public static ISinkState FromExisting(ISinkFeatures sinkFeatures) { }

}

