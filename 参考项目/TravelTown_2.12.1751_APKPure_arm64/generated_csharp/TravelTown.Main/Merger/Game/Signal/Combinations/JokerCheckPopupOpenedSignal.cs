namespace Merger.Game.Signal.Combinations
{
	public class JokerCheckPopupOpenedSignal
	{
		public string JokerItemId { get; set; }

		public string BeforeMergeItemId { get; set; }

		public string AfterJokerMergeItemId { get; set; }

		public JokerCheckPopupOpenedSignal(string jokerItemId, string beforeMergeItemId, string afterJokerMergeItemId)
		{
		}
	}
}
