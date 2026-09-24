namespace GameLogic.Player.Items.Activation;

[Extension]
public static class InitialSequenceExtension
{

	[Extension]
	public static string GetMarker(InitialSequenceType type, string marker, Option<ProducerContext> producerContextOption) { }

	[Extension]
	public static string GetMarkerPrefix(InitialSequenceType type, IBoard mergeBoard) { }

}

