using MergeEngine.Data;

namespace Merger.ItemSelectionBox.Signals
{
	public class ItemSelectionBoxItemSelectedSignal
	{
		public string FromUniqueId { get; }

		public string ToUniqueId { get; }

		public BoardItemPosition BoardItemPosition { get; }

		public ItemSelectionBoxItemSelectedSignal(string fromUniqueId, string toUniqueId, BoardItemPosition boardItemPosition)
		{
		}
	}
}
