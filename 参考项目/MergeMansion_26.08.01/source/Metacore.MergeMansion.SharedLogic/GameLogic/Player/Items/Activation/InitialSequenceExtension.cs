using GameLogic.Player.Board;
using GameLogic.Player.Items.Production;
using Metacore.MergeMansion.Common.Options;

namespace GameLogic.Player.Items.Activation
{
	public static class InitialSequenceExtension
	{
		public static string GetMarker(this InitialSequenceType type, string marker, Option<ProducerContext> producerContextOption)
		{
			return null;
		}

		public static string GetMarkerPrefix(this InitialSequenceType type, IBoard mergeBoard)
		{
			return null;
		}
	}
}
